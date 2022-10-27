#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Enum MeshModelingTools.EMakeMeshPolygroupMode
	 */
	enum class EMakeMeshPolygroupMode : uint8_t
	{
		Single  = 0,
		PerFace = 1,
		PerQuad = 2,
		MAX     = 3
	};

	/**
	 * Enum MeshModelingTools.EMakeMeshPivotLocation
	 */
	enum class EMakeMeshPivotLocation : uint8_t
	{
		Base     = 0,
		Centered = 1,
		Top      = 2,
		MAX      = 3
	};

	/**
	 * Enum MeshModelingTools.EMakeMeshPlacementType
	 */
	enum class EMakeMeshPlacementType : uint8_t
	{
		GroundPlane = 0,
		OnScene     = 1,
		MAX         = 2
	};

	/**
	 * Enum MeshModelingTools.EAlignObjectsBoxPoint
	 */
	enum class EAlignObjectsBoxPoint : uint8_t
	{
		Center = 0,
		Bottom = 1,
		Top    = 2,
		Left   = 3,
		Right  = 4,
		Front  = 5,
		Back   = 6,
		Min    = 7,
		Max    = 8
	};

	/**
	 * Enum MeshModelingTools.EAlignObjectsAlignToOptions
	 */
	enum class EAlignObjectsAlignToOptions : uint8_t
	{
		FirstSelected = 0,
		LastSelected  = 1,
		Combined      = 2,
		MAX           = 3
	};

	/**
	 * Enum MeshModelingTools.EAlignObjectsAlignTypes
	 */
	enum class EAlignObjectsAlignTypes : uint8_t
	{
		Pivots        = 0,
		BoundingBoxes = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingTools.EBakedCurvatureClampMode
	 */
	enum class EBakedCurvatureClampMode : uint8_t
	{
		None     = 0,
		Positive = 1,
		Negative = 2,
		MAX      = 3
	};

	/**
	 * Enum MeshModelingTools.EBakedCurvatureColorMode
	 */
	enum class EBakedCurvatureColorMode : uint8_t
	{
		Grayscale    = 0,
		RedBlue      = 1,
		RedGreenBlue = 2,
		MAX          = 3
	};

	/**
	 * Enum MeshModelingTools.EBakedCurvatureTypeMode
	 */
	enum class EBakedCurvatureTypeMode : uint8_t
	{
		MeanAverage = 0,
		Max         = 1,
		Min         = 2,
		Gaussian    = 3
	};

	/**
	 * Enum MeshModelingTools.EOcclusionMapPreview
	 */
	enum class EOcclusionMapPreview : uint8_t
	{
		AmbientOcclusion = 0,
		BentNormal       = 1,
		MAX              = 2
	};

	/**
	 * Enum MeshModelingTools.EOcclusionMapDistribution
	 */
	enum class EOcclusionMapDistribution : uint8_t
	{
		Uniform = 0,
		Cosine  = 1,
		MAX     = 2
	};

	/**
	 * Enum MeshModelingTools.ENormalMapSpace
	 */
	enum class ENormalMapSpace : uint8_t
	{
		Tangent = 0,
		Object  = 1,
		MAX     = 2
	};

	/**
	 * Enum MeshModelingTools.EBakeTextureResolution
	 */
	enum class EBakeTextureResolution : uint8_t
	{
		Resolution16   = 0,
		Resolution32   = 1,
		Resolution64   = 2,
		Resolution128  = 3,
		Resolution256  = 4,
		Resolution512  = 5,
		Resolution1024 = 6,
		Resolution2048 = 7,
		Resolution4096 = 8,
		Resolution8192 = 9,
		MAX            = 10
	};

	/**
	 * Enum MeshModelingTools.EBakeMapType
	 */
	enum class EBakeMapType : uint8_t
	{
		TangentSpaceNormalMap = 0,
		Occlusion             = 1,
		Curvature             = 2,
		Texture2DImage        = 3,
		NormalImage           = 4,
		FaceNormalImage       = 5,
		PositionImage         = 6,
		MAX                   = 7
	};

	/**
	 * Enum MeshModelingTools.EBakeScaleMethod
	 */
	enum class EBakeScaleMethod : uint8_t
	{
		BakeFullScale       = 0,
		BakeNonuniformScale = 1,
		DoNotBakeScale      = 2,
		MAX                 = 3
	};

	/**
	 * Enum MeshModelingTools.ECollisionGeometryMode
	 */
	enum class ECollisionGeometryMode : uint8_t
	{
		Default            = 0,
		SimpleAndComplex   = 1,
		UseSimpleAsComplex = 2,
		UseComplexAsSimple = 3,
		MAX                = 4
	};

	/**
	 * Enum MeshModelingTools.ECombineTargetType
	 */
	enum class ECombineTargetType : uint8_t
	{
		NewAsset        = 0,
		FirstInputAsset = 1,
		LastInputAsset  = 2,
		MAX             = 3
	};

	/**
	 * Enum MeshModelingTools.EConvertToPolygonsMode
	 */
	enum class EConvertToPolygonsMode : uint8_t
	{
		FaceNormalDeviation = 0,
		FromUVISlands       = 1,
		MAX                 = 2
	};

	/**
	 * Enum MeshModelingTools.EQuickTransformerMode
	 */
	enum class EQuickTransformerMode : uint8_t
	{
		AxisTranslation = 0,
		AxisRotation    = 1,
		MAX             = 2
	};

	/**
	 * Enum MeshModelingTools.EWeightScheme
	 */
	enum class EWeightScheme : uint8_t
	{
		Uniform          = 0,
		Umbrella         = 1,
		Valence          = 2,
		MeanValue        = 3,
		Cotangent        = 4,
		ClampedCotangent = 5,
		MAX              = 6
	};

	/**
	 * Enum MeshModelingTools.EGroupTopologyDeformationStrategy
	 */
	enum class EGroupTopologyDeformationStrategy : uint8_t
	{
		Linear    = 0,
		Laplacian = 1,
		MAX       = 2
	};

	/**
	 * Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
	 */
	enum class EDisplaceMeshToolDisplaceType : uint8_t
	{
		Constant        = 0,
		RandomNoise     = 1,
		PerlinNoise     = 2,
		DisplacementMap = 3,
		SineWave        = 4,
		MAX             = 5
	};

	/**
	 * Enum MeshModelingTools.EDrawPolygonOutputMode
	 */
	enum class EDrawPolygonOutputMode : uint8_t
	{
		MeshedPolygon       = 0,
		ExtrudedConstant    = 1,
		ExtrudedInteractive = 2,
		MAX                 = 3
	};

	/**
	 * Enum MeshModelingTools.EDrawPolygonDrawMode
	 */
	enum class EDrawPolygonDrawMode : uint8_t
	{
		Freehand         = 0,
		Circle           = 1,
		Square           = 2,
		Rectangle        = 3,
		RoundedRectangle = 4,
		HoleyCircle      = 5,
		MAX              = 6
	};

	/**
	 * Enum MeshModelingTools.EDrawPolyPathExtrudeDirection
	 */
	enum class EDrawPolyPathExtrudeDirection : uint8_t
	{
		SelectionNormal = 0,
		WorldX          = 1,
		WorldY          = 2,
		WorldZ          = 3,
		LocalX          = 4,
		LocalY          = 5,
		LocalZ          = 6,
		MAX             = 7
	};

	/**
	 * Enum MeshModelingTools.EDrawPolyPathHeightMode
	 */
	enum class EDrawPolyPathHeightMode : uint8_t
	{
		Interactive = 0,
		Constant    = 1,
		MAX         = 2
	};

	/**
	 * Enum MeshModelingTools.EDrawPolyPathWidthMode
	 */
	enum class EDrawPolyPathWidthMode : uint8_t
	{
		Interactive = 0,
		Constant    = 1,
		MAX         = 2
	};

	/**
	 * Enum MeshModelingTools.EDrawPolyPathOutputMode
	 */
	enum class EDrawPolyPathOutputMode : uint8_t
	{
		Ribbon    = 0,
		Extrusion = 1,
		Ramp      = 2,
		MAX       = 3
	};

	/**
	 * Enum MeshModelingTools.EDynamicMeshSculptBrushType
	 */
	enum class EDynamicMeshSculptBrushType : uint8_t
	{
		Move             = 0,
		PullKelvin       = 1,
		PullSharpKelvin  = 2,
		Smooth           = 3,
		Offset           = 4,
		SculptView       = 5,
		SculptMax        = 6,
		Inflate          = 7,
		ScaleKelvin      = 8,
		Pinch            = 9,
		TwistKelvin      = 10,
		Flatten          = 11,
		Plane            = 12,
		PlaneViewAligned = 13,
		FixedPlane       = 14,
		Resample         = 15,
		LastValue        = 16,
		MAX              = 17
	};

	/**
	 * Enum MeshModelingTools.EEdgeLoopInsertionMode
	 */
	enum class EEdgeLoopInsertionMode : uint8_t
	{
		Retriangulate = 0,
		PlaneCut      = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingTools.EEdgeLoopPositioningMode
	 */
	enum class EEdgeLoopPositioningMode : uint8_t
	{
		Even             = 0,
		ProportionOffset = 1,
		DistanceOffset   = 2,
		MAX              = 3
	};

	/**
	 * Enum MeshModelingTools.EPolyEditCutPlaneOrientation
	 */
	enum class EPolyEditCutPlaneOrientation : uint8_t
	{
		FaceNormals   = 0,
		ViewDirection = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingTools.EPolyEditExtrudeDirection
	 */
	enum class EPolyEditExtrudeDirection : uint8_t
	{
		SelectionNormal = 0,
		WorldX          = 1,
		WorldY          = 2,
		WorldZ          = 3,
		LocalX          = 4,
		LocalY          = 5,
		LocalZ          = 6,
		MAX             = 7
	};

	/**
	 * Enum MeshModelingTools.EEditMeshPolygonsToolActions
	 */
	enum class EEditMeshPolygonsToolActions : uint8_t
	{
		NoAction           = 0,
		PlaneCut           = 1,
		Extrude            = 2,
		Offset             = 3,
		Inset              = 4,
		Outset             = 5,
		Merge              = 6,
		Delete             = 7,
		CutFaces           = 8,
		RecalculateNormals = 9,
		FlipNormals        = 10,
		Retriangulate      = 11,
		Decompose          = 12,
		Disconnect         = 13,
		CollapseEdge       = 14,
		WeldEdges          = 15,
		StraightenEdge     = 16,
		FillHole           = 17,
		PlanarProjectionUV = 18,
		PokeSingleFace     = 19,
		SplitSingleEdge    = 20,
		FlipSingleEdge     = 21,
		CollapseSingleEdge = 22,
		MAX                = 23
	};

	/**
	 * Enum MeshModelingTools.ELocalFrameMode
	 */
	enum class ELocalFrameMode : uint8_t
	{
		FromObject   = 0,
		FromGeometry = 1,
		MAX          = 2
	};

	/**
	 * Enum MeshModelingTools.EEditPivotToolActions
	 */
	enum class EEditPivotToolActions : uint8_t
	{
		NoAction = 0,
		Center   = 1,
		Bottom   = 2,
		Top      = 3,
		Left     = 4,
		Right    = 5,
		Front    = 6,
		Back     = 7,
		MAX      = 8
	};

	/**
	 * Enum MeshModelingTools.EEditPivotSnapDragRotationMode
	 */
	enum class EEditPivotSnapDragRotationMode : uint8_t
	{
		Ignore       = 0,
		Align        = 1,
		AlignFlipped = 2,
		LastValue    = 3,
		MAX          = 4
	};

	/**
	 * Enum MeshModelingTools.EGroupEdgeInsertionMode
	 */
	enum class EGroupEdgeInsertionMode : uint8_t
	{
		Retriangulate = 0,
		PlaneCut      = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingTools.EHoleFillToolActions
	 */
	enum class EHoleFillToolActions : uint8_t
	{
		NoAction       = 0,
		SelectAll      = 1,
		ClearSelection = 2,
		MAX            = 3
	};

	/**
	 * Enum MeshModelingTools.EMeshAttributePaintToolActions
	 */
	enum class EMeshAttributePaintToolActions : uint8_t
	{
		NoAction = 0,
		MAX      = 1
	};

	/**
	 * Enum MeshModelingTools.EPlaneBrushSideMode
	 */
	enum class EPlaneBrushSideMode : uint8_t
	{
		BothSides   = 0,
		PushDown    = 1,
		PullTowards = 2,
		MAX         = 3
	};

	/**
	 * Enum MeshModelingTools.EMeshEditingMaterialModes
	 */
	enum class EMeshEditingMaterialModes : uint8_t
	{
		ExistingMaterial = 0,
		Diffuse          = 1,
		Grey             = 2,
		Soft             = 3,
		TangentNormal    = 4,
		Custom           = 5,
		MAX              = 6
	};

	/**
	 * Enum MeshModelingTools.ESetMeshMaterialMode
	 */
	enum class ESetMeshMaterialMode : uint8_t
	{
		KeepOriginal = 0,
		Checkerboard = 1,
		Override     = 2,
		MAX          = 3
	};

	/**
	 * Enum MeshModelingTools.EMeshSculptFalloffType
	 */
	enum class EMeshSculptFalloffType : uint8_t
	{
		Smooth     = 0,
		Linear     = 1,
		Inverse    = 2,
		Round      = 3,
		BoxSmooth  = 4,
		BoxLinear  = 5,
		BoxInverse = 6,
		BoxRound   = 7,
		LastValue  = 8,
		MAX        = 9
	};

	/**
	 * Enum MeshModelingTools.EMeshFacesColorMode
	 */
	enum class EMeshFacesColorMode : uint8_t
	{
		None         = 0,
		ByGroup      = 1,
		ByMaterialID = 2,
		ByUVIsland   = 3,
		MAX          = 4
	};

	/**
	 * Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
	 */
	enum class EMeshSelectionToolPrimaryMode : uint8_t
	{
		Brush           = 0,
		VolumetricBrush = 1,
		AngleFiltered   = 2,
		Visible         = 3,
		AllConnected    = 4,
		AllInGroup      = 5,
		ByMaterial      = 6,
		ByUVIsland      = 7,
		AllWithinAngle  = 8,
		MAX             = 9
	};

	/**
	 * Enum MeshModelingTools.EMeshSelectionToolActions
	 */
	enum class EMeshSelectionToolActions : uint8_t
	{
		NoAction                         = 0,
		SelectAll                        = 1,
		ClearSelection                   = 2,
		InvertSelection                  = 3,
		GrowSelection                    = 4,
		ShrinkSelection                  = 5,
		ExpandToConnected                = 6,
		SelectLargestComponentByTriCount = 7,
		SelectLargestComponentByArea     = 8,
		OptimizeSelection                = 9,
		DeleteSelected                   = 10,
		DisconnectSelected               = 11,
		SeparateSelected                 = 12,
		FlipSelected                     = 13,
		CreateGroup                      = 14,
		CycleSelectionMode               = 15,
		CycleViewMode                    = 16,
		MAX                              = 17
	};

	/**
	 * Enum MeshModelingTools.ENonlinearOperationType
	 */
	enum class ENonlinearOperationType : uint8_t
	{
		Bend  = 0,
		Flare = 1,
		Twist = 2,
		MAX   = 3
	};

	/**
	 * Enum MeshModelingTools.EMeshVertexSculptBrushType
	 */
	enum class EMeshVertexSculptBrushType : uint8_t
	{
		Move             = 0,
		PullKelvin       = 1,
		PullSharpKelvin  = 2,
		Smooth           = 3,
		SmoothFill       = 4,
		Offset           = 5,
		SculptView       = 6,
		SculptMax        = 7,
		Inflate          = 8,
		ScaleKelvin      = 9,
		Pinch            = 10,
		TwistKelvin      = 11,
		Flatten          = 12,
		Plane            = 13,
		PlaneViewAligned = 14,
		FixedPlane       = 15,
		LastValue        = 16,
		MAX              = 17
	};

	/**
	 * Enum MeshModelingTools.EMirrorToolAction
	 */
	enum class EMirrorToolAction : uint8_t
	{
		NoAction      = 0,
		ShiftToCenter = 1,
		Left          = 2,
		Right         = 3,
		Up            = 4,
		Down          = 5,
		Forward       = 6,
		Backward      = 7,
		MAX           = 8
	};

	/**
	 * Enum MeshModelingTools.EMirrorCtrlClickBehavior
	 */
	enum class EMirrorCtrlClickBehavior : uint8_t
	{
		Reposition            = 0,
		RepositionAndReorient = 1,
		MAX                   = 2
	};

	/**
	 * Enum MeshModelingTools.EMirrorOperationMode
	 */
	enum class EMirrorOperationMode : uint8_t
	{
		MirrorAndAppend = 0,
		MirrorExisting  = 1,
		MAX             = 2
	};

	/**
	 * Enum MeshModelingTools.EMirrorSaveMode
	 */
	enum class EMirrorSaveMode : uint8_t
	{
		UpdateAssets    = 0,
		CreateNewAssets = 1,
		MAX             = 2
	};

	/**
	 * Enum MeshModelingTools.EOffsetMeshToolOffsetType
	 */
	enum class EOffsetMeshToolOffsetType : uint8_t
	{
		Iterative = 0,
		Implicit  = 1,
		MAX       = 2
	};

	/**
	 * Enum MeshModelingTools.EMaterialBoundaryConstraint
	 */
	enum class EMaterialBoundaryConstraint : uint8_t
	{
		Fixed  = 0,
		Refine = 1,
		Free   = 2,
		Ignore = 3,
		MAX    = 4
	};

	/**
	 * Enum MeshModelingTools.EGroupBoundaryConstraint
	 */
	enum class EGroupBoundaryConstraint : uint8_t
	{
		Fixed  = 0,
		Refine = 1,
		Free   = 2,
		Ignore = 3,
		MAX    = 4
	};

	/**
	 * Enum MeshModelingTools.EMeshBoundaryConstraint
	 */
	enum class EMeshBoundaryConstraint : uint8_t
	{
		Fixed  = 0,
		Refine = 1,
		Free   = 2,
		MAX    = 3
	};

	/**
	 * Enum MeshModelingTools.EOcclusionCalculationUIMode
	 */
	enum class EOcclusionCalculationUIMode : uint8_t
	{
		GeneralizedWindingNumber = 0,
		RaycastOcclusionSamples  = 1,
		MAX                      = 2
	};

	/**
	 * Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
	 */
	enum class EOcclusionTriangleSamplingUIMode : uint8_t
	{
		Vertices             = 0,
		VerticesAndCentroids = 1,
		MAX                  = 2
	};

	/**
	 * Enum MeshModelingTools.ERevolvePropertiesQuadSplit
	 */
	enum class ERevolvePropertiesQuadSplit : uint8_t
	{
		Uniform          = 0,
		ShortestDiagonal = 1,
		MAX              = 2
	};

	/**
	 * Enum MeshModelingTools.ERevolvePropertiesPolygroupMode
	 */
	enum class ERevolvePropertiesPolygroupMode : uint8_t
	{
		Single                  = 0,
		PerFace                 = 1,
		PerStep                 = 2,
		AccordingToProfileCurve = 3,
		MAX                     = 4
	};

	/**
	 * Enum MeshModelingTools.ERevolvePropertiesCapFillMode
	 */
	enum class ERevolvePropertiesCapFillMode : uint8_t
	{
		None        = 0,
		Delaunay    = 1,
		EarClipping = 2,
		CenterFan   = 3,
		MAX         = 4
	};

	/**
	 * Enum MeshModelingTools.EProjectedHullAxis
	 */
	enum class EProjectedHullAxis : uint8_t
	{
		X                    = 0,
		Y                    = 1,
		Z                    = 2,
		SmallestBoxDimension = 3,
		SmallestVolume       = 4,
		MAX                  = 5
	};

	/**
	 * Enum MeshModelingTools.ECollisionGeometryType
	 */
	enum class ECollisionGeometryType : uint8_t
	{
		KeepExisting   = 0,
		AlignedBoxes   = 1,
		OrientedBoxes  = 2,
		MinimalSpheres = 3,
		Capsules       = 4,
		ConvexHulls    = 5,
		SweptHulls     = 6,
		MinVolume      = 7,
		None           = 8,
		MAX            = 9
	};

	/**
	 * Enum MeshModelingTools.ESetCollisionGeometryInputMode
	 */
	enum class ESetCollisionGeometryInputMode : uint8_t
	{
		CombineAll       = 0,
		PerInputObject   = 1,
		PerMeshComponent = 2,
		PerMeshGroup     = 3,
		MAX              = 4
	};

	/**
	 * Enum MeshModelingTools.ESmoothMeshToolSmoothType
	 */
	enum class ESmoothMeshToolSmoothType : uint8_t
	{
		Iterative = 0,
		Implicit  = 1,
		Diffusion = 2,
		MAX       = 3
	};

	/**
	 * Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
	 */
	enum class ETransformMeshesSnapDragRotationMode : uint8_t
	{
		Ignore       = 0,
		Align        = 1,
		AlignFlipped = 2,
		LastValue    = 3,
		MAX          = 4
	};

	/**
	 * Enum MeshModelingTools.ETransformMeshesSnapDragSource
	 */
	enum class ETransformMeshesSnapDragSource : uint8_t
	{
		ClickPoint = 0,
		Pivot      = 1,
		LastValue  = 2,
		MAX        = 3
	};

	/**
	 * Enum MeshModelingTools.ETransformMeshesTransformMode
	 */
	enum class ETransformMeshesTransformMode : uint8_t
	{
		SharedGizmo      = 0,
		SharedGizmoLocal = 1,
		PerObjectGizmo   = 2,
		LastValue        = 3,
		MAX              = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MeshModelingTools.PhysicsSphereData
	 * Size -> 0x0070
	 */
	struct FPhysicsSphereData
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQ85[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FKShapeElem                                         Element;                                                 // 0x0040(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingTools.PhysicsBoxData
	 * Size -> 0x0070
	 */
	struct FPhysicsBoxData
	{
	public:
		struct FVector                                             Dimensions;                                              // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_653X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FKShapeElem                                         Element;                                                 // 0x0040(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingTools.PhysicsCapsuleData
	 * Size -> 0x0070
	 */
	struct FPhysicsCapsuleData
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TCAF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FKShapeElem                                         Element;                                                 // 0x0040(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingTools.PhysicsConvexData
	 * Size -> 0x0038
	 */
	struct FPhysicsConvexData
	{
	public:
		int32_t                                                    NumVertices;                                             // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFaces;                                                // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKShapeElem                                         Element;                                                 // 0x0008(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingTools.PerlinLayerProperties
	 * Size -> 0x0008
	 */
	struct FPerlinLayerProperties
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingTools.EditPivotTarget
	 * Size -> 0x0010
	 */
	struct FEditPivotTarget
	{
	public:
		class UTransformProxy*                                     TransformProxy;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformGizmo*                                     TransformGizmo;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingTools.TransformMeshesTarget
	 * Size -> 0x0010
	 */
	struct FTransformMeshesTarget
	{
	public:
		class UTransformProxy*                                     TransformProxy;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformGizmo*                                     TransformGizmo;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
