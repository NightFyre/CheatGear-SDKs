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
	 * Enum ScaleformUI.EASType
	 */
	enum class EASType : uint8_t
	{
		Undefined     = 0,
		Null          = 1,
		Boolean       = 2,
		Int           = 3,
		Number        = 4,
		String        = 5,
		StringW       = 6,
		Object        = 7,
		DisplayObject = 8,
		MAX           = 9
	};

	/**
	 * Enum ScaleformUI.EGFxAlign
	 */
	enum class EGFxAlign : uint8_t
	{
		Center       = 0,
		TopCenter    = 1,
		BottomCenter = 2,
		CenterLeft   = 3,
		CenterRight  = 4,
		TopLeft      = 5,
		TopRight     = 6,
		BottomLeft   = 7,
		BottomRight  = 8,
		MAX          = 9
	};

	/**
	 * Enum ScaleformUI.EGFxTimingMode
	 */
	enum class EGFxTimingMode : uint8_t
	{
		Game = 0,
		Real = 1,
		MAX  = 2
	};

	/**
	 * Enum ScaleformUI.EGFxScaleMode
	 */
	enum class EGFxScaleMode : uint8_t
	{
		NoScale  = 0,
		ShowAll  = 1,
		ExactFit = 2,
		NoBorder = 3,
		MAX      = 4
	};

	/**
	 * Enum ScaleformUI.EGFxRenderTextureMode
	 */
	enum class EGFxRenderTextureMode : uint8_t
	{
		Opaque         = 0,
		Alpha          = 1,
		AlphaComposite = 2,
		MAX            = 3
	};

	/**
	 * Enum ScaleformUI.GFxHitTestType
	 */
	enum class EGFxHitTestType : uint8_t
	{
		GFxHitTestType_HitTest_Bounds            = 0,
		GFxHitTestType_HitTest_Shapes            = 1,
		GFxHitTestType_HitTest_ButtonEvents      = 2,
		GFxHitTestType_HitTest_ShapesNoInvisible = 3,
		GFxHitTestType_HitTest_MAX               = 4
	};

	/**
	 * Enum ScaleformUI.EGbxGFxMovieGetChildStrategy
	 */
	enum class EGbxGFxMovieGetChildStrategy : uint8_t
	{
		Default              = 0,
		ByTable              = 1,
		ByTableThenPath      = 2,
		ByPath               = 3,
		ByPathThenTable      = 4,
		ByBreadthFirstSearch = 5,
		ByDistributedSearch  = 6,
		TEST_CASE            = 7,
		MAX                  = 8
	};

	/**
	 * Enum ScaleformUI.FlashTextureRescale
	 */
	enum class EFlashTextureRescale : uint8_t
	{
		FlashTextureScale_High    = 0,
		FlashTextureScale_Low     = 1,
		FlashTextureScale_NextLow = 2,
		FlashTextureScale_Mult4   = 3,
		FlashTextureScale_None    = 4,
		FlashTextureScale_MAX     = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ScaleformUI.ExternalTexture
	 * Size -> 0x0018
	 */
	struct FExternalTexture
	{
	public:
		class FString                                              Resource;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            Texture;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.GFxWidgetBinding
	 * Size -> 0x0010
	 */
	struct FGFxWidgetBinding
	{
	public:
		class FName                                                WidgetName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.ASValue
	 * Size -> 0x0038
	 */
	struct FASValue
	{
	public:
		EASType                                                    ASType;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ASBoolean;                                               // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9YS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ASInt;                                                   // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AsNumber;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XTRW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AsString;                                                // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V22Y[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGFxObject*                                          AsObject;                                                // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.ASPerspectiveTransform
	 * Size -> 0x0040
	 */
	struct FASPerspectiveTransform
	{
	public:
		struct FVector4                                            Row0;                                                    // 0x0000(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row1;                                                    // 0x0010(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row2;                                                    // 0x0020(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row3;                                                    // 0x0030(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.ASDisplayInfo
	 * Size -> 0x002C
	 */
	struct FASDisplayInfo
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x000C(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XRotation;                                               // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YRotation;                                               // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Visible;                                                 // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23O4[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ScaleformUI.ASColorTransform
	 * Size -> 0x0020
	 */
	struct FASColorTransform
	{
	public:
		struct FLinearColor                                        Multiply;                                                // 0x0000(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Add;                                                     // 0x0010(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.ScaleformTextureReference
	 * Size -> 0x0050
	 */
	struct FScaleformTextureReference
	{
	public:
		unsigned char                                              Asset[0x28];                                             // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ScaleformUI.ScaleformTextureReference.Asset
		unsigned char                                              HighDefinitionAsset[0x28];                               // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ScaleformUI.ScaleformTextureReference.HighDefinitionAsset
	};

	/**
	 * ScriptStruct ScaleformUI.FlashNativeBindingInfo
	 * Size -> 0x0030
	 */
	struct FFlashNativeBindingInfo
	{
	public:
		class FString                                              InstanceName;                                            // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FullPath;                                                // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClosestParentInstanceName;                               // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.ScaleformAssetReference
	 * Size -> 0x0028
	 */
	struct FScaleformAssetReference
	{
	public:
		unsigned char                                              Asset[0x28];                                             // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ScaleformUI.ScaleformAssetReference.Asset
	};

	/**
	 * ScriptStruct ScaleformUI.GbxGFxBounds
	 * Size -> 0x0010
	 */
	struct FGbxGFxBounds
	{
	public:
		float                                                      Top;                                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Left;                                                    // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom;                                                  // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
