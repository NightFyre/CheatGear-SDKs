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
	 * Enum UMG.ESlateVisibility
	 */
	enum class ESlateVisibility : uint8_t
	{
		Visible              = 0,
		Collapsed            = 1,
		Hidden               = 2,
		HitTestInvisible     = 3,
		SelfHitTestInvisible = 4,
		MAX                  = 5
	};

	/**
	 * Enum UMG.EDragPivot
	 */
	enum class EDragPivot : uint8_t
	{
		MouseDown    = 0,
		TopLeft      = 1,
		TopCenter    = 2,
		TopRight     = 3,
		CenterLeft   = 4,
		CenterCenter = 5,
		CenterRight  = 6,
		BottomLeft   = 7,
		BottomCenter = 8,
		BottomRight  = 9,
		MAX          = 10
	};

	/**
	 * Enum UMG.ESlateSizeRule
	 */
	enum class ESlateSizeRule : uint8_t
	{
		Automatic = 0,
		Fill      = 1,
		MAX       = 2
	};

	/**
	 * Enum UMG.EWidgetDesignFlags
	 */
	enum class EWidgetDesignFlags : uint8_t
	{
		None        = 0,
		Designing   = 1,
		ShowOutline = 2,
		MAX         = 3
	};

	/**
	 * Enum UMG.EDesignPreviewSizeMode
	 */
	enum class EDesignPreviewSizeMode : uint8_t
	{
		FillScreen      = 0,
		Custom          = 1,
		CustomOnScreen  = 2,
		Desired         = 3,
		DesiredOnScreen = 4,
		MAX             = 5
	};

	/**
	 * Enum UMG.EUMGSequencePlayMode
	 */
	enum class EUMGSequencePlayMode : uint8_t
	{
		Forward  = 0,
		Reverse  = 1,
		PingPong = 2,
		MAX      = 3
	};

	/**
	 * Enum UMG.EBindingKind
	 */
	enum class EBindingKind : uint8_t
	{
		Function = 0,
		Property = 1,
		MAX      = 2
	};

	/**
	 * Enum UMG.EWidgetBlendMode
	 */
	enum class EWidgetBlendMode : uint8_t
	{
		Opaque      = 0,
		Masked      = 1,
		Transparent = 2,
		MAX         = 3
	};

	/**
	 * Enum UMG.EWidgetSpace
	 */
	enum class EWidgetSpace : uint8_t
	{
		World  = 0,
		Screen = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UMG.PropertyPathSegment
	 * Size -> 0x0020
	 */
	struct FPropertyPathSegment
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ArrayIndex;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V95K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStruct*                                             Struct;                                                  // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UField*                                              Field;                                                   // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct UMG.DynamicPropertyPath
	 * Size -> 0x0010
	 */
	struct FDynamicPropertyPath
	{
	public:
		TArray<struct FPropertyPathSegment>                        Segments;                                                // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct UMG.WidgetTransform
	 * Size -> 0x001C
	 */
	struct FWidgetTransform
	{
	public:
		struct FVector2D                                           Translation;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Scale;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Shear;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Angle;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct UMG.EventReply
	 * Size -> 0x00E8
	 */
	struct FEventReply
	{
	public:
		unsigned char                                              UnknownData_FO10[0xE8];                                  // 0x0000(0x00E8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.NamedSlotBinding
	 * Size -> 0x0010
	 */
	struct FNamedSlotBinding
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidget*                                             Content;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct UMG.PaintContext
	 * Size -> 0x0030
	 */
	struct FPaintContext
	{
	public:
		unsigned char                                              UnknownData_YLEB[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.AnchorData
	 * Size -> 0x0028
	 */
	struct FAnchorData
	{
	public:
		struct FMargin                                             Offsets;                                                 // 0x0000(0x0010) Edit, BlueprintVisible
		struct FAnchors                                            Anchors;                                                 // 0x0010(0x0010) Edit, BlueprintVisible
		struct FVector2D                                           Alignment;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct UMG.SlateChildSize
	 * Size -> 0x0008
	 */
	struct FSlateChildSize
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESlateSizeRule                                             SizeRule;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_470G[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.WidgetAnimationBinding
	 * Size -> 0x0024
	 */
	struct FWidgetAnimationBinding
	{
	public:
		class FName                                                WidgetName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SlotWidgetName;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AnimationGuid;                                           // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsRootWidget;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MY0Y[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.DelegateRuntimeBinding
	 * Size -> 0x0038
	 */
	struct FDelegateRuntimeBinding
	{
	public:
		class FString                                              ObjectName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FName                                                PropertyName;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FunctionName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDynamicPropertyPath                                SourcePath;                                              // 0x0020(0x0010)
		EBindingKind                                               Kind;                                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9S83[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.WidgetNavigationData
	 * Size -> 0x0014
	 */
	struct FWidgetNavigationData
	{
	public:
		EUINavigationRule                                          Rule;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6TID[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WidgetToFocus;                                           // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F9RJ[0x8];                                   // 0x000C(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.MovieScene2DTransformSectionTemplate
	 * Size -> 0x0368 (FullSize[0x0380] - InheritedSize[0x0018])
	 */
	struct FMovieScene2DTransformSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020)
		struct FRichCurve                                          Translation[0x2];                                        // 0x0038(0x00F0)
		struct FRichCurve                                          Rotation;                                                // 0x0128(0x0078)
		struct FRichCurve                                          Scale[0x2];                                              // 0x01A0(0x00F0)
		struct FRichCurve                                          Shear[0x2];                                              // 0x0290(0x00F0)
	};

	/**
	 * ScriptStruct UMG.MovieSceneMarginSectionTemplate
	 * Size -> 0x0200 (FullSize[0x0218] - InheritedSize[0x0018])
	 */
	struct FMovieSceneMarginSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020)
		struct FRichCurve                                          TopCurve;                                                // 0x0038(0x0078)
		struct FRichCurve                                          LeftCurve;                                               // 0x00B0(0x0078)
		struct FRichCurve                                          RightCurve;                                              // 0x0128(0x0078)
		struct FRichCurve                                          BottomCurve;                                             // 0x01A0(0x0078)
	};

	/**
	 * ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
	{
	public:
		TArray<class FName>                                        BrushPropertyNamePath;                                   // 0x0048(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
