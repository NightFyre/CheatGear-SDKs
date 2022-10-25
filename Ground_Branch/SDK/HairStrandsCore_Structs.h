#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Enum HairStrandsCore.EHairCardsSourceType
	 */
	enum class EHairCardsSourceType : uint8_t
	{
		Procedural = 0,
		Imported   = 1,
		MAX        = 2
	};

	/**
	 * Enum HairStrandsCore.EHairCardsGenerationType
	 */
	enum class EHairCardsGenerationType : uint8_t
	{
		CardsCount = 0,
		UseGuides  = 1,
		MAX        = 2
	};

	/**
	 * Enum HairStrandsCore.EHairCardsClusterType
	 */
	enum class EHairCardsClusterType : uint8_t
	{
		Low  = 0,
		High = 1,
		MAX  = 2
	};

	/**
	 * Enum HairStrandsCore.EGroomGeometryType
	 */
	enum class EGroomGeometryType : uint8_t
	{
		Strands = 0,
		Cards   = 1,
		Meshes  = 2,
		MAX     = 3
	};

	/**
	 * Enum HairStrandsCore.EHairLODSelectionType
	 */
	enum class EHairLODSelectionType : uint8_t
	{
		Cpu = 0,
		Gpu = 1,
		MAX = 2
	};

	/**
	 * Enum HairStrandsCore.EHairInterpolationWeight
	 */
	enum class EHairInterpolationWeight : uint8_t
	{
		Parametric = 0,
		Root       = 1,
		Index      = 2,
		Unknown    = 3,
		MAX        = 4
	};

	/**
	 * Enum HairStrandsCore.EHairInterpolationQuality
	 */
	enum class EHairInterpolationQuality : uint8_t
	{
		Low     = 0,
		Medium  = 1,
		High    = 2,
		Unknown = 3,
		MAX     = 4
	};

	/**
	 * Enum HairStrandsCore.EGroomInterpolationType
	 */
	enum class EGroomInterpolationType : uint8_t
	{
		None            = 0,
		RigidTransform  = 1,
		OffsetTransform = 2,
		SmoothTransform = 3,
		MAX             = 4
	};

	/**
	 * Enum HairStrandsCore.EGroomStrandsSize
	 */
	enum class EGroomStrandsSize : uint8_t
	{
		None   = 0,
		Size2  = 1,
		Size4  = 2,
		Size8  = 3,
		Size16 = 4,
		Size32 = 5,
		MAX    = 6
	};

	/**
	 * Enum HairStrandsCore.EGroomNiagaraSolvers
	 */
	enum class EGroomNiagaraSolvers : uint8_t
	{
		None           = 0,
		CosseratRods   = 1,
		AngularSprings = 2,
		CustomSolver   = 3,
		MAX            = 4
	};

	/**
	 * Enum HairStrandsCore.EFollicleMaskChannel
	 */
	enum class EFollicleMaskChannel : uint8_t
	{
		R   = 0,
		G   = 1,
		B   = 2,
		A   = 3,
		MAX = 4
	};

	/**
	 * Enum HairStrandsCore.EStrandsTexturesMeshType
	 */
	enum class EStrandsTexturesMeshType : uint8_t
	{
		Static   = 0,
		Skeletal = 1,
		MAX      = 2
	};

	/**
	 * Enum HairStrandsCore.EStrandsTexturesTraceType
	 */
	enum class EStrandsTexturesTraceType : uint8_t
	{
		TraceInside        = 0,
		TraceOuside        = 1,
		TraceBidirectional = 2,
		MAX                = 3
	};

	/**
	 * Enum HairStrandsCore.EGroomInterpolationWeight
	 */
	enum class EGroomInterpolationWeight : uint8_t
	{
		Parametric = 0,
		Root       = 1,
		Index      = 2,
		Unknown    = 3,
		MAX        = 4
	};

	/**
	 * Enum HairStrandsCore.EGroomInterpolationQuality
	 */
	enum class EGroomInterpolationQuality : uint8_t
	{
		Low     = 0,
		Medium  = 1,
		High    = 2,
		Unknown = 3,
		MAX     = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HairStrandsCore.HairGroupInfo
	 * Size -> 0x0014
	 */
	struct FHairGroupInfo
	{
	public:
		int32_t                                                    GroupID;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCurves;                                               // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumGuides;                                               // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCurveVertices;                                        // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumGuideVertices;                                        // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
	 * Size -> 0x0004 (FullSize[0x0018] - InheritedSize[0x0014])
	 */
	struct FHairGroupInfoWithVisibility : public FHairGroupInfo
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PC10[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGeometrySettings
	 * Size -> 0x0010
	 */
	struct FHairGeometrySettings
	{
	public:
		float                                                      HairWidth;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairRootScale;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairTipScale;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairClipScale;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairShadowSettings
	 * Size -> 0x000C
	 */
	struct FHairShadowSettings
	{
	public:
		float                                                      HairShadowDensity;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairRaytracingRadiusScale;                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHairRaytracingGeometry;                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoxelize;                                               // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZAU[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
	 * Size -> 0x0002
	 */
	struct FHairAdvancedRenderingSettings
	{
	public:
		bool                                                       bUseStableRasterization;                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScatterSceneLighting;                                   // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsRendering
	 * Size -> 0x0030
	 */
	struct FHairGroupsRendering
	{
	public:
		class FName                                                MaterialSlotName;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHairGeometrySettings                               GeometrySettings;                                        // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairShadowSettings                                 ShadowSettings;                                          // 0x0020(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairAdvancedRenderingSettings                      AdvancedSettings;                                        // 0x002C(0x0002) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUIE[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairSolverSettings
	 * Size -> 0x0038
	 */
	struct FHairSolverSettings
	{
	public:
		bool                                                       EnableSimulation;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomNiagaraSolvers                                       NiagaraSolver;                                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGXZ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CustomSystem[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    SubSteps;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IterationCount;                                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairExternalForces
	 * Size -> 0x001C
	 */
	struct FHairExternalForces
	{
	public:
		struct FVector                                             GravityVector;                                           // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirDrag;                                                 // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AirVelocity;                                             // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairBendConstraint
	 * Size -> 0x0098
	 */
	struct FHairBendConstraint
	{
	public:
		bool                                                       SolveBend;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProjectBend;                                             // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80ZS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BendDamping;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BendStiffness;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UV8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  BendScale;                                               // 0x0010(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairStretchConstraint
	 * Size -> 0x0098
	 */
	struct FHairStretchConstraint
	{
	public:
		bool                                                       SolveStretch;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProjectStretch;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CA5H[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchDamping;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchStiffness;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7QE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  StretchScale;                                            // 0x0010(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairCollisionConstraint
	 * Size -> 0x00A8
	 */
	struct FHairCollisionConstraint
	{
	public:
		bool                                                       SolveCollision;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProjectCollision;                                        // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2FE[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaticFriction;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KineticFriction;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrandsViscosity;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          GridDimension;                                           // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRadius;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  RadiusScale;                                             // 0x0020(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairMaterialConstraints
	 * Size -> 0x01D8
	 */
	struct FHairMaterialConstraints
	{
	public:
		struct FHairBendConstraint                                 BendConstraint;                                          // 0x0000(0x0098) Edit, NativeAccessSpecifierPublic
		struct FHairStretchConstraint                              StretchConstraint;                                       // 0x0098(0x0098) Edit, NativeAccessSpecifierPublic
		struct FHairCollisionConstraint                            CollisionConstraint;                                     // 0x0130(0x00A8) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairStrandsParameters
	 * Size -> 0x0098
	 */
	struct FHairStrandsParameters
	{
	public:
		EGroomStrandsSize                                          StrandsSize;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_696J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StrandsDensity;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrandsSmoothing;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrandsThickness;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ThicknessScale;                                          // 0x0010(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsPhysics
	 * Size -> 0x02C8
	 */
	struct FHairGroupsPhysics
	{
	public:
		struct FHairSolverSettings                                 SolverSettings;                                          // 0x0000(0x0038) Edit, NativeAccessSpecifierPublic
		struct FHairExternalForces                                 ExternalForces;                                          // 0x0038(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUYF[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHairMaterialConstraints                            MaterialConstraints;                                     // 0x0058(0x01D8) Edit, NativeAccessSpecifierPublic
		struct FHairStrandsParameters                              StrandsParameters;                                       // 0x0230(0x0098) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairDecimationSettings
	 * Size -> 0x0008
	 */
	struct FHairDecimationSettings
	{
	public:
		float                                                      CurveDecimation;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VertexDecimation;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairInterpolationSettings
	 * Size -> 0x000C
	 */
	struct FHairInterpolationSettings
	{
	public:
		bool                                                       bOverrideGuides;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZTG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairToGuideDensity;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairInterpolationQuality                                  InterpolationQuality;                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairInterpolationWeight                                   InterpolationDistance;                                   // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomizeGuide;                                         // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseUniqueGuide;                                         // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsInterpolation
	 * Size -> 0x0014
	 */
	struct FHairGroupsInterpolation
	{
	public:
		struct FHairDecimationSettings                             DecimationSettings;                                      // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairInterpolationSettings                          InterpolationSettings;                                   // 0x0008(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairLODSettings
	 * Size -> 0x0018
	 */
	struct FHairLODSettings
	{
	public:
		float                                                      CurveDecimation;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VertexDecimation;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularThreshold;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScreenSize;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThicknessScale;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisible;                                                // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomGeometryType                                         GeometryType;                                            // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1HT[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsLOD
	 * Size -> 0x0018
	 */
	struct FHairGroupsLOD
	{
	public:
		TArray<struct FHairLODSettings>                            LODs;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ClusterWorldSize;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClusterScreenSizeScale;                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairCardsClusterSettings
	 * Size -> 0x0008
	 */
	struct FHairCardsClusterSettings
	{
	public:
		float                                                      ClusterDecimation;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairCardsClusterType                                      Type;                                                    // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGuide;                                               // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IGL[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairCardsGeometrySettings
	 * Size -> 0x001C
	 */
	struct FHairCardsGeometrySettings
	{
	public:
		EHairCardsGenerationType                                   GenerationType;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5ZB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CardsCount;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairCardsClusterType                                      ClusterType;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANZW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSegmentLength;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularThreshold;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinCardsLength;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCardsLength;                                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairCardsTextureSettings
	 * Size -> 0x0010
	 */
	struct FHairCardsTextureSettings
	{
	public:
		int32_t                                                    AtlasMaxResolution;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PixelPerCentimeters;                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LengthTextureCount;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DensityTextureCount;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsProceduralCards
	 * Size -> 0x0038
	 */
	struct FHairGroupsProceduralCards
	{
	public:
		struct FHairCardsClusterSettings                           ClusterSettings;                                         // 0x0000(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FHairCardsGeometrySettings                          GeometrySettings;                                        // 0x0008(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairCardsTextureSettings                           TextureSettings;                                         // 0x0024(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupCardsTextures
	 * Size -> 0x0030
	 */
	struct FHairGroupCardsTextures
	{
	public:
		class UTexture2D*                                          DepthTexture;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          CoverageTexture;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          TangentTexture;                                          // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AttributeTexture;                                        // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AuxilaryDataTexture;                                     // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K29G[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupCardsInfo
	 * Size -> 0x0008
	 */
	struct FHairGroupCardsInfo
	{
	public:
		int32_t                                                    NumCards;                                                // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCardVertices;                                         // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
	 * Size -> 0x00C0
	 */
	struct FHairGroupsCardsSourceDescription
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialSlotName;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairCardsSourceType                                       SourceType;                                              // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3P62[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         ProceduralMesh;                                          // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProceduralMeshKey;                                       // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ImportedMesh;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHairGroupsProceduralCards                          ProceduralSettings;                                      // 0x0038(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairGroupCardsTextures                             Textures;                                                // 0x0070(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    GroupIndex;                                              // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODIndex;                                                // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHairGroupCardsInfo                                 CardsInfo;                                               // 0x00A8(0x0008) Edit, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              ImportedMeshKey;                                         // 0x00B0(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
	 * Size -> 0x0060
	 */
	struct FHairGroupsMeshesSourceDescription
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialSlotName;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ImportedMesh;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHairGroupCardsTextures                             Textures;                                                // 0x0018(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    GroupIndex;                                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODIndex;                                                // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImportedMeshKey;                                         // 0x0050(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsMaterial
	 * Size -> 0x0010
	 */
	struct FHairGroupsMaterial
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.GoomBindingGroupInfo
	 * Size -> 0x0010
	 */
	struct FGoomBindingGroupInfo
	{
	public:
		int32_t                                                    RenRootCount;                                            // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenLODCount;                                             // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimRootCount;                                            // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimLODCount;                                             // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupDesc
	 * Size -> 0x004C
	 */
	struct FHairGroupDesc
	{
	public:
		int32_t                                                    HairCount;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GuideCount;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairLength;                                              // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairWidth;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairWidth_Override;                                      // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5GG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairRootScale;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairRootScale_Override;                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3WR[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairTipScale;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairTipScale_Override;                                   // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWJH[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairClipLength;                                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairClipLength_Override;                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XI6L[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairShadowDensity;                                       // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairShadowDensity_Override;                              // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QV6P[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairRaytracingRadiusScale;                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairRaytracingRadiusScale_Override;                      // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHairRaytracingGeometry;                              // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHairRaytracingGeometry_Override;                     // 0x003A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6628[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LODBias;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStableRasterization;                                 // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStableRasterization_Override;                        // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScatterSceneLighting;                                   // 0x0042(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScatterSceneLighting_Override;                          // 0x0043(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportVoxelization;                                    // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportVoxelization_Override;                           // 0x0045(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IQS[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODForcedIndex;                                          // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.FollicleMaskOptions
	 * Size -> 0x0010
	 */
	struct FFollicleMaskOptions
	{
	public:
		class UGroomAsset*                                         Groom;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFollicleMaskChannel                                       Channel;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05I9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.GroomConversionSettings
	 * Size -> 0x0018
	 */
	struct FGroomConversionSettings
	{
	public:
		struct FVector                                             Rotation;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.GroomHairGroupPreview
	 * Size -> 0x0020
	 */
	struct FGroomHairGroupPreview
	{
	public:
		int32_t                                                    GroupID;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurveCount;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GuideCount;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHairGroupsInterpolation                            InterpolationSettings;                                   // 0x000C(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.GroomBuildSettings
	 * Size -> 0x000C
	 */
	struct FGroomBuildSettings
	{
	public:
		bool                                                       bOverrideGuides;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4M0T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairToGuideDensity;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomInterpolationQuality                                 InterpolationQuality;                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomInterpolationWeight                                  InterpolationDistance;                                   // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomizeGuide;                                         // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseUniqueGuide;                                         // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
