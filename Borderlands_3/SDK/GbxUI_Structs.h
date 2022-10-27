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
	 * Enum GbxUI.EGbxFocusableWidgetState
	 */
	enum class EGbxFocusableWidgetState : uint8_t
	{
		Unknown                 = 0,
		Disabled                = 1,
		NotFocused              = 2,
		NotFocused_MouseHovered = 3,
		NotFocused_MouseDown    = 4,
		Focused                 = 5,
		Focused_MouseHovered    = 6,
		Focused_MouseDown       = 7,
		MAX                     = 8
	};

	/**
	 * Enum GbxUI.EGbxFocusableWidgetMouseBehavior
	 */
	enum class EGbxFocusableWidgetMouseBehavior : uint8_t
	{
		None             = 0,
		SelectOnHover    = 1,
		SelectOnClick    = 2,
		InheritFromOwner = 3,
		MAX              = 4
	};

	/**
	 * Enum GbxUI.EGbxGFxButtonType
	 */
	enum class EGbxGFxButtonType : uint8_t
	{
		Standard     = 0,
		Checkbox     = 1,
		Radio        = 2,
		UserCheckbox = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxUI.EGbxGFxButtonCheckedState
	 */
	enum class EGbxGFxButtonCheckedState : uint8_t
	{
		Unchecked = 0,
		Checked   = 1,
		MAX       = 2
	};

	/**
	 * Enum GbxUI.EGbxGFxButtonLockedState
	 */
	enum class EGbxGFxButtonLockedState : uint8_t
	{
		Unlocked = 0,
		Locked   = 1,
		MAX      = 2
	};

	/**
	 * Enum GbxUI.EMenuTransition
	 */
	enum class EMenuTransition : uint8_t
	{
		CreateCharacterMenu_MainMenu      = 0,
		LoadCharacterMenu_MainMenu        = 1,
		MainMenu_LoadCharacterMenu        = 2,
		MainMenu_NewGameSettingMenu       = 3,
		MainMenu_OptionMenu               = 4,
		NewGameSettingsMenu_MainMenu      = 5,
		OptionMenu_MainMenu               = 6,
		TitleScreen_MainMenu              = 7,
		TitleScreen_FirstBoot             = 8,
		FirstBoot_MainMenu                = 9,
		PlaythroughSelectionMenu_MainMenu = 10,
		MainMenu_PlaythroughSelectionMenu = 11,
		Invalid                           = 12,
		None                              = 13,
		MAX                               = 14
	};

	/**
	 * Enum GbxUI.EGbxMenuInputDevice
	 */
	enum class EGbxMenuInputDevice : uint8_t
	{
		Unknown       = 0,
		Gamepad       = 1,
		KeyboardMouse = 2,
		MAX           = 3
	};

	/**
	 * Enum GbxUI.EBindingType
	 */
	enum class EBindingType : uint8_t
	{
		Walking = 0,
		Common  = 1,
		Driving = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxUI.EGbxProgressBarFillDirection
	 */
	enum class EGbxProgressBarFillDirection : uint8_t
	{
		LeftToRight = 0,
		RightToLeft = 1,
		MAX         = 2
	};

	/**
	 * Enum GbxUI.EHUDInitializationAnimationSet
	 */
	enum class EHUDInitializationAnimationSet : uint8_t
	{
		None           = 0,
		InitialSet     = 1,
		AmmoBar        = 2,
		ShieldBar      = 3,
		MissionTracker = 4,
		GrenadeBar     = 5,
		Full           = 6,
		MAX            = 7
	};

	/**
	 * Enum GbxUI.EUIAudioSettingOperation
	 */
	enum class EUIAudioSettingOperation : uint8_t
	{
		Delete   = 0,
		Replace  = 1,
		Preserve = 2,
		MAX      = 3
	};

	/**
	 * Enum GbxUI.EGbxGFxListAlignment
	 */
	enum class EGbxGFxListAlignment : uint8_t
	{
		Left   = 0,
		Right  = 1,
		Center = 2,
		MAX    = 3
	};

	/**
	 * Enum GbxUI.EGFxHUDWidgetAnchorType
	 */
	enum class EGFxHUDWidgetAnchorType : uint8_t
	{
		Viewport  = 0,
		Crosshair = 1,
		MAX       = 2
	};

	/**
	 * Enum GbxUI.EGbxDialogBoxHelpersDialogTemplate
	 */
	enum class EGbxDialogBoxHelpersDialogTemplate : uint8_t
	{
		Default = 0,
		Warning = 1,
		Error   = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxUI.EChargeClipState
	 */
	enum class EChargeClipState : uint8_t
	{
		NOCHARGE     = 0,
		SPREADCLIP   = 1,
		ACCURACYCLIP = 2,
		MAX          = 3
	};

	/**
	 * Enum GbxUI.EContextualMenuEntryType
	 */
	enum class EContextualMenuEntryType : uint8_t
	{
		Invite                    = 0,
		Join                      = 1,
		SendItem                  = 2,
		Favorite                  = 3,
		Unfavorite                = 4,
		Mute                      = 5,
		Unmute                    = 6,
		Delete                    = 7,
		KickOut                   = 8,
		Inspect                   = 9,
		ViewProfile               = 10,
		AddFriend                 = 11,
		RemoveFriend              = 12,
		NetworkOption_Anyone      = 13,
		NetworkOption_FriendsOnly = 14,
		NetworkOption_InviteOnly  = 15,
		LootMode_Classic          = 16,
		LootMode_Shared           = 17,
		Shift_SecondaryIdentity   = 18,
		Shift_AddFriend           = 19,
		Shift_RemoveFriend        = 20,
		Shift_Block               = 21,
		Shift_Unblock             = 22,
		Shift_Report              = 23,
		None                      = 24,
		Count                     = 25,
		MAX                       = 26
	};

	/**
	 * Enum GbxUI.EContextualMenuExpandDirection
	 */
	enum class EContextualMenuExpandDirection : uint8_t
	{
		Unknown = 0,
		Down    = 1,
		Up      = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxUI.EContextualMenuLayout
	 */
	enum class EContextualMenuLayout : uint8_t
	{
		RosterMenu       = 0,
		MailMenuSendTo   = 1,
		MailMenuRecieved = 2,
		MAX              = 3
	};

	/**
	 * Enum GbxUI.GFxVirtualKeyboardType
	 */
	enum class EGFxVirtualKeyboardType : uint8_t
	{
		GFxVirtualKeyboardType_Default                    = 0,
		GFxVirtualKeyboardType_Number                     = 1,
		GFxVirtualKeyboardType_Web                        = 2,
		GFxVirtualKeyboardType_Email                      = 3,
		GFxVirtualKeyboardType_Password                   = 4,
		GFxVirtualKeyboardType_AlphaNumeric               = 5,
		GFxVirtualKeyboardType_GFxVirtualKeyboardType_MAX = 6
	};

	/**
	 * Enum GbxUI.EGbxGFxListConfigType
	 */
	enum class EGbxGFxListConfigType : uint8_t
	{
		All            = 0,
		PreserveLayout = 1,
		MAX            = 2
	};

	/**
	 * Enum GbxUI.EGbxGFxScrollListAddedItemPriority
	 */
	enum class EGbxGFxScrollListAddedItemPriority : uint8_t
	{
		NewestOnTop = 0,
		OldestOnTop = 1,
		MAX         = 2
	};

	/**
	 * Enum GbxUI.EGbxGFxScrollListFocusOrderPriority
	 */
	enum class EGbxGFxScrollListFocusOrderPriority : uint8_t
	{
		BringToFront                                 = 0,
		LeaveUnchanged                               = 1,
		BringToFrontWithEverythingElseInOrder        = 2,
		BringToFrontWithEverythingElseInReverseOrder = 3,
		MAX                                          = 4
	};

	/**
	 * Enum GbxUI.EGFxHUDWidgetTransitionType
	 */
	enum class EGFxHUDWidgetTransitionType : uint8_t
	{
		Animate = 0,
		Instant = 1,
		MAX     = 2
	};

	/**
	 * Enum GbxUI.EGbxGFxListOrientation
	 */
	enum class EGbxGFxListOrientation : uint8_t
	{
		Vertical   = 0,
		Horizontal = 1,
		MAX        = 2
	};

	/**
	 * Enum GbxUI.EGbxGFxScrollListFocusChangedAction
	 */
	enum class EGbxGFxScrollListFocusChangedAction : uint8_t
	{
		DoNotChangeSelection                  = 0,
		SelectNoneOnLossSelectFirstOnGain     = 1,
		SelectNoneOnLossRestorePreviousOnGain = 2,
		MAX                                   = 3
	};

	/**
	 * Enum GbxUI.EGbxGFxScrollListWrapMode
	 */
	enum class EGbxGFxScrollListWrapMode : uint8_t
	{
		Stick = 0,
		Wrap  = 1,
		MAX   = 2
	};

	/**
	 * Enum GbxUI.EGbxGFxMenuSwitcherSubmenuInitReason
	 */
	enum class EGbxGFxMenuSwitcherSubmenuInitReason : uint8_t
	{
		Unknown  = 0,
		Pushed   = 1,
		NextPage = 2,
		PrevPage = 3,
		Switched = 4,
		MAX      = 5
	};

	/**
	 * Enum GbxUI.EGbxGFxMenuSwitchNavWidgetType
	 */
	enum class EGbxGFxMenuSwitchNavWidgetType : uint8_t
	{
		Unknown        = 0,
		MenuSwitcher   = 1,
		CustomSwitcher = 2,
		MAX            = 3
	};

	/**
	 * Enum GbxUI.EEdgeFlashType
	 */
	enum class EEdgeFlashType : uint8_t
	{
		None                     = 0,
		InterpolatedDecreaseOnly = 1,
		All                      = 2,
		MAX                      = 3
	};

	/**
	 * Enum GbxUI.EGbxGFxSliderState
	 */
	enum class EGbxGFxSliderState : uint8_t
	{
		NotScrolling   = 0,
		ScrollingLeft  = 1,
		ScrollingRight = 2,
		MAX            = 3
	};

	/**
	 * Enum GbxUI.EGbxGFxSliderDirection
	 */
	enum class EGbxGFxSliderDirection : uint8_t
	{
		Horizontal = 0,
		Vertical   = 1,
		MAX        = 2
	};

	/**
	 * Enum GbxUI.EGbxGridWidgetFill
	 */
	enum class EGbxGridWidgetFill : uint8_t
	{
		FillRow    = 0,
		FillColumn = 1,
		MAX        = 2
	};

	/**
	 * Enum GbxUI.EGbxHUDStateListType
	 */
	enum class EGbxHUDStateListType : uint8_t
	{
		WhiteList = 0,
		BlackList = 1,
		MAX       = 2
	};

	/**
	 * Enum GbxUI.EHUDStateManagerVisibility
	 */
	enum class EHUDStateManagerVisibility : uint8_t
	{
		Unknown    = 0,
		Visible    = 1,
		NotVisible = 2,
		MAX        = 3
	};

	/**
	 * Enum GbxUI.EGbxListFocusChangedAction
	 */
	enum class EGbxListFocusChangedAction : uint8_t
	{
		DoNotChangeSelection                  = 0,
		SelectNoneOnLossSelectFirstOnGain     = 1,
		SelectNoneOnLossRestorePreviousOnGain = 2,
		MAX                                   = 3
	};

	/**
	 * Enum GbxUI.EGbxListWrapMode
	 */
	enum class EGbxListWrapMode : uint8_t
	{
		Stick = 0,
		Wrap  = 1,
		MAX   = 2
	};

	/**
	 * Enum GbxUI.EGbxMenuInputMode
	 */
	enum class EGbxMenuInputMode : uint8_t
	{
		None                         = 0,
		OwnerPlayer                  = 1,
		OwnerPlayer_DontConsumeInput = 2,
		AnyLocalPlayer               = 3,
		AnyController                = 4,
		Inherit                      = 5,
		MAX                          = 6
	};

	/**
	 * Enum GbxUI.EGbxMenuParentType
	 */
	enum class EGbxMenuParentType : uint8_t
	{
		Viewport     = 0,
		PlayerScreen = 1,
		Inherit      = 2,
		MAX          = 3
	};

	/**
	 * Enum GbxUI.EGbxMenuInputActionTrigger
	 */
	enum class EGbxMenuInputActionTrigger : uint8_t
	{
		Pressed  = 0,
		Held     = 1,
		HeldLong = 2,
		Released = 3,
		MAX      = 4
	};

	/**
	 * Enum GbxUI.EGbxMenuSwitcherSubmenuInitReason
	 */
	enum class EGbxMenuSwitcherSubmenuInitReason : uint8_t
	{
		Unknown  = 0,
		Pushed   = 1,
		NextPage = 2,
		PrevPage = 3,
		Switched = 4,
		MAX      = 5
	};

	/**
	 * Enum GbxUI.EMenuTransitionOperation
	 */
	enum class EMenuTransitionOperation : uint8_t
	{
		Push    = 0,
		Pop     = 1,
		Invalid = 2,
		None    = 3,
		MAX     = 4
	};

	/**
	 * Enum GbxUI.EGbxScrollBoxListFocusChangedAction
	 */
	enum class EGbxScrollBoxListFocusChangedAction : uint8_t
	{
		DoNotChangeSelection                  = 0,
		SelectNoneOnLossSelectFirstOnGain     = 1,
		SelectNoneOnLossRestorePreviousOnGain = 2,
		MAX                                   = 3
	};

	/**
	 * Enum GbxUI.EGbxScrollBoxListWrapMode
	 */
	enum class EGbxScrollBoxListWrapMode : uint8_t
	{
		Stick = 0,
		Wrap  = 1,
		MAX   = 2
	};

	/**
	 * Enum GbxUI.EVerticalTextAutoSizeType
	 */
	enum class EVerticalTextAutoSizeType : uint8_t
	{
		none   = 0,
		top    = 1,
		center = 2,
		bottom = 3,
		MAX    = 4
	};

	/**
	 * Enum GbxUI.EHoldToPressGlyphType
	 */
	enum class EHoldToPressGlyphType : uint8_t
	{
		None          = 0,
		Gamepad       = 1,
		Keyboard      = 2,
		KeyboardWide  = 3,
		KeyboardXWide = 4,
		MAX           = 5
	};

	/**
	 * Enum GbxUI.EGbxInputGlyphType
	 */
	enum class EGbxInputGlyphType : uint8_t
	{
		KeyboardMouse  = 0,
		PS4            = 1,
		XboxOne        = 2,
		GenericGamepad = 3,
		SwitchPro      = 4,
		Stadia         = 5,
		DPX            = 6,
		MPX            = 7,
		MAX            = 8
	};

	/**
	 * Enum GbxUI.EGbxActionToTextType
	 */
	enum class EGbxActionToTextType : uint8_t
	{
		PlayerController = 0,
		KeyboardMouse    = 1,
		Gamepad          = 2,
		MAX              = 3
	};

	/**
	 * Enum GbxUI.EGbxSpinnerWidgetGoToMethod
	 */
	enum class EGbxSpinnerWidgetGoToMethod : uint8_t
	{
		FromCurrent = 0,
		Immediately = 1,
		MAX         = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxUI.GbxGFxAnchor
	 * Size -> 0x0018
	 */
	struct FGbxGFxAnchor
	{
	public:
		struct FVector2D                                           NormalizedPosition;                                      // 0x0000(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Offset;                                                  // 0x0008(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0010(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxmovieClipAppendixItem
	 * Size -> 0x0010
	 */
	struct FGbxGFxmovieClipAppendixItem
	{
	public:
		TArray<class FString>                                      ClipPaths;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxMovieClipAppendix
	 * Size -> 0x0060
	 */
	struct FGbxGFxMovieClipAppendix
	{
	public:
		struct FGbxGFxmovieClipAppendixItem                        DefaultRetVal;                                           // 0x0000(0x0010) Transient, NativeAccessSpecifierPublic
		TMap<class FString, struct FGbxGFxmovieClipAppendixItem>   AppendixMap;                                             // 0x0010(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxFocusableWidgetAdjacencyInfo
	 * Size -> 0x0020
	 */
	struct FGbxFocusableWidgetAdjacencyInfo
	{
	public:
		TWeakObjectPtr<class UObject>                              WidgetUp;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              WidgetDown;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              WidgetLeft;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              WidgetRight;                                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuInputEvent
	 * Size -> 0x0030
	 */
	struct FGbxMenuInputEvent
	{
	public:
		unsigned char                                              UnknownData_A2EB[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxProgressBarInterpolator
	 * Size -> 0x0028
	 */
	struct FGbxProgressBarInterpolator
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxEasingFunc                                      EasingFunc;                                              // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StartValue;                                              // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentValue;                                            // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndValue;                                                // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedTime;                                             // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaEndOverride;                                        // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxProgressBarRange
	 * Size -> 0x0018
	 */
	struct FGbxProgressBarRange
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncreasing;                                             // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDecreasing;                                             // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IXUM[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxListConfig
	 * Size -> 0x0090
	 */
	struct FGbxGFxListConfig
	{
	public:
		EGbxGFxListConfigType                                      ConfigType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxGFxListOrientation                                     ListOrientation;                                         // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxGFxListAlignment                                       ListAlignment;                                           // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBTE[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FillSize;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VertCellSpacing;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorzCellSpacing;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoHideScrollBar;                                      // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIWG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ScrollBarName;                                           // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxGFxScrollListWrapMode                                  WrapMode;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxFocusableWidgetMouseBehavior                           DefaultItemSelectionBehavior;                            // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxGFxScrollListFocusChangedAction                        FocusChangeAction;                                       // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMustHaveOneFocusableCellToReceiveFocus;                 // 0x002B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VO0L[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EntryPrefix;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GridAreaName;                                            // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GridMaskName;                                            // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxGFxScrollListFocusOrderPriority                        FocusOrderPriority;                                      // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxGFxScrollListAddedItemPriority                         AddedItemPriority;                                       // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFixedCellBounds;                                     // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD2E[0x1];                                   // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           FixedCellBoundsDemensions;                               // 0x0064(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoveSelectionScrollIntoView;                            // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoveSelectionAnimateScroll;                             // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepScrollbarOnTop;                                     // 0x006E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysConsumeDirectionInput;                            // 0x006F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowScrolling;                                         // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseScrollDirection;                                 // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4A5[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DefaultItemSelectedAudioEventName;                       // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultItemClickedAudioEventName;                        // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeNavigatedIfMouseDisabled;                          // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFocusListIfCellGetsFocused;                             // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SW7T[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxScrollingListCellInfo
	 * Size -> 0x0020
	 */
	struct FGbxScrollingListCellInfo
	{
	public:
		class FString                                              LibraryName;                                             // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CellClass;                                               // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxListCell*                                     Cell;                                                    // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxUIScroller
	 * Size -> 0x0034
	 */
	struct FGbxUIScroller
	{
	public:
		float                                                      Acceleration;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemSize;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVelocity;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinVelocity;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFixedVelocity;                                       // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18S3[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedVelocity;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScrollPosition;                                          // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DesiredPosition;                                         // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WindowSize;                                              // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FullSize;                                                // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurVelocity;                                             // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DesiredVelocity;                                         // 0x002C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasMoved;                                               // 0x0030(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsMoving;                                               // 0x0031(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasSlowedDown;                                          // 0x0032(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SWMP[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxPooledGridListConfig
	 * Size -> 0x0030
	 */
	struct FGbxGFxPooledGridListConfig
	{
	public:
		class UClass*                                              ItemNativeClass;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemASClass;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ItemSize;                                                // 0x0018(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ItemRootOffset;                                          // 0x0020(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VisibleRows;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VisibleCols;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxPooledGridPoolInfo
	 * Size -> 0x0030
	 */
	struct FGbxGFxPooledGridPoolInfo
	{
	public:
		struct FGbxScrollingListCellInfo                           CellInfo;                                                // 0x0000(0x0020) Transient, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UGbxGFxPooledGridList>                OwningList;                                              // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ListIndex;                                               // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VisibleIndexOffset;                                      // 0x002C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxMenuSwitcherSubmenuInfo
	 * Size -> 0x0058
	 */
	struct FGbxGFxMenuSwitcherSubmenuInfo
	{
	public:
		class FName                                                MenuID;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MenuName;                                                // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                MenuDescription;                                         // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		class UGbxGFxMenuData*                                     MenuData;                                                // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxMenuData*                                     MenuData_NoCrossplay;                                    // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MenuClass;                                               // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddToNav;                                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PQQ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxHUDFeedbackManager
	 * Size -> 0x0068
	 */
	struct FGbxHUDFeedbackManager
	{
	public:
		class UGbxGFxHUDFeedbackData*                              FeedbackData;                                            // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y1ND[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxGFxMovie*>                                Widgets;                                                 // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AGbxPlayerController>                 OwningPlayer;                                            // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class APawn>                                OwningPawn;                                              // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class APlayerCameraManager>                 OwningPlayerCameraManager;                               // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2AQG[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxHUDStateManager
	 * Size -> 0x0040
	 */
	struct FGbxHUDStateManager
	{
	public:
		class FScriptMulticastDelegate                             OnStateChanged;                                          // 0x0000(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UGbxHUDStateData*>                            StateStack;                                              // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y639[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxGFxHUDWidget*>                            Widgets;                                                 // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_737U[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.TextMarkupDictionaryEntry
	 * Size -> 0x0018
	 */
	struct FTextMarkupDictionaryEntry
	{
	public:
		class FString                                              OutputText;                                              // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresEndSection;                                     // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TW08[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxDLCMenuSplitscreenLayouts
	 * Size -> 0x0080
	 */
	struct FGbxDLCMenuSplitscreenLayouts
	{
	public:
		unsigned char                                              VerticalLayout[0x28];                                    // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxUI.GbxDLCMenuSplitscreenLayouts.VerticalLayout
		unsigned char                                              QuarterLayout[0x28];                                     // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxUI.GbxDLCMenuSplitscreenLayouts.QuarterLayout
		struct FSoftObjectPath                                     SoftVerticalLayout;                                      // 0x0050(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SoftQuarterLayout;                                       // 0x0068(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxCascadingListItemData
	 * Size -> 0x0038
	 */
	struct FGbxCascadingListItemData
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Label;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bHasChildren;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHCE[0x17];                                  // 0x0021(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxComboBoxItemInfo
	 * Size -> 0x0020
	 */
	struct FGbxComboBoxItemInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		int32_t                                                    ReferenceIndex;                                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DS3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxDialogBoxChoiceInfo
	 * Size -> 0x0028
	 */
	struct FGbxDialogBoxChoiceInfo
	{
	public:
		class FText                                                LabelText;                                               // 0x0000(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                ChoiceNameId;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCloseDialogOnSelection;                                 // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q7RR[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxDialogBoxInfo
	 * Size -> 0x0060
	 */
	struct FGbxDialogBoxInfo
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                BodyText;                                                // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGbxDialogBoxChoiceInfo>                     Choices;                                                 // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCanCancel;                                              // 0x0040(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnyUserCanInteract;                                     // 0x0041(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M80S[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnChoiceMadeDelegate;                                    // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                TemplateNameId;                                          // 0x0058(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuSwitcherSubmenuInfo
	 * Size -> 0x0030
	 */
	struct FGbxMenuSwitcherSubmenuInfo
	{
	public:
		class FName                                                MenuID;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MenuName;                                                // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class UGbxMenuData*                                        MenuData;                                                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MenuClass;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxDialogBoxTemplateMapItem
	 * Size -> 0x0010
	 */
	struct FGbxDialogBoxTemplateMapItem
	{
	public:
		class FName                                                NameId;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DialogClass;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxFocusableWidgetItemStyle
	 * Size -> 0x00C0
	 */
	struct FGbxFocusableWidgetItemStyle
	{
	public:
		EGbxFocusableWidgetState                                   State;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTextColor;                                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTextSize;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIndicatorBrush;                                      // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCLX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         TextColor;                                               // 0x0008(0x0028) Edit, NativeAccessSpecifierPublic
		int32_t                                                    TextSize;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH61[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         IndicatorBrush;                                          // 0x0038(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.ContextualMenuInfo
	 * Size -> 0x0080
	 */
	struct FContextualMenuInfo
	{
	public:
		unsigned char                                              UnknownData_H0LR[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxContextualMenuLocTableData
	 * Size -> 0x0030
	 */
	struct FGbxGFxContextualMenuLocTableData
	{
	public:
		EContextualMenuEntryType                                   Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Q3H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ItemText;                                                // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class FString                                              FrameString;                                             // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxHintInfo
	 * Size -> 0x0040
	 */
	struct FGbxHintInfo
	{
	public:
		TArray<class FName>                                        InputActions;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                HelpText;                                                // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bStagePlaced;                                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7CH[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             StagePlacedWidget;                                       // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClickable;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceRefreshText;                                       // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2EL[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxMediaPlayerConfig
	 * Size -> 0x0030
	 */
	struct FGbxGFxMediaPlayerConfig
	{
	public:
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxMediaData*                                       MediaData;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MediaMaterial;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MediaDimensions;                                         // 0x0018(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExternalTextureName;                                     // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxMaterialRenderer
	 * Size -> 0x0018
	 */
	struct FGbxGFxMaterialRenderer
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxGFxMovie>                         OwningMovie;                                             // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxMenuSwitcherNavWidgetCustomItem
	 * Size -> 0x0038
	 */
	struct FGbxGFxMenuSwitcherNavWidgetCustomItem
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconFrameName;                                           // 0x0008(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TitleText;                                               // 0x0018(0x0018) Transient, NativeAccessSpecifierPublic
		bool                                                       bDisabled;                                               // 0x0030(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJNK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxSliderAcceleration
	 * Size -> 0x0010
	 */
	struct FGbxGFxSliderAcceleration
	{
	public:
		int32_t                                                    RepeatsNeededToAcclerate;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RepeatAdder;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIncreases;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToResetMouseWheelRepeat;                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxHintWidgetMapItem
	 * Size -> 0x0030
	 */
	struct FGbxHintWidgetMapItem
	{
	public:
		TArray<class FName>                                        InputActions;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8X5N[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             HintWidget;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HintWidgetInterface[0x10];                               // 0x0020(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxUI.GbxHintWidgetMapItem.HintWidgetInterface
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxHUDWidgetInfo
	 * Size -> 0x0020
	 */
	struct FGbxGFxHUDWidgetInfo
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstanceString;                                          // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Priority;                                                // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84ME[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxHUDLayoutData
	 * Size -> 0x0010
	 */
	struct FGbxHUDLayoutData
	{
	public:
		class UDataTable*                                          Layout;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62UK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuKeyRepeatInfo
	 * Size -> 0x0018
	 */
	struct FGbxMenuKeyRepeatInfo
	{
	public:
		float                                                      InitialButtonRepeatDelay;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepeatDelayStart;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepeatDelayEnd;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepeatDelayDelta;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldToPressDuration;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldToPressDurationLong;                                 // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuInputAction
	 * Size -> 0x0020
	 */
	struct FGbxMenuInputAction
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        Keys;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EGbxMenuInputActionTrigger                                 ActionTrigger;                                           // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsRepeat;                                            // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHU6[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuInputAxisBind
	 * Size -> 0x0020
	 */
	struct FGbxMenuInputAxisBind
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8EL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuInputAxisAction
	 * Size -> 0x0038
	 */
	struct FGbxMenuInputAxisAction
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGbxMenuInputAxisBind>                       Binds;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bTreatAsButtonPress;                                     // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IJF[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PositiveAxisAction;                                      // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NegativeAxisAction;                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsRepeat;                                            // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TX0S[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuInputRawMousePos
	 * Size -> 0x0018
	 */
	struct FGbxMenuInputRawMousePos
	{
	public:
		struct FVector2D                                           PrevMousePos;                                            // 0x0000(0x0008) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           NewMousePos;                                             // 0x0008(0x0008) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ControllerId;                                            // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IgnoreMouseMoveFrames;                                   // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuAxisInputEvent
	 * Size -> 0x0028
	 */
	struct FGbxMenuAxisInputEvent
	{
	public:
		unsigned char                                              UnknownData_YKJV[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxInputToGlyphMapItem
	 * Size -> 0x0518
	 */
	struct FGbxInputToGlyphMapItem
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                KeyboardMouseGlyph;                                      // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                PS4Glyph;                                                // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                XboxOneGlyph;                                            // 0x0048(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                DPXGlyph;                                                // 0x0060(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                MPXGlyph;                                                // 0x0078(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                GenericGamepadGlyph;                                     // 0x0090(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                SwitchProGlyph;                                          // 0x00A8(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                StadiaGlyph;                                             // 0x00C0(0x0018) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         KeyboardMouseGlyphBrush;                                 // 0x00D8(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PS4GlyphBrush;                                           // 0x0160(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         XboxOneGlyphBrush;                                       // 0x01E8(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DPXGlyphBrush;                                           // 0x0270(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MPXGlyphBrush;                                           // 0x02F8(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         GenericGamepadGlyphBrush;                                // 0x0380(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SwitchProGlyphBrush;                                     // 0x0408(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         StadiaGlyphBrush;                                        // 0x0490(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxInputToGlyphSpecialActionItem
	 * Size -> 0x0508
	 */
	struct FGbxInputToGlyphSpecialActionItem
	{
	public:
		class FName                                                InputAction;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                KeyboardMouseGlyph;                                      // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                PS4Glyph;                                                // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                XboxOneGlyph;                                            // 0x0038(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                DPXGlyph;                                                // 0x0050(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                MPXGlyph;                                                // 0x0068(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                GenericGamepadGlyph;                                     // 0x0080(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                SwitchProGlyph;                                          // 0x0098(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                StadiaGlyph;                                             // 0x00B0(0x0018) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         KeyboardMouseGlyphBrush;                                 // 0x00C8(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         PS4GlyphBrush;                                           // 0x0150(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         XboxOneGlyphBrush;                                       // 0x01D8(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DPXGlyphBrush;                                           // 0x0260(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MPXGlyphBrush;                                           // 0x02E8(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         GenericGamepadGlyphBrush;                                // 0x0370(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SwitchProGlyphBrush;                                     // 0x03F8(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         StadiaGlyphBrush;                                        // 0x0480(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxFocusableWidgetInfo
	 * Size -> 0x0028
	 */
	struct FGbxFocusableWidgetInfo
	{
	public:
		TWeakObjectPtr<class UObject>                              Widget;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxFocusableWidgetAdjacencyInfo                    AdjacencyInfo;                                           // 0x0008(0x0020) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.DamageAnimationPairing
	 * Size -> 0x0028
	 */
	struct FDamageAnimationPairing
	{
	public:
		ERecentDamageFlags                                         DamageTypeFlag;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5HP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidgetAnimation*>                            LeftAnimations;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UWidgetAnimation*>                            RightAnimations;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxMouseCapturePanelMouseButtonInfo
	 * Size -> 0x001C
	 */
	struct FGbxGFxMouseCapturePanelMouseButtonInfo
	{
	public:
		unsigned char                                              UnknownData_J2XU[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxListCellUpdateInfo
	 * Size -> 0x0010
	 */
	struct FGbxGFxListCellUpdateInfo
	{
	public:
		class UGbxGFxListCell*                                     Cell;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ListIndex;                                               // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSelected;                                             // 0x000C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsNewSelection;                                         // 0x000D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsNewInView;                                            // 0x000E(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L09T[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.GbxGFxPooledGridListFullConfig
	 * Size -> 0x00C0
	 */
	struct FGbxGFxPooledGridListFullConfig
	{
	public:
		struct FGbxGFxListConfig                                   BaseListConfig;                                          // 0x0000(0x0090) Edit, NativeAccessSpecifierPublic
		struct FGbxGFxPooledGridListConfig                         PoolListConfig;                                          // 0x0090(0x0030) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxFocusableWidgetAdjacencyNames
	 * Size -> 0x0040
	 */
	struct FGbxFocusableWidgetAdjacencyNames
	{
	public:
		class FString                                              WidgetUpName;                                            // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WidgetDownName;                                          // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WidgetLeftName;                                          // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WidgetRightName;                                         // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.ContextualMenuEntryInfo
	 * Size -> 0x0020
	 */
	struct FContextualMenuEntryInfo
	{
	public:
		unsigned char                                              UnknownData_JC63[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxUI.UIEventAudioPairRow
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FUIEventAudioPairRow : public FTableRowBase
	{
	public:
		class UWwiseEvent*                                         WwiseSound;                                              // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxHUDLayoutTableRow
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FGbxHUDLayoutTableRow : public FTableRowBase
	{
	public:
		struct FVector2D                                           AnchorPosition;                                          // 0x0008(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Offset;                                                  // 0x0010(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0018(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LibraryMovieString;                                      // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuInputActionInfo
	 * Size -> 0x000C
	 */
	struct FGbxMenuInputActionInfo
	{
	public:
		bool                                                       bIsHeld;                                                 // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPressToHold;                                          // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WS3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PressToHoldDuration;                                     // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PressToHoldProgress;                                     // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.GbxMenuSplitscreenLayouts
	 * Size -> 0x0070
	 */
	struct FGbxMenuSplitscreenLayouts
	{
	public:
		unsigned char                                              UnknownData_6BFL[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              VerticalLayout[0x28];                                    // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxUI.GbxMenuSplitscreenLayouts.VerticalLayout
		unsigned char                                              QuarterLayout[0x28];                                     // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxUI.GbxMenuSplitscreenLayouts.QuarterLayout
		struct FSoftObjectPath                                     QuarterLayoutPath;                                       // 0x0058(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxUI.TextDebugData
	 * Size -> 0x0030
	 */
	struct FTextDebugData
	{
	public:
		class FText                                                DisplayText;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      DisplayTime;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisplaySize;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DisplayColor;                                            // 0x0020(0x0010) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
