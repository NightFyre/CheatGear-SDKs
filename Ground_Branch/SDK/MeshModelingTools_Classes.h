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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MeshModelingTools.AddPatchToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAddPatchToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_WU77[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddPatchToolProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UAddPatchToolProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      Width;                                                   // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Subdivisions;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Shift;                                                   // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddPatchTool
	 * Size -> 0x0078 (FullSize[0x0100] - InheritedSize[0x0088])
	 */
	class UAddPatchTool : public USingleClickTool
	{
	public:
		unsigned char                                              UnknownData_0LJ2[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAddPatchToolProperties*                             ShapeSettings;                                           // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YUF2[0x58];                                  // 0x00A8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddPrimitiveToolBuilder
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_POHW[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralShapeToolProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bInstanceIfPossible;                                     // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMakeMeshPolygroupMode                                     PolygroupMode;                                           // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMakeMeshPlacementType                                     PlaceMode;                                               // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToGrid;                                             // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMakeMeshPivotLocation                                     PivotLocation;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3UTK[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Rotation;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignShapeToPlacementSurface;                           // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18RO[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralRectangleToolProperties
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
	{
	public:
		float                                                      Width;                                                   // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WidthSubdivisions;                                       // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DepthSubdivisions;                                       // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralBoxToolProperties
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UProceduralBoxToolProperties : public UProceduralRectangleToolProperties
	{
	public:
		float                                                      Height;                                                  // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeightSubdivisions;                                      // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralRoundedRectangleToolProperties
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UProceduralRoundedRectangleToolProperties : public UProceduralRectangleToolProperties
	{
	public:
		float                                                      CornerRadius;                                            // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CornerSlices;                                            // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralDiscToolProperties
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
	{
	public:
		float                                                      Radius;                                                  // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RadialSlices;                                            // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RadialSubdivisions;                                      // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8EP[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralPuncturedDiscToolProperties
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UProceduralPuncturedDiscToolProperties : public UProceduralDiscToolProperties
	{
	public:
		float                                                      HoleRadius;                                              // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2JL[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralTorusToolProperties
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
	{
	public:
		float                                                      MajorRadius;                                             // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinorRadius;                                             // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TubeSlices;                                              // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CrossSectionSlices;                                      // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralCylinderToolProperties
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
	{
	public:
		float                                                      Radius;                                                  // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RadialSlices;                                            // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeightSubdivisions;                                      // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralConeToolProperties
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UProceduralConeToolProperties : public UProceduralShapeToolProperties
	{
	public:
		float                                                      Radius;                                                  // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RadialSlices;                                            // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeightSubdivisions;                                      // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralArrowToolProperties
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
	{
	public:
		float                                                      ShaftRadius;                                             // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShaftHeight;                                             // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadRadius;                                              // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadHeight;                                              // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RadialSlices;                                            // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalSubdivisions;                                       // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralSphereToolProperties
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
	{
	public:
		float                                                      Radius;                                                  // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LatitudeSlices;                                          // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LongitudeSlices;                                         // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7O3[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProceduralSphericalBoxToolProperties
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UProceduralSphericalBoxToolProperties : public UProceduralShapeToolProperties
	{
	public:
		float                                                      Radius;                                                  // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Subdivisions;                                            // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.LastActorInfo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class ULastActorInfo : public UObject
	{
	public:
		unsigned char                                              UnknownData_TI23[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Actor;                                                   // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         StaticMesh;                                              // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProceduralShapeToolProperties*                      ShapeSettings;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddPrimitiveTool
	 * Size -> 0x0068 (FullSize[0x00F0] - InheritedSize[0x0088])
	 */
	class UAddPrimitiveTool : public USingleClickTool
	{
	public:
		unsigned char                                              UnknownData_ADT8[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProceduralShapeToolProperties*                      ShapeSettings;                                           // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULastActorInfo*                                      LastGenerated;                                           // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              AssetName;                                               // 0x00B0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SX9I[0x30];                                  // 0x00C0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddBoxPrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddBoxPrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddCylinderPrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddConePrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddConePrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddRectanglePrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddRoundedRectanglePrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddRoundedRectanglePrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddDiscPrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddDiscPrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddPuncturedDiscPrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddPuncturedDiscPrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddTorusPrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddTorusPrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddArrowPrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddArrowPrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddSpherePrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddSpherePrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AddSphericalBoxPrimitiveTool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAddSphericalBoxPrimitiveTool : public UAddPrimitiveTool
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AlignObjectsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AlignObjectsToolProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EAlignObjectsAlignTypes                                    AlignType;                                               // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCXE[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EAlignObjectsAlignToOptions                                AlignTo;                                                 // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZKK[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EAlignObjectsBoxPoint                                      BoxPosition;                                             // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZ0D[0x3];                                   // 0x0069(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bAlignX;                                                 // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignY;                                                 // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignZ;                                                 // 0x006E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42V2[0x1];                                   // 0x006F(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AlignObjectsTool
	 * Size -> 0x00B0 (FullSize[0x0140] - InheritedSize[0x0090])
	 */
	class UAlignObjectsTool : public UMultiSelectionTool
	{
	public:
		unsigned char                                              UnknownData_RP1F[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAlignObjectsToolProperties*                         AlignProps;                                              // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTIY[0xA0];                                  // 0x00A0(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBakeMeshAttributeMapsToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_3826[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakeMeshAttributeMapsToolProperties
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EBakeMapType                                               MapType;                                                 // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKNY[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EBakeTextureResolution                                     Resolution;                                              // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3IF[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              UVLayer;                                                 // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      UVLayerNamesList;                                        // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseWorldSpace;                                          // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVZ5[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Result;                                                  // 0x0090(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetUVLayerNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakedNormalMapToolProperties
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBakedNormalMapToolProperties : public UInteractiveToolPropertySet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakedOcclusionMapToolProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UBakedOcclusionMapToolProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    OcclusionRays;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGaussianBlur;                                           // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JYC[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlurRadius;                                              // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BiasAngle;                                               // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUBE[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakedOcclusionMapVisualizationProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBakedOcclusionMapVisualizationProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      BaseGrayLevel;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionMultiplier;                                     // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakedCurvatureMapToolProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UBakedCurvatureMapToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EBakedCurvatureTypeMode                                    CurvatureType;                                           // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IFS[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EBakedCurvatureColorMode                                   ColorMode;                                               // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OMR[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      RangeMultiplier;                                         // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRangeMultiplier;                                      // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBakedCurvatureClampMode                                   Clamping;                                                // 0x0070(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMJQ[0x3];                                   // 0x0071(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bGaussianBlur;                                           // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8G5J[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlurRadius;                                              // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INII[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakedTexture2DImageProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBakedTexture2DImageProperties : public UInteractiveToolPropertySet
	{
	public:
		class UTexture2D*                                          SourceTexture;                                           // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UVLayer;                                                 // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MSY[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakeMeshAttributeMapsTool
	 * Size -> 0x0440 (FullSize[0x04D0] - InheritedSize[0x0090])
	 */
	class UBakeMeshAttributeMapsTool : public UMultiSelectionTool
	{
	public:
		class UBakeMeshAttributeMapsToolProperties*                Settings;                                                // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakedNormalMapToolProperties*                       NormalMapProps;                                          // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakedOcclusionMapToolProperties*                    OcclusionMapProps;                                       // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakedCurvatureMapToolProperties*                    CurvatureMapProps;                                       // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakedTexture2DImageProperties*                      Texture2DProps;                                          // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakedOcclusionMapVisualizationProperties*           VisualizationProps;                                      // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2F19[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            PreviewMaterial;                                         // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5VRG[0x358];                                 // 0x00D8(0x0358) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          CachedNormalMap;                                         // 0x0430(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2NA2[0x18];                                  // 0x0438(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          CachedOcclusionMap;                                      // 0x0450(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7S1F[0x28];                                  // 0x0458(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          CachedCurvatureMap;                                      // 0x0480(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JIOE[0x10];                                  // 0x0488(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          CachedMeshPropertyMap;                                   // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V91E[0x10];                                  // 0x04A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          CachedTexture2DImageMap;                                 // 0x04B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyNormalMap;                                          // 0x04B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyColorMapBlack;                                      // 0x04C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyColorMapWhite;                                      // 0x04C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakeTransformToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBakeTransformToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_XHCE[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakeTransformToolProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBakeTransformToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bBakeRotation;                                           // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBakeScaleMethod                                           BakeScale;                                               // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecenterPivot;                                          // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENCH[0x5];                                   // 0x0063(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BakeTransformTool
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UBakeTransformTool : public UMultiSelectionTool
	{
	public:
		class UBakeTransformToolProperties*                        BasicProperties;                                         // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AB0B[0x20];                                  // 0x0098(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PhysicsObjectToolPropertySet
	 * Size -> 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
	 */
	class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              ObjectName;                                              // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionGeometryMode                                     CollisionType;                                           // 0x0070(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FWX[0x3];                                   // 0x0071(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_CHCJ[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPhysicsSphereData>                          Spheres;                                                 // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FPhysicsBoxData>                             Boxes;                                                   // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FPhysicsCapsuleData>                         Capsules;                                                // 0x0098(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FPhysicsConvexData>                          Convexes;                                                // 0x00A8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.CollisionGeometryVisualizationProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      LineThickness;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowHidden;                                             // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9IS[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Color;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9N2[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.CombineMeshesToolBuilder
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_BG2L[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.CombineMeshesToolProperties
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bIsDuplicateMode;                                        // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18CN[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECombineTargetType                                         WriteOutputTo;                                           // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDQX[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              OutputName;                                              // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputAsset;                                             // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.CombineMeshesTool
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UCombineMeshesTool : public UMultiSelectionTool
	{
	public:
		class UCombineMeshesToolProperties*                        BasicProperties;                                         // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOnAcceptHandleSourcesProperties*                    HandleSourceProperties;                                  // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YQ6D[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ConvertToPolygonsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ConvertToPolygonsToolProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EConvertToPolygonsMode                                     ConversionMode;                                          // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJE4[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      AngleTolerance;                                          // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCalculateNormals;                                       // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGroupColors;                                        // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NULM[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ConvertToPolygonsTool
	 * Size -> 0x0358 (FullSize[0x03E0] - InheritedSize[0x0088])
	 */
	class UConvertToPolygonsTool : public USingleSelectionTool
	{
	public:
		class UConvertToPolygonsToolProperties*                    Settings;                                                // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VFQT[0x348];                                 // 0x0098(0x0348) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.CSGMeshesToolProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		ECSGOperation                                              Operation;                                               // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowNewBoundaryEdges;                                   // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttemptFixHoles;                                        // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseFirstMeshMaterials;                              // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1STH[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.CSGMeshesTool
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	class UCSGMeshesTool : public UBaseCreateFromSelectedTool
	{
	public:
		class UCSGMeshesToolProperties*                            CSGProperties;                                           // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N0YI[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULineSetComponent*                                   DrawnLineSet;                                            // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JU0V[0x10];                                  // 0x0110(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.CSGMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DeformMeshPolygonsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DeformMeshPolygonsTransformProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
	{
	public:
		EGroupTopologyDeformationStrategy                          DeformationStrategy;                                     // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQuickTransformerMode                                      TransformMode;                                           // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectFaces;                                            // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdges;                                            // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectVertices;                                         // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWireframe;                                          // 0x0066(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FX3[0x1];                                   // 0x0067(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWeightScheme                                              SelectedWeightScheme;                                    // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8B3[0x3];                                   // 0x0069(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_9BUN[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     HandleWeight;                                            // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPostFixHandles;                                         // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTUU[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DeformMeshPolygonsTool
	 * Size -> 0x1230 (FullSize[0x12F0] - InheritedSize[0x00C0])
	 */
	class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
	{
	public:
		unsigned char                                              UnknownData_TBGO[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleDynamicMeshComponent*                         DynamicMeshComponent;                                    // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDeformMeshPolygonsTransformProperties*              TransformProps;                                          // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FOFK[0x1218];                                // 0x00D8(0x1218) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DisplaceMeshCommonProperties
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
	{
	public:
		EDisplaceMeshToolDisplaceType                              DisplacementType;                                        // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5MF[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DisplaceIntensity;                                       // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Subdivisions;                                            // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WeightMap;                                               // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      WeightMapsList;                                          // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInvertWeightMap;                                        // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableSizeWarning;                                     // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RROY[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetWeightMapsFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DisplaceMeshTextureMapProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
	{
	public:
		class UTexture2D*                                          DisplacementMap;                                         // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bEnableFilter;                                           // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_801T[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FilterDirection;                                         // 0x0064(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterWidth;                                             // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CR1[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
	{
	public:
		TArray<struct FPerlinLayerProperties>                      PerlinLayerProperties;                                   // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DisplaceMeshSineWaveProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      SineWaveFrequency;                                       // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SineWavePhaseShift;                                      // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SineWaveDirection;                                       // 0x0068(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UJU[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DisplaceMeshToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DisplaceMeshTool
	 * Size -> 0x0368 (FullSize[0x03F0] - InheritedSize[0x0088])
	 */
	class UDisplaceMeshTool : public USingleSelectionTool
	{
	public:
		class UDisplaceMeshCommonProperties*                       CommonProperties;                                        // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDisplaceMeshDirectionalFilterProperties*            DirectionalFilterProperties;                             // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDisplaceMeshTextureMapProperties*                   TextureMapProperties;                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDisplaceMeshPerlinNoiseProperties*                  NoiseProperties;                                         // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDisplaceMeshSineWaveProperties*                     SineWaveProperties;                                      // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SUI[0x340];                                 // 0x00B0(0x0340) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawAndRevolveToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_2O5R[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RevolveProperties
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class URevolveProperties : public UInteractiveToolPropertySet
	{
	public:
		double                                                     RevolutionDegrees;                                       // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     RevolutionDegreesOffset;                                 // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Steps;                                                   // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseRevolutionDirection;                             // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipMesh;                                               // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProfileIsCrossSectionOfSide;                            // 0x0076(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERevolvePropertiesPolygroupMode                            PolygroupMode;                                           // 0x0077(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERevolvePropertiesQuadSplit                                QuadSplitMode;                                           // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3K1E[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DiagonalProportionTolerance;                             // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERevolvePropertiesCapFillMode                              CapFillMode;                                             // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeldFullRevolution;                                     // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeldVertsOnAxis;                                        // 0x008A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MMM[0x5];                                   // 0x008B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AxisWeldTolerance;                                       // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSharpNormals;                                           // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6QJ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SharpNormalAngleTolerance;                               // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipVs;                                                 // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUVsSkipFullyWeldedEdges;                                // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VA6[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RevolveToolProperties
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class URevolveToolProperties : public URevolveProperties
	{
	public:
		bool                                                       bConnectOpenProfileToAxis;                               // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYYQ[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DrawPlaneOrigin;                                         // 0x00B4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            DrawPlaneOrientation;                                    // 0x00C0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableSnapping;                                         // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowedToEditDrawPlane;                                 // 0x00CD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPT9[0x2];                                   // 0x00CE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RevolveOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URevolveOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_838S[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDrawAndRevolveTool*                                 RevolveTool;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawAndRevolveTool
	 * Size -> 0x00A0 (FullSize[0x0120] - InheritedSize[0x0080])
	 */
	class UDrawAndRevolveTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_8H8C[0x78];                                  // 0x0080(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveControlPointsMechanic*                         ControlPointsMechanic;                                   // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UConstructionPlaneMechanic*                          PlaneMechanic;                                           // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URevolveToolProperties*                              Settings;                                                // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawPolygonToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_ZJ59[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawPolygonToolStandardProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
	{
	public:
		EDrawPolygonDrawMode                                       PolygonType;                                             // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDrawPolygonOutputMode                                     OutputMode;                                              // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YP97[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FeatureSizeRatio;                                        // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtrudeHeight;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Steps;                                                   // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSelfIntersections;                                 // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGizmo;                                              // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MR7A[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawPolygonToolSnapProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bEnableSnapping;                                         // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToVertices;                                         // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToEdges;                                            // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToAngles;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToLengths;                                          // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UOJE[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SegmentLength;                                           // 0x0068(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitSceneObjects;                                        // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQ4B[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HitNormalOffset;                                         // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SREF[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawPolygonTool
	 * Size -> 0x04F0 (FullSize[0x0570] - InheritedSize[0x0080])
	 */
	class UDrawPolygonTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_IJWW[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDrawPolygonToolStandardProperties*                  PolygonProperties;                                       // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDrawPolygonToolSnapProperties*                      SnapProperties;                                          // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C1Z1[0xB0];                                  // 0x00A0(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     PlaneTransformGizmo;                                     // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5XAL[0x3D8];                                 // 0x0168(0x03D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlaneDistanceFromHitMechanic*                       HeightMechanic;                                          // 0x0540(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WI5T[0x28];                                  // 0x0548(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawPolyPathToolBuilder
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		unsigned char                                              UnknownData_36SC[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawPolyPathProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UDrawPolyPathProperties : public UInteractiveToolPropertySet
	{
	public:
		EDrawPolyPathOutputMode                                    OutputType;                                              // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNIZ[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EDrawPolyPathWidthMode                                     WidthMode;                                               // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3NJ[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Width;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDrawPolyPathHeightMode                                    HeightMode;                                              // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEWU[0x3];                                   // 0x006D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Height;                                                  // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RampStartRatio;                                          // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0E2S[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawPolyPathExtrudeProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
	{
	public:
		EDrawPolyPathExtrudeDirection                              Direction;                                               // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5UY[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_J34V[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DrawPolyPathTool
	 * Size -> 0x0190 (FullSize[0x0210] - InheritedSize[0x0080])
	 */
	class UDrawPolyPathTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_XOTY[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDrawPolyPathProperties*                             TransformProps;                                          // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDrawPolyPathExtrudeProperties*                      ExtrudeProperties;                                       // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3URP[0x88];                                  // 0x00B8(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UConstructionPlaneMechanic*                          PlaneMechanic;                                           // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QISF[0xA0];                                  // 0x0148(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPolyEditPreviewMesh*                                EditPreview;                                             // 0x01E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlaneDistanceFromHitMechanic*                       ExtrudeHeightMechanic;                                   // 0x01F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpatialCurveDistanceMechanic*                       CurveDistMechanic;                                       // 0x01F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCollectSurfacePathMechanic*                         SurfacePathMechanic;                                     // 0x0200(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_53HB[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DynamicMeshBrushTool
	 * Size -> 0x0040 (FullSize[0x0200] - InheritedSize[0x01C0])
	 */
	class UDynamicMeshBrushTool : public UBaseBrushTool
	{
	public:
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x01C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I5V5[0x38];                                  // 0x01C8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DynamicMeshSculptToolBuilder
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		unsigned char                                              UnknownData_ECMY[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BrushSculptProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UBrushSculptProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bIsRemeshingEnabled;                                     // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDynamicMeshSculptBrushType                                PrimaryBrushType;                                        // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PY3[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrimaryBrushSpeed;                                       // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVFlow;                                         // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeTarget;                                           // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HAN[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothBrushSpeed;                                        // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetailPreservingSmooth;                                 // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JREQ[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshConstraintProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UMeshConstraintProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bPreserveSharpEdges;                                     // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshBoundaryConstraint                                    MeshBoundaryConstraint;                                  // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroupBoundaryConstraint                                   GroupBoundaryConstraint;                                 // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMaterialBoundaryConstraint                                MaterialBoundaryConstraint;                              // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventNormalFlips;                                     // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VA08[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RemeshProperties
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class URemeshProperties : public UMeshConstraintProperties
	{
	public:
		float                                                      SmoothingStrength;                                       // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlips;                                                  // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSplits;                                                 // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollapses;                                              // 0x006E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9RT[0x1];                                   // 0x006F(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BrushRemeshProperties
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBrushRemeshProperties : public URemeshProperties
	{
	public:
		bool                                                       bEnableRemeshing;                                        // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08AY[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TriangleSize;                                            // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreserveDetail;                                          // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KCG[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.FixedPlaneBrushProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bPropertySetEnabled;                                     // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGizmo;                                              // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToGrid;                                             // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5XF[0x1];                                   // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             position;                                                // 0x0064(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Rotation;                                                // 0x0070(0x0010) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DynamicMeshSculptTool
	 * Size -> 0x0BB0 (FullSize[0x0C70] - InheritedSize[0x00C0])
	 */
	class UDynamicMeshSculptTool : public UMeshSurfacePointTool
	{
	public:
		class USculptBrushProperties*                              BrushProperties;                                         // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBrushSculptProperties*                              SculptProperties;                                        // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USculptMaxBrushProperties*                           SculptMaxBrushProperties;                                // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UKelvinBrushProperties*                              KelvinBrushProperties;                                   // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBrushRemeshProperties*                              RemeshProperties;                                        // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFixedPlaneBrushProperties*                          GizmoProperties;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshEditingViewProperties*                          ViewProperties;                                          // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LONO[0x38];                                  // 0x00F8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBrushStampIndicator*                                BrushIndicator;                                          // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            BrushIndicatorMaterial;                                  // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPreviewMesh*                                        BrushIndicatorMesh;                                      // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOctreeDynamicMeshComponent*                         DynamicMeshComponent;                                    // 0x0148(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            ActiveOverrideMaterial;                                  // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EFHX[0xAF8];                                 // 0x0158(0x0AF8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformGizmo*                                     PlaneTransformGizmo;                                     // 0x0C50(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x0C58(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V13T[0x10];                                  // 0x0C60(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EdgeLoopInsertionToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEdgeLoopInsertionToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_5FTD[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EdgeLoopInsertionProperties
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
	{
	public:
		EEdgeLoopPositioningMode                                   PositionMode;                                            // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74HU[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EEdgeLoopInsertionMode                                     InsertionMode;                                           // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FOVU[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    NumLoops;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXB8[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ProportionOffset;                                        // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     DistanceOffset;                                          // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInteractive;                                            // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipOffsetDirection;                                    // 0x0081(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWireframe;                                              // 0x0082(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVBY[0x5];                                   // 0x0083(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     VertexTolerance;                                         // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EdgeLoopInsertionOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEdgeLoopInsertionOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_DSZ0[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEdgeLoopInsertionTool*                              Tool;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EdgeLoopInsertionTool
	 * Size -> 0x0478 (FullSize[0x0500] - InheritedSize[0x0088])
	 */
	class UEdgeLoopInsertionTool : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_N4GS[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEdgeLoopInsertionProperties*                        Settings;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1228[0x260];                                 // 0x00A0(0x0260) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_93HW[0x1F8];                                 // 0x0308(0x01F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditMeshPolygonsToolBuilder
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		unsigned char                                              UnknownData_IC8Q[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PolyEditCommonProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UPolyEditCommonProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bShowWireframe;                                          // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdgeLoops;                                        // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O27D[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELocalFrameMode                                            LocalFrameMode;                                          // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QF4[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bLockRotation;                                           // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9R7[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_TJKX[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditMeshPolygonsToolActions
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
	{
	public:
		void Retriangulate();
		void RecalcNormals();
		void Outset();
		void Offset();
		void Merge();
		void Inset();
		void Flip();
		void Extrude();
		void Disconnect();
		void Delete();
		void Decompose();
		void CutFaces();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
	{
	public:
		void RecalcNormals();
		void Poke();
		void Outset();
		void Offset();
		void Inset();
		void Flip();
		void Extrude();
		void Disconnect();
		void Delete();
		void CutFaces();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditMeshPolygonsToolUVActions
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
	{
	public:
		void PlanarProjection();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
	{
	public:
		void Weld();
		void Straighten();
		void FillHole();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
	{
	public:
		void Weld();
		void Split();
		void Flip();
		void FillHole();
		void Collapse();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PolyEditExtrudeProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
	{
	public:
		EPolyEditExtrudeDirection                                  Direction;                                               // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KC5G[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bShellsToSolids;                                         // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AYZA[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PolyEditOffsetProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bUseFaceNormals;                                         // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JRS9[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PolyEditInsetProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UPolyEditInsetProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bReproject;                                              // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZAY[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Softness;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBoundaryOnly;                                           // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCBG[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AreaScale;                                               // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PolyEditOutsetProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UPolyEditOutsetProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      Softness;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBoundaryOnly;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3FE[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AreaScale;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6JM[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PolyEditCutProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UPolyEditCutProperties : public UInteractiveToolPropertySet
	{
	public:
		EPolyEditCutPlaneOrientation                               Orientation;                                             // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRDZ[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bSnapToVertices;                                         // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3SF[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PolyEditSetUVProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bShowMaterial;                                           // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1BTQ[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditMeshPolygonsTool
	 * Size -> 0x0710 (FullSize[0x07D0] - InheritedSize[0x00C0])
	 */
	class UEditMeshPolygonsTool : public UMeshSurfacePointTool
	{
	public:
		unsigned char                                              UnknownData_KSA0[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleDynamicMeshComponent*                         DynamicMeshComponent;                                    // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolyEditCommonProperties*                           CommonProps;                                             // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditMeshPolygonsToolActions*                        EditActions;                                             // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditMeshPolygonsToolActions_Triangles*              EditActions_Triangles;                                   // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditMeshPolygonsToolEdgeActions*                    EditEdgeActions;                                         // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditMeshPolygonsToolEdgeActions_Triangles*          EditEdgeActions_Triangles;                               // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditMeshPolygonsToolUVActions*                      EditUVActions;                                           // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolyEditExtrudeProperties*                          ExtrudeProperties;                                       // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolyEditOffsetProperties*                           OffsetProperties;                                        // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolyEditInsetProperties*                            InsetProperties;                                         // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolyEditOutsetProperties*                           OutsetProperties;                                        // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolyEditCutProperties*                              CutProperties;                                           // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolyEditSetUVProperties*                            SetUVProperties;                                         // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolygonSelectionMechanic*                           SelectionMechanic;                                       // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JX7O[0x8];                                   // 0x0140(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMultiTransformer*                                   MultiTransformer;                                        // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_269V[0x350];                                 // 0x0150(0x0350) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPolyEditPreviewMesh*                                EditPreview;                                             // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MXYV[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlaneDistanceFromHitMechanic*                       ExtrudeHeightMechanic;                                   // 0x04B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpatialCurveDistanceMechanic*                       CurveDistMechanic;                                       // 0x04B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCollectSurfacePathMechanic*                         SurfacePathMechanic;                                     // 0x04C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5Y01[0x308];                                 // 0x04C8(0x0308) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditNormalsToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEditNormalsToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_YLSW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditNormalsToolProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UEditNormalsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bRecomputeNormals;                                       // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENormalCalculationMethod                                   NormalCalculationMethod;                                 // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixInconsistentNormals;                                 // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertNormals;                                          // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESplitNormalMethod                                         SplitNormalMethod;                                       // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GOD[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SharpEdgeAngleThreshold;                                 // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSharpVertices;                                     // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WP1C[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditNormalsAdvancedProperties
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditNormalsOperatorFactory
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEditNormalsOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_OYYW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditNormalsTool*                                    Tool;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANNB[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditNormalsTool
	 * Size -> 0x0070 (FullSize[0x0100] - InheritedSize[0x0090])
	 */
	class UEditNormalsTool : public UMultiSelectionTool
	{
	public:
		class UEditNormalsToolProperties*                          BasicProperties;                                         // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditNormalsAdvancedProperties*                      AdvancedProperties;                                      // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshOpPreviewWithBackgroundCompute*>         Previews;                                                // 0x00A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BPRY[0x50];                                  // 0x00B0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditPivotToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEditPivotToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditPivotToolProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UEditPivotToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bEnableSnapDragging;                                     // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEditPivotSnapDragRotationMode                             RotationMode;                                            // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPA9[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditPivotToolActionPropertySet
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_O8BB[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseWorldBox;                                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NT9V[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		void Top();
		void Right();
		void Left();
		void Front();
		void Center();
		void Bottom();
		void Back();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditPivotTool
	 * Size -> 0x0170 (FullSize[0x0200] - InheritedSize[0x0090])
	 */
	class UEditPivotTool : public UMultiSelectionTool
	{
	public:
		unsigned char                                              UnknownData_G78B[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditPivotToolProperties*                            TransformProps;                                          // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEditPivotToolActionPropertySet*                     EditPivotActions;                                        // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDC7[0xD0];                                  // 0x00A8(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEditPivotTarget>                            ActiveGizmos;                                            // 0x0178(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V244[0x78];                                  // 0x0188(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditUVIslandsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EditUVIslandsTool
	 * Size -> 0x02B0 (FullSize[0x0370] - InheritedSize[0x00C0])
	 */
	class UEditUVIslandsTool : public UMeshSurfacePointTool
	{
	public:
		unsigned char                                              UnknownData_YQGW[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UExistingMeshMaterialProperties*                     MaterialSettings;                                        // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            CheckerMaterial;                                         // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USimpleDynamicMeshComponent*                         DynamicMeshComponent;                                    // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolygonSelectionMechanic*                           SelectionMechanic;                                       // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YKMH[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMultiTransformer*                                   MultiTransformer;                                        // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OJPI[0x278];                                 // 0x00F8(0x0278) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ExtractCollisionGeometryToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UExtractCollisionGeometryToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_4VIT[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ExtractCollisionGeometryTool
	 * Size -> 0x02A8 (FullSize[0x0330] - InheritedSize[0x0088])
	 */
	class UExtractCollisionGeometryTool : public USingleSelectionTool
	{
	public:
		class UCollisionGeometryVisualizationProperties*           VizSettings;                                             // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicsObjectToolPropertySet*                       ObjectProps;                                             // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewGeometry*                                    PreviewElements;                                         // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QEPT[0x288];                                 // 0x00A8(0x0288) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.GroupEdgeInsertionToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGroupEdgeInsertionToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_6XEZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.GroupEdgeInsertionProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
	{
	public:
		EGroupEdgeInsertionMode                                    InsertionMode;                                           // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VA5[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bWireframe;                                              // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y56K[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     VertexTolerance;                                         // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.GroupEdgeInsertionOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGroupEdgeInsertionOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_NY86[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGroupEdgeInsertionTool*                             Tool;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.GroupEdgeInsertionTool
	 * Size -> 0x04C8 (FullSize[0x0550] - InheritedSize[0x0088])
	 */
	class UGroupEdgeInsertionTool : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_4FZO[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGroupEdgeInsertionProperties*                       Settings;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SO7C[0x4A8];                                 // 0x00A8(0x04A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.HoleFillToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHoleFillToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SmoothHoleFillProperties
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class USmoothHoleFillProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bConstrainToHoleInterior;                                // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSQF[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RemeshingExteriorRegionWidth;                            // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SmoothingExteriorRegionWidth;                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SmoothingInteriorRegionWidth;                            // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorSmoothness;                                      // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NY8K[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     FillDensityScalar;                                       // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectDuringRemesh;                                    // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2B9P[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.HoleFillToolProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UHoleFillToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EHoleFillOpFillType                                        FillType;                                                // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveIsolatedTriangles;                                // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHY2[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.HoleFillToolActions
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UHoleFillToolActions : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_XGGO[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		void SelectAll();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.HoleFillStatisticsProperties
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              InitialHoles;                                            // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SelectedHoles;                                           // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SuccessfulFills;                                         // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FailedFills;                                             // 0x0090(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RemainingHoles;                                          // 0x00A0(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.HoleFillOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UHoleFillOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_VDUH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHoleFillTool*                                       FillTool;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.HoleFillTool
	 * Size -> 0x0158 (FullSize[0x01E0] - InheritedSize[0x0088])
	 */
	class UHoleFillTool : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_RA3B[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USmoothHoleFillProperties*                           SmoothHoleFillProperties;                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHoleFillToolProperties*                             Properties;                                              // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHoleFillToolActions*                                Actions;                                                 // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHoleFillStatisticsProperties*                       Statistics;                                              // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolygonSelectionMechanic*                           SelectionMechanic;                                       // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D0P8[0x118];                                 // 0x00C8(0x0118) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSculptBrushOpProps
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BaseKelvinletBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Stiffness;                                               // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Incompressiblity;                                        // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BrushSteps;                                              // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5OZ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ScaleKelvinletBrushOpProps
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PullKelvinletBrushOpProps
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
	{
	public:
		float                                                      Falloff;                                                 // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SharpPullKelvinletBrushOpProps
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
	{
	public:
		float                                                      Falloff;                                                 // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.TwistKelvinletBrushOpProps
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshAnalysisProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UMeshAnalysisProperties : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              SurfaceArea;                                             // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Volume;                                                  // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshAttributePaintToolBuilder
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UMeshAttributePaintToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		unsigned char                                              UnknownData_BXYA[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshAttributePaintToolProperties
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
	{
	public:
		TArray<class FName>                                        Attributes;                                              // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    SelectedAttribute;                                       // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1TZ[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttributeName;                                           // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshAttributePaintEditActions
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_IZL8[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshAttributePaintTool
	 * Size -> 0x0430 (FullSize[0x0630] - InheritedSize[0x0200])
	 */
	class UMeshAttributePaintTool : public UDynamicMeshBrushTool
	{
	public:
		class UMeshAttributePaintToolProperties*                   AttribProps;                                             // 0x0200(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZVX8[0x428];                                 // 0x0208(0x0428) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshBoundaryToolBase
	 * Size -> 0x00C8 (FullSize[0x0150] - InheritedSize[0x0088])
	 */
	class UMeshBoundaryToolBase : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_C6N8[0xB0];                                  // 0x0088(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPolygonSelectionMechanic*                           SelectionMechanic;                                       // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USingleClickInputBehavior*                           LoopSelectClickBehavior;                                 // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZLR4[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.InflateBrushOpProps
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UInflateBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshInspectorToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshInspectorProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UMeshInspectorProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bWireframe;                                              // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBoundaryEdges;                                          // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBowtieVertices;                                         // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPolygonBorders;                                         // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUVSeams;                                                // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUVBowties;                                              // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalSeams;                                            // 0x0066(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalVectors;                                          // 0x0067(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTangentVectors;                                         // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CY6S[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalLength;                                            // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TangentLength;                                           // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INQV[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshInspectorTool
	 * Size -> 0x00A0 (FullSize[0x0128] - InheritedSize[0x0088])
	 */
	class UMeshInspectorTool : public USingleSelectionTool
	{
	public:
		class UMeshInspectorProperties*                            Settings;                                                // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UExistingMeshMaterialProperties*                     MaterialSettings;                                        // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GU5C[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   DrawnLineSet;                                            // 0x00A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultMaterial;                                         // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0GK8[0x70];                                  // 0x00B8(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.NewMeshMaterialProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
	{
	public:
		TWeakObjectPtr<class UMaterialInterface>                   Material;                                                // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UVScale;                                                 // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWorldSpaceUVScale;                                      // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWireframe;                                              // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowExtendedOptions;                                    // 0x006E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYL4[0x1];                                   // 0x006F(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ExistingMeshMaterialProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
	{
	public:
		ESetMeshMaterialMode                                       MaterialMode;                                            // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLOJ[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CheckerDensity;                                          // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            CheckerMaterial;                                         // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshEditingViewProperties
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UMeshEditingViewProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bShowWireframe;                                          // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6U6P[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMeshEditingMaterialModes                                  MaterialMode;                                            // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8CN[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bFlatShading;                                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L25V[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x006C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YK3[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Image;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MoveBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UMoveBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTDR[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PinchBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UPinchBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPerpDamping;                                            // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCWA[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BasePlaneBrushOpProps
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PlaneBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlaneBrushSideMode                                        WhichSide;                                               // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKQD[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ViewAlignedPlaneBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlaneBrushSideMode                                        WhichSide;                                               // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F519[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.FixedPlaneBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlaneBrushSideMode                                        WhichSide;                                               // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMER[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.StandardSculptBrushOpProps
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ViewAlignedSculptBrushOpProps
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SculptMaxBrushOpProps
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHeight;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFixedHeight;                                         // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ET3H[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedHeight;                                             // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2A3I[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SculptBrushProperties
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class USculptBrushProperties : public UBrushBaseProperties
	{
	public:
		float                                                      Depth;                                                   // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitBackFaces;                                           // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XWBB[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Lazyness;                                                // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPerBrushProps;                                      // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DO4[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.KelvinBrushProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UKelvinBrushProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      FalloffDistance;                                         // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Incompressiblity;                                        // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BrushSteps;                                              // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.WorkPlaneProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UWorkPlaneProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bPropertySetEnabled;                                     // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGizmo;                                              // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToGrid;                                             // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0W1K[0x1];                                   // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             position;                                                // 0x0064(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Rotation;                                                // 0x0070(0x0010) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SculptMaxBrushProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class USculptMaxBrushProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      MaxHeight;                                               // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeCurrentHeight;                                    // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZR3[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSculptToolBase
	 * Size -> 0x0918 (FullSize[0x09D8] - InheritedSize[0x00C0])
	 */
	class UMeshSculptToolBase : public UMeshSurfacePointTool
	{
	public:
		class USculptBrushProperties*                              BrushProperties;                                         // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorkPlaneProperties*                                GizmoProperties;                                         // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZC4[0xE0];                                  // 0x00D0(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UMeshSculptBrushOpProps*>              BrushOpPropSets;                                         // 0x01B0(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TNJG[0x50];                                  // 0x0200(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UMeshSculptBrushOpProps*>              SecondaryBrushOpPropSets;                                // 0x0250(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CEK1[0x5D0];                                 // 0x02A0(0x05D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshEditingViewProperties*                          ViewProperties;                                          // 0x0870(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            ActiveOverrideMaterial;                                  // 0x0878(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBrushStampIndicator*                                BrushIndicator;                                          // 0x0880(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            BrushIndicatorMaterial;                                  // 0x0888(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        BrushIndicatorMesh;                                      // 0x0890(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     PlaneTransformGizmo;                                     // 0x0898(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x08A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SU1D[0x130];                                 // 0x08A8(0x0130) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSelectionToolBuilder
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		unsigned char                                              UnknownData_R0KS[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSelectionToolActionPropertySet
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_83A6[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSelectionEditActions
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
	{
	public:
		void Shrink();
		void SelectLargestComponentByTriCount();
		void SelectLargestComponentByArea();
		void SelectAll();
		void OptimizeSelection();
		void Invert();
		void Grow();
		void ExpandToConnected();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSelectionMeshEditActions
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
	{
	public:
		void SeparateTriangles();
		void FlipNormals();
		void DisconnectTriangles();
		void DeleteTriangles();
		void CreatePolygroup();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSelectionToolProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EMeshSelectionToolPrimaryMode                              SelectionMode;                                           // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SUH[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      AngleTolerance;                                          // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitBackFaces;                                           // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWireframe;                                          // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69E4[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMeshFacesColorMode                                        FaceColorMode;                                           // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6RX[0x3];                                   // 0x006D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSelectionTool
	 * Size -> 0x02A0 (FullSize[0x04A0] - InheritedSize[0x0200])
	 */
	class UMeshSelectionTool : public UDynamicMeshBrushTool
	{
	public:
		class UMeshSelectionToolProperties*                        SelectionProps;                                          // 0x0200(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshSelectionEditActions*                           SelectionActions;                                        // 0x0208(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshSelectionToolActionPropertySet*                 EditActions;                                             // 0x0210(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshSelectionSet*                                   Selection;                                               // 0x0218(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      SpawnedActors;                                           // 0x0220(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2FLG[0x270];                                 // 0x0230(0x0270) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.BaseSmoothBrushOpProps
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SmoothBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVFlow;                                         // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATH4[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SecondarySmoothBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVFlow;                                         // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRW3[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SmoothFillBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVFlow;                                         // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O43M[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.FlattenBrushOpProps
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlaneBrushSideMode                                        WhichSide;                                               // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OST[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.EraseBrushOpProps
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UEraseBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSpaceDeformerToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SpaceDeformerOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USpaceDeformerOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_IFFZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshSpaceDeformerTool*                              SpaceDeformerTool;                                       // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshSpaceDeformerTool
	 * Size -> 0x0100 (FullSize[0x01C0] - InheritedSize[0x00C0])
	 */
	class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
	{
	public:
		ENonlinearOperationType                                    SelectedOperationType;                                   // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWCF[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpperBoundsInterval;                                     // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowerBoundsInterval;                                     // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModifierPercent;                                         // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K08W[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoTransformChangeStateTarget*                    StateTarget;                                             // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A6HM[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H5MZ[0x20];                                  // 0x00F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GizmoCenter;                                             // 0x0110(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B169[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               GizmoOrientation;                                        // 0x0120(0x0010) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UIntervalGizmo*                                      IntervalGizmo;                                           // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     TransformGizmo;                                          // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformProxy*                                     TransformProxy;                                          // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoLocalFloatParameterSource*                     UpIntervalSource;                                        // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoLocalFloatParameterSource*                     DownIntervalSource;                                      // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoLocalFloatParameterSource*                     ForwardIntervalSource;                                   // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OGK1[0x60];                                  // 0x0160(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshStatisticsProperties
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UMeshStatisticsProperties : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              Mesh;                                                    // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UV;                                                      // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Attributes;                                              // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshVertexSculptToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMeshVertexSculptToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VertexBrushSculptProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
	{
	public:
		EMeshVertexSculptBrushType                                 PrimaryBrushType;                                        // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshSculptFalloffType                                     PrimaryFalloffType;                                      // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeTarget;                                           // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothErases;                                           // 0x0063(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE20[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MeshVertexSculptTool
	 * Size -> 0x0858 (FullSize[0x1230] - InheritedSize[0x09D8])
	 */
	class UMeshVertexSculptTool : public UMeshSculptToolBase
	{
	public:
		class UVertexBrushSculptProperties*                        SculptProperties;                                        // 0x09D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USimpleDynamicMeshComponent*                         DynamicMeshComponent;                                    // 0x09E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ESD4[0x848];                                 // 0x09E8(0x0848) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MirrorToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMirrorToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_H9EL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MirrorToolProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UMirrorToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EMirrorOperationMode                                       OperationMode;                                           // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCropAlongMirrorPlaneFirst;                              // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeldVerticesOnMirrorPlane;                              // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowBowtieVertexCreation;                              // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMirrorCtrlClickBehavior                                   CtrlClickBehavior;                                       // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bButtonsOnlyChangeOrientation;                           // 0x0066(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPreview;                                            // 0x0067(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMirrorSaveMode                                            SaveMode;                                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0041[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MirrorOperatorFactory
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMirrorOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_AQKK[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMirrorTool*                                         MirrorTool;                                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5OAB[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MirrorToolActionPropertySet
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_LFFZ[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		void Up();
		void ShiftToCenter();
		void Right();
		void Left();
		void Forward();
		void Down();
		void Backward();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.MirrorTool
	 * Size -> 0x00A8 (FullSize[0x0138] - InheritedSize[0x0090])
	 */
	class UMirrorTool : public UMultiSelectionTool
	{
	public:
		unsigned char                                              UnknownData_KWHM[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMirrorToolProperties*                               Settings;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMirrorToolActionPropertySet*                        ToolActions;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UDynamicMeshReplacementChangeTarget*>         MeshesToMirror;                                          // 0x00A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UMeshOpPreviewWithBackgroundCompute*>         Previews;                                                // 0x00B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R8Q6[0x48];                                  // 0x00C8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UConstructionPlaneMechanic*                          PlaneMechanic;                                           // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XOYI[0x20];                                  // 0x0118(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.OffsetMeshToolProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EOffsetMeshToolOffsetType                                  OffsetType;                                              // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6E45[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateShell;                                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABTH[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.OffsetWeightMapSetProperties
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
	{
	public:
		float                                                      MinDistance;                                             // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17D3[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.IterativeOffsetProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UIterativeOffsetProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    Steps;                                                   // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOffsetBoundaries;                                       // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_038Q[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingPerStep;                                        // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReprojectSmooth;                                        // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4F7[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ImplicitOffsetProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UImplicitOffsetProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      Smoothness;                                              // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVs;                                            // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KIZA[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.OffsetMeshTool
	 * Size -> 0x0020 (FullSize[0x0420] - InheritedSize[0x0400])
	 */
	class UOffsetMeshTool : public UBaseMeshProcessingTool
	{
	public:
		class UOffsetMeshToolProperties*                           OffsetProperties;                                        // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIterativeOffsetProperties*                          IterativeProperties;                                     // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImplicitOffsetProperties*                           ImplicitProperties;                                      // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOffsetWeightMapSetProperties*                       WeightMapProperties;                                     // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.OffsetMeshToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PhysicsInspectorToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPhysicsInspectorToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PhysicsInspectorTool
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UPhysicsInspectorTool : public UMultiSelectionTool
	{
	public:
		class UCollisionGeometryVisualizationProperties*           VizSettings;                                             // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPhysicsObjectToolPropertySet*>               ObjectData;                                              // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  LineMaterial;                                            // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPreviewGeometry*>                            PreviewElements;                                         // 0x00B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RGV3[0x18];                                  // 0x00C0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PlaneCutToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPlaneCutToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_HAA4[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.AcceptOutputProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UAcceptOutputProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bExportSeparatedPiecesAsNewMeshAssets;                   // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1H0[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PlaneCutToolProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UPlaneCutToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bSnapToWorldGrid;                                        // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepBothHalves;                                         // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8225[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpacingBetweenHalves;                                    // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillCutHole;                                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPreview;                                            // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillSpans;                                              // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFQX[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PlaneCutOperatorFactory
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPlaneCutOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_2HZ5[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlaneCutTool*                                       CutTool;                                                 // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41JD[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PlaneCutTool
	 * Size -> 0x00E0 (FullSize[0x0170] - InheritedSize[0x0090])
	 */
	class UPlaneCutTool : public UMultiSelectionTool
	{
	public:
		unsigned char                                              UnknownData_XQWH[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlaneCutToolProperties*                             BasicProperties;                                         // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAcceptOutputProperties*                             AcceptProperties;                                        // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             CutPlaneOrigin;                                          // 0x00A8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BIK1[0xC];                                   // 0x00B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               CutPlaneOrientation;                                     // 0x00C0(0x0010) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<class UMeshOpPreviewWithBackgroundCompute*>         Previews;                                                // 0x00D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UDynamicMeshReplacementChangeTarget*>         MeshesToCut;                                             // 0x00E0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0UPL[0x68];                                  // 0x00F0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformGizmo*                                     PlaneTransformGizmo;                                     // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6WHA[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)

	public:
		void Cut();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PositionPlaneGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PositionPlaneGizmo
	 * Size -> 0x04E8 (FullSize[0x0520] - InheritedSize[0x0038])
	 */
	class UPositionPlaneGizmo : public UInteractiveGizmo
	{
	public:
		unsigned char                                              UnknownData_LDQK[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        CenterBallShape;                                         // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstance*                                   CenterBallMaterial;                                      // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8SI[0x488];                                 // 0x0098(0x0488) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_IS30[0x30];                                  // 0x0080(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProjectToTargetToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UProjectToTargetToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_WM8T[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RemeshMeshToolProperties
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class URemeshMeshToolProperties : public URemeshProperties
	{
	public:
		int32_t                                                    TargetTriangleCount;                                     // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERemeshSmoothingType                                       SmoothingType;                                           // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDiscardAttributes;                                      // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWireframe;                                          // 0x0076(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGroupColors;                                        // 0x0077(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERemeshType                                                RemeshType;                                              // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BQJ[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RemeshIterations;                                        // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTargetEdgeLength;                                    // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FE9[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetEdgeLength;                                        // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReproject;                                              // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SENJ[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProjectToTargetToolProperties
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UProjectToTargetToolProperties : public URemeshMeshToolProperties
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RemeshMeshTool
	 * Size -> 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
	 */
	class URemeshMeshTool : public UMultiSelectionTool
	{
	public:
		unsigned char                                              UnknownData_D5Y6[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URemeshMeshToolProperties*                           BasicProperties;                                         // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshStatisticsProperties*                           MeshStatisticsProperties;                                // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZN9[0x38];                                  // 0x00B0(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ProjectToTargetTool
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UProjectToTargetTool : public URemeshMeshTool
	{
	public:
		unsigned char                                              UnknownData_CCC9[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RemeshMeshToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URemeshMeshToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_E9BG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_5RAH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EOcclusionCalculationUIMode                                OcclusionTestMethod;                                     // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOcclusionTriangleSamplingUIMode                           TriangleSampling;                                        // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2TT[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WindingIsoValue;                                         // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddRandomRays;                                           // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddTriangleSamples;                                      // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlySelfOcclude;                                        // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31YT[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_3JG3[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class URemoveOccludedTrianglesOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_DUQ1[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URemoveOccludedTrianglesTool*                        Tool;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IW9D[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RemoveOccludedTrianglesTool
	 * Size -> 0x00C0 (FullSize[0x0150] - InheritedSize[0x0090])
	 */
	class URemoveOccludedTrianglesTool : public UMultiSelectionTool
	{
	public:
		class URemoveOccludedTrianglesToolProperties*              BasicProperties;                                         // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URemoveOccludedTrianglesAdvancedProperties*          AdvancedProperties;                                      // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshOpPreviewWithBackgroundCompute*>         Previews;                                                // 0x00A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UPreviewMesh*>                                PreviewCopies;                                           // 0x00B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F6CP[0x90];                                  // 0x00C0(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RevolveBoundaryToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URevolveBoundaryToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_4L54[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RevolveBoundaryOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URevolveBoundaryOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_LX3F[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URevolveBoundaryTool*                                RevolveBoundaryTool;                                     // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RevolveBoundaryToolProperties
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class URevolveBoundaryToolProperties : public URevolveProperties
	{
	public:
		bool                                                       bDisplayOriginalMesh;                                    // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKL2[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AxisOrigin;                                              // 0x00B4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxisYaw;                                                 // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxisPitch;                                               // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WC9C[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.RevolveBoundaryTool
	 * Size -> 0x0060 (FullSize[0x01B0] - InheritedSize[0x0150])
	 */
	class URevolveBoundaryTool : public UMeshBoundaryToolBase
	{
	public:
		unsigned char                                              UnknownData_G7HL[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URevolveBoundaryToolProperties*                      Settings;                                                // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UConstructionPlaneMechanic*                          PlaneMechanic;                                           // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7453[0x30];                                  // 0x0180(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SeamSculptToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USeamSculptToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SeamSculptToolProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class USeamSculptToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bShowWireframe;                                          // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitBackFaces;                                           // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSRG[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SeamSculptTool
	 * Size -> 0x00E0 (FullSize[0x02E0] - InheritedSize[0x0200])
	 */
	class USeamSculptTool : public UDynamicMeshBrushTool
	{
	public:
		class USeamSculptToolProperties*                           Settings;                                                // 0x0200(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPreviewGeometry*                                    PreviewGeom;                                             // 0x0208(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RB2K[0xD0];                                  // 0x0210(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SelfUnionMeshesToolProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bAttemptFixHoles;                                        // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowNewBoundaryEdges;                                   // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrimFlaps;                                              // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1MZ[0x5];                                   // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WindingNumberThreshold;                                  // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseFirstMeshMaterials;                              // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3Q3[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SelfUnionMeshesTool
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
	{
	public:
		class USelfUnionMeshesToolProperties*                      Properties;                                              // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   DrawnLineSet;                                            // 0x00F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WH1J[0x20];                                  // 0x0100(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SelfUnionMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SetCollisionGeometryToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USetCollisionGeometryToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SetCollisionGeometryToolProperties
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
	{
	public:
		ECollisionGeometryType                                     GeometryType;                                            // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXYW[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ESetCollisionGeometryInputMode                             InputMode;                                               // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XC9S[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bUseWorldSpace;                                          // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveContained;                                        // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMaxCount;                                         // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NAFA[0x1];                                   // 0x006B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxCount;                                                // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinThickness;                                            // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetectBoxes;                                            // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetectSpheres;                                          // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetectCapsules;                                         // 0x0076(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimplifyHulls;                                          // 0x0077(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HullTargetFaceCount;                                     // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimplifyPolygons;                                       // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRV4[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HullTolerance;                                           // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProjectedHullAxis                                         SweepAxis;                                               // 0x0084(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INQ2[0x3];                                   // 0x0085(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bAppendToExisting;                                       // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HN46[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECollisionGeometryMode                                     SetCollisionType;                                        // 0x008C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0707[0x3];                                   // 0x008D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SetCollisionGeometryTool
	 * Size -> 0x0130 (FullSize[0x01C0] - InheritedSize[0x0090])
	 */
	class USetCollisionGeometryTool : public UMultiSelectionTool
	{
	public:
		class USetCollisionGeometryToolProperties*                 Settings;                                                // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCollisionGeometryVisualizationProperties*           VizSettings;                                             // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicsObjectToolPropertySet*                       CollisionProps;                                          // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  LineMaterial;                                            // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewGeometry*                                    PreviewGeom;                                             // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NAMU[0x108];                                 // 0x00B8(0x0108) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SmoothMeshToolProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class USmoothMeshToolProperties : public UInteractiveToolPropertySet
	{
	public:
		ESmoothMeshToolSmoothType                                  SmoothingType;                                           // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYN7[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.IterativeSmoothProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UIterativeSmoothProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      SmoothingPerStep;                                        // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Steps;                                                   // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothBoundary;                                         // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QII4[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.DiffusionSmoothProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      SmoothingPerStep;                                        // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Steps;                                                   // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVs;                                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YSV[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.ImplicitSmoothProperties
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UImplicitSmoothProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      SmoothSpeed;                                             // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Smoothness;                                              // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVs;                                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8FO[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeCorrection;                                        // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SmoothWeightMapSetProperties
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class USmoothWeightMapSetProperties : public UWeightMapSetProperties
	{
	public:
		float                                                      MinSmoothMultiplier;                                     // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDQG[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SmoothMeshTool
	 * Size -> 0x0030 (FullSize[0x0430] - InheritedSize[0x0400])
	 */
	class USmoothMeshTool : public UBaseMeshProcessingTool
	{
	public:
		class USmoothMeshToolProperties*                           SmoothProperties;                                        // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIterativeSmoothProperties*                          IterativeProperties;                                     // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDiffusionSmoothProperties*                          DiffusionProperties;                                     // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImplicitSmoothProperties*                           ImplicitProperties;                                      // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USmoothWeightMapSetProperties*                       WeightMapProperties;                                     // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LB41[0x8];                                   // 0x0428(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.SmoothMeshToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.TransformMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.TransformMeshesToolProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		ETransformMeshesTransformMode                              TransformMode;                                           // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetPivot;                                               // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSnapDragging;                                     // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformMeshesSnapDragSource                             SnapDragSource;                                          // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformMeshesSnapDragRotationMode                       RotationMode;                                            // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOUB[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.TransformMeshesTool
	 * Size -> 0x00B0 (FullSize[0x0140] - InheritedSize[0x0090])
	 */
	class UTransformMeshesTool : public UMultiSelectionTool
	{
	public:
		unsigned char                                              UnknownData_P3N8[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformMeshesToolProperties*                      TransformProps;                                          // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6H7N[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransformMeshesTarget>                      ActiveGizmos;                                            // 0x00B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YLEX[0x80];                                  // 0x00C0(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.UVProjectionToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UUVProjectionToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_1KDP[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.UVProjectionToolProperties
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UUVProjectionToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EUVProjectionMethod                                        UVProjectionMethod;                                      // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HV04[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ProjectionPrimitiveScale;                                // 0x0064(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CylinderProjectToTopOrBottomAngleThreshold;              // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UVScale;                                                 // 0x0074(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UVOffset;                                                // 0x007C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWorldSpaceUVScale;                                      // 0x0084(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATG2[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.UVProjectionAdvancedProperties
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.UVProjectionOperatorFactory
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UUVProjectionOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_QI7L[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUVProjectionTool*                                   Tool;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYJS[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.UVProjectionTool
	 * Size -> 0x0190 (FullSize[0x0220] - InheritedSize[0x0090])
	 */
	class UUVProjectionTool : public UMultiSelectionTool
	{
	public:
		class UUVProjectionToolProperties*                         BasicProperties;                                         // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUVProjectionAdvancedProperties*                     AdvancedProperties;                                      // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UExistingMeshMaterialProperties*                     MaterialSettings;                                        // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshOpPreviewWithBackgroundCompute*>         Previews;                                                // 0x00A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            CheckerMaterial;                                         // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UTransformGizmo*>                             TransformGizmos;                                         // 0x00C0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UTransformProxy*>                             TransformProxies;                                        // 0x00D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0OTZ[0x140];                                 // 0x00E0(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VoxelBlendMeshesToolProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		double                                                     BlendPower;                                              // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     BlendFalloff;                                            // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSolidifyInput;                                          // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveInternalsAfterSolidify;                           // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JJA[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     OffsetSolidifySurface;                                   // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VoxelBlendMeshesTool
	 * Size -> 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
	 */
	class UVoxelBlendMeshesTool : public UBaseVoxelTool
	{
	public:
		class UVoxelBlendMeshesToolProperties*                     BlendProperties;                                         // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VoxelBlendMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VoxelMorphologyMeshesToolProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EMorphologyOperation                                       Operation;                                               // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3LC[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Distance;                                                // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSolidifyInput;                                          // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveInternalsAfterSolidify;                           // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SU39[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     OffsetSolidifySurface;                                   // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VoxelMorphologyMeshesTool
	 * Size -> 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
	 */
	class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
	{
	public:
		class UVoxelMorphologyMeshesToolProperties*                MorphologyProperties;                                    // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VoxelSolidifyMeshesToolProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		double                                                     WindingThreshold;                                        // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExtendBounds;                                            // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurfaceSearchSteps;                                      // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSolidAtBoundaries;                                      // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMakeOffsetSurfaces;                                     // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7AR[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     OffsetThickness;                                         // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VoxelSolidifyMeshesTool
	 * Size -> 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
	 */
	class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
	{
	public:
		class UVoxelSolidifyMeshesToolProperties*                  SolidifyProperties;                                      // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.WeldMeshEdgesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingTools.WeldMeshEdgesTool
	 * Size -> 0x0278 (FullSize[0x0300] - InheritedSize[0x0088])
	 */
	class UWeldMeshEdgesTool : public USingleSelectionTool
	{
	public:
		float                                                      Tolerance;                                               // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOnlyUnique;                                             // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CWHK[0x273];                                 // 0x008D(0x0273) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
