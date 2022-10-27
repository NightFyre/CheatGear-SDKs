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
	 * Enum SlateCore.EFontLanguage
	 */
	enum class EFontLanguage : uint8_t
	{
		German             = 0,
		English            = 1,
		Spanish            = 2,
		Mexican            = 3,
		French             = 4,
		Italian            = 5,
		Korean             = 6,
		Polish             = 7,
		Portuguese         = 8,
		Russian            = 9,
		SimplifiedChinese  = 10,
		TraditionalChinese = 11,
		Japanese           = 12,
		Thai               = 13,
		Turkish            = 14,
		COUNT              = 15,
		MAX                = 16
	};

	/**
	 * Enum SlateCore.EFontHinting
	 */
	enum class EFontHinting : uint8_t
	{
		Default    = 0,
		Auto       = 1,
		AutoLight  = 2,
		Monochrome = 3,
		None       = 4,
		MAX        = 5
	};

	/**
	 * Enum SlateCore.ESelectInfo
	 */
	enum class ESelectInfo : uint8_t
	{
		OnKeyPress   = 0,
		OnNavigation = 1,
		OnMouseClick = 2,
		Direct       = 3,
		MAX          = 4
	};

	/**
	 * Enum SlateCore.ETextCommit
	 */
	enum class ETextCommit : uint8_t
	{
		Default          = 0,
		OnEnter          = 1,
		OnUserMovedFocus = 2,
		OnCleared        = 3,
		MAX              = 4
	};

	/**
	 * Enum SlateCore.EScrollDirection
	 */
	enum class EScrollDirection : uint8_t
	{
		Scroll_Down = 0,
		Scroll_Up   = 1,
		Scroll_MAX  = 2
	};

	/**
	 * Enum SlateCore.EOrientation
	 */
	enum class EOrientation : uint8_t
	{
		Orient_Horizontal = 0,
		Orient_Vertical   = 1,
		Orient_MAX        = 2
	};

	/**
	 * Enum SlateCore.EMenuPlacement
	 */
	enum class EMenuPlacement : uint8_t
	{
		MenuPlacement_BelowAnchor         = 0,
		MenuPlacement_CenteredBelowAnchor = 1,
		MenuPlacement_ComboBox            = 2,
		MenuPlacement_ComboBoxRight       = 3,
		MenuPlacement_MenuRight           = 4,
		MenuPlacement_AboveAnchor         = 5,
		MenuPlacement_CenteredAboveAnchor = 6,
		MenuPlacement_MenuLeft            = 7,
		MenuPlacement_MAX                 = 8
	};

	/**
	 * Enum SlateCore.EVerticalAlignment
	 */
	enum class EVerticalAlignment : uint8_t
	{
		VAlign_Fill   = 0,
		VAlign_Top    = 1,
		VAlign_Center = 2,
		VAlign_Bottom = 3,
		VAlign_MAX    = 4
	};

	/**
	 * Enum SlateCore.EHorizontalAlignment
	 */
	enum class EHorizontalAlignment : uint8_t
	{
		HAlign_Fill   = 0,
		HAlign_Left   = 1,
		HAlign_Center = 2,
		HAlign_Right  = 3,
		HAlign_MAX    = 4
	};

	/**
	 * Enum SlateCore.EUINavigation
	 */
	enum class EUINavigation : uint8_t
	{
		Left     = 0,
		Right    = 1,
		Up       = 2,
		Down     = 3,
		Next     = 4,
		Previous = 5,
		Num      = 6,
		Invalid  = 7,
		MAX      = 8
	};

	/**
	 * Enum SlateCore.EButtonPressMethod
	 */
	enum class EButtonPressMethod : uint8_t
	{
		DownAndUp     = 0,
		ButtonPress   = 1,
		ButtonRelease = 2,
		MAX           = 3
	};

	/**
	 * Enum SlateCore.EButtonTouchMethod
	 */
	enum class EButtonTouchMethod : uint8_t
	{
		DownAndUp  = 0,
		PreciseTap = 1,
		MAX        = 2
	};

	/**
	 * Enum SlateCore.EButtonClickMethod
	 */
	enum class EButtonClickMethod : uint8_t
	{
		DownAndUp    = 0,
		MouseDown    = 1,
		MouseUp      = 2,
		PreciseClick = 3,
		MAX          = 4
	};

	/**
	 * Enum SlateCore.ESlateColorStylingMode
	 */
	enum class ESlateColorStylingMode : uint8_t
	{
		UseColor_Specified          = 0,
		UseColor_Specified_Link     = 1,
		UseColor_Foreground         = 2,
		UseColor_Foreground_Subdued = 3,
		UseColor_MAX                = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushImageType
	 */
	enum class ESlateBrushImageType : uint8_t
	{
		NoImage   = 0,
		FullColor = 1,
		Linear    = 2,
		MAX       = 3
	};

	/**
	 * Enum SlateCore.ESlateBrushMirrorType
	 */
	enum class ESlateBrushMirrorType : uint8_t
	{
		NoMirror   = 0,
		Horizontal = 1,
		Vertical   = 2,
		Both       = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushTileType
	 */
	enum class ESlateBrushTileType : uint8_t
	{
		NoTile     = 0,
		Horizontal = 1,
		Vertical   = 2,
		Both       = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushDrawType
	 */
	enum class ESlateBrushDrawType : uint8_t
	{
		NoDrawType = 0,
		Box        = 1,
		Border     = 2,
		Image      = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ECheckBoxState
	 */
	enum class ECheckBoxState : uint8_t
	{
		Unchecked    = 0,
		Checked      = 1,
		Undetermined = 2,
		MAX          = 3
	};

	/**
	 * Enum SlateCore.ESlateCheckBoxType
	 */
	enum class ESlateCheckBoxType : uint8_t
	{
		CheckBox     = 0,
		ToggleButton = 1,
		MAX          = 2
	};

	/**
	 * Enum SlateCore.EConsumeMouseWheel
	 */
	enum class EConsumeMouseWheel : uint8_t
	{
		WhenScrollingPossible = 0,
		Always                = 1,
		MAX                   = 2
	};

	/**
	 * Enum SlateCore.EFocusCause
	 */
	enum class EFocusCause : uint8_t
	{
		Mouse                = 0,
		Navigation           = 1,
		SetDirectly          = 2,
		Cleared              = 3,
		OtherWidgetLostFocus = 4,
		WindowActivate       = 5,
		MAX                  = 6
	};

	/**
	 * Enum SlateCore.EUINavigationRule
	 */
	enum class EUINavigationRule : uint8_t
	{
		Escape   = 0,
		Explicit = 1,
		Wrap     = 2,
		Stop     = 3,
		Custom   = 4,
		Invalid  = 5,
		MAX      = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SlateCore.Margin
	 * Size -> 0x0010
	 */
	struct FMargin
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Top;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Right;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Bottom;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SlateCore.SlateColor
	 * Size -> 0x0030
	 */
	struct FSlateColor
	{
	public:
		struct FLinearColor                                        SpecifiedColor;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		ESlateColorStylingMode                                     ColorUseRule;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_T95W[0x1F];                                  // 0x0011(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateBrush
	 * Size -> 0x0090
	 */
	struct FSlateBrush
	{
	public:
		struct FVector2D                                           ImageSize;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESlateBrushDrawType                                        DrawAs;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NVKE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Margin;                                                  // 0x000C(0x0010) Edit, BlueprintVisible
		struct FLinearColor                                        Tint;                                                    // 0x001C(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GJTZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         TintColor;                                               // 0x0030(0x0030) Edit, BlueprintVisible
		ESlateBrushTileType                                        Tiling;                                                  // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESlateBrushMirrorType                                      Mirroring;                                               // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESlateBrushImageType                                       ImageType;                                               // 0x0062(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HTB8[0x5];                                   // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             ResourceObject;                                          // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class FName                                                ResourceName;                                            // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		bool                                                       bIsDynamicallyLoaded;                                    // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       bHasUObject;                                             // 0x0079(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_1U9I[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox2D                                              UVRegion;                                                // 0x007C(0x0014) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
	};

	/**
	 * ScriptStruct SlateCore.InputEvent
	 * Size -> 0x0028
	 */
	struct FInputEvent
	{
	public:
		unsigned char                                              UnknownData_UXZP[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.PointerEvent
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	struct FPointerEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_97HF[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.Geometry
	 * Size -> 0x0034
	 */
	struct FGeometry
	{
	public:
		unsigned char                                              UnknownData_SJ85[0x34];                                  // 0x0000(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateWidgetStyle
	 * Size -> 0x0008
	 */
	struct FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_92IT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateSound
	 * Size -> 0x0018
	 */
	struct FSlateSound
	{
	public:
		class UObject*                                             ResourceObject;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_P1U3[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ButtonStyle
	 * Size -> 0x02A0 (FullSize[0x02A8] - InheritedSize[0x0008])
	 */
	struct FButtonStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         Normal;                                                  // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         Hovered;                                                 // 0x0098(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         Pressed;                                                 // 0x0128(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         Disabled;                                                // 0x01B8(0x0090) Edit, BlueprintVisible
		struct FMargin                                             NormalPadding;                                           // 0x0248(0x0010) Edit, BlueprintVisible
		struct FMargin                                             PressedPadding;                                          // 0x0258(0x0010) Edit, BlueprintVisible
		struct FSlateSound                                         PressedSlateSound;                                       // 0x0268(0x0018) Edit, BlueprintVisible
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x0280(0x0018) Edit, BlueprintVisible
		class FName                                                PressedSound;                                            // 0x0298(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HoveredSound;                                            // 0x02A0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SlateCore.ComboButtonStyle
	 * Size -> 0x03D8 (FullSize[0x03E0] - InheritedSize[0x0008])
	 */
	struct FComboButtonStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0008(0x02A8) Edit, BlueprintVisible
		struct FSlateBrush                                         DownArrowImage;                                          // 0x02B0(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         MenuBorderBrush;                                         // 0x0340(0x0090) Edit, BlueprintVisible
		struct FMargin                                             MenuBorderPadding;                                       // 0x03D0(0x0010) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.ComboBoxStyle
	 * Size -> 0x0420 (FullSize[0x0428] - InheritedSize[0x0008])
	 */
	struct FComboBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x0008(0x03E0) Edit, BlueprintVisible
		struct FSlateSound                                         PressedSlateSound;                                       // 0x03E8(0x0018) Edit, BlueprintVisible
		struct FSlateSound                                         SelectionChangeSlateSound;                               // 0x0400(0x0018) Edit, BlueprintVisible
		class FName                                                PressedSound;                                            // 0x0418(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SelectionChangeSound;                                    // 0x0420(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SlateCore.SlateFontInfo
	 * Size -> 0x0040
	 */
	struct FSlateFontInfo
	{
	public:
		class UObject*                                             FontObject;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             FontMaterial;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OA73[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TypefaceFontName;                                        // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Size;                                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FontName;                                                // 0x0034(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFontHinting                                               Hinting;                                                 // 0x003C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C7V8[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.EditableTextStyle
	 * Size -> 0x0220 (FullSize[0x0228] - InheritedSize[0x0008])
	 */
	struct FEditableTextStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0040) Edit, BlueprintVisible
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0048(0x0030) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageSelected;                                 // 0x0078(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageComposing;                                // 0x0108(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         CaretImage;                                              // 0x0198(0x0090) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.ScrollBarStyle
	 * Size -> 0x0510 (FullSize[0x0518] - InheritedSize[0x0008])
	 */
	struct FScrollBarStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HorizontalBackgroundImage;                               // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         VerticalBackgroundImage;                                 // 0x0098(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         VerticalTopSlotImage;                                    // 0x0128(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         HorizontalTopSlotImage;                                  // 0x01B8(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         VerticalBottomSlotImage;                                 // 0x0248(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         HorizontalBottomSlotImage;                               // 0x02D8(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x0368(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         HoveredThumbImage;                                       // 0x03F8(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         DraggedThumbImage;                                       // 0x0488(0x0090) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.EditableTextBoxStyle
	 * Size -> 0x0858 (FullSize[0x0860] - InheritedSize[0x0008])
	 */
	struct FEditableTextBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundImageNormal;                                   // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageHovered;                                  // 0x0098(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageFocused;                                  // 0x0128(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageReadOnly;                                 // 0x01B8(0x0090) Edit, BlueprintVisible
		struct FMargin                                             Padding;                                                 // 0x0248(0x0010) Edit, BlueprintVisible
		struct FSlateFontInfo                                      Font;                                                    // 0x0258(0x0040) Edit, BlueprintVisible
		struct FSlateColor                                         ForegroundColor;                                         // 0x0298(0x0030) Edit, BlueprintVisible
		struct FSlateColor                                         BackgroundColor;                                         // 0x02C8(0x0030) Edit, BlueprintVisible
		struct FSlateColor                                         ReadOnlyForegroundColor;                                 // 0x02F8(0x0030) Edit, BlueprintVisible
		struct FMargin                                             HScrollBarPadding;                                       // 0x0328(0x0010) Edit, BlueprintVisible
		struct FMargin                                             VScrollBarPadding;                                       // 0x0338(0x0010) Edit, BlueprintVisible
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0348(0x0518) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.TextBlockStyle
	 * Size -> 0x0158 (FullSize[0x0160] - InheritedSize[0x0008])
	 */
	struct FTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0040) Edit, BlueprintVisible
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0048(0x0030) Edit, BlueprintVisible
		struct FVector2D                                           ShadowOffset;                                            // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FSlateColor                                         SelectedBackgroundColor;                                 // 0x0090(0x0030) Edit
		struct FLinearColor                                        HighlightColor;                                          // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FSlateBrush                                         HighlightShape;                                          // 0x00D0(0x0090) Edit, BlueprintVisible, AdvancedDisplay
	};

	/**
	 * ScriptStruct SlateCore.SpinBoxStyle
	 * Size -> 0x0310 (FullSize[0x0318] - InheritedSize[0x0008])
	 */
	struct FSpinBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         HoveredBackgroundBrush;                                  // 0x0098(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         ActiveFillBrush;                                         // 0x0128(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         InactiveFillBrush;                                       // 0x01B8(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         ArrowsImage;                                             // 0x0248(0x0090) Edit, BlueprintVisible
		struct FSlateColor                                         ForegroundColor;                                         // 0x02D8(0x0030)
		struct FMargin                                             TextPadding;                                             // 0x0308(0x0010) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.FontData
	 * Size -> 0x0030
	 */
	struct FFontData
	{
	public:
		class FString                                              FontFilename;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UFontBulkData*                                       BulkDataPtr;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFontHinting                                               Hinting;                                                 // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F5Z4[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      FontData;                                                // 0x0020(0x0010) ZeroConstructor, Deprecated
	};

	/**
	 * ScriptStruct SlateCore.TypefaceEntry
	 * Size -> 0x0038
	 */
	struct FTypefaceEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFontData                                           Font;                                                    // 0x0008(0x0030) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.Typeface
	 * Size -> 0x0010
	 */
	struct FTypeface
	{
	public:
		TArray<struct FTypefaceEntry>                              Fonts;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct SlateCore.CompositeSubFont
	 * Size -> 0x0038
	 */
	struct FCompositeSubFont
	{
	public:
		struct FTypeface                                           Typeface;                                                // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<struct FInt32Range>                                 CharacterRanges;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<EFontLanguage>                                      Languages;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      ScalingFactor;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6YXC[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CompositeFont
	 * Size -> 0x0028
	 */
	struct FCompositeFont
	{
	public:
		struct FTypeface                                           DefaultTypeface;                                         // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<struct FCompositeSubFont>                           SubTypefaces;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		unsigned char                                              UnknownData_0VFO[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.WindowStyle
	 * Size -> 0x1020 (FullSize[0x1028] - InheritedSize[0x0008])
	 */
	struct FWindowStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        MinimizeButtonStyle;                                     // 0x0008(0x02A8) Edit, BlueprintVisible
		struct FButtonStyle                                        MaximizeButtonStyle;                                     // 0x02B0(0x02A8) Edit, BlueprintVisible
		struct FButtonStyle                                        RestoreButtonStyle;                                      // 0x0558(0x02A8) Edit, BlueprintVisible
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x0800(0x02A8) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TitleTextStyle;                                          // 0x0AA8(0x0160) Edit, BlueprintVisible
		struct FSlateBrush                                         ActiveTitleBrush;                                        // 0x0C08(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         InactiveTitleBrush;                                      // 0x0C98(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         FlashTitleBrush;                                         // 0x0D28(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         OutlineBrush;                                            // 0x0DB8(0x0090) Edit, BlueprintVisible
		struct FSlateColor                                         OutlineColor;                                            // 0x0E48(0x0030) Edit, BlueprintVisible
		struct FSlateBrush                                         BorderBrush;                                             // 0x0E78(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0F08(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         ChildBackgroundBrush;                                    // 0x0F98(0x0090) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.ScrollBorderStyle
	 * Size -> 0x0120 (FullSize[0x0128] - InheritedSize[0x0008])
	 */
	struct FScrollBorderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x0098(0x0090) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.ScrollBoxStyle
	 * Size -> 0x0240 (FullSize[0x0248] - InheritedSize[0x0008])
	 */
	struct FScrollBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x0098(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         LeftShadowBrush;                                         // 0x0128(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         RightShadowBrush;                                        // 0x01B8(0x0090) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.DockTabStyle
	 * Size -> 0x06E0 (FullSize[0x06E8] - InheritedSize[0x0008])
	 */
	struct FDockTabStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x0008(0x02A8) Edit
		struct FSlateBrush                                         NormalBrush;                                             // 0x02B0(0x0090) Edit
		struct FSlateBrush                                         ActiveBrush;                                             // 0x0340(0x0090) Edit
		struct FSlateBrush                                         ColorOverlayBrush;                                       // 0x03D0(0x0090) Edit
		struct FSlateBrush                                         ForegroundBrush;                                         // 0x0460(0x0090) Edit
		struct FSlateBrush                                         HoveredBrush;                                            // 0x04F0(0x0090) Edit
		struct FSlateBrush                                         ContentAreaBrush;                                        // 0x0580(0x0090) Edit
		struct FSlateBrush                                         TabWellBrush;                                            // 0x0610(0x0090) Edit
		struct FMargin                                             TabPadding;                                              // 0x06A0(0x0010) Edit
		float                                                      OverlapWidth;                                            // 0x06B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8Y69[0x4];                                   // 0x06B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         FlashColor;                                              // 0x06B8(0x0030) Edit
	};

	/**
	 * ScriptStruct SlateCore.TableColumnHeaderStyle
	 * Size -> 0x0510 (FullSize[0x0518] - InheritedSize[0x0008])
	 */
	struct FTableColumnHeaderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         SortPrimaryAscendingImage;                               // 0x0008(0x0090) Edit
		struct FSlateBrush                                         SortPrimaryDescendingImage;                              // 0x0098(0x0090) Edit
		struct FSlateBrush                                         SortSecondaryAscendingImage;                             // 0x0128(0x0090) Edit
		struct FSlateBrush                                         SortSecondaryDescendingImage;                            // 0x01B8(0x0090) Edit
		struct FSlateBrush                                         NormalBrush;                                             // 0x0248(0x0090) Edit
		struct FSlateBrush                                         HoveredBrush;                                            // 0x02D8(0x0090) Edit
		struct FSlateBrush                                         MenuDropdownImage;                                       // 0x0368(0x0090) Edit
		struct FSlateBrush                                         MenuDropdownNormalBorderBrush;                           // 0x03F8(0x0090) Edit
		struct FSlateBrush                                         MenuDropdownHoveredBorderBrush;                          // 0x0488(0x0090) Edit
	};

	/**
	 * ScriptStruct SlateCore.SplitterStyle
	 * Size -> 0x0120 (FullSize[0x0128] - InheritedSize[0x0008])
	 */
	struct FSplitterStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HandleNormalBrush;                                       // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         HandleHighlightBrush;                                    // 0x0098(0x0090) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.HeaderRowStyle
	 * Size -> 0x0C18 (FullSize[0x0C20] - InheritedSize[0x0008])
	 */
	struct FHeaderRowStyle : public FSlateWidgetStyle
	{
	public:
		struct FTableColumnHeaderStyle                             ColumnStyle;                                             // 0x0008(0x0518) Edit
		struct FTableColumnHeaderStyle                             LastColumnStyle;                                         // 0x0520(0x0518) Edit
		struct FSplitterStyle                                      ColumnSplitterStyle;                                     // 0x0A38(0x0128) Edit
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0B60(0x0090) Edit
		struct FSlateColor                                         ForegroundColor;                                         // 0x0BF0(0x0030) Edit
	};

	/**
	 * ScriptStruct SlateCore.TableRowStyle
	 * Size -> 0x0720 (FullSize[0x0728] - InheritedSize[0x0008])
	 */
	struct FTableRowStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         SelectorFocusedBrush;                                    // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         ActiveHoveredBrush;                                      // 0x0098(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         ActiveBrush;                                             // 0x0128(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         InactiveHoveredBrush;                                    // 0x01B8(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         InactiveBrush;                                           // 0x0248(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         EvenRowBackgroundHoveredBrush;                           // 0x02D8(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         EvenRowBackgroundBrush;                                  // 0x0368(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         OddRowBackgroundHoveredBrush;                            // 0x03F8(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         OddRowBackgroundBrush;                                   // 0x0488(0x0090) Edit, BlueprintVisible
		struct FSlateColor                                         TextColor;                                               // 0x0518(0x0030) Edit, BlueprintVisible
		struct FSlateColor                                         SelectedTextColor;                                       // 0x0548(0x0030) Edit, BlueprintVisible
		struct FSlateBrush                                         DropIndicator_Above;                                     // 0x0578(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         DropIndicator_Onto;                                      // 0x0608(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         DropIndicator_Below;                                     // 0x0698(0x0090) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.InlineTextImageStyle
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FInlineTextImageStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         Image;                                                   // 0x0008(0x0090) Edit
		int16_t                                                    Baseline;                                                // 0x0098(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DLVI[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SliderStyle
	 * Size -> 0x0240 (FullSize[0x0248] - InheritedSize[0x0008])
	 */
	struct FSliderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         NormalBarImage;                                          // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         DisabledBarImage;                                        // 0x0098(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x0128(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         DisabledThumbImage;                                      // 0x01B8(0x0090) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.VolumeControlStyle
	 * Size -> 0x0518 (FullSize[0x0520] - InheritedSize[0x0008])
	 */
	struct FVolumeControlStyle : public FSlateWidgetStyle
	{
	public:
		struct FSliderStyle                                        SliderStyle;                                             // 0x0008(0x0248) Edit
		struct FSlateBrush                                         HighVolumeImage;                                         // 0x0250(0x0090) Edit
		struct FSlateBrush                                         MidVolumeImage;                                          // 0x02E0(0x0090) Edit
		struct FSlateBrush                                         LowVolumeImage;                                          // 0x0370(0x0090) Edit
		struct FSlateBrush                                         NoVolumeImage;                                           // 0x0400(0x0090) Edit
		struct FSlateBrush                                         MutedImage;                                              // 0x0490(0x0090) Edit
	};

	/**
	 * ScriptStruct SlateCore.SearchBoxStyle
	 * Size -> 0x0AF8 (FullSize[0x0B00] - InheritedSize[0x0008])
	 */
	struct FSearchBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FEditableTextBoxStyle                               TextBoxStyle;                                            // 0x0008(0x0860) Edit
		struct FSlateFontInfo                                      ActiveFontInfo;                                          // 0x0868(0x0040) Edit
		struct FSlateBrush                                         UpArrowImage;                                            // 0x08A8(0x0090) Edit
		struct FSlateBrush                                         DownArrowImage;                                          // 0x0938(0x0090) Edit
		struct FSlateBrush                                         GlassImage;                                              // 0x09C8(0x0090) Edit
		struct FSlateBrush                                         ClearImage;                                              // 0x0A58(0x0090) Edit
		struct FMargin                                             ImagePadding;                                            // 0x0AE8(0x0010) Edit
		bool                                                       bLeftAlignButtons;                                       // 0x0AF8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D99L[0x7];                                   // 0x0AF9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ExpandableAreaStyle
	 * Size -> 0x0120 (FullSize[0x0128] - InheritedSize[0x0008])
	 */
	struct FExpandableAreaStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         CollapsedImage;                                          // 0x0008(0x0090) Edit
		struct FSlateBrush                                         ExpandedImage;                                           // 0x0098(0x0090) Edit
	};

	/**
	 * ScriptStruct SlateCore.ProgressBarStyle
	 * Size -> 0x01B0 (FullSize[0x01B8] - InheritedSize[0x0008])
	 */
	struct FProgressBarStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0008(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         FillImage;                                               // 0x0098(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         MarqueeImage;                                            // 0x0128(0x0090) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.InlineEditableTextBlockStyle
	 * Size -> 0x09C0 (FullSize[0x09C8] - InheritedSize[0x0008])
	 */
	struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		struct FEditableTextBoxStyle                               EditableTextBoxStyle;                                    // 0x0008(0x0860) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0868(0x0160) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.HyperlinkStyle
	 * Size -> 0x0418 (FullSize[0x0420] - InheritedSize[0x0008])
	 */
	struct FHyperlinkStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        UnderlineStyle;                                          // 0x0008(0x02A8) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TextStyle;                                               // 0x02B0(0x0160) Edit, BlueprintVisible
		struct FMargin                                             Padding;                                                 // 0x0410(0x0010) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.CheckBoxStyle
	 * Size -> 0x05E8 (FullSize[0x05F0] - InheritedSize[0x0008])
	 */
	struct FCheckBoxStyle : public FSlateWidgetStyle
	{
	public:
		ESlateCheckBoxType                                         CheckBoxType;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WNJQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         UncheckedImage;                                          // 0x0010(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         UncheckedHoveredImage;                                   // 0x00A0(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         UncheckedPressedImage;                                   // 0x0130(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         CheckedImage;                                            // 0x01C0(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         CheckedHoveredImage;                                     // 0x0250(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         CheckedPressedImage;                                     // 0x02E0(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         UndeterminedImage;                                       // 0x0370(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         UndeterminedHoveredImage;                                // 0x0400(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         UndeterminedPressedImage;                                // 0x0490(0x0090) Edit, BlueprintVisible
		struct FMargin                                             Padding;                                                 // 0x0520(0x0010) Edit, BlueprintVisible
		struct FSlateColor                                         ForegroundColor;                                         // 0x0530(0x0030) Edit, BlueprintVisible
		struct FSlateColor                                         BorderBackgroundColor;                                   // 0x0560(0x0030) Edit, BlueprintVisible
		struct FSlateSound                                         CheckedSlateSound;                                       // 0x0590(0x0018) Edit, BlueprintVisible
		struct FSlateSound                                         UncheckedSlateSound;                                     // 0x05A8(0x0018) Edit, BlueprintVisible
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x05C0(0x0018) Edit, BlueprintVisible
		class FName                                                CheckedSound;                                            // 0x05D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                UncheckedSound;                                          // 0x05E0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HoveredSound;                                            // 0x05E8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SlateCore.NavigationEvent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FNavigationEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_RNEZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.MotionEvent
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FMotionEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_C1GP[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ControllerEvent
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FControllerEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_X6ZG[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CharacterEvent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FCharacterEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_DRT3[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.KeyEvent
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FKeyEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_N8VU[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.AnalogInputEvent
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FAnalogInputEvent : public FKeyEvent
	{
	public:
		unsigned char                                              UnknownData_AWY0[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.FocusEvent
	 * Size -> 0x0008
	 */
	struct FFocusEvent
	{
	public:
		unsigned char                                              UnknownData_GU6Z[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
