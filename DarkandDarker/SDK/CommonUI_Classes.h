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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CommonUI.AnalogSlider
	 * Size -> 0x0020 (FullSize[0x0700] - InheritedSize[0x06E0])
	 */
	class UAnalogSlider : public USlider
	{
	public:
		class FScriptMulticastDelegate                             OnAnalogCapture;                                         // 0x06E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7VH[0x10];                                  // 0x06F0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActionHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonActionHandlerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActionWidget
	 * Size -> 0x0308 (FullSize[0x0430] - InheritedSize[0x0128])
	 */
	class UCommonActionWidget : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnInputMethodChanged;                                    // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL4G[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         ProgressMaterialBrush;                                   // 0x0140(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                ProgressMaterialParam;                                   // 0x0210(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7EII[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         IconRimBrush;                                            // 0x0220(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         InputActions;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ME38[0x8];                                   // 0x0300(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            ProgressDynamicMaterial;                                 // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4S8H[0x120];                                 // 0x0310(0x0120) MISSED OFFSET (PADDING)

	public:
		void SetInputActions(TArray<struct FDataTableRowHandle> NewInputActions);
		void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
		void SetIconRimBrush(const struct FSlateBrush& InIconRimBrush);
		void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
		bool IsHeldAction();
		struct FSlateBrush GetIcon();
		class FText GetDisplayText();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUserWidget
	 * Size -> 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
	 */
	class UCommonUserWidget : public UUserWidget
	{
	public:
		bool                                                       bDisplayInActionBar;                                     // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bConsumePointerInput;                                    // 0x0291(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_26U9[0x26];                                  // 0x0292(0x0026) MISSED OFFSET (PADDING)

	public:
		void SetConsumePointerInput(bool bInConsumePointerInput);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidget
	 * Size -> 0x00C0 (FullSize[0x0378] - InheritedSize[0x02B8])
	 */
	class UCommonActivatableWidget : public UCommonUserWidget
	{
	public:
		bool                                                       bIsBackHandler;                                          // 0x02B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsBackActionDisplayedInActionBar;                       // 0x02B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoActivate;                                           // 0x02BA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsActivationFocus;                                // 0x02BB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsModal;                                                // 0x02BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoRestoreFocus;                                       // 0x02BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SM9Q[0x2];                                   // 0x02BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnWidgetActivated;                                    // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnWidgetDeactivated;                                  // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		bool                                                       bIsActive;                                               // 0x02E0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ER14[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class UCommonActivatableWidget>>     VisibilityBoundWidgets;                                  // 0x02E8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DPG1[0x78];                                  // 0x02F8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSetVisibilityOnActivated;                               // 0x0370(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlateVisibility                                           ActivatedVisibility;                                     // 0x0371(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSetVisibilityOnDeactivated;                             // 0x0372(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlateVisibility                                           DeactivatedVisibility;                                   // 0x0373(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_15HU[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive);
		bool IsActivated();
		class UWidget* GetDesiredFocusTarget();
		void DeactivateWidget();
		bool BP_OnHandleBackAction();
		void BP_OnDeactivated();
		void BP_OnActivated();
		class UWidget* BP_GetDesiredFocusTarget();
		void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);
		void ActivateWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidgetContainerBase
	 * Size -> 0x0120 (FullSize[0x0248] - InheritedSize[0x0128])
	 */
	class UCommonActivatableWidgetContainerBase : public UWidget
	{
	public:
		unsigned char                                              UnknownData_5BD0[0x18];                                  // 0x0128(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECommonSwitcherTransition                                  TransitionType;                                          // 0x0140(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETransitionCurve                                           TransitionCurveType;                                     // 0x0141(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P1C7[0x2];                                   // 0x0142(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TransitionDuration;                                      // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCommonActivatableWidget*>                    WidgetList;                                              // 0x0148(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UCommonActivatableWidget*                            DisplayedWidget;                                         // 0x0158(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FUserWidgetPool                                     GeneratedWidgetsPool;                                    // 0x0160(0x0088) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2J6O[0x60];                                  // 0x01E8(0x0060) MISSED OFFSET (PADDING)

	public:
		void SetTransitionDuration(float Duration);
		void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
		float GetTransitionDuration();
		class UCommonActivatableWidget* GetActiveWidget();
		void ClearWidgets();
		class UCommonActivatableWidget* BP_AddWidget(class UClass* ActivatableWidgetClass);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidgetStack
	 * Size -> 0x0010 (FullSize[0x0258] - InheritedSize[0x0248])
	 */
	class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
	{
	public:
		class UClass*                                              RootContentWidgetClass;                                  // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCommonActivatableWidget*                            RootContentWidget;                                       // 0x0250(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidgetQueue
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonAnimatedSwitcher
	 * Size -> 0x0058 (FullSize[0x01B0] - InheritedSize[0x0158])
	 */
	class UCommonAnimatedSwitcher : public UWidgetSwitcher
	{
	public:
		unsigned char                                              UnknownData_6NL6[0x18];                                  // 0x0158(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECommonSwitcherTransition                                  TransitionType;                                          // 0x0170(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETransitionCurve                                           TransitionCurveType;                                     // 0x0171(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4QBZ[0x2];                                   // 0x0172(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TransitionDuration;                                      // 0x0174(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2NTN[0x38];                                  // 0x0178(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetDisableTransitionAnimation(bool bDisableAnimation);
		bool IsCurrentlySwitching();
		bool HasWidgets();
		void ActivatePreviousWidget(bool bCanWrap);
		void ActivateNextWidget(bool bCanWrap);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidgetSwitcher
	 * Size -> 0x0000 (FullSize[0x01B0] - InheritedSize[0x01B0])
	 */
	class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonBorderStyle
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UCommonBorderStyle : public UObject
	{
	public:
		unsigned char                                              UnknownData_NFES[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Background;                                              // 0x0030(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		void GetBackgroundBrush(struct FSlateBrush* Brush);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonBorder
	 * Size -> 0x0020 (FullSize[0x0308] - InheritedSize[0x02E8])
	 */
	class UCommonBorder : public UBorder
	{
	public:
		class UClass*                                              Style;                                                   // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReducePaddingBySafezone;                                // 0x02F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDOA[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             MinimumPadding;                                          // 0x02F4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DC1P[0x4];                                   // 0x0304(0x0004) Fix size for supers

	public:
		void SetStyle(class UClass* InStyle);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonBoundActionBar
	 * Size -> 0x0010 (FullSize[0x0218] - InheritedSize[0x0208])
	 */
	class UCommonBoundActionBar : public UDynamicEntryBoxBase
	{
	public:
		class UClass*                                              ActionButtonClass;                                       // 0x0208(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDisplayOwningPlayerActionsOnly;                         // 0x0210(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIgnoreDuplicateActions;                                 // 0x0211(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EQRR[0x6];                                   // 0x0212(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonButtonBase
	 * Size -> 0x0DB0 (FullSize[0x1068] - InheritedSize[0x02B8])
	 */
	class UCommonButtonBase : public UCommonUserWidget
	{
	public:
		int32_t                                                    MinWidth;                                                // 0x02B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinHeight;                                               // 0x02BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              Style;                                                   // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHideInputAction;                                        // 0x02C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9LI4[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateSound                                         PressedSlateSoundOverride;                               // 0x02D0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSlateSound                                         HoveredSlateSoundOverride;                               // 0x02E8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bApplyAlphaOnDisable : 1;                                // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSelectable : 1;                                         // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldSelectUponReceivingFocus : 1;                     // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInteractableWhenSelected : 1;                           // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bToggleable : 1;                                         // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisplayInputActionWhenNotInteractable : 1;              // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHideInputActionWithKeyboard : 1;                        // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldUseFallbackDefaultInputAction : 1;                // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SG74[0x1];                                   // 0x0301(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EButtonClickMethod                                         ClickMethod;                                             // 0x0302(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonTouchMethod                                         TouchMethod;                                             // 0x0303(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonPressMethod                                         PressMethod;                                             // 0x0304(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHN2[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputPriority;                                           // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3XU[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 TriggeringInputAction;                                   // 0x0310(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S25H[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectedChangedBase;                                   // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnButtonBaseClicked;                                     // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnButtonBaseDoubleClicked;                               // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnButtonBaseHovered;                                     // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnButtonBaseUnhovered;                                   // 0x0370(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6G30[0x4];                                   // 0x0380(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsPersistentBinding;                                    // 0x0384(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECommonInputMode                                           InputModeOverride;                                       // 0x0385(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_41PX[0x32];                                  // 0x0386(0x0032) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            SingleMaterialStyleMID;                                  // 0x03B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FButtonStyle                                        NormalStyle;                                             // 0x03C0(0x03F0) NativeAccessSpecifierPrivate
		struct FButtonStyle                                        SelectedStyle;                                           // 0x07B0(0x03F0) NativeAccessSpecifierPrivate
		struct FButtonStyle                                        DisabledStyle;                                           // 0x0BA0(0x03F0) NativeAccessSpecifierPrivate
		bool                                                       bStopDoubleClickPropagation : 1;                         // 0x0F90(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8GDG[0xCF];                                  // 0x0F91(0x00CF) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonActionWidget*                                 InputActionWidget;                                       // 0x1060(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void StopDoubleClickPropagation();
		void SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow);
		void SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow);
		void SetTouchMethod(EButtonTouchMethod InTouchMethod);
		void SetStyle(class UClass* InStyle);
		void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
		void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
		void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
		void SetPressMethod(EButtonPressMethod InPressMethod);
		void SetPressedSoundOverride(class USoundBase* Sound);
		void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);
		void SetIsToggleable(bool bInIsToggleable);
		void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
		void SetIsSelectable(bool bInIsSelectable);
		void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
		void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
		void SetIsFocusable(bool bInIsFocusable);
		void SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const class FName& InProgressMaterialParam);
		void SetHoveredSoundOverride(class USoundBase* Sound);
		void SetClickMethod(EButtonClickMethod InClickMethod);
		void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
		void OnInputMethodChanged(ECommonInputType CurrentInputType);
		void OnCurrentTextStyleChanged();
		void OnActionProgress(float HeldPercent);
		void OnActionComplete();
		void NativeOnActionProgress(float HeldPercent);
		void NativeOnActionComplete();
		bool IsPressed();
		bool IsInteractionEnabled();
		void HandleTriggeringActionCommited(bool* bPassThrough);
		void HandleFocusReceived();
		void HandleButtonReleased();
		void HandleButtonPressed();
		void HandleButtonClicked();
		class UCommonButtonStyle* GetStyle();
		class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
		bool GetShouldSelectUponReceivingFocus();
		bool GetSelected();
		bool GetIsFocusable();
		bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
		class UClass* GetCurrentTextStyleClass();
		class UCommonTextStyle* GetCurrentTextStyle();
		void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
		void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
		void DisableButtonWithReason(const class FText& DisabledReason);
		void ClearSelection();
		void BP_OnUnhovered();
		void BP_OnSelected();
		void BP_OnHovered();
		void BP_OnEnabled();
		void BP_OnDoubleClicked();
		void BP_OnDisabled();
		void BP_OnDeselected();
		void BP_OnClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonBoundActionButton
	 * Size -> 0x0018 (FullSize[0x1080] - InheritedSize[0x1068])
	 */
	class UCommonBoundActionButton : public UCommonButtonBase
	{
	public:
		class UCommonTextBlock*                                    Text_ActionName;                                         // 0x1068(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WTP0[0x10];                                  // 0x1070(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnUpdateInputAction();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonButtonStyle
	 * Size -> 0x0788 (FullSize[0x07B0] - InheritedSize[0x0028])
	 */
	class UCommonButtonStyle : public UObject
	{
	public:
		bool                                                       bSingleMaterial;                                         // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HXQ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         SingleMaterialBrush;                                     // 0x0030(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBase;                                              // 0x0100(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalHovered;                                           // 0x01D0(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalPressed;                                           // 0x02A0(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SelectedBase;                                            // 0x0370(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SelectedHovered;                                         // 0x0440(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SelectedPressed;                                         // 0x0510(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Disabled;                                                // 0x05E0(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FMargin                                             ButtonPadding;                                           // 0x06B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             CustomPadding;                                           // 0x06C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MinWidth;                                                // 0x06D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinHeight;                                               // 0x06D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NormalTextStyle;                                         // 0x06D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NormalHoveredTextStyle;                                  // 0x06E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SelectedTextStyle;                                       // 0x06E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SelectedHoveredTextStyle;                                // 0x06F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DisabledTextStyle;                                       // 0x06F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateSound                                         PressedSlateSound;                                       // 0x0700(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCommonButtonStyleOptionalSlateSound                SelectedPressedSlateSound;                               // 0x0718(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCommonButtonStyleOptionalSlateSound                DisabledPressedSlateSound;                               // 0x0738(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x0758(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCommonButtonStyleOptionalSlateSound                SelectedHoveredSlateSound;                               // 0x0770(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCommonButtonStyleOptionalSlateSound                DisabledHoveredSlateSound;                               // 0x0790(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		class UCommonTextStyle* GetSelectedTextStyle();
		void GetSelectedPressedBrush(struct FSlateBrush* Brush);
		class UCommonTextStyle* GetSelectedHoveredTextStyle();
		void GetSelectedHoveredBrush(struct FSlateBrush* Brush);
		void GetSelectedBaseBrush(struct FSlateBrush* Brush);
		class UCommonTextStyle* GetNormalTextStyle();
		void GetNormalPressedBrush(struct FSlateBrush* Brush);
		class UCommonTextStyle* GetNormalHoveredTextStyle();
		void GetNormalHoveredBrush(struct FSlateBrush* Brush);
		void GetNormalBaseBrush(struct FSlateBrush* Brush);
		void GetMaterialBrush(struct FSlateBrush* Brush);
		class UCommonTextStyle* GetDisabledTextStyle();
		void GetDisabledBrush(struct FSlateBrush* Brush);
		void GetCustomPadding(struct FMargin* OutCustomPadding);
		void GetButtonPadding(struct FMargin* OutButtonPadding);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonButtonInternalBase
	 * Size -> 0x0060 (FullSize[0x0630] - InheritedSize[0x05D0])
	 */
	class UCommonButtonInternalBase : public UButton
	{
	public:
		unsigned char                                              UnknownData_RRID[0x8];                                   // 0x05D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDoubleClicked;                                         // 0x05D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BNK[0x10];                                  // 0x05E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinWidth;                                                // 0x05F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinHeight;                                               // 0x05FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bButtonEnabled;                                          // 0x0600(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInteractionEnabled;                                     // 0x0601(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T3MO[0x2E];                                  // 0x0602(0x002E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonWidgetGroupBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonWidgetGroupBase : public UObject
	{
	public:
		void RemoveWidget(class UWidget* InWidget);
		void RemoveAll();
		void AddWidget(class UWidget* InWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonButtonGroupBase
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UCommonButtonGroupBase : public UCommonWidgetGroupBase
	{
	public:
		class FScriptMulticastDelegate                             OnSelectedButtonBaseChanged;                             // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GX37[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHoveredButtonBaseChanged;                              // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIAO[0x18];                                  // 0x0060(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnButtonBaseClicked;                                     // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H191[0x18];                                  // 0x0088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnButtonBaseDoubleClicked;                               // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVK3[0x18];                                  // 0x00B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionCleared;                                      // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LEY[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSelectionRequired;                                      // 0x00F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C5F2[0x1F];                                  // 0x00F1(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetSelectionRequired(bool bRequireSelection);
		void SelectPreviousButton(bool bAllowWrap);
		void SelectNextButton(bool bAllowWrap);
		void SelectButtonAtIndex(int32_t ButtonIndex);
		void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);
		void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);
		void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);
		void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);
		void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);
		bool HasAnyButtons();
		int32_t GetSelectedButtonIndex();
		class UCommonButtonBase* GetSelectedButtonBase();
		int32_t GetHoveredButtonIndex();
		int32_t GetButtonCount();
		class UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);
		int32_t FindButtonIndex(class UCommonButtonBase* ButtonToFind);
		void DeselectAll();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonCustomNavigation
	 * Size -> 0x0018 (FullSize[0x0300] - InheritedSize[0x02E8])
	 */
	class UCommonCustomNavigation : public UBorder
	{
	public:
		class FScriptDelegate                                      OnNavigationEvent;                                       // 0x02E8(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HU9L[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTextBlock
	 * Size -> 0x0028 (FullSize[0x0338] - InheritedSize[0x0310])
	 */
	class UCommonTextBlock : public UTextBlock
	{
	public:
		class UClass*                                              Style;                                                   // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ScrollStyle;                                             // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDisplayAllCaps;                                         // 0x0320(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoCollapseWithEmptyText;                              // 0x0321(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_99JS[0x2];                                   // 0x0322(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MobileFontSizeMultiplier;                                // 0x0324(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FPZB[0x10];                                  // 0x0328(0x0010) Fix size for supers

	public:
		void SetWrapTextWidth(int32_t InWrapTextAt);
		void SetTextCase(bool bUseAllCaps);
		void SetStyle(class UClass* InStyle);
		void ResetScrollState();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonDateTimeTextBlock
	 * Size -> 0x0058 (FullSize[0x0390] - InheritedSize[0x0338])
	 */
	class UCommonDateTimeTextBlock : public UCommonTextBlock
	{
	public:
		unsigned char                                              UnknownData_35MC[0x8];                                   // 0x0338(0x0008) Fix Super Size
		unsigned char                                              UnknownData_0XDO[0x50];                                  // 0x0340(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetTimespanValue(const struct FTimespan& InTimespan);
		void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay);
		void SetCountDownCompletionText(const class FText& InCompletionText);
		struct FDateTime GetDateTime();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonGameViewportClient
	 * Size -> 0x0040 (FullSize[0x03E0] - InheritedSize[0x03A0])
	 */
	class UCommonGameViewportClient : public UGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_EF7M[0x40];                                  // 0x03A0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonGenericInputActionDataTable
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UCommonGenericInputActionDataTable : public UDataTable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonInputActionDataProcessor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonInputActionDataProcessor : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonHardwareVisibilityBorder
	 * Size -> 0x0058 (FullSize[0x0360] - InheritedSize[0x0308])
	 */
	class UCommonHardwareVisibilityBorder : public UCommonBorder
	{
	public:
		struct FGameplayTagQuery                                   VisibilityQuery;                                         // 0x0308(0x0048) Edit, Protected, NativeAccessSpecifierProtected
		ESlateVisibility                                           VisibleType;                                             // 0x0350(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlateVisibility                                           HiddenType;                                              // 0x0351(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JFGL[0xE];                                   // 0x0352(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonHierarchicalScrollBox
	 * Size -> 0x0000 (FullSize[0x0C80] - InheritedSize[0x0C80])
	 */
	class UCommonHierarchicalScrollBox : public UScrollBox
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonLazyImage
	 * Size -> 0x0110 (FullSize[0x0390] - InheritedSize[0x0280])
	 */
	class UCommonLazyImage : public UImage
	{
	public:
		struct FSlateBrush                                         LoadingBackgroundBrush;                                  // 0x0280(0x00D0) Edit, NativeAccessSpecifierPrivate
		class FName                                                MaterialTextureParamName;                                // 0x0350(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnLoadingStateChanged;                                // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NHXA[0x28];                                  // 0x0368(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetMaterialTextureParamName(const class FName& TextureParamName);
		void SetBrushFromLazyTexture(bool bMatchSize);
		void SetBrushFromLazyMaterial();
		void SetBrushFromLazyDisplayAsset(bool bMatchTextureSize);
		bool IsLoading();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonLazyWidget
	 * Size -> 0x0158 (FullSize[0x0280] - InheritedSize[0x0128])
	 */
	class UCommonLazyWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_YMEZ[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         LoadingBackgroundBrush;                                  // 0x0130(0x00D0) Edit, NativeAccessSpecifierPrivate
		class UUserWidget*                                         Content;                                                 // 0x0200(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FYOS[0x28];                                  // 0x0208(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnLoadingStateChanged;                                // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LRSQ[0x40];                                  // 0x0240(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetLazyContent();
		bool IsLoading();
		class UUserWidget* GetContent();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonListView
	 * Size -> 0x0000 (FullSize[0x0BE0] - InheritedSize[0x0BE0])
	 */
	class UCommonListView : public UListView
	{
	public:
		void SetEntrySpacing(float InEntrySpacing);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.LoadGuardSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class ULoadGuardSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2FGW[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonLoadGuard
	 * Size -> 0x0160 (FullSize[0x02A0] - InheritedSize[0x0140])
	 */
	class UCommonLoadGuard : public UContentWidget
	{
	public:
		struct FSlateBrush                                         LoadingBackgroundBrush;                                  // 0x0140(0x00D0) Edit, NativeAccessSpecifierPrivate
		EHorizontalAlignment                                       ThrobberAlignment;                                       // 0x0210(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XNBN[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             ThrobberPadding;                                         // 0x0214(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LUUX[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LoadingText;                                             // 0x0228(0x0018) Edit, NativeAccessSpecifierPrivate
		class UClass*                                              TextStyle;                                               // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnLoadingStateChanged;                                // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     SpinnerMaterialPath;                                     // 0x0258(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K7ZZ[0x30];                                  // 0x0270(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetLoadingText(const class FText& InLoadingText);
		void SetIsLoading(bool bInIsLoading);
		void OnAssetLoaded__DelegateSignature(class UObject* Object);
		bool IsLoading();
		void BP_GuardAndLoadAsset(const class FScriptDelegate& OnAssetLoaded);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonNumericTextBlock
	 * Size -> 0x00A8 (FullSize[0x03E0] - InheritedSize[0x0338])
	 */
	class UCommonNumericTextBlock : public UCommonTextBlock
	{
	public:
		class FScriptMulticastDelegate                             OnInterpolationStartedEvent;                             // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterpolationUpdatedEvent;                             // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOutroEvent;                                            // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterpolationEndedEvent;                               // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      CurrentNumericValue;                                     // 0x0378(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECommonNumericType                                         NumericType;                                             // 0x037C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU41[0x3];                                   // 0x037D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCommonNumberFormattingOptions                      FormattingSpecification;                                 // 0x0380(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EaseOutInterpolationExponent;                            // 0x0394(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationUpdateInterval;                             // 0x0398(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostInterpolationShrinkDuration;                         // 0x039C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PerformSizeInterpolation;                                // 0x03A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPercentage;                                            // 0x03A1(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DSM8[0x3E];                                  // 0x03A2(0x003E) MISSED OFFSET (PADDING)

	public:
		void SetNumericType(ECommonNumericType InNumericType);
		void SetCurrentValue(float NewValue);
		void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
		void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
		void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
		void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
		bool IsInterpolatingNumericValue();
		void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
		float GetTargetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonPoolableWidgetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonPoolableWidgetInterface : public UInterface
	{
	public:
		void OnReleaseToPool();
		void OnAcquireFromPool();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonRichTextBlock
	 * Size -> 0x0040 (FullSize[0x0880] - InheritedSize[0x0840])
	 */
	class UCommonRichTextBlock : public URichTextBlock
	{
	public:
		ERichTextInlineIconDisplayMode                             InlineIconDisplayMode;                                   // 0x0840(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTintInlineIcon;                                         // 0x0841(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BNXQ[0x6];                                   // 0x0842(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DefaultTextStyleOverrideClass;                           // 0x0848(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MobileTextBlockScale;                                    // 0x0850(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5QNS[0x4];                                   // 0x0854(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ScrollStyle;                                             // 0x0858(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDisplayAllCaps;                                         // 0x0860(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P1ZA[0x1F];                                  // 0x0861(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonRotator
	 * Size -> 0x0058 (FullSize[0x10C0] - InheritedSize[0x1068])
	 */
	class UCommonRotator : public UCommonButtonBase
	{
	public:
		unsigned char                                              UnknownData_OMQA[0x8];                                   // 0x1068(0x0008) Fix Super Size
		unsigned char                                              UnknownData_Z8BT[0x8];                                   // 0x1070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRotated;                                               // 0x1078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ER2F[0x18];                                  // 0x1088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonTextBlock*                                    MyText;                                                  // 0x10A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0PQ6[0x18];                                  // 0x10A8(0x0018) MISSED OFFSET (PADDING)

	public:
		void ShiftTextRight();
		void ShiftTextLeft();
		void SetSelectedItem(int32_t InValue);
		void PopulateTextLabels(TArray<class FText> Labels);
		class FText GetSelectedText();
		int32_t GetSelectedIndex();
		void BP_OnOptionsPopulated(int32_t Count);
		void BP_OnOptionSelected(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTabListWidgetBase
	 * Size -> 0x00D0 (FullSize[0x0388] - InheritedSize[0x02B8])
	 */
	class UCommonTabListWidgetBase : public UCommonUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnTabSelected;                                           // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTabButtonCreation;                                     // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTabButtonRemoval;                                      // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 NextTabInputActionData;                                  // 0x02E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDataTableRowHandle                                 PreviousTabInputActionData;                              // 0x02F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoListenForInput;                                     // 0x0308(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FH4R[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UCommonAnimatedSwitcher>              LinkedSwitcher;                                          // 0x030C(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0N9E[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonButtonGroupBase*                              TabButtonGroup;                                          // 0x0318(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E0AU[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FCommonRegisteredTabInfo>         RegisteredTabsByID;                                      // 0x0328(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X0QK[0x10];                                  // 0x0378(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTabVisibility(const class FName& TabNameID, ESlateVisibility NewVisibility);
		void SetTabInteractionEnabled(const class FName& TabNameID, bool bEnable);
		void SetTabEnabled(const class FName& TabNameID, bool bEnable);
		void SetListeningForInput(bool bShouldListen);
		void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
		bool SelectTabByID(const class FName& TabNameID, bool bSuppressClickFeedback);
		bool RemoveTab(const class FName& TabNameID);
		void RemoveAllTabs();
		bool RegisterTab(const class FName& TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget);
		void OnTabSelected__DelegateSignature(const class FName& TabId);
		void OnTabButtonRemoval__DelegateSignature(const class FName& TabId, class UCommonButtonBase* TabButton);
		void OnTabButtonCreation__DelegateSignature(const class FName& TabId, class UCommonButtonBase* TabButton);
		void HandleTabRemoval(const class FName& TabNameID, class UCommonButtonBase* TabButton);
		void HandleTabCreation(const class FName& TabNameID, class UCommonButtonBase* TabButton);
		void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);
		void HandlePreviousTabInputAction(bool* bPassThrough);
		void HandlePreLinkedSwitcherChanged_BP();
		void HandlePostLinkedSwitcherChanged_BP();
		void HandleNextTabInputAction(bool* bPassThrough);
		class FName GetTabIdAtIndex(int32_t Index);
		int32_t GetTabCount();
		class UCommonButtonBase* GetTabButtonBaseByID(const class FName& TabNameID);
		class FName GetSelectedTabId();
		class UCommonAnimatedSwitcher* GetLinkedSwitcher();
		class FName GetActiveTab();
		void DisableTabWithReason(const class FName& TabNameID, const class FText& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTextStyle
	 * Size -> 0x0188 (FullSize[0x01B0] - InheritedSize[0x0028])
	 */
	class UCommonTextStyle : public UObject
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0028(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesDropShadow;                                         // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VB4Q[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ShadowOffset;                                            // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColor;                                             // 0x00A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x00B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5I5M[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         StrikeBrush;                                             // 0x00D0(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      LineHeightPercentage;                                    // 0x01A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P40X[0xC];                                   // 0x01A4(0x000C) MISSED OFFSET (PADDING)

	public:
		void GetStrikeBrush(struct FSlateBrush* OutStrikeBrush);
		void GetShadowOffset(struct FVector2D* OutShadowOffset);
		void GetShadowColor(struct FLinearColor* OutColor);
		void GetMargin(struct FMargin* OutMargin);
		float GetLineHeightPercentage();
		void GetFont(struct FSlateFontInfo* OutFont);
		void GetColor(struct FLinearColor* OutColor);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTextScrollStyle
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UCommonTextScrollStyle : public UObject
	{
	public:
		float                                                      Speed;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDelay;                                              // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndDelay;                                                // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInDelay;                                             // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDelay;                                            // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRMZ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTileView
	 * Size -> 0x0000 (FullSize[0x0C00] - InheritedSize[0x0C00])
	 */
	class UCommonTileView : public UTileView
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTreeView
	 * Size -> 0x0000 (FullSize[0x0C40] - InheritedSize[0x0C40])
	 */
	class UCommonTreeView : public UTreeView
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUIActionRouterBase
	 * Size -> 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
	 */
	class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_VRXJ[0xD8];                                  // 0x0030(0x00D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUIEditorSettings
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UCommonUIEditorSettings : public UObject
	{
	public:
		unsigned char                                              TemplateTextStyle[0x28];                                 // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              TemplateButtonStyle[0x28];                               // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              TemplateBorderStyle[0x28];                               // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              UnknownData_7JDR[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUIInputSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UCommonUIInputSettings : public UObject
	{
	public:
		bool                                                       bLinkCursorToGamepadFocus;                               // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_95ZM[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UIActionProcessingPriority;                              // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FUIInputAction>                              InputActions;                                            // 0x0030(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<struct FUIInputAction>                              ActionOverrides;                                         // 0x0040(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		struct FCommonAnalogCursorSettings                         AnalogCursorSettings;                                    // 0x0050(0x0024) Edit, Config, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T0BE[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUILibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonUILibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UWidget* STATIC_FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUIRichTextData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCommonUIRichTextData : public UObject
	{
	public:
		class UDataTable*                                          InlineIconSet;                                           // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUISettings
	 * Size -> 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
	 */
	class UCommonUISettings : public UObject
	{
	public:
		bool                                                       bAutoLoadData;                                           // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F4YE[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultImageResourceObject[0x28];                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DefaultThrobberMaterial[0x28];                           // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DefaultRichTextDataClass[0x28];                          // 0x0080(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<struct FGameplayTag>                                PlatformTraits;                                          // 0x00A8(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GMP0[0x28];                                  // 0x00B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             DefaultImageResourceObjectInstance;                      // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  DefaultThrobberMaterialInstance;                         // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSlateBrush                                         DefaultThrobberBrush;                                    // 0x00F0(0x00D0) Transient, NativeAccessSpecifierPrivate
		class UCommonUIRichTextData*                               RichTextDataInstance;                                    // 0x01C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FVH8[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUISubsystemBase
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCommonUISubsystemBase : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_WR9D[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		struct FSlateBrush GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const class FName& GamepadName);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUIVisibilitySubsystem
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_H95A[0x58];                                  // 0x0030(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonVideoPlayer
	 * Size -> 0x0158 (FullSize[0x0280] - InheritedSize[0x0128])
	 */
	class UCommonVideoPlayer : public UWidget
	{
	public:
		class UMediaSource*                                        Video;                                                   // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0130(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMediaTexture*                                       MediaTexture;                                            // 0x0138(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterial*                                           VideoMaterial;                                           // 0x0140(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMediaSoundComponent*                                SoundComponent;                                          // 0x0148(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSlateBrush                                         VideoBrush;                                              // 0x0150(0x00D0) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2NUI[0x60];                                  // 0x0220(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonVisibilitySwitcher
	 * Size -> 0x0028 (FullSize[0x0178] - InheritedSize[0x0150])
	 */
	class UCommonVisibilitySwitcher : public UOverlay
	{
	public:
		ESlateVisibility                                           ShownVisibility;                                         // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LUU3[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoActivateSlot;                                       // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bActivateFirstSlotOnAdding;                              // 0x0159(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R3CX[0x1E];                                  // 0x015A(0x001E) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t Index);
		void SetActiveWidget(class UWidget* Widget);
		void IncrementActiveWidgetIndex(bool bAllowWrapping);
		int32_t GetActiveWidgetIndex();
		class UWidget* GetActiveWidget();
		void DecrementActiveWidgetIndex(bool bAllowWrapping);
		void DeactivateVisibleSlot();
		void ActivateVisibleSlot();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonVisibilitySwitcherSlot
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UCommonVisibilitySwitcherSlot : public UOverlaySlot
	{
	public:
		unsigned char                                              UnknownData_D37S[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.UCommonVisibilityWidgetBase
	 * Size -> 0x0058 (FullSize[0x0360] - InheritedSize[0x0308])
	 */
	class UUCommonVisibilityWidgetBase : public UCommonBorder
	{
	public:
		TMap<class FName, bool>                                    VisibilityControls;                                      // 0x0308(0x0050) Edit, EditFixedSize, NativeAccessSpecifierPublic
		bool                                                       bShowForGamepad;                                         // 0x0358(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowForMouseAndKeyboard;                                // 0x0359(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowForTouch;                                           // 0x035A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           VisibleType;                                             // 0x035B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           HiddenType;                                              // 0x035C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UD3K[0x3];                                   // 0x035D(0x0003) MISSED OFFSET (PADDING)

	public:
		TArray<class FName> STATIC_GetRegisteredPlatforms();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonVisualAttachment
	 * Size -> 0x0020 (FullSize[0x0198] - InheritedSize[0x0178])
	 */
	class UCommonVisualAttachment : public USizeBox
	{
	public:
		struct FVector2D                                           ContentAnchor;                                           // 0x0178(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4VG[0x10];                                  // 0x0188(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonWidgetCarousel
	 * Size -> 0x0048 (FullSize[0x0188] - InheritedSize[0x0140])
	 */
	class UCommonWidgetCarousel : public UPanelWidget
	{
	public:
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4UX[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCurrentPageIndexChanged;                               // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C572[0x30];                                  // 0x0158(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t Index);
		void SetActiveWidget(class UWidget* Widget);
		void PreviousPage();
		void NextPage();
		class UWidget* GetWidgetAtIndex(int32_t Index);
		int32_t GetActiveWidgetIndex();
		void EndAutoScrolling();
		void BeginAutoScrolling(float ScrollInterval);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonWidgetCarouselNavBar
	 * Size -> 0x0048 (FullSize[0x0170] - InheritedSize[0x0128])
	 */
	class UCommonWidgetCarouselNavBar : public UWidget
	{
	public:
		class UClass*                                              ButtonWidgetType;                                        // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ButtonPadding;                                           // 0x0130(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3CP[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonWidgetCarousel*                               LinkedCarousel;                                          // 0x0150(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonGroupBase*                              ButtonGroup;                                             // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCommonButtonBase*>                           Buttons;                                                 // 0x0160(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
		void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);
		void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
