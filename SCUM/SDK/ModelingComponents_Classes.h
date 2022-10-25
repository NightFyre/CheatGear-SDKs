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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ModelingComponents.BaseCreateFromSelectedToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_3NHU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OnAcceptHandleSourcesProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
	{
	public:
		EHandleSourcesMethod                                       OnToolAccept;                                            // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KPL[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
	{
	public:
		EBaseCreateFromSelectedTargetType                          WriteOutputTo;                                           // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QWU[0x3];                                   // 0x0069(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_TE2N[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OutputName;                                              // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputAsset;                                             // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.TransformInputsToolProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UTransformInputsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bShowTransformUI;                                        // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FT26[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseCreateFromSelectedTool
	 * Size -> 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
	 */
	class UBaseCreateFromSelectedTool : public UMultiSelectionTool
	{
	public:
		unsigned char                                              UnknownData_2TPX[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformInputsToolProperties*                      TransformProperties;                                     // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBaseCreateFromSelectedHandleSourceProperties*       HandleSourcesProperties;                                 // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UTransformProxy*>                             TransformProxies;                                        // 0x00B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UTransformGizmo*>                             TransformGizmos;                                         // 0x00C0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FVector>                                     TransformInitialScales;                                  // 0x00D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z2BD[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseDynamicMeshComponent
	 * Size -> 0x0048 (FullSize[0x04C0] - InheritedSize[0x0478])
	 */
	class UBaseDynamicMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_FYN5[0x8];                                   // 0x0478(0x0008) Fix Super Size
		unsigned char                                              UnknownData_XR32[0x40];                                  // 0x0480(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseMeshProcessingToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseMeshProcessingTool
	 * Size -> 0x0378 (FullSize[0x0400] - InheritedSize[0x0088])
	 */
	class UBaseMeshProcessingTool : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_D0OO[0x28];                                  // 0x0088(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SHAG[0x348];                                 // 0x00B8(0x0348) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseVoxelTool
	 * Size -> 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
	 */
	class UBaseVoxelTool : public UBaseCreateFromSelectedTool
	{
	public:
		class UVoxelProperties*                                    VoxProperties;                                           // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VM2I[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.CollectSurfacePathMechanic
	 * Size -> 0x0520 (FullSize[0x0550] - InheritedSize[0x0030])
	 */
	class UCollectSurfacePathMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_4DHV[0x520];                                 // 0x0030(0x0520) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.ConstructionPlaneMechanic
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class UConstructionPlaneMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_KTEQ[0x98];                                  // 0x0030(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformGizmo*                                     PlaneTransformGizmo;                                     // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVYZ[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickToSetPlaneBehavior;                                 // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.CurveControlPointsMechanic
	 * Size -> 0x0620 (FullSize[0x0650] - InheritedSize[0x0030])
	 */
	class UCurveControlPointsMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_MYSA[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickBehavior;                                           // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWAW[0x498];                                 // 0x0050(0x0498) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x04E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  DrawnControlPoints;                                      // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   DrawnControlSegments;                                    // 0x04F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  PreviewPoint;                                            // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   PreviewSegment;                                          // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_321N[0x78];                                  // 0x0510(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PointTransformProxy;                                     // 0x0588(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     PointTransformGizmo;                                     // 0x0590(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NC6L[0xB8];                                  // 0x0598(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.DynamicMeshReplacementChangeTarget
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDynamicMeshReplacementChangeTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_1X57[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.LineSetComponent
	 * Size -> 0x0068 (FullSize[0x04E0] - InheritedSize[0x0478])
	 */
	class ULineSetComponent : public UMeshComponent
	{
	public:
		class UMaterialInterface*                                  LineMaterial;                                            // 0x0478(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x0480(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x049C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LPX5[0x43];                                  // 0x049D(0x0043) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UMeshOpPreviewWithBackgroundCompute : public UObject
	{
	public:
		unsigned char                                              UnknownData_MTF1[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          StandardMaterials;                                       // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  WorkingMaterial;                                         // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXSY[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshReplacementCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshReplacementCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshVertexCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshVertexCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MultiTransformer
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UMultiTransformer : public UObject
	{
	public:
		unsigned char                                              UnknownData_0YXK[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractiveGizmoManager*                            GizmoManager;                                            // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VE9[0x68];                                  // 0x0078(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformGizmo*                                     TransformGizmo;                                          // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     TransformProxy;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTX5[0x50];                                  // 0x00F0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OctreeDynamicMeshComponent
	 * Size -> 0x0110 (FullSize[0x05D0] - InheritedSize[0x04C0])
	 */
	class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
	{
	public:
		unsigned char                                              UnknownData_BAMC[0x18];                                  // 0x04C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExplicitShowWireframe;                                  // 0x04D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DABR[0xF7];                                  // 0x04D9(0x00F7) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PlaneDistanceFromHitMechanic
	 * Size -> 0x0470 (FullSize[0x04A0] - InheritedSize[0x0030])
	 */
	class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_9PWP[0x470];                                 // 0x0030(0x0470) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PointSetComponent
	 * Size -> 0x0068 (FullSize[0x04E0] - InheritedSize[0x0478])
	 */
	class UPointSetComponent : public UMeshComponent
	{
	public:
		class UMaterialInterface*                                  PointMaterial;                                           // 0x0478(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x0480(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x049C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5OZB[0x43];                                  // 0x049D(0x0043) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewMesh
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UPreviewMesh : public UObject
	{
	public:
		unsigned char                                              UnknownData_6ORK[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBuildSpatialDataStructure;                              // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawOnTop;                                              // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8IO7[0xE];                                   // 0x0042(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleDynamicMeshComponent*                         DynamicMeshComponent;                                    // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WNA9[0x88];                                  // 0x0058(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolyEditPreviewMesh
	 * Size -> 0x03F0 (FullSize[0x04D0] - InheritedSize[0x00E0])
	 */
	class UPolyEditPreviewMesh : public UPreviewMesh
	{
	public:
		unsigned char                                              UnknownData_R185[0x3F0];                                 // 0x00E0(0x03F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolygonSelectionMechanicProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bSelectFaces;                                            // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdges;                                            // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectVertices;                                         // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdgeLoops;                                        // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdgeRings;                                        // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferProjectedElement;                                 // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectDownRay;                                          // 0x0066(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreOcclusion;                                        // 0x0067(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolygonSelectionMechanic
	 * Size -> 0x0800 (FullSize[0x0830] - InheritedSize[0x0030])
	 */
	class UPolygonSelectionMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_CWSX[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPolygonSelectionMechanicProperties*                 Properties;                                              // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APW3[0x4C8];                                 // 0x0058(0x04C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x0520(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTriangleSetComponent*                               DrawnTriangleSetComponent;                               // 0x0528(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7EAJ[0x50];                                  // 0x0530(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  HighlightedFaceMaterial;                                 // 0x0580(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L3MK[0x2A8];                                 // 0x0588(0x02A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewGeometryActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class APreviewGeometryActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewGeometry
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UPreviewGeometry : public UObject
	{
	public:
		class APreviewGeometryActor*                               ParentActor;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class ULineSetComponent*>              LineSets;                                                // 0x0030(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		bool SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible);
		bool SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial);
		void SetAllLineSetsMaterial(class UMaterialInterface* Material);
		bool RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy);
		void RemoveAllLineSets(bool bDestroy);
		class APreviewGeometryActor* GetActor();
		class ULineSetComponent* FindLineSet(const class FString& LineSetIdentifier);
		void Disconnect();
		void CreateInWorld(class UWorld* World, const struct FTransform& WithTransform);
		class ULineSetComponent* AddLineSet(const class FString& LineSetIdentifier);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewMeshActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class APreviewMeshActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SimpleDynamicMeshComponent
	 * Size -> 0x0150 (FullSize[0x0610] - InheritedSize[0x04C0])
	 */
	class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
	{
	public:
		EDynamicMeshTangentCalcType                                TangentsType;                                            // 0x04C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvalidateProxyOnChange;                                // 0x04C1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLMJ[0x36];                                  // 0x04C2(0x0036) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExplicitShowWireframe;                                  // 0x04F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IL0N[0x47];                                  // 0x04F9(0x0047) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDrawOnTop;                                              // 0x0540(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P11U[0xCF];                                  // 0x0541(0x00CF) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
	{
	public:
		ESpaceCurveControlPointTransformMode                       TransformMode;                                           // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAKW[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ESpaceCurveControlPointOriginMode                          TransformOrigin;                                         // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98LK[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Softness;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpaceCurveControlPointFalloffType                         SoftFalloff;                                             // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BGTG[0x3];                                   // 0x006D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpaceCurveDeformationMechanic
	 * Size -> 0x0280 (FullSize[0x02B0] - InheritedSize[0x0030])
	 */
	class USpaceCurveDeformationMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_5183[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickBehavior;                                           // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZRJ[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpaceCurveDeformationMechanicPropertySet*           TransformProperties;                                     // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4NNZ[0xF8];                                  // 0x0070(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  RenderPoints;                                            // 0x0170(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   RenderSegments;                                          // 0x0178(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YHEM[0x38];                                  // 0x0180(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PointTransformProxy;                                     // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     PointTransformGizmo;                                     // 0x01C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SSB0[0xE8];                                  // 0x01C8(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpatialCurveDistanceMechanic
	 * Size -> 0x03C0 (FullSize[0x03F0] - InheritedSize[0x0030])
	 */
	class USpatialCurveDistanceMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_FPFX[0x3C0];                                 // 0x0030(0x03C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.TriangleSetComponent
	 * Size -> 0x00E8 (FullSize[0x0560] - InheritedSize[0x0478])
	 */
	class UTriangleSetComponent : public UMeshComponent
	{
	public:
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x0478(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x0494(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UUDM[0xCB];                                  // 0x0495(0x00CB) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.UVLayoutPreviewProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bVisible;                                                // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36FR[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleFactor;                                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUVLayoutPreviewSide                                       WhichSide;                                               // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4707[0x3];                                   // 0x0069(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bShowWireframe;                                          // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VQ0[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Shift;                                                   // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.UVLayoutPreview
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UUVLayoutPreview : public UObject
	{
	public:
		class UUVLayoutPreviewProperties*                          Settings;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTriangleSetComponent*                               TriangleComponent;                                       // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBackingRectangle;                                   // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7L4[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  BackingRectangleMaterial;                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6BQ[0xF0];                                  // 0x0050(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.VoxelProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UVoxelProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    VoxelCount;                                              // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSimplify;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveInternalSurfaces;                                 // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEDR[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SimplifyMaxErrorFactor;                                  // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     CubeRootMinComponentVolume;                              // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.WeightMapSetProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UWeightMapSetProperties : public UInteractiveToolPropertySet
	{
	public:
		class FName                                                WeightMap;                                               // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      WeightMapsList;                                          // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInvertWeightMap;                                        // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJ9V[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetWeightMapsFunc();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
