#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Enum Paper2D.EFlipbookCollisionMode
	 */
	enum class EFlipbookCollisionMode : uint8_t
	{
		NoCollision         = 0,
		FirstFrameCollision = 1,
		EachFrameCollision  = 2,
		MAX                 = 3
	};

	/**
	 * Enum Paper2D.EPaperSpriteAtlasPadding
	 */
	enum class EPaperSpriteAtlasPadding : uint8_t
	{
		DilateBorder = 0,
		PadWithZero  = 1,
		MAX          = 2
	};

	/**
	 * Enum Paper2D.ETileMapProjectionMode
	 */
	enum class ETileMapProjectionMode : uint8_t
	{
		Orthogonal         = 0,
		IsometricDiamond   = 1,
		IsometricStaggered = 2,
		HexagonalStaggered = 3,
		MAX                = 4
	};

	/**
	 * Enum Paper2D.ESpriteCollisionMode
	 */
	enum class ESpriteCollisionMode : uint8_t
	{
		None         = 0,
		Use2DPhysics = 1,
		Use3DPhysics = 2,
		MAX          = 3
	};

	/**
	 * Enum Paper2D.ESpriteShapeType
	 */
	enum class ESpriteShapeType : uint8_t
	{
		Box     = 0,
		Circle  = 1,
		Polygon = 2,
		MAX     = 3
	};

	/**
	 * Enum Paper2D.ESpritePolygonMode
	 */
	enum class ESpritePolygonMode : uint8_t
	{
		SourceBoundingBox = 0,
		TightBoundingBox  = 1,
		ShrinkWrapped     = 2,
		FullyCustom       = 3,
		Diced             = 4,
		MAX               = 5
	};

	/**
	 * Enum Paper2D.ESpritePivotMode
	 */
	enum class ESpritePivotMode : uint8_t
	{
		Top_Left      = 0,
		Top_Center    = 1,
		Top_Right     = 2,
		Center_Left   = 3,
		Center_Center = 4,
		Center_Right  = 5,
		Bottom_Left   = 6,
		Bottom_Center = 7,
		Bottom_Right  = 8,
		Custom        = 9,
		MAX           = 10
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Paper2D.PaperFlipbookKeyFrame
	 * Size -> 0x0010
	 */
	struct FPaperFlipbookKeyFrame
	{
	public:
		class UPaperSprite*                                        Sprite;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameRun;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3562[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.SpriteInstanceData
	 * Size -> 0x0090
	 */
	struct FSpriteInstanceData
	{
	public:
		struct FMatrix                                             Transform;                                               // 0x0000(0x0080) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UPaperSprite*                                        SourceSprite;                                            // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VertexColor;                                             // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaterialIndex;                                           // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Paper2D.PaperSpriteSocket
	 * Size -> 0x0070
	 */
	struct FPaperSpriteSocket
	{
	public:
		struct FTransform                                          LocalTransform;                                          // 0x0000(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8I1U[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.PaperTerrainMaterialRule
	 * Size -> 0x0038
	 */
	struct FPaperTerrainMaterialRule
	{
	public:
		class UPaperSprite*                                        StartCap;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPaperSprite*>                                Body;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UPaperSprite*                                        EndCap;                                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumAngle;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumAngle;                                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KFCS[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionOffset;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DrawOrder;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KVZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.PaperTileInfo
	 * Size -> 0x0010
	 */
	struct FPaperTileInfo
	{
	public:
		class UPaperTileSet*                                       TileSet;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PackedTileIndex;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPP7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.IntMargin
	 * Size -> 0x0010
	 */
	struct FIntMargin
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Top;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Right;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Bottom;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Paper2D.SpriteGeometryShape
	 * Size -> 0x0040
	 */
	struct FSpriteGeometryShape
	{
	public:
		ESpriteShapeType                                           ShapeType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEXD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   Vertices;                                                // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           BoxSize;                                                 // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BoxPosition;                                             // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNegativeWinding;                                        // 0x003C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSIS[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.SpriteGeometryCollection
	 * Size -> 0x0030
	 */
	struct FSpriteGeometryCollection
	{
	public:
		TArray<struct FSpriteGeometryShape>                        Shapes;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		ESpritePolygonMode                                         GeometryType;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTMY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PixelsPerSubdivisionX;                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PixelsPerSubdivisionY;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAvoidVertexMerging;                                     // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GLA[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlphaThreshold;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DetailAmount;                                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimplifyEpsilon;                                         // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5YR[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.PaperTileMetadata
	 * Size -> 0x0040
	 */
	struct FPaperTileMetadata
	{
	public:
		class FName                                                UserDataName;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSpriteGeometryCollection                           CollisionData;                                           // 0x0008(0x0030) Edit, NativeAccessSpecifierPublic
		unsigned char                                              TerrainMembership[0x4];                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1GL[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.PaperTileSetTerrain
	 * Size -> 0x0018
	 */
	struct FPaperTileSetTerrain
	{
	public:
		class FString                                              TerrainName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CenterTileIndex;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRWD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.PaperSpriteAtlasSlot
	 * Size -> 0x0040
	 */
	struct FPaperSpriteAtlasSlot
	{
	public:
		unsigned char                                              SpriteRef[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    AtlasIndex;                                              // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    X;                                                       // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQH9[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.SpriteDrawCallRecord
	 * Size -> 0x0140
	 */
	struct FSpriteDrawCallRecord
	{
	public:
		struct FVector                                             Destination;                                             // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            BaseTexture;                                             // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DL87[0x30];                                  // 0x0020(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Color;                                                   // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULEL[0xEC];                                  // 0x0054(0x00EC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Paper2D.SpriteAssetInitParameters
	 * Size -> 0x0040
	 */
	struct FSpriteAssetInitParameters
	{
	public:
		unsigned char                                              UnknownData_OYKN[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
