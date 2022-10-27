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
	 * Enum Landscape.ELandscapeGizmoType
	 */
	enum class ELandscapeGizmoType : uint8_t
	{
		LGT_None   = 0,
		LGT_Height = 1,
		LGT_Weight = 2,
		LGT_MAX    = 3
	};

	/**
	 * Enum Landscape.ELandscapeLODFalloff
	 */
	enum class ELandscapeLODFalloff : uint8_t
	{
		Linear     = 0,
		SquareRoot = 1,
		MAX        = 2
	};

	/**
	 * Enum Landscape.ELandscapeLayerPaintingRestriction
	 */
	enum class ELandscapeLayerPaintingRestriction : uint8_t
	{
		None         = 0,
		UseMaxLayers = 1,
		ExistingOnly = 2,
		MAX          = 3
	};

	/**
	 * Enum Landscape.ELandscapeSetupErrors
	 */
	enum class ELandscapeSetupErrors : uint8_t
	{
		LSE_None            = 0,
		LSE_NoLandscapeInfo = 1,
		LSE_CollsionXY      = 2,
		LSE_NoLayerInfo     = 3,
		LSE_MAX             = 4
	};

	/**
	 * Enum Landscape.LandscapeSplineMeshOrientation
	 */
	enum class ELandscapeSplineMeshOrientation : uint8_t
	{
		LSMO_XUp = 0,
		LSMO_YUp = 1,
		LSMO_MAX = 2
	};

	/**
	 * Enum Landscape.ELandscapeLayerBlendType
	 */
	enum class ELandscapeLayerBlendType : uint8_t
	{
		LB_WeightBlend = 0,
		LB_AlphaBlend  = 1,
		LB_HeightBlend = 2,
		LB_MAX         = 3
	};

	/**
	 * Enum Landscape.ELandscapeCustomizedCoordType
	 */
	enum class ELandscapeCustomizedCoordType : uint8_t
	{
		LCCT_None        = 0,
		LCCT_CustomUV0   = 1,
		LCCT_CustomUV1   = 2,
		LCCT_CustomUV2   = 3,
		LCCT_WeightMapUV = 4,
		LCCT_MAX         = 5
	};

	/**
	 * Enum Landscape.ETerrainCoordMappingType
	 */
	enum class ETerrainCoordMappingType : uint8_t
	{
		TCMT_Auto = 0,
		TCMT_XY   = 1,
		TCMT_XZ   = 2,
		TCMT_YZ   = 3,
		TCMT_MAX  = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Landscape.WeightmapLayerAllocationInfo
	 * Size -> 0x0010
	 */
	struct FWeightmapLayerAllocationInfo
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfo;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              WeightmapTextureIndex;                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              WeightmapTextureChannel;                                 // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              GrassMapChannelIndex;                                    // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NGL7[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.GrassVariety
	 * Size -> 0x0030
	 */
	struct FGrassVariety
	{
	public:
		class UStaticMesh*                                         GrassMesh;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GrassDensity;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseGrid;                                                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ON9S[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlacementJitter;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartCullDistance;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EndCullDistance;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinLOD;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RandomRotation;                                          // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DZNT[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlignToSurface;                                          // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScaleVariationMin;                                       // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScaleVariationMax;                                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineSegmentConnection
	 * Size -> 0x0018
	 */
	struct FLandscapeSplineSegmentConnection
	{
	public:
		class ULandscapeSplineControlPoint*                        ControlPoint;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TangentLen;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SocketName;                                              // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D9YC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineInterpPoint
	 * Size -> 0x0040
	 */
	struct FLandscapeSplineInterpPoint
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Left;                                                    // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Right;                                                   // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             FalloffLeft;                                             // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             FalloffRight;                                            // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StartEndFalloff;                                         // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineConnection
	 * Size -> 0x0010
	 */
	struct FLandscapeSplineConnection
	{
	public:
		class ULandscapeSplineSegment*                             Segment;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              End : 1;                                                 // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_RXF9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.GrassInput
	 * Size -> 0x0048
	 */
	struct FGrassInput
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULandscapeGrassType*                                 GrassType;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FExpressionInput                                    Input;                                                   // 0x0010(0x0038) ZeroConstructor
	};

	/**
	 * ScriptStruct Landscape.LayerBlendInput
	 * Size -> 0x0098
	 */
	struct FLayerBlendInput
	{
	public:
		class FName                                                LayerName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELandscapeLayerBlendType                                   BlendType;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CH10[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    LayerInput;                                              // 0x0010(0x0038) ZeroConstructor
		struct FExpressionInput                                    HeightInput;                                             // 0x0048(0x0038) ZeroConstructor
		float                                                      PreviewWeight;                                           // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ConstLayerInput;                                         // 0x0084(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ConstHeightInput;                                        // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BSBH[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeInfoLayerSettings
	 * Size -> 0x0010
	 */
	struct FLandscapeInfoLayerSettings
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfoObj;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LayerName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Landscape.GizmoSelectData
	 * Size -> 0x0050
	 */
	struct FGizmoSelectData
	{
	public:
		unsigned char                                              UnknownData_5USJ[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeImportLayerInfo
	 * Size -> 0x0001
	 */
	struct FLandscapeImportLayerInfo
	{
	public:
		unsigned char                                              UnknownData_2PNM[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeLayerStruct
	 * Size -> 0x0008
	 */
	struct FLandscapeLayerStruct
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfoObj;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Landscape.LandscapeEditorLayerSettings
	 * Size -> 0x0001
	 */
	struct FLandscapeEditorLayerSettings
	{
	public:
		unsigned char                                              UnknownData_5N4H[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeWeightmapUsage
	 * Size -> 0x0020
	 */
	struct FLandscapeWeightmapUsage
	{
	public:
		class ULandscapeComponent*                                 ChannelUsage[0x4];                                       // 0x0000(0x0020) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineMeshEntry
	 * Size -> 0x0038
	 */
	struct FLandscapeSplineMeshEntry
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          MaterialOverrides;                                       // 0x0008(0x0010) Edit, ZeroConstructor, AdvancedDisplay
		unsigned char                                              bCenterH : 1;                                            // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_JGJA[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CenterAdjust;                                            // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              bScaleToWidth : 1;                                       // 0x0024(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_XSVQ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ELandscapeSplineMeshOrientation                            Orientation;                                             // 0x0034(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESplineMeshAxis                                            ForwardAxis;                                             // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESplineMeshAxis                                            UpAxis;                                                  // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XWYL[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.ForeignWorldSplineData
	 * Size -> 0x0001
	 */
	struct FForeignWorldSplineData
	{
	public:
		unsigned char                                              UnknownData_QXCK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.ForeignSplineSegmentData
	 * Size -> 0x0001
	 */
	struct FForeignSplineSegmentData
	{
	public:
		unsigned char                                              UnknownData_3CC0[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.ForeignControlPointData
	 * Size -> 0x0001
	 */
	struct FForeignControlPointData
	{
	public:
		unsigned char                                              UnknownData_PZBO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
