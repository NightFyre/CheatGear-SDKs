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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GbxNav.GbxNavSystem
	 * Size -> 0x0010 (FullSize[0x0438] - InheritedSize[0x0428])
	 */
	class UGbxNavSystem : public UNavigationSystemV1
	{
	public:
		unsigned char                                              UnknownData_70EM[0x8];                                   // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x0430(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavCharacterMovementComponent
	 * Size -> 0x020C (FullSize[0x288C] - InheritedSize[0x2680])
	 */
	class UGbxNavCharacterMovementComponent : public UGbxCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_RBIQ[0x90];                                  // 0x2680(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxNavMovementOptions                              NavMovementOptions;                                      // 0x2710(0x0038) Edit, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      NavClientPopDistance;                                    // 0x2748(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxNavAvoidanceOptions                             NavAvoidanceOptions;                                     // 0x274C(0x003C) Edit, NoDestructor, NativeAccessSpecifierPrivate
		struct FGbxNavSlowdownData                                 NavSlowdownOptions;                                      // 0x2788(0x0014) Edit, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bOverrideSlowdownNearGoal;                               // 0x279C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_36NY[0x3];                                   // 0x279D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStanceFloatValue                                   SlowdownSpeedOverride;                                   // 0x27A0(0x0008) Transient, NoDestructor, NativeAccessSpecifierPrivate
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x27A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    GbxNavComponent;                                         // 0x27B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxNavAgent                                        Agent;                                                   // 0x27B8(0x00A8) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FGbxNavPathingData                                  PathingData;                                             // 0x2860(0x0010) Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavMeshLayer*                                    ForcedNavMeshLayer;                                      // 0x2870(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9U1R[0x4];                                   // 0x2878(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideMaxAcceleration;                                // 0x287C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IIC6[0x3];                                   // 0x287D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StanceMaxAcceleration;                                   // 0x2880(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WRII[0x8];                                   // 0x2884(0x0008) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavComponent
	 * Size -> 0x0978 (FullSize[0x0AF0] - InheritedSize[0x0178])
	 */
	class UGbxNavComponent : public UNavComponent
	{
	public:
		unsigned char                                              UnknownData_E96H[0x3B0];                                 // 0x0178(0x03B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxNavForwardState                                 ForwardState;                                            // 0x0528(0x0128) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxNavStuckState                                   StuckState;                                              // 0x0650(0x0068) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x06B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHavokMovementData*                                  OverrideMovementData;                                    // 0x06C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHavokPathFindingData*                               OverridePathFindingData;                                 // 0x06C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   MyCapsule;                                               // 0x06D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AAIController*                                       MyAIController;                                          // 0x06D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavCharacterMovementComponent*                   MyMovement;                                              // 0x06E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxNavAgent                                        Agent;                                                   // 0x06E8(0x00A8) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FGbxUserEdgeState                                   UserEdgeState;                                           // 0x0790(0x01A0) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxNavCorrecter                                    NavCorrecter;                                            // 0x0930(0x00B8) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxReachabilityState                               Reachability;                                            // 0x09E8(0x0090) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxNavMovementOptions                              MovementOptions;                                         // 0x0A78(0x0038) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FGbxNavAvoidanceOptions                             AvoidanceOptions;                                        // 0x0AB0(0x003C) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BJXF[0x4];                                   // 0x0AEC(0x0004) MISSED OFFSET (PADDING)

	public:
		void TryMoving(float fDuration);
		void SetPathFindingData(class UHavokPathFindingData* NewPathFindingData);
		void ResetPathFindingData();
		class UHavokPathFindingData* GetPathFindingData();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavWorld
	 * Size -> 0x0568 (FullSize[0x0B80] - InheritedSize[0x0618])
	 */
	class AGbxNavWorld : public ANavigationData
	{
	public:
		unsigned char                                              UnknownData_9UKG[0x48];                                  // 0x0618(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxUserEdgeManager                                 UserEdgeManager;                                         // 0x0660(0x0060) ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxPainterManager                                  PainterManager;                                          // 0x06C0(0x0020) ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxNavStreamingData                                FlyStreamingData;                                        // 0x06E0(0x0020) NativeAccessSpecifierPrivate
		struct FGbxNavStreamingData                                MeshStreamingData;                                       // 0x0700(0x0020) NativeAccessSpecifierPrivate
		struct FGbxNavLayerState                                   MeshLayers;                                              // 0x0720(0x0018) NativeAccessSpecifierPrivate
		struct FGbxNavLayerState                                   FlyLayers;                                               // 0x0738(0x0018) NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    ReachabilityBuilding;                                    // 0x0750(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGbxNavComponent*>                            ReachabilityQueue;                                       // 0x0758(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UGbxNavComponent*>                            NavComps;                                                // 0x0768(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxReachabilityTracker                             ReachabilityTracker;                                     // 0x0778(0x00D0) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		int32_t                                                    MaxClearanceFillsPerStep;                                // 0x0848(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxClearanceChecksPerStep;                               // 0x084C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAsyncProcessingEnabled;                                 // 0x0850(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAsyncAgentUpdatesEnabled;                               // 0x0851(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QYL2[0x6];                                   // 0x0852(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     DefaultMeshLayer;                                        // 0x0858(0x0018) Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     DefaultFlyLayer;                                         // 0x0870(0x0018) Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     DefaultNavArea;                                          // 0x0888(0x0018) Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     NullNavArea;                                             // 0x08A0(0x0018) Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FSoftObjectPath>                             AllNavAreas;                                             // 0x08B8(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<class UGbxNavArea*>                                 LoadedAllNavAreas;                                       // 0x08C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UGbxNavSectionComponent*>                     SectionsWithDirtyTransforms;                             // 0x08D8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H1DQ[0x268];                                 // 0x08E8(0x0268) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHavokNavMeshGenerationSettings*                     MeshGenSettings;                                         // 0x0B50(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHavokNavVolumeGenerationSettings*                   VolumeGenSettings;                                       // 0x0B58(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_80BD[0x20];                                  // 0x0B60(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.AIVehicleFlightComponent
	 * Size -> 0x0090 (FullSize[0x02C0] - InheritedSize[0x0230])
	 */
	class UAIVehicleFlightComponent : public UFloatingPawnMovement
	{
	public:
		unsigned char                                              UnknownData_CNHN[0x10];                                  // 0x0230(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationRate;                                            // 0x0240(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WEDE[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxNavComponent*                                    GbxNavComponent;                                         // 0x0250(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VLN4[0xC];                                   // 0x0258(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VelocityScaleDuringDescent;                              // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RotationScaleDuringDescent;                              // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LateralDistanceToStartDescent;                           // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VelocityScaleDuringAscent;                               // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RotationScaleDuringAscent;                               // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxPitchInDegrees;                                       // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxRollInDegrees;                                        // 0x027C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFlightState                                        FlightState;                                             // 0x0280(0x0028) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QYUQ[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_FlightState();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavAnimTable
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UGbxNavAnimTable : public UGbxAnimTable
	{
	public:
		EGbxNavAnimTableType                                       Type;                                                    // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AN51[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinStopDistance;                                         // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxInterpDistance;                                       // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AutoFillAngle;                                           // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxAnimStateManager_AINav
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UGbxAnimStateManager_AINav : public UGbxAnimStateManager
	{
	public:
		ENavAnimState                                              Type;                                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JTW5[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxNavAnimTable*                                    AnimTable;                                               // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimActionDef                                      BlendSpaceRef;                                           // 0x0048(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UGbxCharacterAnimInstance*                           GbxCharAnimInstance;                                     // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxCharacterMovementComponent*                      GbxCharMoveComponent;                                    // 0x0068(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlendSpaceBase*                                     ResolvedBlendSpace;                                      // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ResolvedBlendSpaceYawMin;                                // 0x0078(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ResolvedBlendSpaceYawMax;                                // 0x007C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0080(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_39XK[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		void Owner_PostBeginPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxAnimStateManager_NavIdle
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UGbxAnimStateManager_NavIdle : public UGbxAnimStateManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavIdleTurnTable
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UGbxNavIdleTurnTable : public UGbxAnimTable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxAnimStateManager_NavIdleTurn
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGbxAnimStateManager_NavIdleTurn : public UGbxAnimStateManager_RootMotion
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxAnimStateManager_NavTable
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGbxAnimStateManager_NavTable : public UGbxAnimStateManager_NavIdleTurn
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxAnimStateManager_NavHop
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGbxAnimStateManager_NavHop : public UGbxAnimStateManager_RootMotion
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavArea
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UGbxNavArea : public UGbxNavAreaBase
	{
	public:
		struct FColor                                              DrawColor;                                               // 0x0030(0x0004) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X7TN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxNavMeshLayer*>                            IgnoreLayers;                                            // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class UGbxNavArea*                                         EffectiveArea;                                           // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHavokNavMaterial                                          HavokNavMaterial;                                        // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6UAA[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavAreaData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGbxNavAreaData : public UDataAsset
	{
	public:
		TArray<struct FGbxNavAreaItem>                             NavAreas;                                                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxNavBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetAINavPathType(class AActor* Actor, EGbxPathType PathType);
		void STATIC_ResourceUnlockAvoidance(class AActor* Actor, const class FName& Reason);
		void STATIC_ResourceLockAvoidance(class AActor* Actor, const class FName& Reason);
		void STATIC_ForceNavMeshLayer(class AActor* Actor, class UGbxNavMeshLayer* ForcedNavMeshLayer);
		bool STATIC_FindNavMeshPointForActor(class AActor* Actor, const struct FVector& Point, float Radius, struct FVector* Result);
		bool STATIC_FindNavMeshPoint(class UObject* WorldContextObject, const struct FVector& Point, float Radius, struct FVector* Result, class UGbxNavMeshLayer* Layer);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavBoxComponent
	 * Size -> 0x0010 (FullSize[0x0730] - InheritedSize[0x0720])
	 */
	class UGbxNavBoxComponent : public UBoxComponent
	{
	public:
		struct FGbxTriggerProperty                                 AutoResize;                                              // 0x0720(0x0001) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4BFW[0xF];                                   // 0x0721(0x000F) MISSED OFFSET (PADDING)

	public:
		void DoAutoResize();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavLayer
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UGbxNavLayer : public UGbxNavLayerBase
	{
	public:
		struct FColor                                              DrawColor;                                               // 0x0030(0x0004) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EU9A[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavFlyLayer
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UGbxNavFlyLayer : public UGbxNavLayer
	{
	public:
		float                                                      MaxAgentRadius;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CellWidth;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxNavFlyRoundingMode                                     RoundingMode;                                            // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6Y7S[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavSection
	 * Size -> 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
	 */
	class AGbxNavSection : public ANavMeshBoundsVolume
	{
	public:
		class UGbxNavSectionComponent*                             SectionComponent;                                        // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavFlySection
	 * Size -> 0x0008 (FullSize[0x04A8] - InheritedSize[0x04A0])
	 */
	class AGbxNavFlySection : public AGbxNavSection
	{
	public:
		class UGbxNavFlySectionComponent*                          FlySectionComponent;                                     // 0x04A0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavSectionComponent
	 * Size -> 0x0070 (FullSize[0x0760] - InheritedSize[0x06F0])
	 */
	class UGbxNavSectionComponent : public UPrimitiveComponent
	{
	public:
		uint32_t                                                   SectionID;                                               // 0x06F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               StreamingGuid;                                           // 0x06F4(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1DL3[0x4];                                   // 0x0704(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x0708(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_50XP[0x18];                                  // 0x0710(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAddAllConnectedComponentsToBounds;                      // 0x0728(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MP2A[0x7];                                   // 0x0729(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BuildTransform;                                          // 0x0730(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavFlySectionComponent
	 * Size -> 0x0070 (FullSize[0x07D0] - InheritedSize[0x0760])
	 */
	class UGbxNavFlySectionComponent : public UGbxNavSectionComponent
	{
	public:
		class UGbxNavFlyLayer*                                     FlyLayer;                                                // 0x0760(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxNavFlyLayer*                                     BuildFlyLayer;                                           // 0x0768(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawBoundingFaces;                                      // 0x0770(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawCells;                                              // 0x0771(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawFaces;                                              // 0x0772(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D9HG[0x1];                                   // 0x0773(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawBoxSize;                                             // 0x0774(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DrawCullDistance;                                        // 0x0778(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M5VZ[0x24];                                  // 0x077C(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHavokNavVolume*                                     NavVolume;                                               // 0x07A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<uint16_t>                                           CellGroups;                                              // 0x07A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UClass*                                              Layer;                                                   // 0x07B8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              BuildLayer;                                              // 0x07C0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U16N[0x8];                                   // 0x07C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavGlobalData
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UGbxNavGlobalData : public UGbxDataAsset
	{
	public:
		class UGbxNavMeshLayer*                                    DefaultMeshLayer;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxNavFlyLayer*                                     DefaultFlyLayer;                                         // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxNavArea*                                         DefaultMeshArea;                                         // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxNavArea*                                         NullMeshArea;                                            // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxNavArea*>                                 AllMeshAreas;                                            // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UGbxUserEdge*                                        DefaultUserEdge;                                         // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxUserEdge*>                                GlobalUserEdges;                                         // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavMeshLayer
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UGbxNavMeshLayer : public UGbxNavLayer
	{
	public:
		float                                                      MaxAgentHalfHeight;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAgentRadius;                                          // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSetRadiusManually;                                      // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BWT5[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UserEdgeDistance;                                        // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSetUserEdgeDistanceManually;                            // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NVRD[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavMeshPainter
	 * Size -> 0x0008 (FullSize[0x0498] - InheritedSize[0x0490])
	 */
	class AGbxNavMeshPainter : public AVolume
	{
	public:
		class UGbxNavMeshPainterComponent*                         PainterComponent;                                        // 0x0490(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetPainterEnabled(bool bNewEnabled);
		bool IsPainterEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavMeshPainterComponent
	 * Size -> 0x00A0 (FullSize[0x0218] - InheritedSize[0x0178])
	 */
	class UGbxNavMeshPainterComponent : public UActorComponent
	{
	public:
		bool                                                       bAlwaysEnabled;                                          // 0x0178(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0179(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2VZU[0x2];                                   // 0x017A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IdleTime;                                                // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxPainterType                                            PainterType;                                             // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CXHU[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxNavArea*                                         GbxNavArea;                                              // 0x0188(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        AssociatedComponentNames;                                // 0x0190(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		uint32_t                                                   PainterId;                                               // 0x01A0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PainterMovedThreshold;                                   // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bBlocksAutoGeneratedUserEdges;                           // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AAGW[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxPainterItem>                             Painters;                                                // 0x01B0(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1R5C[0x50];                                  // 0x01C0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NavArea;                                                 // 0x0210(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetPainterEnabled(bool bNewEnabled);
		void SetPainterAlwaysEnabled(bool bNewAlwaysEnabled);
		void ResetToStatic();
		bool IsPainterEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavMeshSection
	 * Size -> 0x0008 (FullSize[0x04A8] - InheritedSize[0x04A0])
	 */
	class AGbxNavMeshSection : public AGbxNavSection
	{
	public:
		class UGbxNavMeshSectionComponent*                         MeshSectionComponent;                                    // 0x04A0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavMeshSectionComponent
	 * Size -> 0x0060 (FullSize[0x07C0] - InheritedSize[0x0760])
	 */
	class UGbxNavMeshSectionComponent : public UGbxNavSectionComponent
	{
	public:
		class UGbxNavMeshLayer*                                    MeshLayer;                                               // 0x0760(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxNavMeshLayer*                                    BuildMeshLayer;                                          // 0x0768(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoAddUserEdges;                                       // 0x0770(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6OR1[0x2F];                                  // 0x0771(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHavokNavMesh*                                       NavMesh;                                                 // 0x07A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              Layer;                                                   // 0x07A8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              BuildLayer;                                              // 0x07B0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_67JI[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxNavUserEdgeTrailComponent
	 * Size -> 0x00C0 (FullSize[0x0238] - InheritedSize[0x0178])
	 */
	class UGbxNavUserEdgeTrailComponent : public UActorComponent
	{
	public:
		class UGbxUserEdge*                                        GbxUserEdge;                                             // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EdgeWidth;                                               // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AgentRadius;                                             // 0x0184(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AgentHalfHeight;                                         // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NavCheckDistance;                                        // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNumericRange                                       ValidEdgeLength;                                         // 0x0190(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		int32_t                                                    MaxActiveEdges;                                          // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TraceRadius;                                             // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGbxNavWorld*                                        GbxNavWorld;                                             // 0x01A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxNavAgentProperties                              AgentProps;                                              // 0x01A8(0x0060) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_08TD[0x28];                                  // 0x0208(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              UserEdge;                                                // 0x0230(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokPathFollowingComponent
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UHavokPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxPathFollowingComponent
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UGbxPathFollowingComponent : public UHavokPathFollowingComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxUserEdge
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UGbxUserEdge : public UGbxUserEdgeBase
	{
	public:
		class UGbxUserEdge*                                        ReverseEdge;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FColor                                              DrawColor;                                               // 0x0038(0x0004) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAlignEdges;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLimitDistanceMin;                                       // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_96P4[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceMin;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLimitDistanceMax;                                       // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y3OB[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceMax;                                             // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLimitHeightMin;                                         // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RKRW[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightMin;                                               // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLimitHeightMax;                                         // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U51Q[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightMax;                                               // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bZeroWidthEntry;                                         // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bZeroWidthExit;                                          // 0x005D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTeleportEntry;                                          // 0x005E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTeleportExit;                                           // 0x005F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UGbxUserEdge*>                                TeleportEdges;                                           // 0x0060(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.GbxUserEdgeBlocker
	 * Size -> 0x0038 (FullSize[0x04C8] - InheritedSize[0x0490])
	 */
	class AGbxUserEdgeBlocker : public AVolume
	{
	public:
		unsigned char                                              UnknownData_VQWO[0x38];                                  // 0x0490(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokMovementData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHavokMovementData : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokNavObstacle
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UHavokNavObstacle : public UObject
	{
	public:
		float                                                      SphereRadius;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseSphere;                                              // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E01A[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoxSize;                                                 // 0x0030(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseBox;                                                 // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1HSM[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0040(0x000C) Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J2EN[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxNavArea*                                         NavArea;                                                 // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 PrimitiveBase;                                           // 0x0058(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V6TD[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokNavObstacleComponent
	 * Size -> 0x00A0 (FullSize[0x0790] - InheritedSize[0x06F0])
	 */
	class UHavokNavObstacleComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_PS69[0x98];                                  // 0x06F0(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHavokNavObstacle*                                   Obstacle;                                                // 0x0788(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnlockObstacle(const class FName& Reason);
		void LockObstacle(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokPathFindingData
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UHavokPathFindingData : public UDataAsset
	{
	public:
		TArray<struct FHavokUserEdgeItem>                          UserEdges;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHavokUserEdgeTeleportItem>                  UserEdgeTeleports;                                       // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              DefaultTeleportAction;                                   // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokStreamingSet
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UHavokStreamingSet : public UObject
	{
	public:
		uint32_t                                                   SectionIdA;                                              // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SectionIdB;                                              // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAGK[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokUserEdge_Jump
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UHavokUserEdge_Jump : public UHavokUserEdge
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokUserEdgeActor
	 * Size -> 0x0048 (FullSize[0x04A0] - InheritedSize[0x0458])
	 */
	class AHavokUserEdgeActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_XRX7[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EdgeEnd;                                                 // 0x0460(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		class UHavokUserEdgeComponent*                             UserEdgeComponent;                                       // 0x0490(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TYTN[0x8];                                   // 0x0498(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetEdgeEnabled(bool bNewEnabled);
		bool IsEdgeEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokUserEdgeComponent
	 * Size -> 0x0100 (FullSize[0x07F0] - InheritedSize[0x06F0])
	 */
	class UHavokUserEdgeComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_FSR3[0x8];                                   // 0x06F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnabled;                                                // 0x06F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XUN4[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EdgeEnd;                                                 // 0x0700(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      EdgeBeginWidth;                                          // 0x0730(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EdgeEndWidth;                                            // 0x0734(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxUserEdgeDirection                                      Direction;                                               // 0x0738(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YRR0[0x7];                                   // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxUserEdge*                                        GbxUserEdge;                                             // 0x0740(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TeleportRadius;                                          // 0x0748(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SYTZ[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHavokUserEdgeComponent*>                     TeleportEdges;                                           // 0x0750(0x0010) Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bAnchorEnd;                                              // 0x0760(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PTJD[0x7];                                   // 0x0761(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              EndAnchorBase;                                           // 0x0768(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTransform                                          EndAnchorTransform;                                      // 0x0770(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		class USceneComponent*                                     RegisteredEndAnchorRoot;                                 // 0x07A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   EdgeID;                                                  // 0x07A8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7O84[0x34];                                  // 0x07AC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              UserEdge;                                                // 0x07E0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DTQT[0x8];                                   // 0x07E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetEdgeEnabled(bool bNewEnabled);
		bool IsEdgeEnabled();
		void AnchorDestroyed(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.HavokUserEdgePreviewComponent
	 * Size -> 0x0000 (FullSize[0x06F0] - InheritedSize[0x06F0])
	 */
	class UHavokUserEdgePreviewComponent : public UPrimitiveComponent
	{
	public:
		void OnBlueprintCompiled(class UBlueprint* BP);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.VehicleSplineConsumerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVehicleSplineConsumerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxNav.VehicleSplineInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVehicleSplineInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
