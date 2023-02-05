﻿#pragma once

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
	 * Enum UMG.EVirtualKeyboardType
	 */
	enum class EVirtualKeyboardType : uint8_t
	{
		Default      = 0,
		Number       = 1,
		Web          = 2,
		Email        = 3,
		Password     = 4,
		AlphaNumeric = 5,
		MAX          = 6
	};

	/**
	 * Enum UMG.ESlateAccessibleBehavior
	 */
	enum class ESlateAccessibleBehavior : uint8_t
	{
		NotAccessible = 0,
		Auto          = 1,
		Summary       = 2,
		Custom        = 3,
		ToolTip       = 4,
		MAX           = 5
	};

	/**
	 * Enum UMG.EWidgetAnimationEvent
	 */
	enum class EWidgetAnimationEvent : uint8_t
	{
		Started  = 0,
		Finished = 1,
		MAX      = 2
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
	 * Enum UMG.EWidgetTickFrequency
	 */
	enum class EWidgetTickFrequency : uint8_t
	{
		Never = 0,
		Auto  = 1,
		MAX   = 2
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
	 * Enum UMG.EDynamicBoxType
	 */
	enum class EDynamicBoxType : uint8_t
	{
		Horizontal   = 0,
		Vertical     = 1,
		Wrap         = 2,
		VerticalWrap = 3,
		Radial       = 4,
		Overlay      = 5,
		MAX          = 6
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
		None                = 0,
		Designing           = 1,
		ShowOutline         = 2,
		ExecutePreConstruct = 3,
		MAX                 = 4
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
	 * Enum UMG.EWidgetSpace
	 */
	enum class EWidgetSpace : uint8_t
	{
		World  = 0,
		Screen = 1,
		MAX    = 2
	};

	/**
	 * Enum UMG.EWidgetTimingPolicy
	 */
	enum class EWidgetTimingPolicy : uint8_t
	{
		RealTime = 0,
		GameTime = 1,
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
	 * Enum UMG.EWidgetGeometryMode
	 */
	enum class EWidgetGeometryMode : uint8_t
	{
		Plane    = 0,
		Cylinder = 1,
		MAX      = 2
	};

	/**
	 * Enum UMG.EWindowVisibility
	 */
	enum class EWindowVisibility : uint8_t
	{
		Visible              = 0,
		SelfHitTestInvisible = 1,
		MAX                  = 2
	};

	/**
	 * Enum UMG.ETickMode
	 */
	enum class ETickMode : uint8_t
	{
		Disabled  = 0,
		Enabled   = 1,
		Automatic = 2,
		MAX       = 3
	};

	/**
	 * Enum UMG.EWidgetInteractionSource
	 */
	enum class EWidgetInteractionSource : uint8_t
	{
		World        = 0,
		Mouse        = 1,
		CenterScreen = 2,
		Custom       = 3,
		MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UMG.WidgetTransform
	 * Size -> 0x0038
	 */
	struct FWidgetTransform
	{
	public:
		struct FVector2D                                           Translation;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Shear;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91JP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.NamedSlotBinding
	 * Size -> 0x0010
	 */
	struct FNamedSlotBinding
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             Content;                                                 // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.AnimationEventBinding
	 * Size -> 0x0028
	 */
	struct FAnimationEventBinding
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		EWidgetAnimationEvent                                      AnimationEvent;                                          // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CRM[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                UserTag;                                                 // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JX7R[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.SlateChildSize
	 * Size -> 0x0008
	 */
	struct FSlateChildSize
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateSizeRule                                             SizeRule;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FPP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.RadialBoxSettings
	 * Size -> 0x0010
	 */
	struct FRadialBoxSettings
	{
	public:
		float                                                      StartingAngle;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDistributeItemsEvenly;                                  // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GTD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngleBetweenItems;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SectorCentralAngle;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.UserWidgetPool
	 * Size -> 0x0088
	 */
	struct FUserWidgetPool
	{
	public:
		TArray<class UUserWidget*>                                 ActiveWidgets;                                           // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UUserWidget*>                                 InactiveWidgets;                                         // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UAHU[0x68];                                  // 0x0020(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.ShapedTextOptions
	 * Size -> 0x0003
	 */
	struct FShapedTextOptions
	{
	public:
		bool                                                       bOverride_TextShapingMethod : 1;                         // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_TextFlowDirection : 1;                         // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextShapingMethod                                         TextShapingMethod;                                       // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextFlowDirection                                         TextFlowDirection;                                       // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.DynamicPropertyPath
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FDynamicPropertyPath : public FCachedPropertyPath
	{	};

	/**
	 * ScriptStruct UMG.AnchorData
	 * Size -> 0x0040
	 */
	struct FAnchorData
	{
	public:
		struct FMargin                                             Offsets;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FAnchors                                            Anchors;                                                 // 0x0010(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           Alignment;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.MovieScene2DTransformMask
	 * Size -> 0x0004
	 */
	struct FMovieScene2DTransformMask
	{
	public:
		uint32_t                                                   Mask;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct UMG.SlateMeshVertex
	 * Size -> 0x003C
	 */
	struct FSlateMeshVertex
	{
	public:
		struct FVector2f                                           Position;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           UV0;                                                     // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           UV1;                                                     // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           UV2;                                                     // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           UV3;                                                     // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           UV4;                                                     // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           UV5;                                                     // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.SequenceTickManagerWidgetData
	 * Size -> 0x0003
	 */
	struct FSequenceTickManagerWidgetData
	{
	public:
		unsigned char                                              UnknownData_YNK8[0x3];                                   // 0x0000(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.WidgetAnimationBinding
	 * Size -> 0x0024
	 */
	struct FWidgetAnimationBinding
	{
	public:
		class FName                                                WidgetName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotWidgetName;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               AnimationGuid;                                           // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRootWidget;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EYLF[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
	 * Size -> 0x001C
	 */
	struct FBlueprintWidgetAnimationDelegateBinding
	{
	public:
		EWidgetAnimationEvent                                      Action;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5A8U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimationToBind;                                         // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionNameToBind;                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UserTag;                                                 // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.DelegateRuntimeBinding
	 * Size -> 0x0050
	 */
	struct FDelegateRuntimeBinding
	{
	public:
		class FString                                              ObjectName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDynamicPropertyPath                                SourcePath;                                              // 0x0020(0x0028) NativeAccessSpecifierPublic
		EBindingKind                                               Kind;                                                    // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ83[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.WidgetNavigationData
	 * Size -> 0x0024
	 */
	struct FWidgetNavigationData
	{
	public:
		EUINavigationRule                                          Rule;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQP4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WidgetToFocus;                                           // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UWidget>                              Widget;                                                  // 0x000C(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      CustomDelegate;                                          // 0x0014(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.EventReply
	 * Size -> 0x00B8
	 */
	struct FEventReply
	{
	public:
		unsigned char                                              UnknownData_99O0[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.PaintContext
	 * Size -> 0x0030
	 */
	struct FPaintContext
	{
	public:
		unsigned char                                              UnknownData_NA87[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
	{
	public:
		TArray<class FName>                                        BrushPropertyNamePath;                                   // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct UMG.RichTextStyleRow
	 * Size -> 0x0348 (FullSize[0x0350] - InheritedSize[0x0008])
	 */
	struct FRichTextStyleRow : public FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_MV2V[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0010(0x0340) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.RichImageRow
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRichImageRow : public FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_DZPC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Brush;                                                   // 0x0010(0x00D0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.WidgetComponentInstanceData
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
	{
	public:
		unsigned char                                              UnknownData_JU6L[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
