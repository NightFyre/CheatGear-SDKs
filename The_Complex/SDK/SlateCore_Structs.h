#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Enum SlateCore.EWidgetClipping
	 */
	enum class EWidgetClipping : uint8_t
	{
		Inherit                         = 0,
		ClipToBounds                    = 1,
		ClipToBoundsWithoutIntersecting = 2,
		ClipToBoundsAlways              = 3,
		OnDemand                        = 4,
		MAX                             = 5
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
	 * Enum SlateCore.EFontLoadingPolicy
	 */
	enum class EFontLoadingPolicy : uint8_t
	{
		LazyLoad = 0,
		Stream   = 1,
		Inline   = 2,
		MAX      = 3
	};

	/**
	 * Enum SlateCore.EFontLayoutMethod
	 */
	enum class EFontLayoutMethod : uint8_t
	{
		Metrics     = 0,
		BoundingBox = 1,
		MAX         = 2
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
	 * Enum SlateCore.EFlowDirectionPreference
	 */
	enum class EFlowDirectionPreference : uint8_t
	{
		Inherit     = 0,
		Culture     = 1,
		LeftToRight = 2,
		RightToLeft = 3,
		MAX         = 4
	};

	/**
	 * Enum SlateCore.ETextShapingMethod
	 */
	enum class ETextShapingMethod : uint8_t
	{
		Auto        = 0,
		KerningOnly = 1,
		FullShaping = 2,
		MAX         = 3
	};

	/**
	 * Enum SlateCore.EUINavigationRule
	 */
	enum class EUINavigationRule : uint8_t
	{
		Escape         = 0,
		Explicit       = 1,
		Wrap           = 2,
		Stop           = 3,
		Custom         = 4,
		CustomBoundary = 5,
		Invalid        = 6,
		MAX            = 7
	};

	/**
	 * Enum SlateCore.EColorVisionDeficiency
	 */
	enum class EColorVisionDeficiency : uint8_t
	{
		NormalVision = 0,
		Deuteranope  = 1,
		Protanope    = 2,
		Tritanope    = 3,
		MAX          = 4
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
		RoundedBox = 4,
		MAX        = 5
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
	 * Enum SlateCore.ESlateBrushImageType
	 */
	enum class ESlateBrushImageType : uint8_t
	{
		NoImage   = 0,
		FullColor = 1,
		Linear    = 2,
		Vector    = 3,
		MAX       = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushRoundingType
	 */
	enum class ESlateBrushRoundingType : uint8_t
	{
		FixedRadius      = 0,
		HalfHeightRadius = 1,
		MAX              = 2
	};

	/**
	 * Enum SlateCore.ESlateColorStylingMode
	 */
	enum class ESlateColorStylingMode : uint8_t
	{
		UseColor_Specified          = 0,
		UseColor_ColorTable         = 1,
		UseColor_Foreground         = 2,
		UseColor_Foreground_Subdued = 3,
		UseColor_UseStyle           = 4,
		UseColor_MAX                = 5
	};

	/**
	 * Enum SlateCore.ESlateDebuggingInputEvent
	 */
	enum class ESlateDebuggingInputEvent : uint8_t
	{
		MouseMove              = 0,
		MouseEnter             = 1,
		MouseLeave             = 2,
		PreviewMouseButtonDown = 3,
		MouseButtonDown        = 4,
		MouseButtonUp          = 5,
		MouseButtonDoubleClick = 6,
		MouseWheel             = 7,
		TouchStart             = 8,
		TouchEnd               = 9,
		TouchForceChanged      = 10,
		TouchFirstMove         = 11,
		TouchMoved             = 12,
		DragDetected           = 13,
		DragEnter              = 14,
		DragLeave              = 15,
		DragOver               = 16,
		DragDrop               = 17,
		DropMessage            = 18,
		PreviewKeyDown         = 19,
		KeyDown                = 20,
		KeyUp                  = 21,
		KeyChar                = 22,
		AnalogInput            = 23,
		TouchGesture           = 24,
		MotionDetected         = 25,
		MAX                    = 26
	};

	/**
	 * Enum SlateCore.ESlateDebuggingStateChangeEvent
	 */
	enum class ESlateDebuggingStateChangeEvent : uint8_t
	{
		MouseCaptureGained = 0,
		MouseCaptureLost   = 1,
		MAX                = 2
	};

	/**
	 * Enum SlateCore.ESlateDebuggingNavigationMethod
	 */
	enum class ESlateDebuggingNavigationMethod : uint8_t
	{
		Unknown               = 0,
		Explicit              = 1,
		CustomDelegateBound   = 2,
		CustomDelegateUnbound = 3,
		NextOrPrevious        = 4,
		HitTestGrid           = 5,
		MAX                   = 6
	};

	/**
	 * Enum SlateCore.ESlateDebuggingFocusEvent
	 */
	enum class ESlateDebuggingFocusEvent : uint8_t
	{
		FocusChanging = 0,
		FocusLost     = 1,
		FocusReceived = 2,
		MAX           = 3
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
	 * Enum SlateCore.EButtonTouchMethod
	 */
	enum class EButtonTouchMethod : uint8_t
	{
		DownAndUp  = 0,
		Down       = 1,
		PreciseTap = 2,
		MAX        = 3
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
	 * Enum SlateCore.EUINavigationAction
	 */
	enum class EUINavigationAction : uint8_t
	{
		Accept  = 0,
		Back    = 1,
		Num     = 2,
		Invalid = 3,
		MAX     = 4
	};

	/**
	 * Enum SlateCore.ENavigationSource
	 */
	enum class ENavigationSource : uint8_t
	{
		FocusedWidget     = 0,
		WidgetUnderCursor = 1,
		MAX               = 2
	};

	/**
	 * Enum SlateCore.ENavigationGenesis
	 */
	enum class ENavigationGenesis : uint8_t
	{
		Keyboard   = 0,
		Controller = 1,
		User       = 2,
		MAX        = 3
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
	 * Enum SlateCore.EMenuPlacement
	 */
	enum class EMenuPlacement : uint8_t
	{
		MenuPlacement_BelowAnchor         = 0,
		MenuPlacement_CenteredBelowAnchor = 1,
		MenuPlacement_BelowRightAnchor    = 2,
		MenuPlacement_ComboBox            = 3,
		MenuPlacement_ComboBoxRight       = 4,
		MenuPlacement_MenuRight           = 5,
		MenuPlacement_AboveAnchor         = 6,
		MenuPlacement_CenteredAboveAnchor = 7,
		MenuPlacement_AboveRightAnchor    = 8,
		MenuPlacement_MenuLeft            = 9,
		MenuPlacement_Center              = 10,
		MenuPlacement_RightLeftCenter     = 11,
		MenuPlacement_MatchBottomLeft     = 12,
		MenuPlacement_MAX                 = 13
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
	 * Enum SlateCore.EScrollDirection
	 */
	enum class EScrollDirection : uint8_t
	{
		Scroll_Down = 0,
		Scroll_Up   = 1,
		Scroll_MAX  = 2
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
	 * Enum SlateCore.EConsumeMouseWheel
	 */
	enum class EConsumeMouseWheel : uint8_t
	{
		WhenScrollingPossible = 0,
		Always                = 1,
		Never                 = 2,
		MAX                   = 3
	};

	/**
	 * Enum SlateCore.ESlateParentWindowSearchMethod
	 */
	enum class ESlateParentWindowSearchMethod : uint8_t
	{
		ActiveWindow = 0,
		MainWindow   = 1,
		MAX          = 2
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
	 * Enum SlateCore.ETextOverflowPolicy
	 */
	enum class ETextOverflowPolicy : uint8_t
	{
		Clip     = 0,
		Ellipsis = 1,
		MAX      = 2
	};

	/**
	 * Enum SlateCore.ETextTransformPolicy
	 */
	enum class ETextTransformPolicy : uint8_t
	{
		None    = 0,
		ToLower = 1,
		ToUpper = 2,
		MAX     = 3
	};

	/**
	 * Enum SlateCore.EStyleColor
	 */
	enum class EStyleColor : uint8_t
	{
		Black              = 0,
		Background         = 1,
		Title              = 2,
		WindowBorder       = 3,
		Foldout            = 4,
		Input              = 5,
		InputOutline       = 6,
		Recessed           = 7,
		Panel              = 8,
		Header             = 9,
		Dropdown           = 10,
		DropdownOutline    = 11,
		Hover              = 12,
		Hover2             = 13,
		White              = 14,
		White25            = 15,
		Highlight          = 16,
		Primary            = 17,
		PrimaryHover       = 18,
		PrimaryPress       = 19,
		Secondary          = 20,
		Foreground         = 21,
		ForegroundHover    = 22,
		ForegroundInverted = 23,
		ForegroundHeader   = 24,
		Select             = 25,
		SelectInactive     = 26,
		SelectParent       = 27,
		SelectHover        = 28,
		Notifications      = 29,
		AccentBlue         = 30,
		AccentPurple       = 31,
		AccentPink         = 32,
		AccentRed          = 33,
		AccentOrange       = 34,
		AccentYellow       = 35,
		AccentGreen        = 36,
		AccentBrown        = 37,
		AccentBlack        = 38,
		AccentGray         = 39,
		AccentWhite        = 40,
		AccentFolder       = 41,
		Warning            = 42,
		Error              = 43,
		Success            = 44,
		User1              = 45,
		User2              = 46,
		User3              = 47,
		User4              = 48,
		User5              = 49,
		User6              = 50,
		User7              = 51,
		User8              = 52,
		User9              = 53,
		User10             = 54,
		User11             = 55,
		User12             = 56,
		User13             = 57,
		User14             = 58,
		User15             = 59,
		User16             = 60,
		MAX                = 61
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SlateCore.StyleColorList
	 * Size -> 0x0988
	 */
	struct FStyleColorList
	{
	public:
		struct FLinearColor                                        StyleColors[0x3D];                                       // 0x0000(0x03D0) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FR38[0x5B8];                                 // 0x03D0(0x05B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.Geometry
	 * Size -> 0x0040
	 */
	struct FGeometry
	{
	public:
		unsigned char                                              UnknownData_GTHD[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.Margin
	 * Size -> 0x0010
	 */
	struct FMargin
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SlateColor
	 * Size -> 0x0014
	 */
	struct FSlateColor
	{
	public:
		struct FLinearColor                                        SpecifiedColor;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlateColorStylingMode                                     ColorUseRule;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FGN6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateBrushOutlineSettings
	 * Size -> 0x0040
	 */
	struct FSlateBrushOutlineSettings
	{
	public:
		struct FVector4                                            CornerRadii;                                             // 0x0000(0x0020) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         Color;                                                   // 0x0020(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushRoundingType                                    RoundingType;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBrushTransparency;                                   // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTLQ[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateBrush
	 * Size -> 0x00D0
	 */
	struct FSlateBrush
	{
	public:
		unsigned char                                              UnknownData_2HBE[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ImageSize;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         TintColor;                                               // 0x0030(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OF79[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrushOutlineSettings                          OutlineSettings;                                         // 0x0050(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UObject*                                             ResourceObject;                                          // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ResourceName;                                            // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox2f                                              UVRegion;                                                // 0x00A0(0x0014) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		ESlateBrushDrawType                                        DrawAs;                                                  // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushTileType                                        Tiling;                                                  // 0x00B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushMirrorType                                      Mirroring;                                               // 0x00B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushImageType                                       ImageType;                                               // 0x00B7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UI96[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIsDynamicallyLoaded : 1;                                // 0x00C8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bHasUObject : 1;                                         // 0x00C8(0x0001) BIT_FIELD Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J7KO[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.InputEvent
	 * Size -> 0x0018
	 */
	struct FInputEvent
	{
	public:
		unsigned char                                              UnknownData_MTP5[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.PointerEvent
	 * Size -> 0x0078 (FullSize[0x0090] - InheritedSize[0x0018])
	 */
	struct FPointerEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_X799[0x78];                                  // 0x0018(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateWidgetStyle
	 * Size -> 0x0008
	 */
	struct FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_TOXR[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.TableRowStyle
	 * Size -> 0x0D48 (FullSize[0x0D50] - InheritedSize[0x0008])
	 */
	struct FTableRowStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_XULC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         SelectorFocusedBrush;                                    // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveHoveredBrush;                                      // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveBrush;                                             // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveHoveredBrush;                                    // 0x0280(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveBrush;                                           // 0x0350(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bUseParentRowBrush;                                      // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3GV[0xF];                                   // 0x0421(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         ParentRowBackgroundBrush;                                // 0x0430(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ParentRowBackgroundHoveredBrush;                         // 0x0500(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         EvenRowBackgroundHoveredBrush;                           // 0x05D0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         EvenRowBackgroundBrush;                                  // 0x06A0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OddRowBackgroundHoveredBrush;                            // 0x0770(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OddRowBackgroundBrush;                                   // 0x0840(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         TextColor;                                               // 0x0910(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SelectedTextColor;                                       // 0x0924(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DQF[0x8];                                   // 0x0938(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         DropIndicator_Above;                                     // 0x0940(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DropIndicator_Onto;                                      // 0x0A10(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DropIndicator_Below;                                     // 0x0AE0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveHighlightedBrush;                                  // 0x0BB0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveHighlightedBrush;                                // 0x0C80(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SlateSound
	 * Size -> 0x0018
	 */
	struct FSlateSound
	{
	public:
		class UObject*                                             ResourceObject;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A7PV[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ButtonStyle
	 * Size -> 0x03E8 (FullSize[0x03F0] - InheritedSize[0x0008])
	 */
	struct FButtonStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_NRVH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Normal;                                                  // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Hovered;                                                 // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Pressed;                                                 // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Disabled;                                                // 0x0280(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         NormalForeground;                                        // 0x0350(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         HoveredForeground;                                       // 0x0364(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         PressedForeground;                                       // 0x0378(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         DisabledForeground;                                      // 0x038C(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FMargin                                             NormalPadding;                                           // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             PressedPadding;                                          // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         PressedSlateSound;                                       // 0x03C0(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x03D8(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ComboButtonStyle
	 * Size -> 0x05F8 (FullSize[0x0600] - InheritedSize[0x0008])
	 */
	struct FComboButtonStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_41OO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0010(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DownArrowImage;                                          // 0x0400(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuBorderBrush;                                         // 0x04F0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             MenuBorderPadding;                                       // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ContentPadding;                                          // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             DownArrowPadding;                                        // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EVerticalAlignment                                         DownArrowAlign;                                          // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYO8[0xF];                                   // 0x05F1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ComboBoxStyle
	 * Size -> 0x0658 (FullSize[0x0660] - InheritedSize[0x0008])
	 */
	struct FComboBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_07IL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x0010(0x0600) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateSound                                         PressedSlateSound;                                       // 0x0610(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         SelectionChangeSlateSound;                               // 0x0628(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ContentPadding;                                          // 0x0640(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             MenuRowPadding;                                          // 0x0650(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.FontOutlineSettings
	 * Size -> 0x0020
	 */
	struct FFontOutlineSettings
	{
	public:
		int32_t                                                    OutlineSize;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSeparateFillAlpha;                                      // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyOutlineToDropShadows;                              // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJA4[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             OutlineMaterial;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OutlineColor;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SlateFontInfo
	 * Size -> 0x0058
	 */
	struct FSlateFontInfo
	{
	public:
		class UObject*                                             FontObject;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             FontMaterial;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFontOutlineSettings                                OutlineSettings;                                         // 0x0010(0x0020) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TL5I[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TypefaceFontName;                                        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Size;                                                    // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LetterSpacing;                                           // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3XA[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.EditableTextStyle
	 * Size -> 0x02E8 (FullSize[0x02F0] - InheritedSize[0x0008])
	 */
	struct FEditableTextStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0060(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SP5T[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundImageSelected;                                 // 0x0080(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageComposing;                                // 0x0150(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CaretImage;                                              // 0x0220(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ScrollBarStyle
	 * Size -> 0x0768 (FullSize[0x0770] - InheritedSize[0x0008])
	 */
	struct FScrollBarStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_CBRR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         HorizontalBackgroundImage;                               // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VerticalBackgroundImage;                                 // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VerticalTopSlotImage;                                    // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HorizontalTopSlotImage;                                  // 0x0280(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VerticalBottomSlotImage;                                 // 0x0350(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HorizontalBottomSlotImage;                               // 0x0420(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x04F0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredThumbImage;                                       // 0x05C0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DraggedThumbImage;                                       // 0x0690(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0760(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUEN[0xC];                                   // 0x0764(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.EditableTextBoxStyle
	 * Size -> 0x0B98 (FullSize[0x0BA0] - InheritedSize[0x0008])
	 */
	struct FEditableTextBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_5VWL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundImageNormal;                                   // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageHovered;                                  // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageFocused;                                  // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageReadOnly;                                 // 0x0280(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0360(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x03B8(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BackgroundColor;                                         // 0x03CC(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ReadOnlyForegroundColor;                                 // 0x03E0(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         FocusedForegroundColor;                                  // 0x03F4(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             HScrollBarPadding;                                       // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             VScrollBarPadding;                                       // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_90PB[0x8];                                   // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0430(0x0770) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.TextBlockStyle
	 * Size -> 0x0338 (FullSize[0x0340] - InheritedSize[0x0008])
	 */
	struct FTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0060(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HX1E[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ShadowOffset;                                            // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         SelectedBackgroundColor;                                 // 0x0098(0x0014) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         HighlightColor;                                          // 0x00AC(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HighlightShape;                                          // 0x00C0(0x00D0) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateBrush                                         StrikeBrush;                                             // 0x0190(0x00D0) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UnderlineBrush;                                          // 0x0260(0x00D0) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		ETextTransformPolicy                                       TransformPolicy;                                         // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextOverflowPolicy                                        OverflowPolicy;                                          // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10LD[0xE];                                   // 0x0332(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SpinBoxStyle
	 * Size -> 0x05F8 (FullSize[0x0600] - InheritedSize[0x0008])
	 */
	struct FSpinBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_HOBE[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveBackgroundBrush;                                   // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBackgroundBrush;                                  // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveFillBrush;                                         // 0x0280(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredFillBrush;                                        // 0x0350(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveFillBrush;                                       // 0x0420(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ArrowsImage;                                             // 0x04F0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x05C0(0x0014) NativeAccessSpecifierPublic
		struct FMargin                                             TextPadding;                                             // 0x05D4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             InsetPadding;                                            // 0x05E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6ZY[0xC];                                   // 0x05F4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CharacterEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FCharacterEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_B7LT[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.KeyEvent
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FKeyEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_JN0H[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.NavigationEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FNavigationEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_N19S[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.AnalogInputEvent
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAnalogInputEvent : public FKeyEvent
	{
	public:
		unsigned char                                              UnknownData_97PJ[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.FontData
	 * Size -> 0x0028
	 */
	struct FFontData
	{
	public:
		class FString                                              FontFilename;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6DWF[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFontHinting                                               Hinting;                                                 // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EFontLoadingPolicy                                         LoadingPolicy;                                           // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TSIN[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubFaceIndex;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8I0Z[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             FontFaceAsset;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SlateCore.TypefaceEntry
	 * Size -> 0x0030
	 */
	struct FTypefaceEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFontData                                           Font;                                                    // 0x0008(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.Typeface
	 * Size -> 0x0010
	 */
	struct FTypeface
	{
	public:
		TArray<struct FTypefaceEntry>                              Fonts;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CompositeFallbackFont
	 * Size -> 0x0018
	 */
	struct FCompositeFallbackFont
	{
	public:
		struct FTypeface                                           Typeface;                                                // 0x0000(0x0010) NativeAccessSpecifierPublic
		float                                                      ScalingFactor;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8117[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CompositeSubFont
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FCompositeSubFont : public FCompositeFallbackFont
	{
	public:
		TArray<struct FInt32Range>                                 CharacterRanges;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Cultures;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CompositeFont
	 * Size -> 0x0038
	 */
	struct FCompositeFont
	{
	public:
		struct FTypeface                                           DefaultTypeface;                                         // 0x0000(0x0010) NativeAccessSpecifierPublic
		struct FCompositeFallbackFont                              FallbackTypeface;                                        // 0x0010(0x0018) NativeAccessSpecifierPublic
		TArray<struct FCompositeSubFont>                           SubTypefaces;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.FocusEvent
	 * Size -> 0x0008
	 */
	struct FFocusEvent
	{
	public:
		unsigned char                                              UnknownData_TOIQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CaptureLostEvent
	 * Size -> 0x0008
	 */
	struct FCaptureLostEvent
	{
	public:
		unsigned char                                              UnknownData_8Q09[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.MotionEvent
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FMotionEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_IDF6[0x60];                                  // 0x0018(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CheckBoxStyle
	 * Size -> 0x0AC8 (FullSize[0x0AD0] - InheritedSize[0x0008])
	 */
	struct FCheckBoxStyle : public FSlateWidgetStyle
	{
	public:
		ESlateCheckBoxType                                         CheckBoxType;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPK4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         UncheckedImage;                                          // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UncheckedHoveredImage;                                   // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UncheckedPressedImage;                                   // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckedImage;                                            // 0x0280(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckedHoveredImage;                                     // 0x0350(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckedPressedImage;                                     // 0x0420(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UndeterminedImage;                                       // 0x04F0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UndeterminedHoveredImage;                                // 0x05C0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UndeterminedPressedImage;                                // 0x0690(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0760(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0770(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundHoveredImage;                                  // 0x0840(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundPressedImage;                                  // 0x0910(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x09E0(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         HoveredForeground;                                       // 0x09F4(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         PressedForeground;                                       // 0x0A08(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         CheckedForeground;                                       // 0x0A1C(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         CheckedHoveredForeground;                                // 0x0A30(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         CheckedPressedForeground;                                // 0x0A44(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         UndeterminedForeground;                                  // 0x0A58(0x0014) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         BorderBackgroundColor;                                   // 0x0A6C(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateSound                                         CheckedSlateSound;                                       // 0x0A80(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         UncheckedSlateSound;                                     // 0x0A98(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x0AB0(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NP7Z[0x8];                                   // 0x0AC8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SegmentedControlStyle
	 * Size -> 0x2158 (FullSize[0x2160] - InheritedSize[0x0008])
	 */
	struct FSegmentedControlStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_YORG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCheckBoxStyle                                      ControlStyle;                                            // 0x0010(0x0AD0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCheckBoxStyle                                      FirstControlStyle;                                       // 0x0AE0(0x0AD0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCheckBoxStyle                                      LastControlStyle;                                        // 0x15B0(0x0AD0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x2080(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             UniformPadding;                                          // 0x2150(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.HyperlinkStyle
	 * Size -> 0x0748 (FullSize[0x0750] - InheritedSize[0x0008])
	 */
	struct FHyperlinkStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_5GI2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        UnderlineStyle;                                          // 0x0010(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0400(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0740(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.InlineEditableTextBlockStyle
	 * Size -> 0x0EE8 (FullSize[0x0EF0] - InheritedSize[0x0008])
	 */
	struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_DV1O[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEditableTextBoxStyle                               EditableTextBoxStyle;                                    // 0x0010(0x0BA0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0BB0(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ProgressBarStyle
	 * Size -> 0x0288 (FullSize[0x0290] - InheritedSize[0x0008])
	 */
	struct FProgressBarStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_Q2NX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FillImage;                                               // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MarqueeImage;                                            // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       EnableFillAnimation;                                     // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LS2C[0xF];                                   // 0x0281(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ExpandableAreaStyle
	 * Size -> 0x01B8 (FullSize[0x01C0] - InheritedSize[0x0008])
	 */
	struct FExpandableAreaStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_J70B[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         CollapsedImage;                                          // 0x0010(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ExpandedImage;                                           // 0x00E0(0x00D0) Edit, NativeAccessSpecifierPublic
		float                                                      RolloutAnimationSeconds;                                 // 0x01B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHC4[0xC];                                   // 0x01B4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SearchBoxStyle
	 * Size -> 0x0F68 (FullSize[0x0F70] - InheritedSize[0x0008])
	 */
	struct FSearchBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_0VNY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEditableTextBoxStyle                               TextBoxStyle;                                            // 0x0010(0x0BA0) Edit, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      ActiveFontInfo;                                          // 0x0BB0(0x0058) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBHA[0x8];                                   // 0x0C08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         UpArrowImage;                                            // 0x0C10(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DownArrowImage;                                          // 0x0CE0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         GlassImage;                                              // 0x0DB0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ClearImage;                                              // 0x0E80(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ImagePadding;                                            // 0x0F50(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLeftAlignButtons;                                       // 0x0F60(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZXB[0xF];                                   // 0x0F61(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SliderStyle
	 * Size -> 0x04F8 (FullSize[0x0500] - InheritedSize[0x0008])
	 */
	struct FSliderStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_UMK2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         NormalBarImage;                                          // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBarImage;                                         // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledBarImage;                                        // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x0280(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredThumbImage;                                       // 0x0350(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledThumbImage;                                      // 0x0420(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      BarThickness;                                            // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MK8J[0xC];                                   // 0x04F4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.VolumeControlStyle
	 * Size -> 0x0918 (FullSize[0x0920] - InheritedSize[0x0008])
	 */
	struct FVolumeControlStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_71XV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        SliderStyle;                                             // 0x0010(0x0500) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HighVolumeImage;                                         // 0x0510(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MidVolumeImage;                                          // 0x05E0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LowVolumeImage;                                          // 0x06B0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NoVolumeImage;                                           // 0x0780(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MutedImage;                                              // 0x0850(0x00D0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.InlineTextImageStyle
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FInlineTextImageStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_K2VS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Image;                                                   // 0x0010(0x00D0) Edit, NativeAccessSpecifierPublic
		int16_t                                                    Baseline;                                                // 0x00E0(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VD6A[0xE];                                   // 0x00E2(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SplitterStyle
	 * Size -> 0x01A8 (FullSize[0x01B0] - InheritedSize[0x0008])
	 */
	struct FSplitterStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_CWJY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         HandleNormalBrush;                                       // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HandleHighlightBrush;                                    // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.TableViewStyle
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FTableViewStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_WY0Q[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.TableColumnHeaderStyle
	 * Size -> 0x0758 (FullSize[0x0760] - InheritedSize[0x0008])
	 */
	struct FTableColumnHeaderStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_6V57[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         SortPrimaryAscendingImage;                               // 0x0010(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SortPrimaryDescendingImage;                              // 0x00E0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SortSecondaryAscendingImage;                             // 0x01B0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SortSecondaryDescendingImage;                            // 0x0280(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBrush;                                             // 0x0350(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBrush;                                            // 0x0420(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuDropdownImage;                                       // 0x04F0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuDropdownNormalBorderBrush;                           // 0x05C0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuDropdownHoveredBorderBrush;                          // 0x0690(0x00D0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.HeaderRowStyle
	 * Size -> 0x1258 (FullSize[0x1260] - InheritedSize[0x0008])
	 */
	struct FHeaderRowStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_62AQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTableColumnHeaderStyle                             ColumnStyle;                                             // 0x0010(0x0760) Edit, NativeAccessSpecifierPublic
		struct FTableColumnHeaderStyle                             LastColumnStyle;                                         // 0x0770(0x0760) Edit, NativeAccessSpecifierPublic
		struct FSplitterStyle                                      ColumnSplitterStyle;                                     // 0x0ED0(0x01B0) Edit, NativeAccessSpecifierPublic
		float                                                      SplitterHandleSize;                                      // 0x1080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIT3[0xC];                                   // 0x1084(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x1090(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x1160(0x0014) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPBU[0xC];                                   // 0x1174(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         HorizontalSeparatorBrush;                                // 0x1180(0x00D0) Edit, NativeAccessSpecifierPublic
		float                                                      HorizontalSeparatorThickness;                            // 0x1250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y3HL[0xC];                                   // 0x1254(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.DockTabStyle
	 * Size -> 0x0D78 (FullSize[0x0D80] - InheritedSize[0x0008])
	 */
	struct FDockTabStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_15SE[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x0010(0x03F0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBrush;                                             // 0x0400(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ColorOverlayTabBrush;                                    // 0x04D0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ColorOverlayIconBrush;                                   // 0x05A0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ForegroundBrush;                                         // 0x0670(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBrush;                                            // 0x0740(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ContentAreaBrush;                                        // 0x0810(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         TabWellBrush;                                            // 0x08E0(0x00D0) Edit, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TabTextStyle;                                            // 0x09B0(0x0340) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             TabPadding;                                              // 0x0CF0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           IconSize;                                                // 0x0D00(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverlapWidth;                                            // 0x0D10(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         FlashColor;                                              // 0x0D14(0x0014) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         NormalForegroundColor;                                   // 0x0D28(0x0014) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         HoveredForegroundColor;                                  // 0x0D3C(0x0014) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         ActiveForegroundColor;                                   // 0x0D50(0x0014) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundForegroundColor;                               // 0x0D64(0x0014) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      IconBorderPadding;                                       // 0x0D78(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XFR[0x4];                                   // 0x0D7C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ScrollBoxStyle
	 * Size -> 0x0348 (FullSize[0x0350] - InheritedSize[0x0008])
	 */
	struct FScrollBoxStyle : public FSlateWidgetStyle
	{
	public:
		float                                                      BarThickness;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5S60[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LeftShadowBrush;                                         // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         RightShadowBrush;                                        // 0x0280(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ScrollBorderStyle
	 * Size -> 0x01A8 (FullSize[0x01B0] - InheritedSize[0x0008])
	 */
	struct FScrollBorderStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_0S7F[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.WindowStyle
	 * Size -> 0x1938 (FullSize[0x1940] - InheritedSize[0x0008])
	 */
	struct FWindowStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_DX78[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        MinimizeButtonStyle;                                     // 0x0010(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        MaximizeButtonStyle;                                     // 0x0400(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        RestoreButtonStyle;                                      // 0x07F0(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x0BE0(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TitleTextStyle;                                          // 0x0FD0(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveTitleBrush;                                        // 0x1310(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveTitleBrush;                                      // 0x13E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FlashTitleBrush;                                         // 0x14B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BackgroundColor;                                         // 0x1580(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Y7P[0xC];                                   // 0x1594(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         OutlineBrush;                                            // 0x15A0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         OutlineColor;                                            // 0x1670(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MW7D[0xC];                                   // 0x1684(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BorderBrush;                                             // 0x1690(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BorderColor;                                             // 0x1760(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWI6[0xC];                                   // 0x1774(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x1780(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ChildBackgroundBrush;                                    // 0x1850(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    WindowCornerRadius;                                      // 0x1920(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             BorderPadding;                                           // 0x1924(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FAT[0xC];                                   // 0x1934(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.StyleTheme
	 * Size -> 0x0048
	 */
	struct FStyleTheme
	{
	public:
		unsigned char                                              UnknownData_9W5V[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ToolBarStyle
	 * Size -> 0x3B78 (FullSize[0x3B80] - InheritedSize[0x0008])
	 */
	struct FToolBarStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_8EI8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ExpandBrush;                                             // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SeparatorBrush;                                          // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     LabelStyle;                                              // 0x0280(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               EditableTextStyle;                                       // 0x05C0(0x0BA0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCheckBoxStyle                                      ToggleButton;                                            // 0x1160(0x0AD0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x1C30(0x0600) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        SettingsButtonStyle;                                     // 0x2230(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FComboButtonStyle                                   SettingsComboButton;                                     // 0x2620(0x0600) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCheckBoxStyle                                      SettingsToggleButton;                                    // 0x2C20(0x0AD0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        ButtonStyle;                                             // 0x36F0(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             LabelPadding;                                            // 0x3AE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             SeparatorPadding;                                        // 0x3AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ComboButtonPadding;                                      // 0x3B00(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ButtonPadding;                                           // 0x3B10(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             CheckBoxPadding;                                         // 0x3B20(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             BlockPadding;                                            // 0x3B30(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             IndentedBlockPadding;                                    // 0x3B40(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             BackgroundPadding;                                       // 0x3B50(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           IconSize;                                                // 0x3B60(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowLabels;                                             // 0x3B70(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SFF[0xF];                                   // 0x3B71(0x000F) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
