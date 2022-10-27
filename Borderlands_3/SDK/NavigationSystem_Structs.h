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
	 * Enum NavigationSystem.EHavokNavMeshVertexSelectionMethod
	 */
	enum class EHavokNavMeshVertexSelectionMethod : uint8_t
	{
		PROPORTIONAL_TO_AREA     = 0,
		PROPORTIONAL_TO_VERTICES = 1,
		PROPORTIONAL_TO_MAX      = 2
	};

	/**
	 * Enum NavigationSystem.EHavokNavMeshWalkableTriangleSeetings
	 */
	enum class EHavokNavMeshWalkableTriangleSeetings : uint8_t
	{
		ONLY_FIX_WALKABLE = 0,
		PREFER_WALKABLE   = 1,
		PREFER_UNWALKABLE = 2,
		MAX               = 3
	};

	/**
	 * Enum NavigationSystem.EHavokNavMeshCharacterWidthUsage
	 */
	enum class EHavokNavMeshCharacterWidthUsage : uint8_t
	{
		NONE            = 0,
		BLOCK_EDGES     = 1,
		SHRINK_NAV_MESH = 2,
		MAX             = 3
	};

	/**
	 * Enum NavigationSystem.EHavokNavMeshEdgeMatchingMetric
	 */
	enum class EHavokNavMeshEdgeMatchingMetric : uint8_t
	{
		ORDER_BY_OVERLAP  = 0,
		ORDER_BY_DISTANCE = 1,
		ORDER_BY_MAX      = 2
	};

	/**
	 * Enum NavigationSystem.EHavokNavVolumeCellWidthToResolutionRounding
	 */
	enum class EHavokNavVolumeCellWidthToResolutionRounding : uint8_t
	{
		RoundToZero    = 0,
		RoundToNearest = 1,
		MAX            = 2
	};

	/**
	 * Enum NavigationSystem.EHavokUserEdgeDirection
	 */
	enum class EHavokUserEdgeDirection : uint8_t
	{
		Blocked       = 0,
		AToB          = 1,
		BToA          = 2,
		Bidirectional = 3,
		MAX           = 4
	};

	/**
	 * Enum NavigationSystem.EHavokNavMaterial
	 */
	enum class EHavokNavMaterial : uint8_t
	{
		Walkable           = 0,
		Cutting            = 1,
		WalkableAndCutting = 2,
		MAX                = 3
	};

	/**
	 * Enum NavigationSystem.ERuntimeGenerationType
	 */
	enum class ERuntimeGenerationType : uint8_t
	{
		Static               = 0,
		DynamicModifiersOnly = 1,
		Dynamic              = 2,
		LegacyGeneration     = 3,
		MAX                  = 4
	};

	/**
	 * Enum NavigationSystem.ENavCostDisplay
	 */
	enum class ENavCostDisplay : uint8_t
	{
		TotalCost     = 0,
		HeuristicOnly = 1,
		RealCostOnly  = 2,
		MAX           = 3
	};

	/**
	 * Enum NavigationSystem.ERecastPartitioning
	 */
	enum class ERecastPartitioning : uint8_t
	{
		Monotone       = 0,
		Watershed      = 1,
		ChunkyMonotone = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NavigationSystem.SupportedAreaData
	 * Size -> 0x0020
	 */
	struct FSupportedAreaData
	{
	public:
		class FString                                              AreaClassName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AreaID;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JTO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaClass;                                               // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NavigationSystem.NavigationFilterArea
	 * Size -> 0x0018
	 */
	struct FNavigationFilterArea
	{
	public:
		class UClass*                                              AreaClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TravelCostOverride;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnteringCostOverride;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsExcluded : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideTravelCost : 1;                                 // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideEnteringCost : 1;                               // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OKQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.NavigationFilterFlags
	 * Size -> 0x0004
	 */
	struct FNavigationFilterFlags
	{
	public:
		unsigned char                                              bNavFlag0 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag1 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag2 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag3 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag4 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag5 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag6 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag7 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag8 : 1;                                           // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag9 : 1;                                           // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag10 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag11 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag12 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag13 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag14 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag15 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MIUA[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.HavokTraversalAnalysisSettings
	 * Size -> 0x0020
	 */
	struct FHavokTraversalAnalysisSettings
	{
	public:
		TArray<class UHavokTraversalType*>                         TraversalTypes;                                          // 0x0000(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      MinEdgeLength;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSectionDistance;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RaiseEdgeHeightLimit;                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUGO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavMeshEdgeMatchingSettings
	 * Size -> 0x0028
	 */
	struct FHavokNavMeshEdgeMatchingSettings
	{
	public:
		float                                                      MaxStepHeight;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSeparation;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOverhang;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BehindFaceTolerance;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CosPlanarAlignmentAngle;                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CosVerticalAlignmentAngle;                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinEdgeOverlap;                                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeParallelTolerance;                                   // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeTraversibilityHorizontalEpsilon;                     // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseSafeEdgeTraversibilityHorizontalEpsilon : 1;         // 0x0024(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MV19[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavMeshRegionPruningSettings
	 * Size -> 0x0014
	 */
	struct FHavokNavMeshRegionPruningSettings
	{
	public:
		float                                                      MinRegionArea;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceToSeedPoints;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BorderPreservationTolerance;                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPreserveVerticalBorderRegions : 1;                      // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPruneBeforeTriangulation : 1;                           // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16XM[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseRegionSeeds;                                         // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14M4[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavMeshOverlappingTrianglesSettings
	 * Size -> 0x000C
	 */
	struct FHavokNavMeshOverlappingTrianglesSettings
	{
	public:
		float                                                      CoplanarityTolerance;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RayCastLengthMultiplier;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHavokNavMeshWalkableTriangleSeetings                      WalkableTriangleSetting;                                 // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WL3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavMeshExtraVertexSettings
	 * Size -> 0x0024
	 */
	struct FHavokNavMeshExtraVertexSettings
	{
	public:
		EHavokNavMeshVertexSelectionMethod                         VertexSelectionMethod;                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSWK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VertexFraction;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AreaFraction;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPartitionArea;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSmoothingIterations;                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IterationDamping;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAddVerticesOnBoundaryEdges : 1;                         // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAddVerticesOnPartitionBorders : 1;                      // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTFL[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoundaryEdgeSplitLength;                                 // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PartitionBordersSplitLength;                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavMeshSimplificationSettings
	 * Size -> 0x007C
	 */
	struct FHavokNavMeshSimplificationSettings
	{
	public:
		float                                                      MaxBorderSimplifyArea;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxConcaveBorderSimlifyArea;                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinCorridorWidth;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCorridorWidth;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoleReplacementArea;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AabbReplacementAreaFraction;                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLoopShrinkFraction;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBorderHeightError;                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBorderDistanceError;                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPartitionSize;                                        // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseHeightPartitioning : 1;                              // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SZY[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPartitionHeightError;                                 // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseConservativeHeightPartitioning : 1;                  // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQJ3[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HertelMehlhornHeightError;                               // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CosPlanarityThreshold;                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonConvexityThreshold;                                   // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoundaryEdgeFilterThreshold;                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSharedVertexHorizontalError;                          // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSharedVertexVerticalError;                            // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBoundaryVertexHorizontalError;                        // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBoundaryVertexVerticalError;                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMergeLongestEdgesFirst : 1;                             // 0x0054(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPPO[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHavokNavMeshExtraVertexSettings                    ExtraVertexSettings;                                     // 0x0058(0x0024) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavVolumeChunkSettings
	 * Size -> 0x0008
	 */
	struct FHavokNavVolumeChunkSettings
	{
	public:
		uint16_t                                                   MaxChunkSizeX;                                           // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MaxChunkSizeY;                                           // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MaxChunkSizeZ;                                           // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoGreedyMergeAfterCombine;                              // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUQ0[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavVolumeBorderSettings
	 * Size -> 0x0008
	 */
	struct FHavokNavVolumeBorderSettings
	{
	public:
		float                                                      Border;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBorderCells;                                         // 0x0004(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OKE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavVolumeMergingSettings
	 * Size -> 0x0020
	 */
	struct FHavokNavVolumeMergingSettings
	{
	public:
		float                                                      NodeWeight;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeWeight;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEstimateNewEdges;                                       // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0FN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IterationsStabilizationThreshold;                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMergingIterations;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSimpleFirstMergePass;                                // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7R2[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavVolumePruningSettings
	 * Size -> 0x0008
	 */
	struct FHavokNavVolumePruningSettings
	{
	public:
		float                                                      MinRegionVolume;                                         // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceToSeedPoints;                                 // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NavigationSystem.NavCollisionCylinder
	 * Size -> 0x0014
	 */
	struct FNavCollisionCylinder
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NavigationSystem.NavCollisionBox
	 * Size -> 0x0018
	 */
	struct FNavCollisionBox
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Extent;                                                  // 0x000C(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NavigationSystem.NavGraphNode
	 * Size -> 0x0018
	 */
	struct FNavGraphNode
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBDT[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NavigationSystem.HavokNavSectionFixedBound
	 * Size -> 0x0048
	 */
	struct FHavokNavSectionFixedBound
	{
	public:
		class UClass*                                              Layer;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                WorldBoxBound;                                           // 0x0008(0x001C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SDO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     WorldConvexHullPoints;                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               DominationGuid;                                          // 0x0038(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NavigationSystem.NavGraphEdge
	 * Size -> 0x0018
	 */
	struct FNavGraphEdge
	{
	public:
		unsigned char                                              UnknownData_LJFQ[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
