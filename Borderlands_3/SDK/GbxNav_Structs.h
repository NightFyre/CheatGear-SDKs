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
	 * Enum GbxNav.EGbxNavMoveStyleDefault
	 */
	enum class EGbxNavMoveStyleDefault : uint8_t
	{
		Strafe  = 0,
		Forward = 1,
		MAX     = 2
	};

	/**
	 * Enum GbxNav.EFlightMovementState
	 */
	enum class EFlightMovementState : uint8_t
	{
		Approach         = 0,
		Descent          = 1,
		Ascent           = 2,
		Exit             = 3,
		DigistructingOut = 4,
		MAX              = 5
	};

	/**
	 * Enum GbxNav.EGbxNavAnimTableType
	 */
	enum class EGbxNavAnimTableType : uint8_t
	{
		Start    = 0,
		Stop     = 1,
		TurnIdle = 2,
		TurnMove = 3,
		MAX      = 4
	};

	/**
	 * Enum GbxNav.EAvoidWhileIdle
	 */
	enum class EAvoidWhileIdle : uint8_t
	{
		Default              = 0,
		AvoidWhileIdle       = 1,
		OnlyAvoidWhileMoving = 2,
		MAX                  = 3
	};

	/**
	 * Enum GbxNav.EGbxNavState
	 */
	enum class EGbxNavState : uint8_t
	{
		Idle        = 0,
		WaitingGoal = 1,
		WaitingPath = 2,
		Moving      = 3,
		MAX         = 4
	};

	/**
	 * Enum GbxNav.EGbxGoalResult
	 */
	enum class EGbxGoalResult : uint8_t
	{
		Failed  = 0,
		Reached = 1,
		Success = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxNav.EGbxNavFlyRoundingMode
	 */
	enum class EGbxNavFlyRoundingMode : uint8_t
	{
		RoundToZero    = 0,
		RoundToNearest = 1,
		MAX            = 2
	};

	/**
	 * Enum GbxNav.EGbxNavGoalCheats
	 */
	enum class EGbxNavGoalCheats : uint8_t
	{
		None                  = 0,
		MoveEvenIfUnreachable = 1,
		ValidEvenIfNoNav      = 2,
		MAX                   = 3
	};

	/**
	 * Enum GbxNav.EGbxOffsetType
	 */
	enum class EGbxOffsetType : uint8_t
	{
		Local = 0,
		World = 1,
		MAX   = 2
	};

	/**
	 * Enum GbxNav.EGbxStrafeType
	 */
	enum class EGbxStrafeType : uint8_t
	{
		Default = 0,
		Strafe  = 1,
		Forward = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxNav.EGbxNavGoalReach
	 */
	enum class EGbxNavGoalReach : uint8_t
	{
		Exact = 0,
		Pass  = 1,
		MAX   = 2
	};

	/**
	 * Enum GbxNav.EGbxPainterType
	 */
	enum class EGbxPainterType : uint8_t
	{
		Static           = 0,
		Dynamic          = 1,
		StaticAndDynamic = 2,
		MAX              = 3
	};

	/**
	 * Enum GbxNav.EGbxPathType
	 */
	enum class EGbxPathType : uint8_t
	{
		None = 0,
		Walk = 1,
		Fly  = 2,
		MAX  = 3
	};

	/**
	 * Enum GbxNav.EGbxUserEdgeDirection
	 */
	enum class EGbxUserEdgeDirection : uint8_t
	{
		Blocked       = 0,
		AToB          = 1,
		BToA          = 2,
		Bidirectional = 3,
		MAX           = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxNav.GbxNavPathingData
	 * Size -> 0x0010
	 */
	struct FGbxNavPathingData
	{
	public:
		class UGbxNavAreaData*                                     Areas;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHavokPathFindingData*                               UserEdges;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxNavMovementOptions
	 * Size -> 0x0038
	 */
	struct FGbxNavMovementOptions
	{
	public:
		class UHavokPathFindingData*                               PathFindingData;                                         // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxNavPathingData                                  PathingData;                                             // 0x0008(0x0010) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxNavMoveStyleDefault                                    MoveStyleDefault;                                        // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanReverse;                                             // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BY5I[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReverseGoalDistance;                                     // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanChangePitchWhenStrafeFlying;                         // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQ2E[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IdleDirectionTime;                                       // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearUserEdgeTimeThreshold;                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UserEdgeEnterDistancePercent;                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMustBeFacingUserEdgeBeforeEntering;                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWRR[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxAvoidanceProperties
	 * Size -> 0x0038
	 */
	struct FGbxAvoidanceProperties
	{
	public:
		float                                                      WallFollowingAngle;                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DodgingPenalty;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityHysteresis;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SidednessChangingPenalty;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionPenalty;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenetrationPenalty;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeedScale;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SensorSizeScale;                                         // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadiusScale;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GoalDistanceOffsetPct;                                   // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionHysteresis;                                     // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSimplifiedAvoiance;                                  // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXDZ[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxNavAvoidanceOptions
	 * Size -> 0x003C
	 */
	struct FGbxNavAvoidanceOptions
	{
	public:
		bool                                                       bAvoidanceSteering;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAvoidanceObstacle;                                      // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAvoidPawnsBehindMe;                                     // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAvoidWithNoGoal;                                        // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAvoidanceProperties                             AvoidanceProperties;                                     // 0x0004(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxNavSlowdownData
	 * Size -> 0x0014
	 */
	struct FGbxNavSlowdownData
	{
	public:
		bool                                                       bSlowdownNearGoal;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMMI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStanceFloatValue                                   SlowdownSpeed;                                           // 0x0004(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SlowdownDistanceMin;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowdownDistanceMax;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxNavAgentProperties
	 * Size -> 0x0060
	 */
	struct FGbxNavAgentProperties
	{
	public:
		unsigned char                                              UnknownData_MPJS[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxNavPathingData                                  PathingData;                                             // 0x0050(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxNavAgent
	 * Size -> 0x00A8
	 */
	struct FGbxNavAgent
	{
	public:
		struct FGbxNavAgentProperties                              Props;                                                   // 0x0000(0x0060) NoDestructor, NativeAccessSpecifierPublic
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Context;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1W9[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxNavForwardState
	 * Size -> 0x0128
	 */
	struct FGbxNavForwardState
	{
	public:
		float                                                      MinSpeedScale;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bScaleSpeed;                                             // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SFE5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTurnScale;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bScaleRotation;                                          // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4T6W[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleInterpTime;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNumericRange                                       DistanceRange;                                           // 0x0014(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      WallCheckDegreesPerSegment;                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinTurnRadius;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5RQK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              World;                                                   // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    NavComponent;                                            // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCharacterMovementComponent*                      MovementComponent;                                       // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIVehicleFlightComponent*                           VehicleFlightComponent;                                  // 0x0048(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T0RH[0xD8];                                  // 0x0050(0x00D8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxNavStuckState
	 * Size -> 0x0068
	 */
	struct FGbxNavStuckState
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    NavComp;                                                 // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              PathingActor;                                            // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCharacterMovementComponent*                      GbxMoveComp;                                             // 0x0018(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DKTD[0x24];                                  // 0x0020(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StuckDistance;                                           // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StuckVelocity;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StuckWaitTime;                                           // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStuckFixEnabled;                                        // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S0V0[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StuckFixStartTime;                                       // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StuckFixStopTime;                                        // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5QM8[0xC];                                   // 0x005C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.TeleportUserEdgeData
	 * Size -> 0x0050
	 */
	struct FTeleportUserEdgeData
	{
	public:
		unsigned char                                              UnknownData_PRHP[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EntryAction;                                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TeleportAction;                                          // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ExitAction;                                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxUserEdgeState
	 * Size -> 0x01A0
	 */
	struct FGbxUserEdgeState
	{
	public:
		unsigned char                                              UnknownData_OMOH[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBasedPosition                                      EntryPosition;                                           // 0x0040(0x0038) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FBasedPosition                                      ExitPosition;                                            // 0x0078(0x0038) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FTeleportUserEdgeData                               TeleportData;                                            // 0x00B0(0x0050) Transient, NoDestructor, NativeAccessSpecifierPrivate
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    NavComp;                                                 // 0x0108(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxActionComponent*                                 GbxActionComp;                                           // 0x0110(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AAIController*                                       AIController;                                            // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_46H0[0x80];                                  // 0x0120(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxNavCorrecter
	 * Size -> 0x00B8
	 */
	struct FGbxNavCorrecter
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    NavComp;                                                 // 0x0010(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              PathingActor;                                            // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCharacterMovementComponent*                      MoveComp;                                                // 0x0020(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNavAgentProperties                                 NavAgentProps;                                           // 0x0028(0x0030) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSavedCollision                                     SavedCollision;                                          // 0x0058(0x0020) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MS44[0x40];                                  // 0x0078(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxReachabilityState
	 * Size -> 0x0090
	 */
	struct FGbxReachabilityState
	{
	public:
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    NavComp;                                                 // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CG5Q[0x80];                                  // 0x0010(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxUserEdgeTeleportType
	 * Size -> 0x0020
	 */
	struct FGbxUserEdgeTeleportType
	{
	public:
		class UGbxUserEdge*                                        EntryEdge;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxUserEdge*                                        ExitEdge;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Entry;                                                   // 0x0010(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Exit;                                                    // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxUserEdgeData
	 * Size -> 0x0010
	 */
	struct FGbxUserEdgeData
	{
	public:
		class UHavokUserEdgeComponent*                             Edge;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TTM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxDynamicUserEdgeInfo
	 * Size -> 0x0050
	 */
	struct FGbxDynamicUserEdgeInfo
	{
	public:
		class UGbxNavUserEdgeTrailComponent*                       Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JY7[0x48];                                  // 0x0008(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxUserEdgeManager
	 * Size -> 0x0060
	 */
	struct FGbxUserEdgeManager
	{
	public:
		TArray<class UGbxUserEdge*>                                NormalEdgeTypes;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGbxUserEdgeTeleportType>                    TeleportTypes;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGbxUserEdgeData>                            Edges;                                                   // 0x0020(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FGbxDynamicUserEdgeInfo>                     UserEdgesToAdd;                                          // 0x0030(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<uint32_t>                                           UserEdgesToRemove;                                       // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      NormalTypes;                                             // 0x0050(0x0010) ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxNav.GbxPainterData
	 * Size -> 0x0010
	 */
	struct FGbxPainterData
	{
	public:
		class UGbxNavMeshPainterComponent*                         Painter;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UXQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxPainterManager
	 * Size -> 0x0020
	 */
	struct FGbxPainterManager
	{
	public:
		TArray<class UGbxNavArea*>                                 NavAreas;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGbxPainterData>                             Painters;                                                // 0x0010(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxNav.GbxNavStreamingData
	 * Size -> 0x0020
	 */
	struct FGbxNavStreamingData
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UHavokStreamingSet*>                          Sets;                                                    // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxNav.GbxNavLayerItem
	 * Size -> 0x0020
	 */
	struct FGbxNavLayerItem
	{
	public:
		class UGbxNavLayer*                                        NavLayer;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HalfHeight;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LayerIdx;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0014(0x0004) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Layer;                                                   // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxNavLayerState
	 * Size -> 0x0018
	 */
	struct FGbxNavLayerState
	{
	public:
		TArray<struct FGbxNavLayerItem>                            Layers;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxNav.GbxReachabilityTracker
	 * Size -> 0x00D0
	 */
	struct FGbxReachabilityTracker
	{
	public:
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CachedSourceRoot;                                        // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CachedGoalRoot;                                          // 0x0010(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WDXA[0xB8];                                  // 0x0018(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.FlightState
	 * Size -> 0x0028
	 */
	struct FFlightState
	{
	public:
		EFlightMovementState                                       CurrentMovementState;                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VZU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              VehicleSplineActor;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DropOffSpawner;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AscentTargetLocationZ;                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AscentTargetRotation;                                    // 0x001C(0x000C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxNavAreaItem
	 * Size -> 0x0018
	 */
	struct FGbxNavAreaItem
	{
	public:
		class UGbxNavArea*                                         GbxNavArea;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CostScale;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I20C[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NavArea;                                                 // 0x0010(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxPainterItem
	 * Size -> 0x0020
	 */
	struct FGbxPainterItem
	{
	public:
		unsigned char                                              UnknownData_YGMB[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 Component;                                               // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.HavokUserEdgeItem
	 * Size -> 0x0020
	 */
	struct FHavokUserEdgeItem
	{
	public:
		class UGbxUserEdge*                                        GbxUserEdge;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CostScale;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Action;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              UserEdge;                                                // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.HavokUserEdgeTeleportItem
	 * Size -> 0x0030
	 */
	struct FHavokUserEdgeTeleportItem
	{
	public:
		class UGbxUserEdge*                                        EntryUserEdge;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxUserEdge*                                        ExitUserEdge;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CostScale;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYCC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TeleportAction;                                          // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EntryEdge;                                               // 0x0020(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ExitEdge;                                                // 0x0028(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxNavGoalModifiers
	 * Size -> 0x0028
	 */
	struct FGbxNavGoalModifiers
	{
	public:
		EGbxOffsetType                                             OffsetType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVYW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Offset;                                                  // 0x0004(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNCV[0xC];                                   // 0x0010(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAddAgentRadius;                                         // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddAgentHeight;                                         // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddGoalRadius;                                          // 0x001E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddGoalHeight;                                          // 0x001F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustHeightForMelee;                                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCenterOnFloor;                                          // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2PF[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerticalFlyOffset;                                       // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxNavIdleTurnTableRow
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FGbxNavIdleTurnTableRow : public FGbxAnimTableRow
	{	};

	/**
	 * ScriptStruct GbxNav.GbxNavAnimTableRow
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FGbxNavAnimTableRow : public FGbxAnimTableRow
	{
	public:
		struct FNumericRange                                       Angle;                                                   // 0x0020(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCorner;                                                 // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYDR[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CornerMaxAngle;                                          // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanStretchRotation;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoFill;                                               // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPMO[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxNav.GbxNavBoundsTracker
	 * Size -> 0x0038
	 */
	struct FGbxNavBoundsTracker
	{
	public:
		struct FBox                                                Bounds;                                                  // 0x0000(0x001C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JB2B[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     HullPoints;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.GbxNavSectionBounds
	 * Size -> 0x0040
	 */
	struct FGbxNavSectionBounds
	{
	public:
		struct FBox                                                WorldBoxBound;                                           // 0x0000(0x001C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FY18[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     WorldConvexHullPoints;                                   // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               DominationGuid;                                          // 0x0030(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxNav.HavokUserEdgePreviewItem
	 * Size -> 0x0018
	 */
	struct FHavokUserEdgePreviewItem
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ForwardAction;                                           // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ReverseAction;                                           // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
