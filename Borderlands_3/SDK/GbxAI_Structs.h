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
	 * Enum GbxAI.EAIActionResult
	 */
	enum class EAIActionResult : uint8_t
	{
		None        = 0,
		Succeeded   = 1,
		Failed      = 2,
		Interrupted = 3,
		Aborted     = 4,
		Count       = 5,
		MAX         = 6
	};

	/**
	 * Enum GbxAI.ECoverUserAnimState
	 */
	enum class ECoverUserAnimState : uint8_t
	{
		None       = 0,
		Idle       = 1,
		Exit       = 2,
		FireIdle   = 3,
		FireEnter  = 4,
		FireExit   = 5,
		FireToIdle = 6,
		Transition = 7,
		ViewSwitch = 8,
		MAX        = 9
	};

	/**
	 * Enum GbxAI.EScriptedActionRule
	 */
	enum class EScriptedActionRule : uint8_t
	{
		Any = 0,
		All = 1,
		MAX = 2
	};

	/**
	 * Enum GbxAI.ESmartActionResult
	 */
	enum class ESmartActionResult : uint8_t
	{
		Success   = 0,
		Interrupt = 1,
		Unreserve = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxAI.EMeleeRotationOption
	 */
	enum class EMeleeRotationOption : uint8_t
	{
		HoldStill     = 0,
		AlignToTarget = 1,
		FollowTarget  = 2,
		MAX           = 3
	};

	/**
	 * Enum GbxAI.EAIActionSequenceCanStartCheck
	 */
	enum class EAIActionSequenceCanStartCheck : uint8_t
	{
		FirstChild = 0,
		EachChild  = 1,
		MAX        = 2
	};

	/**
	 * Enum GbxAI.EAIActionCreationMethod
	 */
	enum class EAIActionCreationMethod : uint8_t
	{
		Unknown       = 0,
		Composition   = 1,
		PropertyPanel = 2,
		Graph         = 3,
		MAX           = 4
	};

	/**
	 * Enum GbxAI.EAIActionResultTransition
	 */
	enum class EAIActionResultTransition : uint8_t
	{
		Stop     = 0,
		Continue = 1,
		Restart  = 2,
		MAX      = 3
	};

	/**
	 * Enum GbxAI.EAIActionResultDirective
	 */
	enum class EAIActionResultDirective : uint8_t
	{
		Continue = 0,
		Succeed  = 1,
		Fail     = 2,
		MAX      = 3
	};

	/**
	 * Enum GbxAI.EAIActionExecutionStage
	 */
	enum class EAIActionExecutionStage : uint8_t
	{
		Starting   = 0,
		Running    = 1,
		Stopping   = 2,
		Stopped    = 3,
		CleaningUp = 4,
		MAX        = 5
	};

	/**
	 * Enum GbxAI.EAIActionState
	 */
	enum class EAIActionState : uint8_t
	{
		Idle     = 0,
		Starting = 1,
		Running  = 2,
		Stopped  = 3,
		MAX      = 4
	};

	/**
	 * Enum GbxAI.EAIActionLayer
	 */
	enum class EAIActionLayer : uint8_t
	{
		Default = 0,
		Script  = 1,
		Count   = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxAI.EAIGroupConditionType
	 */
	enum class EAIGroupConditionType : uint8_t
	{
		AllFalse  = 0,
		AllTrue   = 1,
		SomeFalse = 2,
		SomeTrue  = 3,
		MAX       = 4
	};

	/**
	 * Enum GbxAI.ECircleDirection
	 */
	enum class ECircleDirection : uint8_t
	{
		Left   = 0,
		Right  = 1,
		Random = 2,
		MAX    = 3
	};

	/**
	 * Enum GbxAI.EGbxQueryPreset
	 */
	enum class EGbxQueryPreset : uint8_t
	{
		UseBestLocation     = 0,
		TryCurrentLocation  = 1,
		OnlyCurrentLocation = 2,
		QueryFrequencyLow   = 3,
		QueryOnStart        = 4,
		MAX                 = 5
	};

	/**
	 * Enum GbxAI.ECompareMethod
	 */
	enum class ECompareMethod : uint8_t
	{
		Equals         = 0,
		NotEquals      = 1,
		Smaller        = 2,
		SmallerOrEqual = 3,
		Greater        = 4,
		GreaterOrEqual = 5,
		MAX            = 6
	};

	/**
	 * Enum GbxAI.EIsInRangeAspectDistanceTest
	 */
	enum class EIsInRangeAspectDistanceTest : uint8_t
	{
		Direct         = 0,
		Horizontal     = 1,
		Vertical       = 2,
		VerticalOffset = 3,
		Count          = 4,
		MAX            = 5
	};

	/**
	 * Enum GbxAI.EOrbitDirection
	 */
	enum class EOrbitDirection : uint8_t
	{
		Left   = 0,
		Right  = 1,
		Random = 2,
		MAX    = 3
	};

	/**
	 * Enum GbxAI.EAIAspectSettingsDefaults_Rotation
	 */
	enum class EAIAspectSettingsDefaults_Rotation : uint8_t
	{
		Custom                        = 0,
		None                          = 1,
		NoBodyRotationAllowed         = 2,
		FullBody                      = 3,
		AimOffsetsOnly                = 4,
		FullBodyWithAim               = 5,
		EAIAspectSettingsDefaults_MAX = 6
	};

	/**
	 * Enum GbxAI.EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset
	 */
	enum class EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset : uint8_t
	{
		Front                                  = 0,
		Back                                   = 1,
		Left                                   = 2,
		Right                                  = 3,
		Custom                                 = 4,
		EAIAspectSettingsDefaults_Rotation_MAX = 5
	};

	/**
	 * Enum GbxAI.ESweepDirection
	 */
	enum class ESweepDirection : uint8_t
	{
		Left   = 0,
		Right  = 1,
		Random = 2,
		MAX    = 3
	};

	/**
	 * Enum GbxAI.ECloakAction
	 */
	enum class ECloakAction : uint8_t
	{
		OnStart = 0,
		OnStop  = 1,
		MAX     = 2
	};

	/**
	 * Enum GbxAI.EPlanMemberReplacement
	 */
	enum class EPlanMemberReplacement : uint8_t
	{
		AbandonPlanIfKilled      = 0,
		ReplaceMemberIfKilled    = 1,
		DoNotReplaceAndKeepGoing = 2,
		MAX                      = 3
	};

	/**
	 * Enum GbxAI.EPlanValidityCode
	 */
	enum class EPlanValidityCode : uint8_t
	{
		Unknown                      = 0,
		PlanIsValid                  = 1,
		NoPlanData                   = 2,
		NotEnoughRoleSlots           = 3,
		MissingRoleTag               = 4,
		BadPlanInstanceNumber        = 5,
		BadMinMaxRoleInstanceNumbers = 6,
		BadDistanceValues            = 7,
		InsufficientCandidates       = 8,
		MAX                          = 9
	};

	/**
	 * Enum GbxAI.EPlanStage
	 */
	enum class EPlanStage : uint8_t
	{
		NeedLeader        = 0,
		NeedFollowers     = 1,
		HasMinimumRoster  = 2,
		HasFullRoster     = 3,
		EveryoneCheckedIn = 4,
		ShuttingDown      = 5,
		MAX               = 6
	};

	/**
	 * Enum GbxAI.ESmartObjectLookAtRule
	 */
	enum class ESmartObjectLookAtRule : uint8_t
	{
		None        = 0,
		ActorCenter = 1,
		ActorEyes   = 2,
		ActorSocket = 3,
		MAX         = 4
	};

	/**
	 * Enum GbxAI.ESlotAlignRule
	 */
	enum class ESlotAlignRule : uint8_t
	{
		None   = 0,
		Center = 1,
		Align  = 2,
		MAX    = 3
	};

	/**
	 * Enum GbxAI.ESmartObjectNotify
	 */
	enum class ESmartObjectNotify : uint8_t
	{
		LerpToSlot   = 0,
		LerpToGround = 1,
		MAX          = 2
	};

	/**
	 * Enum GbxAI.ECoverFaceDirection
	 */
	enum class ECoverFaceDirection : uint8_t
	{
		Toward = 0,
		Away   = 1,
		MAX    = 2
	};

	/**
	 * Enum GbxAI.ECoverAdjustFailReason
	 */
	enum class ECoverAdjustFailReason : uint8_t
	{
		None    = 0,
		NoRoom  = 1,
		NoView  = 2,
		Invalid = 3,
		MAX     = 4
	};

	/**
	 * Enum GbxAI.ECoverSlotHeight
	 */
	enum class ECoverSlotHeight : uint8_t
	{
		Low  = 0,
		High = 1,
		MAX  = 2
	};

	/**
	 * Enum GbxAI.ECoverStyleAnimType
	 */
	enum class ECoverStyleAnimType : uint8_t
	{
		TimedMoveOut = 0,
		TimedStayIn  = 1,
		SingleAnim   = 2,
		MAX          = 3
	};

	/**
	 * Enum GbxAI.ECoverUserState
	 */
	enum class ECoverUserState : uint8_t
	{
		NotInCover = 0,
		Idling     = 1,
		Firing     = 2,
		MAX        = 3
	};

	/**
	 * Enum GbxAI.ETerritoryMovementType
	 */
	enum class ETerritoryMovementType : uint8_t
	{
		Ground  = 0,
		Flight  = 1,
		Dynamic = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxAI.EUberTraceMultiTraceRequirement
	 */
	enum class EUberTraceMultiTraceRequirement : uint8_t
	{
		AtLeastOneMustPassTest = 0,
		AllMustPassTest        = 1,
		MAX                    = 2
	};

	/**
	 * Enum GbxAI.ENavJumpStage
	 */
	enum class ENavJumpStage : uint8_t
	{
		None  = 0,
		Enter = 1,
		Idle  = 2,
		Exit  = 3,
		End   = 4,
		MAX   = 5
	};

	/**
	 * Enum GbxAI.ENavJumpRotation
	 */
	enum class ENavJumpRotation : uint8_t
	{
		None                  = 0,
		FaceJumpOrigin        = 1,
		FaceJumpTarget        = 2,
		FaceJumpTargetFaceDir = 3,
		MAX                   = 4
	};

	/**
	 * Enum GbxAI.ELookAtPointType
	 */
	enum class ELookAtPointType : uint8_t
	{
		Interrupt = 0,
		Persist   = 1,
		Any       = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxAI.ESmartObjectTaskState
	 */
	enum class ESmartObjectTaskState : uint8_t
	{
		Uninitialized = 0,
		Movement      = 1,
		Alignment     = 2,
		Usage         = 3,
		Complete      = 4,
		MAX           = 5
	};

	/**
	 * Enum GbxAI.ESmartObjectTaskResult
	 */
	enum class ESmartObjectTaskResult : uint8_t
	{
		Aborted   = 0,
		Failed    = 1,
		Succeeded = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxAI.ESmartObjectUseResult
	 */
	enum class ESmartObjectUseResult : uint8_t
	{
		Failure  = 0,
		Running  = 1,
		Blocking = 2,
		Success  = 3,
		MAX      = 4
	};

	/**
	 * Enum GbxAI.EInitialPathAction
	 */
	enum class EInitialPathAction : uint8_t
	{
		None          = 0,
		PatrolPath    = 1,
		ScriptedPath  = 2,
		ScriptedRoute = 3,
		ScriptedWait  = 4,
		MAX           = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxAI.AIActionExecutionSettings
	 * Size -> 0x0008
	 */
	struct FAIActionExecutionSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIActionResultTransition                                  SuccessTransition;                                       // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIActionResultTransition                                  FailureTransition;                                       // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysReportSuccess;                                    // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CheckCanStartPeriod;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIActionBlueprintContext
	 * Size -> 0x0018
	 */
	struct FAIActionBlueprintContext
	{
	public:
		class AGbxAIController*                                    Controller;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMI7[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Move
	 * Size -> 0x0008
	 */
	struct FAIAspectSettings_Move
	{
	public:
		float                                                      PathUpdateThreshold;                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopWhenInPosition;                                     // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowStrafe;                                            // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPartialPath;                                       // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireDirectPath;                                      // 0x0007(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Location
	 * Size -> 0x01E0
	 */
	struct FAIAspectSettings_Location
	{
	public:
		struct FGbxBlackboardKeySelector                           Target;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EAIActionResultTransition                                  TargetChangeTransition;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCNX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           Distance;                                                // 0x0018(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FEnvQueryParams                                     TargetQuery;                                             // 0x0098(0x00B8) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           TargetQueryPeriod;                                       // 0x0150(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseTargetQuery;                                         // 0x01D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7JG[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_Move                              MoveSettings;                                            // 0x01D4(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanMove;                                                // 0x01DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODRN[0x3];                                   // 0x01DD(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_NavigationAdvanced
	 * Size -> 0x0038
	 */
	struct FAIAspectSettings_NavigationAdvanced
	{
	public:
		bool                                                       bCanMove;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReachedRequiresDirect;                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxStrafeType                                             StrafeType;                                              // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxPathType                                               PathType;                                                // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopWhenReached;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanRunWhenAtGoal;                                       // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateGoalWhileRunning;                                 // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBSD[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGbxNavGoalCheats                                          Cheats;                                                  // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NHH[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FGbxNavGoalModifiers                                GoalModifiers;                                           // 0x000C(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanStartWhenGoalIsUncertain;                            // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoveEvenIfUnreachable;                                  // 0x0035(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UNU[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Navigation
	 * Size -> 0x0140
	 */
	struct FAIAspectSettings_Navigation
	{
	public:
		struct FGbxParam                                           ReachedHeight;                                           // 0x0000(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           ReachedDistance;                                         // 0x0080(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_NavigationAdvanced                Advanced;                                                // 0x0100(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanMove;                                                // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bReachedRequiresDirect;                                  // 0x0139(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxStrafeType                                             StrafeType;                                              // 0x013A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxPathType                                               PathType;                                                // 0x013B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenReached;                                        // 0x013C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanRunWhenAtGoal;                                       // 0x013D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUpdateGoalWhileRunning;                                 // 0x013E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6VQN[0x1];                                   // 0x013F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_EnvQuery
	 * Size -> 0x03A0
	 */
	struct FAIAspectSettings_EnvQuery
	{
	public:
		struct FEnvQueryParams                                     Query;                                                   // 0x0000(0x00B8) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           QueryBlackboardKey;                                      // 0x00B8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRefreshAITreeOnQuerySuccess;                            // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceRequeryOnSuccess;                                  // 0x00C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearQueryOnSuccess;                                    // 0x00CA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZUG[0x5];                                   // 0x00CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxQueryOptions                                    Options;                                                 // 0x00D0(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		EGbxQueryPreset                                            Preset;                                                  // 0x0308(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePreset;                                              // 0x0309(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHPC[0x6];                                   // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           QueryPeriod;                                             // 0x0310(0x0080) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bQueryContinuously;                                      // 0x0390(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateValueWhileRunning;                                // 0x0391(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepValidValues;                                        // 0x0392(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUseSelf;                                             // 0x0393(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UseSelfDistance;                                         // 0x0394(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSucceedIfHasValue;                                      // 0x0398(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMigrated;                                               // 0x0399(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCEW[0x6];                                   // 0x039A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_RotationChannel
	 * Size -> 0x01B8
	 */
	struct FAIAspectSettings_RotationChannel
	{
	public:
		struct FGbxBlackboardKeySelector                           Target;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TargetOffset;                                            // 0x0010(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_228L[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           Angle;                                                   // 0x0020(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseAngle;                                               // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGAW[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           MaxRotateAngle;                                          // 0x00A8(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseMaxRotateAngle;                                      // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DTUV[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           ConditionalEnable;                                       // 0x0130(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseConditionalEnable;                                   // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4IXZ[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Rotation
	 * Size -> 0x0550
	 */
	struct FAIAspectSettings_Rotation
	{
	public:
		bool                                                       bCanRotate;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrackTargetOverTime;                                    // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset       BodyHeadingOffsetPresets;                                // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E455[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BodyHeadingOffset;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIAspectSettingsDefaults_Rotation                         PremadeSettings;                                         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPID[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_RotationChannel                   Body;                                                    // 0x0010(0x01B8) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseBody;                                                // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0LT[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_RotationChannel                   Aim;                                                     // 0x01D0(0x01B8) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseAim;                                                 // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVM0[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_RotationChannel                   Look;                                                    // 0x0390(0x01B8) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLook;                                                // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepFacingTargetOnStop;                                 // 0x0549(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J61R[0x6];                                   // 0x054A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_GbxAction
	 * Size -> 0x0238
	 */
	struct FAIAspectSettings_GbxAction
	{
	public:
		class UClass*                                              ActionType;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseActionType;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XU64[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ActionKey;                                               // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseActionKey;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUH3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxBlackboardKeySelector                           ActionBlackboardKey;                                     // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseActionBlackboardKey;                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SW8[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           Count;                                                   // 0x0038(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           CanBeInterrupted;                                        // 0x00B8(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           CanBeInterruptedOnFailure;                               // 0x0138(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           PlayRate;                                                // 0x01B8(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Charge
	 * Size -> 0x0018
	 */
	struct FAIAspectSettings_Charge
	{
	public:
		class UAIChargeData*                                       ChargeData;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           Target;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Follow
	 * Size -> 0x0038
	 */
	struct FAIAspectSettings_Follow
	{
	public:
		struct FGbxBlackboardKeySelector                           FollowActorKey;                                          // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNumericRange                                       TargetDistance;                                          // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxSpeedScale;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeedScale;                                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GoalUpdatePeriod;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InvalidWaitPeriod;                                       // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportWaitPeriod;                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTeleport;                                          // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7H3[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TeleportDistance;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTeleportWhenFar;                                        // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContinueWhileClose;                                     // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLLB[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_FindClosestPlayer
	 * Size -> 0x0020
	 */
	struct FAIAspectSettings_FindClosestPlayer
	{
	public:
		struct FGbxBlackboardKeySelector                           BlackboardKey;                                           // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOnlyRunIfKeyIsValid;                                    // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearKeyOnStop;                                         // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSH7[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpdatePeriod;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInternal;                                             // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZGA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_FlyToNavMesh
	 * Size -> 0x0010
	 */
	struct FAIAspectSettings_FlyToNavMesh
	{
	public:
		float                                                      GroundSearchDistance;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAheadDistance;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlySearchDistance;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdatePeriod;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_LeadRoute
	 * Size -> 0x0050
	 */
	struct FAIAspectSettings_LeadRoute
	{
	public:
		struct FGbxBlackboardKeySelector                           LeadActorKey;                                            // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           DestinationNodeKey;                                      // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SegmentDistance;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWanderingOffset;                                      // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArrivalDistance;                                         // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNumericRange                                       TargetRouteDistance;                                     // 0x002C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNumericRange                                       SpeedScaleRange;                                         // 0x0034(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RouteOffsetFromTarget;                                   // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportDist;                                            // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowBackwards;                                         // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTeleport;                                          // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q2NZ[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FindNavRadius;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TRF[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Leap
	 * Size -> 0x0058
	 */
	struct FAIAspectSettings_Leap
	{
	public:
		class UClass*                                              Action;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           Target;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LocalOffset;                                             // 0x0018(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetOffset;                                            // 0x0024(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetSocket;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnglePercent;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPrediction;                                           // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNavigationTest;                                       // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoCollisionTest;                                        // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddTargetRadius;                                        // 0x0046(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5LK[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UseExactLocationDistance;                                // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TestPeriod;                                              // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanStartWhileFalling;                                   // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEKD[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.LookAroundRandomlySettings
	 * Size -> 0x000C
	 */
	struct FLookAroundRandomlySettings
	{
	public:
		float                                                      MinAngleChangeEachIterationDeg;                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngleChangeEachIterationDeg;                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeSpentEachScan;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_MoveSpline
	 * Size -> 0x0050
	 */
	struct FAIAspectSettings_MoveSpline
	{
	public:
		struct FGbxBlackboardKeySelector                           SplineKey;                                               // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           OffsetKey;                                               // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           ReverseKey;                                              // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LookDistance;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MissNavigationStep;                                      // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MissNavigationStepDistance;                              // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditionnalLookDistanceSpeedFactor;                      // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SnapToNavigation;                                        // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToNavigation;                                       // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PM7[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GoalUpdateDistance;                                      // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxNavGoalReach                                           Reach;                                                   // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SL2Q[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Orbit
	 * Size -> 0x0220
	 */
	struct FAIAspectSettings_Orbit
	{
	public:
		struct FGbxBlackboardKeySelector                           CenterKey;                                               // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxParam                                           HeightOffset;                                            // 0x0010(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           OrbitRadius;                                             // 0x0090(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           OrbitAngle;                                              // 0x0110(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           OrbitAngleInterval;                                      // 0x0190(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		EOrbitDirection                                            Direction;                                               // 0x0210(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97EV[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SearchRadius;                                            // 0x0214(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRespectCombatTerritory;                                 // 0x0218(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F77G[0x7];                                   // 0x0219(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIActionSettings_Plan
	 * Size -> 0x0020
	 */
	struct FAIActionSettings_Plan
	{
	public:
		TArray<class UAIPlanData*>                                 PlansAlwaysAvailableToMe;                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                RoleTags;                                                // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Route
	 * Size -> 0x0028
	 */
	struct FAIAspectSettings_Route
	{
	public:
		struct FGbxBlackboardKeySelector                           NodeKey;                                                 // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SegmentDistance;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWanderingOffset;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArrivalDistance;                                         // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerchCooldown;                                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPassiveAction;                                          // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCombatAction;                                           // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVY7[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.CoverUseParams
	 * Size -> 0x0118
	 */
	struct FCoverUseParams
	{
	public:
		bool                                                       bMustHaveViewToTarget;                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMustBeHiddenFromThreats;                                // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37EK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InCoverExposurePercent;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideIdleTime;                                       // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJAO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           IdleTimeOverride;                                        // 0x0010(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bOverrideFireTime;                                       // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4QX[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           FireTimeOverride;                                        // 0x0098(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_UseCover
	 * Size -> 0x0138
	 */
	struct FAIAspectSettings_UseCover
	{
	public:
		struct FGbxBlackboardKeySelector                           Target;                                                  // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           Cover;                                                   // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCoverUseParams                                     UseParams;                                               // 0x0020(0x0118) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIWeaponUseSettings
	 * Size -> 0x0238
	 */
	struct FAIWeaponUseSettings
	{
	public:
		float                                                      FireConeAngle;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFireConeAngle;                                  // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5KR[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           BurstCountOverride;                                      // 0x0008(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bOverrideBurstCount;                                     // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWBM[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           BurstDelayOverride;                                      // 0x0090(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bOverrideBurstDelay;                                     // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZ1Z[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           AccuracyOverride;                                        // 0x0118(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bOverrideAccuracy;                                       // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DFE[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           SuppressingFireTime;                                     // 0x01A0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseSuppressingFireTime;                                 // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C2AN[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNumericRange                                       DesiredRangeOverride;                                    // 0x0224(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideDesiredRange;                                   // 0x022C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQYB[0x3];                                   // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWeaponLeadingDistance;                                // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1NW[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Weapon
	 * Size -> 0x0198 (FullSize[0x03D0] - InheritedSize[0x0238])
	 */
	struct FAIAspectSettings_Weapon : public FAIWeaponUseSettings
	{
	public:
		TArray<class UGbxWeaponSlotData*>                          WeaponSlots;                                             // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGbxParam                                           WeaponUseModeIndex;                                      // 0x0248(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           CanUseWeapon;                                            // 0x02C8(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           CanUseWeaponWhileMoving;                                 // 0x0348(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseCanUseWeaponWhileMoving;                             // 0x03C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyShootWhenTargetIsKnown;                             // 0x03C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDEK[0x6];                                   // 0x03CA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Sweep
	 * Size -> 0x00A8
	 */
	struct FAIAspectSettings_Sweep
	{
	public:
		struct FGbxBlackboardKeySelector                           CenterKey;                                               // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxParam                                           HeightOffset;                                            // 0x0010(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      SweepRadius;                                             // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweepAngle;                                              // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweepAngleInterval;                                      // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESweepDirection                                            Direction;                                               // 0x009C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JP3V[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SearchRadius;                                            // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSFF[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Swoop
	 * Size -> 0x0320
	 */
	struct FAIAspectSettings_Swoop
	{
	public:
		struct FGbxBlackboardKeySelector                           CenterKey;                                               // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxParam                                           FarDistance;                                             // 0x0010(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           FarHeight;                                               // 0x0090(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           NearDistance;                                            // 0x0110(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           NearHeight;                                              // 0x0190(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           PassDistance;                                            // 0x0210(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           PassHeight;                                              // 0x0290(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      SearchRadius;                                            // 0x0310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitSearchRadius;                                      // 0x0314(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OACF[0x3];                                   // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpdatePeriod;                                            // 0x0318(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHYU[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Teleport
	 * Size -> 0x0138
	 */
	struct FAIAspectSettings_Teleport
	{
	public:
		struct FGbxBlackboardKeySelector                           GoalKey;                                                 // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCloak;                                                  // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceToGround;                                          // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearVelocity;                                          // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChangeRotation;                                         // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearGoalOnStop;                                        // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVXM[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxBlackboardKeySelector                           RotationKey;                                             // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxParam                                           TravelTime;                                              // 0x0028(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseSpeedInsteadOfTime;                                  // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIB1[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           TravelSpeed;                                             // 0x00B0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUpdateGoal;                                             // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSGA[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_UseSmartObject
	 * Size -> 0x0478
	 */
	struct FAIAspectSettings_UseSmartObject
	{
	public:
		struct FGbxBlackboardKeySelector                           SmartAction;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAbortExisting;                                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUntilInterrupted;                                       // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeInterrupted;                                       // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5GH[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvQueryParams                                     SmartObjectQuery;                                        // 0x0018(0x00B8) ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseQuery;                                               // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TJS[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_EnvQuery                          QuerySettings;                                           // 0x00D8(0x03A0) ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIActionInstance
	 * Size -> 0x0030
	 */
	struct FAIActionInstance
	{
	public:
		class UGameplayTask*                                       ScriptedGameplayTask;                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIAction*                                           Action;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXOY[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectExecutionSettings
	 * Size -> 0x0005
	 */
	struct FAIAspectExecutionSettings
	{
	public:
		bool                                                       bCanPreventActionFromStarting;                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCauseActionToSucceed;                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanForceActionToSucceed;                                // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCauseActionToFail;                                   // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMustFinish;                                             // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_ActorCollision
	 * Size -> 0x0018
	 */
	struct FAIAspectSettings_ActorCollision
	{
	public:
		struct FGbxBlackboardKeySelector                           Target;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EAIActionResultDirective                                   OnCollision;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONGN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_ConditionData
	 * Size -> 0x0090
	 */
	struct FAIAspectSettings_ConditionData
	{
	public:
		struct FGbxParam                                           Condition;                                               // 0x0000(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UAttributeContextResolver*                           ContextResolver;                                         // 0x0080(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertCondition;                                        // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IAZ[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Condition
	 * Size -> 0x0248
	 */
	struct FAIAspectSettings_Condition
	{
	public:
		struct FAIAspectSettings_ConditionData                     CanStartCondition;                                       // 0x0000(0x0090) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_ConditionData                     SucceedCondition;                                        // 0x0090(0x0090) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_ConditionData                     FailCondition;                                           // 0x0120(0x0090) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_ConditionData                     CanAbortCondition;                                       // 0x01B0(0x0090) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseCanStartCondition;                                   // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSucceedCondition;                                    // 0x0241(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFailCondition;                                       // 0x0242(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCanAbortCondition;                                   // 0x0243(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKVC[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_AIGroupCondition
	 * Size -> 0x0008
	 */
	struct FAIAspectSettings_AIGroupCondition
	{
	public:
		int32_t                                                    FullfillmentQuantity;                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPartialFullfillment;                                    // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NY0S[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_BlackboardKey
	 * Size -> 0x0018
	 */
	struct FAIAspectSettings_BlackboardKey
	{
	public:
		struct FGbxBlackboardKeySelector                           Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInvertResult;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIActionResultDirective                                   WhenConditionFails;                                      // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIActionResult                                            OnBecomeFalse;                                           // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAbortOnChange;                                          // 0x0013(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRefreshImmediatelyOnChange;                             // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8UJ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Cooldown
	 * Size -> 0x0220
	 */
	struct FAIAspectSettings_Cooldown
	{
	public:
		struct FGbxParam                                           SucceedTimer;                                            // 0x0000(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseSucceedTimer;                                        // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6M3[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           FailTimer;                                               // 0x0088(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseFailTimer;                                           // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4LX[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           AbortTimer;                                              // 0x0110(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseAbortTimer;                                          // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTQX[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           InitialTimer;                                            // 0x0198(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseInitialTimer;                                        // 0x0218(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JVTD[0x7];                                   // 0x0219(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Crouch
	 * Size -> 0x0108
	 */
	struct FAIAspectSettings_Crouch
	{
	public:
		struct FGbxParam                                           CanCrouchWhileIdle;                                      // 0x0000(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseCanCrouchWhileMoving;                                // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AHX[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           CanCrouchWhileMoving;                                    // 0x0088(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_DropshipSpawn
	 * Size -> 0x0010
	 */
	struct FAIAspectSettings_DropshipSpawn
	{
	public:
		class UClass*                                              StartAction;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              StopAction;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_GroupLocation
	 * Size -> 0x0098
	 */
	struct FAIAspectSettings_GroupLocation
	{
	public:
		struct FGbxBlackboardKeySelector                           GroupLocationKey;                                        // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxParam                                           GroupDistance;                                           // 0x0010(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      UpdatePeriod;                                            // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateWhileActive;                                      // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0465[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_IntCompare
	 * Size -> 0x00A0
	 */
	struct FAIAspectSettings_IntCompare
	{
	public:
		struct FGbxBlackboardKeySelector                           Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EAIActionResultDirective                                   WhenConditionFails;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECompareMethod                                             CompareMethod;                                           // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAUW[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           CompareAgainst;                                          // 0x0018(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bAbortOnChange;                                          // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRefreshImmediatelyOnChange;                             // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EU60[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_IsInRangeData
	 * Size -> 0x0088
	 */
	struct FAIAspectSettings_IsInRangeData
	{
	public:
		struct FGbxParam                                           Range;                                                   // 0x0000(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bInvertRange;                                            // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5VL[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectIsInRangeAdvancedData
	 * Size -> 0x01A0
	 */
	struct FAIAspectIsInRangeAdvancedData
	{
	public:
		struct FAIAspectSettings_IsInRangeData                     CanStartRange;                                           // 0x0000(0x0088) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_IsInRangeData                     SucceedRange;                                            // 0x0088(0x0088) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_IsInRangeData                     FailRange;                                               // 0x0110(0x0088) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseCanStartRange;                                       // 0x0198(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSucceedRange;                                        // 0x0199(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFailRange;                                           // 0x019A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDUF[0x5];                                   // 0x019B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_IsInRange
	 * Size -> 0x0248
	 */
	struct FAIAspectSettings_IsInRange
	{
	public:
		struct FGbxBlackboardKeySelector                           Target;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EIsInRangeAspectDistanceTest                               DistanceTest;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9LW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_IsInRangeData                     CanRunRange;                                             // 0x0018(0x0088) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectIsInRangeAdvancedData                      AdvancedRanges;                                          // 0x00A0(0x01A0) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseAdvancedRanges;                                      // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4YM[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_IsInTerritory
	 * Size -> 0x0018
	 */
	struct FAIAspectSettings_IsInTerritory
	{
	public:
		struct FGbxBlackboardKeySelector                           GoalKey;                                                 // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		ETerritoryType                                             TerritoryArea;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YTZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeThreshold;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Land
	 * Size -> 0x000C
	 */
	struct FAIAspectSettings_Land
	{
	public:
		float                                                      GroundSearchDistance;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlySearchDistance;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdatePeriod;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Loop
	 * Size -> 0x0198
	 */
	struct FAIAspectSettings_Loop
	{
	public:
		struct FGbxParam                                           LoopCondition;                                           // 0x0000(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLoopCondition;                                       // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KS25[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           LoopCount;                                               // 0x0088(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLoopCount;                                           // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUCQ[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           LoopDuration;                                            // 0x0110(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLoopDuration;                                        // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopImmediately;                                        // 0x0191(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreFailure;                                          // 0x0192(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CM9W[0x5];                                   // 0x0193(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_NavFlyOffset
	 * Size -> 0x0120
	 */
	struct FAIAspectSettings_NavFlyOffset
	{
	public:
		struct FGbxBlackboardKeySelector                           CenterKey;                                               // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxParam                                           Distance;                                                // 0x0010(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           Height;                                                  // 0x0090(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      SearchRadius;                                            // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitSearchRadius;                                      // 0x0114(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFMN[0x3];                                   // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpdatePeriod;                                            // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      bForward;                                                // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Plan
	 * Size -> 0x0020
	 */
	struct FAIAspectSettings_Plan
	{
	public:
		TArray<class UAIPlanData*>                                 PlansAlwaysAvailableToMe;                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                RoleTags;                                                // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Stance
	 * Size -> 0x0010
	 */
	struct FAIAspectSettings_Stance
	{
	public:
		class UStanceDataProvider*                                 Stance;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideBlueprint;                                      // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCK7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Ticket
	 * Size -> 0x0128
	 */
	struct FAIAspectSettings_Ticket
	{
	public:
		bool                                                       bPriority;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterruptible;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PMJ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           Value;                                                   // 0x0008(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           HoldDuration;                                            // 0x0088(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UAITicketDataAsset*                                  AITicket;                                                // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           ActorBlackboardKey;                                      // 0x0110(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideActorBlackboardKey;                             // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyHoldOnSuccess;                                     // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyHoldOnFailure;                                     // 0x0122(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyHoldOnAbort;                                       // 0x0123(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAcquireTicket;                                          // 0x0124(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GI0U[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_TimedCondition
	 * Size -> 0x0118
	 */
	struct FAIAspectSettings_TimedCondition
	{
	public:
		struct FAIAspectSettings_ConditionData                     Condition;                                               // 0x0000(0x0090) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           Timer;                                                   // 0x0090(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		EAIActionResultDirective                                   WhenConditionFails;                                      // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIActionResult                                            FalseResult;                                             // 0x0111(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N93B[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_TimeLimit
	 * Size -> 0x0108
	 */
	struct FAIAspectSettings_TimeLimit
	{
	public:
		struct FGbxParam                                           SucceedTime;                                             // 0x0000(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           FailTime;                                                // 0x0080(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseSucceedTime;                                         // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFailTime;                                            // 0x0101(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NESY[0x6];                                   // 0x0102(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_Timer
	 * Size -> 0x04C8
	 */
	struct FAIAspectSettings_Timer
	{
	public:
		struct FGbxParam                                           CanStartWarmup;                                          // 0x0000(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseCanStartWarmup;                                      // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2ZT[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           SpawnedWarmup;                                           // 0x0088(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseSpawnedWarmup;                                       // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKOI[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           CombatStartedWarmup;                                     // 0x0110(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseCombatStartedWarmup;                                 // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8EW[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           TargetChangedWarmup;                                     // 0x0198(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseTargetChangedWarmup;                                 // 0x0218(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R786[0x7];                                   // 0x0219(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           SucceededCooldown;                                       // 0x0220(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseSucceededCooldown;                                   // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26HM[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           FailedCooldown;                                          // 0x02A8(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseFailedCooldown;                                      // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2QK[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           AbortedCooldown;                                         // 0x0330(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseAbortedCooldown;                                     // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNUP[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           SucceedTimeLimit;                                        // 0x03B8(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseSucceedTimeLimit;                                    // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDC2[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           FailTimeLimit;                                           // 0x0440(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseFailTimeLimit;                                       // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CNQ[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_ZeroRotationChannel
	 * Size -> 0x0003
	 */
	struct FAIAspectSettings_ZeroRotationChannel
	{
	public:
		bool                                                       bZeroPitch;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZeroYaw;                                                // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZeroRoll;                                               // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AIAspectSettings_ZeroRotation
	 * Size -> 0x000C
	 */
	struct FAIAspectSettings_ZeroRotation
	{
	public:
		struct FAIAspectSettings_ZeroRotationChannel               Body;                                                    // 0x0000(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseBody;                                                // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIAspectSettings_ZeroRotationChannel               Aim;                                                     // 0x0004(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseAim;                                                 // 0x0007(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIAspectSettings_ZeroRotationChannel               Look;                                                    // 0x0008(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLook;                                                // 0x000B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CloakCondition
	 * Size -> 0x0010
	 */
	struct FCloakCondition
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCloaked;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9733[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.CloakRepData
	 * Size -> 0x0002
	 */
	struct FCloakRepData
	{
	public:
		bool                                                       bCloaked;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanPlayActions;                                         // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CloakPrimData
	 * Size -> 0x0010
	 */
	struct FCloakPrimData
	{
	public:
		bool                                                       bWasHidden;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NP6T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 PrimComp;                                                // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AITicketHandle
	 * Size -> 0x0010
	 */
	struct FAITicketHandle
	{
	public:
		class UAITicketDataAsset*                                  Ticket;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGbxAIController*                                    AIController;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AITicketManager
	 * Size -> 0x2718
	 */
	struct FAITicketManager
	{
	public:
		unsigned char                                              UnknownData_PKZ5[0x2718];                                // 0x0000(0x2718) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AICommunicationManager
	 * Size -> 0x0048
	 */
	struct FAICommunicationManager
	{
	public:
		unsigned char                                              UnknownData_BE4O[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.PlanState
	 * Size -> 0x0038
	 */
	struct FPlanState
	{
	public:
		unsigned char                                              UnknownData_0O7E[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.RoleCandidates
	 * Size -> 0x0018
	 */
	struct FRoleCandidates
	{
	public:
		unsigned char                                              UnknownData_LMBI[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AIPlanManager
	 * Size -> 0x0080
	 */
	struct FAIPlanManager
	{
	public:
		TArray<TWeakObjectPtr<class UAIPlanData>>                  AvailablePlans;                                          // 0x0000(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<struct FPlanState>                                  ActivePlans;                                             // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XBRZ[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FRoleCandidates>                  PotentialCandidatesByRole;                               // 0x0028(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O1EY[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AINodeSmartObjectData
	 * Size -> 0x0010
	 */
	struct FAINodeSmartObjectData
	{
	public:
		class AActor*                                              Object;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.AINodeLink
	 * Size -> 0x0020
	 */
	struct FAINodeLink
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrevWeight;                                              // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAINodeSmartObjectData>                      SmartObjects;                                            // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.PlanRoleRequirements
	 * Size -> 0x0130
	 */
	struct FPlanRoleRequirements
	{
	public:
		struct FGameplayTag                                        RoleTag;                                                 // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinInstancesOfRole;                                      // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxInstancesOfRole;                                      // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6XP[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           DistanceToLeaderForParticipation;                        // 0x0010(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           DistanceToLeaderToRemove;                                // 0x0090(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UGbxCondition*                                       AdditionalStartCondition;                                // 0x0110(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlsoUseStartConditionAsStopCondition;                   // 0x0118(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1OZ[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       AdditionalStopCondition;                                 // 0x0120(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlanMemberReplacement                                     MemberReplacementStrategy;                               // 0x0128(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V038[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.SmartActionUseInfo
	 * Size -> 0x0018
	 */
	struct FSmartActionUseInfo
	{
	public:
		struct FGameplayTag                                        ActionTag;                                               // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterrupting;                                           // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IV4M[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UseDuration;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownTime;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPassiveAction;                                          // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCombatAction;                                           // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0THZ[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ActionUseState
	 * Size -> 0x00C0
	 */
	struct FActionUseState
	{
	public:
		class AGbxAIController*                                    Controller;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USmartObjectComponent*                               SmartObjectComponent;                                    // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIUseSlotComponent*                                 AIUseSlotComponent;                                      // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSmartActionUseInfo                                 UseInfo;                                                 // 0x0018(0x0018) NoDestructor, NativeAccessSpecifierPrivate
		ESmartObjectTaskState                                      State;                                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L7T8[0x8F];                                  // 0x0031(0x008F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ActionCooldownInfo
	 * Size -> 0x0018
	 */
	struct FActionCooldownInfo
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActionTag;                                               // 0x0008(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownTime;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJUD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.BTRandomEntrySettings
	 * Size -> 0x0110
	 */
	struct FBTRandomEntrySettings
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           Weight;                                                  // 0x0008(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           LoopCountMax;                                            // 0x0088(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLoopCountMax;                                        // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U69T[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.BTGbxLoopConditionData
	 * Size -> 0x0010
	 */
	struct FBTGbxLoopConditionData
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvert;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YO9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.CoverAdjustParams
	 * Size -> 0x0040
	 */
	struct FCoverAdjustParams
	{
	public:
		float                                                      AdjustDistanceDown;                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoDownAdjustment;                                       // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USCA[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdjustDistanceUp;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoUpAdjustment;                                         // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LF1T[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdjustDistanceForward;                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoForwardAdjustment;                                    // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEdgeTestLeft;                                           // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEdgeTestRight;                                          // 0x0016(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRI8[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EdgeTestSections;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeTestHeightPct;                                       // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeTestDistancePct;                                     // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeTestWalkBackDistance;                                // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EdgeTestAngleThreshold;                                  // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockTestHitPct;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockTestDistancePct;                                    // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlockTestHorizontalSections;                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlockTestVerticalSections;                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlockTestAngleThreshold;                                 // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverLineOfSightBlockData
	 * Size -> 0x0004
	 */
	struct FCoverLineOfSightBlockData
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverLineOfSightSectionData
	 * Size -> 0x0010
	 */
	struct FCoverLineOfSightSectionData
	{
	public:
		TArray<struct FCoverLineOfSightBlockData>                  Blocks;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverLineOfSightParams
	 * Size -> 0x0028
	 */
	struct FCoverLineOfSightParams
	{
	public:
		int32_t                                                    NumVerticalSections;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumHorizontalSections;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalAngleUp;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalAngleDown;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalAngle;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBlockSubdivisions;                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x001C(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverLineOfSightData
	 * Size -> 0x00B0
	 */
	struct FCoverLineOfSightData
	{
	public:
		struct FTransform                                          LocalToWorld;                                            // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMatrix                                             WorldToLocal;                                            // 0x0030(0x0040) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FCoverLineOfSightSectionData>                Sections;                                                // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCoverLineOfSightParams                             Params;                                                  // 0x0080(0x0028) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PEU[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.CoverSlotViewData
	 * Size -> 0x00C0
	 */
	struct FCoverSlotViewData
	{
	public:
		class UCoverViewData*                                      View;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRQQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoverLineOfSightData                               LosData;                                                 // 0x0010(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverSlotViewFailData
	 * Size -> 0x0020
	 */
	struct FCoverSlotViewFailData
	{
	public:
		class UCoverViewData*                                      View;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECoverAdjustFailReason                                     FailReason;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UK01[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FailDescription;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverTransitionStanceFilter
	 * Size -> 0x0018
	 */
	struct FCoverTransitionStanceFilter
	{
	public:
		class FString                                              Filter;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceDataProvider*                                 Stance;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverTransitionFilters
	 * Size -> 0x0050
	 */
	struct FCoverTransitionFilters
	{
	public:
		TArray<class FString>                                      Use;                                                     // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Corner;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      High;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Away;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCoverTransitionStanceFilter>                Stances;                                                 // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverAction
	 * Size -> 0x0130
	 */
	struct FCoverAction
	{
	public:
		class UCoverSlotComponent*                                 Slot;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoverStyleData*                                     Style;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoverUseParams                                     Params;                                                  // 0x0018(0x0118) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverClientData
	 * Size -> 0x0028
	 */
	struct FCoverClientData
	{
	public:
		class UCoverStyleData*                                     Style;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoverSlotComponent*                                 Slot;                                                    // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECoverUserState                                            DesiredState;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6O1J[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TransitionName;                                          // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlanked;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5U6A[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.AITicketUseData
	 * Size -> 0x0108
	 */
	struct FAITicketUseData
	{
	public:
		struct FGbxParam                                           Value;                                                   // 0x0000(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           HoldDuration;                                            // 0x0080(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UAITicketDataAsset*                                  Ticket;                                                  // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverStyleUserData
	 * Size -> 0x02A8
	 */
	struct FCoverStyleUserData
	{
	public:
		class UCoverStyleData*                                     Style;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           Weight;                                                  // 0x0008(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bOverrideIdleTime;                                       // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8I56[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           IdleTimeOverride;                                        // 0x0090(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bOverrideFireTime;                                       // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DW0F[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           FireTimeOverride;                                        // 0x0118(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAITicketUseData                                    TicketData;                                              // 0x0198(0x0108) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UGbxCondition*                                       ForceUseCondition;                                       // 0x02A0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.CoverFaceDirections
	 * Size -> 0x0003
	 */
	struct FCoverFaceDirections
	{
	public:
		ECoverFaceDirection                                        Low;                                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECoverFaceDirection                                        HighLeft;                                                // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECoverFaceDirection                                        HighRight;                                               // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.EQSDynamicPointRange
	 * Size -> 0x0010
	 */
	struct FEQSDynamicPointRange
	{
	public:
		int32_t                                                    MinPoints;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPoints;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdealSpacing;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpacing;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.SmartGridSearchSet
	 * Size -> 0x00F0
	 */
	struct FSmartGridSearchSet
	{
	public:
		class FName                                                SetName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPoints;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYY3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Center;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyGenerateDensePoints;                                // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DNT[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           InnerRadius;                                             // 0x0020(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           OuterRadius;                                             // 0x0050(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bDefineArc : 1;                                          // 0x0080(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XN0J[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvDirection                                       ArcDirection;                                            // 0x0088(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ArcAngle;                                                // 0x00A8(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      PointSeparationDistanceNormal;                           // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointSeparationDistanceDenseSpots;                       // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadiusApplyDenserSeparation;                             // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACQ8[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DenseSpotProvider;                                       // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.ExtendedTraceInfo
	 * Size -> 0x01D8
	 */
	struct FExtendedTraceInfo
	{
	public:
		class FString                                              ReadableName;                                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TestComment;                                             // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoArcTrace;                                             // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DA3A[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           ArcSpeed;                                                // 0x0028(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ArcAnglePercent;                                         // 0x0058(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    NumSegments;                                             // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZPZ[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvTraceData                                       TraceData;                                               // 0x0090(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              Context;                                                 // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUberTraceMultiTraceRequirement                            MultipleContextRequirement;                              // 0x00C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZAT[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxScoreIfFails;                                         // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinScoreIfSucceeds;                                      // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopIfSucceeds;                                         // 0x00D4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopIfFails;                                            // 0x00D5(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GH1B[0x2];                                   // 0x00D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           PassTestIfTrue;                                          // 0x00D8(0x0080) Edit, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           FailTestIfTrue;                                          // 0x0158(0x0080) Edit, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.SmartActionInfoContext
	 * Size -> 0x0030
	 */
	struct FSmartActionInfoContext
	{
	public:
		TWeakObjectPtr<class AActor>                               SmartObject;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSmartActionUseInfo                                 UseInfo;                                                 // 0x0008(0x0018) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ContextLoc;                                              // 0x0020(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_808Z[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.CoverHitReactionItem
	 * Size -> 0x0088
	 */
	struct FCoverHitReactionItem
	{
	public:
		struct FAnimMeshList                                       Anims;                                                   // 0x0000(0x0078) Edit, NativeAccessSpecifierPublic
		TArray<class UCoverStyleData*>                             Styles;                                                  // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.SmartObjectUseRequest
	 * Size -> 0x0028
	 */
	struct FSmartObjectUseRequest
	{
	public:
		unsigned char                                              UnknownData_VQNB[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.SmartActionUser
	 * Size -> 0x0010
	 */
	struct FSmartActionUser
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UseDuration;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESmartObjectTaskState                                      State;                                                   // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3O19[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.SmartObjectActionState
	 * Size -> 0x0080
	 */
	struct FSmartObjectActionState
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7E4N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ActionTag;                                               // 0x0008(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USmartObjectAction*                                  ActionDefinition;                                        // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DebugColor;                                              // 0x0018(0x0004) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownTime;                                            // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FSmartActionUser>                            Users;                                                   // 0x0020(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class AController*, float>                            CooldownMap;                                             // 0x0030(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxAI.SmartObjectActionSet
	 * Size -> 0x0020
	 */
	struct FSmartObjectActionSet
	{
	public:
		struct FGameplayTagContainer                               Actions;                                                 // 0x0000(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.SmartObjectPreviewState
	 * Size -> 0x0018 (FullSize[0x00F0] - InheritedSize[0x00D8])
	 */
	struct FSmartObjectPreviewState : public FPreviewState
	{
	public:
		class UAIUseSlotComponent*                                 AIUseSlotComponent;                                      // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USpawnFactory*>                               PreviewFactories;                                        // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxAI.PlanRoleMapping
	 * Size -> 0x0018
	 */
	struct FPlanRoleMapping
	{
	public:
		unsigned char                                              UnknownData_ZZ0A[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.RoleController
	 * Size -> 0x000C
	 */
	struct FRoleController
	{
	public:
		unsigned char                                              UnknownData_9GM7[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ProximitySource
	 * Size -> 0x000C
	 */
	struct FProximitySource
	{
	public:
		unsigned char                                              UnknownData_C879[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ThreatSource
	 * Size -> 0x000C
	 */
	struct FThreatSource
	{
	public:
		unsigned char                                              UnknownData_EV6S[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ThreatTerritory
	 * Size -> 0x0018
	 */
	struct FThreatTerritory
	{
	public:
		unsigned char                                              UnknownData_V7IQ[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.CoverTransitionData
	 * Size -> 0x0060
	 */
	struct FCoverTransitionData
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxAnimSet*                                         AnimSet;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FCoverTransitionFilters                             Filters;                                                 // 0x0010(0x0050) Edit, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxAI.CoverTransitionTableRow
	 * Size -> 0x0070 (FullSize[0x0090] - InheritedSize[0x0020])
	 */
	struct FCoverTransitionTableRow : public FGbxAnimTableRow
	{
	public:
		struct FNumericRange                                       Angle;                                                   // 0x0020(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNumericRange                                       Distance;                                                // 0x0028(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECoverFaceDirection                                        FaceDirection;                                           // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECoverSlotHeight                                           SlotHeight;                                              // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4MA[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoverStyleData*>                             CoverStyles;                                             // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UCoverViewData*>                              ViewsFrom;                                               // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UCoverViewData*>                              ViewsTo;                                                 // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCornerTransition;                                       // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKUU[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStanceDataProvider*                                 Stance;                                                  // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoFill;                                               // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KW03[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNumericRange                                       AutoFillAngle;                                           // 0x007C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNumericRange                                       AutoFillDistance;                                        // 0x0084(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUZC[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.CoverTransitionInput
	 * Size -> 0x0040
	 */
	struct FCoverTransitionInput
	{
	public:
		unsigned char                                              UnknownData_LWIH[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.CoverWalk
	 * Size -> 0x00E0
	 */
	struct FCoverWalk
	{
	public:
		unsigned char                                              UnknownData_2UHF[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ActionState_CoverHitReaction
	 * Size -> 0x0000 (FullSize[0x0468] - InheritedSize[0x0468])
	 */
	struct FActionState_CoverHitReaction : public FActionState_SimpleAnim
	{	};

	/**
	 * ScriptStruct GbxAI.ActionState_CoverTransition
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FActionState_CoverTransition : public FActionState_Base
	{
	public:
		unsigned char                                              UnknownData_9NT5[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ActionState_Navigation
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	struct FActionState_Navigation : public FActionState_SimpleAnim
	{
	public:
		unsigned char                                              UnknownData_RY98[0x8];                                   // 0x0468(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ActionState_NavAnim
	 * Size -> 0x0000 (FullSize[0x0470] - InheritedSize[0x0470])
	 */
	struct FActionState_NavAnim : public FActionState_Navigation
	{	};

	/**
	 * ScriptStruct GbxAI.ActionState_NavJump
	 * Size -> 0x00B0 (FullSize[0x0520] - InheritedSize[0x0470])
	 */
	struct FActionState_NavJump : public FActionState_Navigation
	{
	public:
		unsigned char                                              UnknownData_PVBO[0xB0];                                  // 0x0470(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ActionState_NavHomingJump
	 * Size -> 0x0040 (FullSize[0x0560] - InheritedSize[0x0520])
	 */
	struct FActionState_NavHomingJump : public FActionState_NavJump
	{
	public:
		unsigned char                                              UnknownData_9SDN[0x40];                                  // 0x0520(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.ReplicatedJumpParams
	 * Size -> 0x001C
	 */
	struct FReplicatedJumpParams
	{
	public:
		bool                                                       bStarted;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RB20[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EndLoc;                                                  // 0x0004(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetVel;                                               // 0x0010(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.ActionState_NavLerp
	 * Size -> 0x00C8 (FullSize[0x0538] - InheritedSize[0x0470])
	 */
	struct FActionState_NavLerp : public FActionState_Navigation
	{
	public:
		unsigned char                                              UnknownData_PUCO[0xC8];                                  // 0x0470(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAI.RouteSection
	 * Size -> 0x0010
	 */
	struct FRouteSection
	{
	public:
		class AActor*                                              Start;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              End;                                                     // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAI.SmartAction
	 * Size -> 0x0010
	 */
	struct FSmartAction
	{
	public:
		TWeakObjectPtr<class AActor>                               SmartObject;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActionTag;                                               // 0x0008(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
