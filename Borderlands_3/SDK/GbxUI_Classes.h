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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GbxUI.GbxGFxMovie
	 * Size -> 0x02C8 (FullSize[0x04D8] - InheritedSize[0x0210])
	 */
	class UGbxGFxMovie : public UGFxMoviePlayer
	{
	public:
		class USwfMovie*                                           MovieData;                                               // 0x0210(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGFxScaleMode                                              ScaleModeType;                                           // 0x0218(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGFxAlign                                                  AlignmentType;                                           // 0x0219(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnchorToViewport;                                       // 0x021A(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NH35[0x1];                                   // 0x021B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxGFxAnchor                                       AnchorData;                                              // 0x021C(0x0018) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8V1[0xC];                                   // 0x0234(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          AudioDataTable;                                          // 0x0240(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxGFxMovieClipAppendix                            GetChildAppendix;                                        // 0x0248(0x0060) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		EGbxGFxMovieGetChildStrategy                               GetChildStrategy;                                        // 0x02A8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GOP6[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxObject*                                       CachedStage;                                             // 0x02B0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxObject*                                       GbxRoot;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxObject*                                       GetChildRoot;                                            // 0x02C0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CachedGbxRootPosition;                                   // 0x02C8(0x0008) BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VI5H[0x18];                                  // 0x02D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsTransitioning;                                        // 0x02E8(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3IO[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TransitionTimeout;                                       // 0x02EC(0x0004) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9PU[0x140];                                 // 0x02F0(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGbxPlayerController*                                OwningGPC;                                               // 0x0430(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O81N[0x68];                                  // 0x0438(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxGFxObject*>                               Tickables;                                               // 0x04A0(0x0010) BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9SA[0x11];                                  // 0x04B0(0x0011) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bGbxMovieStarted;                                        // 0x04C1(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NGW[0x16];                                  // 0x04C2(0x0016) Fix size for supers

	public:
		bool TranslateWorldToLocal(const struct FVector& LocationWorldSpace, struct FVector2D* OutPositionLocal, bool bPlayerViewportRelative, bool bUseMovieDimensions);
		struct FVector2D TranslateToScreen(const struct FVector2D& Point);
		struct FVector2D TranslateScreenToLocal(const struct FVector2D& Point, bool bUseMovieDimensions);
		struct FBox2D TranslateRectToScreen(const struct FBox2D& Rect);
		void SpawnMovie(class AGbxPlayerController* NewGPCOwner, class UTextureRenderTarget2D* RenderTarget);
		class UGbxGFxMovie* STATIC_SpawnGbxGFxMovie(class AGbxPlayerController* GbxPlayerController, class UClass* MovieClass);
		void SetViewportToPlayerScreen(class AGbxPlayerController* pc);
		void SetOffsetDisplayTransform(const struct FTransform& Transform);
		void SetBaseDisplayTransform(const struct FTransform& Transform);
		void SetAudioEnabled(bool bEnabled);
		void SetAnchor(const struct FGbxGFxAnchor& Anchor);
		bool RunUIEventAudio(const class FName& EventName, const class FString& ProviderHistory);
		struct FVector2D GetViewportOffset();
		struct FVector2D GetViewportDimensions();
		struct FVector2D GetStageDimensions();
		class APawn* GetOwningPlayerPawn();
		class AGbxPlayerController* GetOwningPlayerController();
		struct FTransform GetOffsetDisplayTransform();
		struct FVector2D GetMovieDimensions();
		struct FTransform GetBaseDisplayTransform();
		void extTransitionComplete();
		void extAnimationFinished(const class FString& TargetName);
		void ApplyNewAudioSettings(class UDataTable* NewDataTable, EUIAudioSettingOperation MergeOperation);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMenu
	 * Size -> 0x01A8 (FullSize[0x0680] - InheritedSize[0x04D8])
	 */
	class UGbxGFxMenu : public UGbxGFxMovie
	{
	public:
		unsigned char                                              UnknownData_MVSL[0x8];                                   // 0x04D8(0x0008) Fix Super Size
		EGbxFocusableWidgetMouseBehavior                           DefaultMouseFocusBehavior;                               // 0x04E0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M37E[0x7];                                   // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxMenuData*                                     MenuData;                                                // 0x04E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ButtonFocusedAudioEventName;                             // 0x04F0(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ButtonClickedAudioEventName;                             // 0x0500(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SliderAudioEventName;                                    // 0x0510(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SpinnerAudioEventName;                                   // 0x0520(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NavigateBackAudioEventName;                              // 0x0530(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OpenMenuAudioEventName;                                  // 0x0540(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CloseMenuAudioEventName;                                 // 0x0548(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMenuTransitionOutCompleted;                            // 0x0550(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMenuInputChanged;                                      // 0x0560(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EGbxGFxListAlignment                                       HintBarAlignment;                                        // 0x0570(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCallMenuTickOnlyIfMenuIsStarted;                        // 0x0571(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMM5[0x2];                                   // 0x0572(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SplitscreenRootOffset;                                   // 0x0574(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxContextualMenu*                               OwnedContextualMenu;                                     // 0x0578(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxMenu*                                         ActiveDialog;                                            // 0x0580(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86LA[0x4];                                   // 0x0588(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AGbxPlayerController>                 PCOwner;                                                 // 0x058C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AGbxCharacter>                        PrimaryCharacterOwner;                                   // 0x0594(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UGbxMenuStack>                        MenuStackOwner;                                          // 0x059C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DrawPriority;                                            // 0x05A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxWidgetFocusManager*                              FocusManager;                                            // 0x05A8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxHintBar*                                         HintBar;                                                 // 0x05B0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxHintBarContainer*                             HintBarContainer;                                        // 0x05B8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxMouseBlocker*                                 MouseBlockerClip;                                        // 0x05C0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWantsDismiss;                                           // 0x05C8(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D6OW[0x3];                                   // 0x05C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UGbxGameInstance>                     GameInstanceRef;                                         // 0x05CC(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UGbxUIGlobals>                        UIGlobalsRef;                                            // 0x05D4(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ILDF[0x2];                                   // 0x05DC(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCachedLastInputFromMouse;                               // 0x05DE(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReceiveMouseEvenIfNotActive;                            // 0x05DF(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsInitedFromStash;                                      // 0x05E0(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bMouseHitsAllowedYet;                                    // 0x05E1(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGotFirstMouseMove;                                      // 0x05E2(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ICYH[0xD];                                   // 0x05E3(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxObject*                                       MenuContentClip;                                         // 0x05F0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       MenuLayoutsClip;                                         // 0x05F8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       MenuLayoutClip;                                          // 0x0600(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsSplitScreenLayout;                                    // 0x0608(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ENYC[0x17];                                  // 0x0609(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBlockPauseMenu;                                         // 0x0620(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bGFxMenuWasStarted;                                      // 0x0621(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5UGL[0x6];                                   // 0x0622(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxButton*                                       LastFocusedButton;                                       // 0x0628(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8Q9R[0x50];                                  // 0x0630(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetWidgetAdjacency(const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
		void SetFocusedWidget(bool bFromMouse);
		void SetFocusableWidgetAdjancency(class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
		void RegisterFocusableWidgetWithAdjacency(class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
		void RegisterFocusableWidget(const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
		void MenuStack_Clear();
		bool IsWidgetFocused(class UObject* WidgetInQuestion);
		class UObject* GetFocusedWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxHUDWidget
	 * Size -> 0x0158 (FullSize[0x0630] - InheritedSize[0x04D8])
	 */
	class UGbxGFxHUDWidget : public UGbxGFxMovie
	{
	public:
		unsigned char                                              UnknownData_5SHW[0x8];                                   // 0x04D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_72MM[0x60];                                  // 0x04E0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGFxHUDWidgetAnchorType                                    AnchorType;                                              // 0x0540(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1C7V[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LayoutInstanceStringOverride;                            // 0x0548(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AnchorBoneName;                                          // 0x0558(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxContextSensitivePromptTime;                           // 0x0560(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeUntilStopAdvancing;                               // 0x0564(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CR9A[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ShowFrameName;                                           // 0x0570(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              HideFrameName;                                           // 0x0580(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              OnFrameName;                                             // 0x0590(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              OffFrameName;                                            // 0x05A0(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxHintWidget*                                   ContextSensitivePrompt;                                  // 0x05B0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              InstanceString;                                          // 0x05B8(0x0010) BlueprintReadOnly, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AGbxHUD>                              OwningHUD;                                               // 0x05C8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UGbxGFxHUDContainer>                  OwningHUDContainer;                                      // 0x05D0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AGbxPlayerController>                 OwningPC;                                                // 0x05D8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class APawn>                                OwningPawn;                                              // 0x05E0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       IconTransitionWrapper;                                   // 0x05E8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       InitializationClip;                                      // 0x05F0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UER2[0x14];                                  // 0x05F8(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UGameInstance>                        GameInstanceRef;                                         // 0x060C(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxUIGlobals>                        UIGlobalsRef;                                            // 0x0614(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L9M2[0x8];                                   // 0x061C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bDynamicallyLoaded : 1;                                  // 0x0624(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_50WZ[0xB];                                   // 0x0625(0x000B) MISSED OFFSET (PADDING)

	public:
		void extInitAnimationFinished();
		void extHideAnimationFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxUserWidget
	 * Size -> 0x00B0 (FullSize[0x02B8] - InheritedSize[0x0208])
	 */
	class UGbxUserWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_ZQC1[0x10];                                  // 0x0208(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          LabelTextBlock;                                          // 0x0218(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          ValueTextBlock;                                          // 0x0220(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              SelectedImage;                                           // 0x0228(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRegisterAsFocusableWidget;                              // 0x0230(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxFocusableWidgetMouseBehavior                           MouseFocusBehavior;                                      // 0x0231(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPLR[0x6];                                   // 0x0232(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxFocusableWidgetStyleData*                        FocusableWidgetStyleData;                                // 0x0238(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OnFocusedAudioEventName;                                 // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OnClickedAudioEventName;                                 // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeverCreateMouseFocusButton;                            // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCL2[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBUTTON*                                             MouseFocusButton;                                        // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnWidgetClicked;                                         // 0x0260(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnWidgetFocused;                                         // 0x0270(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavUp;                                    // 0x0280(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavDown;                                  // 0x0288(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavLeft;                                  // 0x0290(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavRight;                                 // 0x0298(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFocusOnMenuCreation;                                    // 0x02A0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OU3F[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UGbxUmgMenu>                          MenuThatOwnsFocus;                                       // 0x02A4(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBQ6[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          AudioDataTable;                                          // 0x02B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetLabelText(const class FText& LabelText);
		void OnFocusableWidgetUnhovered();
		void OnFocusableWidgetReleased();
		void OnFocusableWidgetPressed();
		void OnFocusableWidgetHovered();
		void OnFocusableWidgetClicked();
		bool IsRegisteredAsFocusableWidget();
		bool STATIC_IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State);
		bool STATIC_IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State);
		void HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus);
		void GotoAndStop(const struct FFrameTime& StopTime, class UWidgetAnimation* InAnimation);
		void GetAllChildWidgetsOfClass(class UClass* TargetClass, TArray<class UWidget*>* OutputArray);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxUmgMenu
	 * Size -> 0x0038 (FullSize[0x02F0] - InheritedSize[0x02B8])
	 */
	class UGbxUmgMenu : public UGbxUserWidget
	{
	public:
		unsigned char                                              UnknownData_3I4N[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxUmgMenuData*                                     MenuData;                                                // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGbxPlayerController*                                PCOwner;                                                 // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxMenuStack*                                       MenuStackOwner;                                          // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxWidgetFocusManager*                              FocusManager;                                            // 0x02D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxHintBar*                                         HintBar;                                                 // 0x02E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8F3[0x5];                                   // 0x02E8(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGbxFocusableWidgetMouseBehavior                           DefaultMouseFocusBehavior;                               // 0x02ED(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9U1[0x2];                                   // 0x02EE(0x0002) MISSED OFFSET (PADDING)

	public:
		void SetWidgetAdjacency(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
		void SetSlateFocusedWidget(class UWidget* Widget);
		void SetHintBarContainer();
		void SetFocusedWidget(class UObject* Widget, bool bFromMouse);
		void SetFocusableWidgetAdjancency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
		void RegisterStagePlacedHint(const class FName& InInputAction);
		void RegisterFocusableWidgetWithAdjacency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
		void RegisterFocusableWidget(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
		void PopulateHintBar();
		void NavigateBack();
		class UObject* MenuStack_SwitchTo(class UGbxMenuData* MenuDataIn);
		class UObject* MenuStack_Push(class UGbxMenuData* MenuDataIn);
		class UObject* MenuStack_PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuDataIn);
		void MenuStack_PopTo(class UObject* Menu);
		void MenuStack_Pop();
		void MenuStack_Clear();
		bool IsWidgetFocused(class UObject* WidgetInQuestion);
		bool IsActiveMenuOnStack();
		void HandleMenuInputDeviceChanged(EGbxMenuInputDevice NewInputDevice);
		void HandleMenuInputAction(const class FName& InputAction, int32_t ControllerId);
		void HandleMenuInit();
		void HandleMenuDeinit();
		void HandleMenuDeactivate();
		void HandleMenuAspectRatioChanged(float NewAspectRatio);
		void HandleMenuActivate();
		class UGbxListItemFactory* GetListItemFactory();
		class UObject* GetFocusedWidget();
		EGbxMenuInputDevice GetCurrentInputDevice();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenuSwitcherSubmenu
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UGbxMenuSwitcherSubmenu : public UGbxUmgMenu
	{
	public:
		TWeakObjectPtr<class UGbxMenuSwitcher>                     OwnerMenuSwitcher;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxDebugMenuSubmenu
	 * Size -> 0x0000 (FullSize[0x02F8] - InheritedSize[0x02F8])
	 */
	class UGbxDebugMenuSubmenu : public UGbxMenuSwitcherSubmenu
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenuData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UGbxMenuData : public UGbxDataAsset
	{
	public:
		bool                                                       bHideMenusBeneath;                                       // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowsMouse;                                             // 0x0031(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxMenuInputMode                                          InputMode;                                               // 0x0032(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxMenuParentType                                         ParentType;                                              // 0x0033(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAttemptPop;                                         // 0x0034(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMenuStashing;                                        // 0x0035(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivateIfPoppedTo;                                     // 0x0036(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99S9[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogEvent*                                        IdleDialogEvent;                                         // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogParameter*                                    IdleDialogTargetParamater;                               // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMenuData
	 * Size -> 0x0078 (FullSize[0x00C0] - InheritedSize[0x0048])
	 */
	class UGbxGFxMenuData : public UGbxMenuData
	{
	public:
		unsigned char                                              MovieClass[0x28];                                        // 0x0048(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxUI.GbxGFxMenuData.MovieClass
		class FString                                              TransitionMovieClipTarget;                               // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransitionOutAnimation;                                  // 0x0080(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransitionOutTimeout;                                    // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWCA[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxHUDStateData*                                    OverrideHUDState;                                        // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONT9[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GFxMenuDrawPriorityBoost;                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0R2[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     CreatedMenus;                                            // 0x00B0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxObject
	 * Size -> 0x0138 (FullSize[0x0170] - InheritedSize[0x0038])
	 */
	class UGbxGFxObject : public UGFxObject
	{
	public:
		class UGbxGFxMovie*                                        OwningMovie;                                             // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TX6[0x130];                                 // 0x0040(0x0130) MISSED OFFSET (PADDING)

	public:
		void SetOffsetDisplayTransform(const struct FTransform& Transform);
		void SetBaseDisplayTransform(const struct FTransform& Transform);
		void RotateAboutPoint(float Degrees, const struct FVector2D& Point);
		struct FTransform GetOffsetDisplayTransform();
		struct FTransform GetBaseDisplayTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxButton
	 * Size -> 0x0158 (FullSize[0x02C8] - InheritedSize[0x0170])
	 */
	class UGbxGFxButton : public UGbxGFxObject
	{
	public:
		unsigned char                                              UnknownData_FDO0[0x28];                                  // 0x0170(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGbxFocusableWidgetMouseBehavior                           MouseFocusBehavior;                                      // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ONP[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OnFocusedAudioEventName;                                 // 0x01A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OnClickedAudioEventName;                                 // 0x01A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnClicked;                                               // 0x01B0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnSecondaryClicked;                                      // 0x01C0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnFocused;                                               // 0x01D0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnUnfocused;                                             // 0x01E0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnPressed;                                               // 0x01F0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnReleased;                                              // 0x0200(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnHovered;                                               // 0x0210(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnUnhovered;                                             // 0x0220(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnHeld;                                                  // 0x0230(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UGbxGFxMenu>                          OwningMenu;                                              // 0x0240(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxTextField*                                       Label;                                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R6L[0x18];                                  // 0x0250(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxObject*                                       AppearanceFrameClip;                                     // 0x0268(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeButtonHeld;                                          // 0x0270(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasSentHeldEvent;                                       // 0x0274(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWantsHeld;                                              // 0x0275(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreNextClick;                                        // 0x0276(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNewIndicatorUsesLabels;                                 // 0x0277(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F9QI[0x50];                                  // 0x0278(0x0050) Fix size for supers

	public:
		void SetLockedState(EGbxGFxButtonLockedState InLockedState, bool bShouldRefresh);
		void SetLabelText(const class FText& Text, bool bForceUpdate);
		void SetCheckedState(EGbxGFxButtonCheckedState InCheckedState, bool bShouldRefresh);
		void SetButtonType(EGbxGFxButtonType InButtonType);
		void RefreshView(EGbxFocusableWidgetState PrevState);
		void K2_HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus);
		bool IsRegisteredAsFocusableWidget();
		bool IsLocked();
		bool STATIC_IsFocusableWidgetStateUp(EGbxFocusableWidgetState State);
		bool STATIC_IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State);
		bool STATIC_IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State);
		bool STATIC_IsFocusableWidgetStateDown(EGbxFocusableWidgetState State);
		bool STATIC_IsFocusableWidgetStateDisabled(EGbxFocusableWidgetState State);
		bool IsChecked();
		EGbxGFxButtonLockedState GetLockedState();
		EGbxGFxButtonCheckedState GetCheckedState();
		EGbxGFxButtonType GetButtonType();
		void GbxGFxButtonEvent__DelegateSignature(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxListCell
	 * Size -> 0x0040 (FullSize[0x0308] - InheritedSize[0x02C8])
	 */
	class UGbxGFxListCell : public UGbxGFxButton
	{
	public:
		class UGbxGFxGridScrollingList*                            OwningList;                                              // 0x02C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       CellBounds;                                              // 0x02D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ListIndex;                                               // 0x02D8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           PositionInContainer;                                     // 0x02DC(0x0008) Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TopOffsetPosition;                                       // 0x02E4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BottomOffsetPosition;                                    // 0x02E8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeftOffsetPosition;                                      // 0x02EC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RightOffsetPosition;                                     // 0x02F0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsReadjustingFocus;                                     // 0x02F4(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5Z6J[0x13];                                  // 0x02F5(0x0013) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxListCellWithData
	 * Size -> 0x0010 (FullSize[0x0318] - InheritedSize[0x0308])
	 */
	class UGbxGFxListCellWithData : public UGbxGFxListCell
	{
	public:
		class FName                                                TextID;                                                  // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataAsset*                                          DataAsset;                                               // 0x0310(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxListItemSpinner
	 * Size -> 0x0048 (FullSize[0x0360] - InheritedSize[0x0318])
	 */
	class UGbxGFxListItemSpinner : public UGbxGFxListCellWithData
	{
	public:
		unsigned char                                              UnknownData_N8C4[0x8];                                   // 0x0318(0x0008) Fix Super Size
		class UGbxSpinner*                                         SpinnerItem;                                             // 0x0320(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YGBQ[0x38];                                  // 0x0328(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnSpinnerValueUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMenuSwitcherSubmenu
	 * Size -> 0x0008 (FullSize[0x0688] - InheritedSize[0x0680])
	 */
	class UGbxGFxMenuSwitcherSubmenu : public UGbxGFxMenu
	{
	public:
		TWeakObjectPtr<class UGbxGFxMenuSwitcher>                  OwnerMenuSwitcher;                                       // 0x0680(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMenuSwitcher
	 * Size -> 0x0020 (FullSize[0x06A0] - InheritedSize[0x0680])
	 */
	class UGbxGFxMenuSwitcher : public UGbxGFxMenu
	{
	public:
		TWeakObjectPtr<class UGbxGFxMenuSwitcherSubmenu>           CurrentSubmenu;                                          // 0x0680(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                CurrentSubmenuId;                                        // 0x0688(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PreviousSubmenuId;                                       // 0x0690(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumSubMenus;                                             // 0x0698(0x0004) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DYM1[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMovieLoader
	 * Size -> 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
	 */
	class UGbxGFxMovieLoader : public UGbxGFxObject
	{
	public:
		class FScriptMulticastDelegate                             OnMovieLoadCompleteDelegate;                             // 0x0170(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class UGbxGFxObject*                                       LoadedMovie;                                             // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USwfMovie*                                           QueuedLoadMovie;                                         // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USwfMovie*                                           CurrentMovie;                                            // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxProgressBar
	 * Size -> 0x01A8 (FullSize[0x0318] - InheritedSize[0x0170])
	 */
	class UGbxGFxProgressBar : public UGbxGFxObject
	{
	public:
		unsigned char                                              UnknownData_61ZT[0x8];                                   // 0x0170(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Percent;                                                 // 0x0178(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFillFrames;                                           // 0x017C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumDeltaBarFrames;                                       // 0x0180(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBackgroundBarFrames;                                  // 0x0184(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxProgressBarInterpolator                         DefaultInterpolator;                                     // 0x0188(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGbxProgressBarRange>                        Ranges;                                                  // 0x01B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              EdgeFlashID;                                             // 0x01C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EdgeFlashInnerID;                                        // 0x01D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FillBarId;                                               // 0x01E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeltaBarId;                                              // 0x01F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BackgroundBarId;                                         // 0x0200(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentValueLabelId;                                     // 0x0210(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MaxValueLabelId;                                         // 0x0220(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCP6[0x88];                                  // 0x0230(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnInterpolationComplete;                                 // 0x02B8(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnEnterRange;                                            // 0x02C8(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxProgressBarInterpolator                         Interpolator;                                            // 0x02D8(0x0028) Transient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_30ZF[0x18];                                  // 0x0300(0x0018) Fix size for supers

	public:
		void SetPercent(float InPercent);
		void SetMaxValueText(const class FText& Text);
		void SetFillColorAndOpacity(const struct FLinearColor& InColor);
		void SetCurrentValueText(const class FText& Text);
		bool STATIC_PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
		void InterpolateToPercentWithInterpolator(float InPercent, const struct FGbxProgressBarInterpolator& Interpolator);
		void InterpolateToPercent(float InPercent);
		void HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const struct FGbxProgressBarInterpolator& ActiveInterpolator);
		void HandleEnterPercentRange(const class FName& RangeName);
		float GetPercent();
		bool STATIC_EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxGridScrollingList
	 * Size -> 0x01B0 (FullSize[0x0320] - InheritedSize[0x0170])
	 */
	class UGbxGFxGridScrollingList : public UGbxGFxObject
	{
	public:
		unsigned char                                              UnknownData_PDWW[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SelectionChangedDelegate;                                // 0x0180(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ItemPressedDelegate;                                     // 0x0190(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CNL[0x8];                                   // 0x01A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ItemClickedDelegate;                                     // 0x01A8(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ItemSecondaryClickedDelegate;                            // 0x01B8(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E6ZX[0x18];                                  // 0x01C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxGFxListConfig                                   Config;                                                  // 0x01E0(0x0090) Transient, NativeAccessSpecifierPublic
		int32_t                                                    SelectedIndex;                                           // 0x0270(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedIndexWhenFocusWasLost;                           // 0x0274(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGbxScrollingListCellInfo>                   AllCells;                                                // 0x0278(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FGbxScrollingListCellInfo>                   UnusedCellPool;                                          // 0x0288(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class UGbxGFxObject*                                       GridArea;                                                // 0x0298(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxObject*                                       GridMask;                                                // 0x02A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PositionOfFirstItem;                                     // 0x02A8(0x0008) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NextUniqueId;                                            // 0x02B0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewWindowSize;                                          // 0x02B4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxUIScroller                                      UiScroller;                                              // 0x02B8(0x0034) Transient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsContentDirty;                                         // 0x02EC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFK5[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           AverageItemDims;                                         // 0x02F0(0x0008) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxSlider*                                       ScrollBar;                                               // 0x02F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScrollbarIsChildOfThis;                                 // 0x0300(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OMZG[0x1F];                                  // 0x0301(0x001F) MISSED OFFSET (PADDING)

	public:
		void OnScrollBarPositionUpdated(float SliderPercentage);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxPooledGridList
	 * Size -> 0x0098 (FullSize[0x03B8] - InheritedSize[0x0320])
	 */
	class UGbxGFxPooledGridList : public UGbxGFxGridScrollingList
	{
	public:
		class FScriptDelegate                                      CellChangedDelegate;                                     // 0x0320(0x0010) ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      CellFocusedDelegate;                                     // 0x0330(0x0010) ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      CellClickedDelegate;                                     // 0x0340(0x0010) ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxGFxPooledGridListConfig                         PooledConfig;                                            // 0x0350(0x0030) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      HelperDataDirDim;                                        // 0x0380(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    HelperDataItemsInDir;                                    // 0x0384(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    HelperDataItemsPerDir;                                   // 0x0388(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    HelperDataFirstItemIndex;                                // 0x038C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    HelperDataNumVisibleItems;                               // 0x0390(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HelperDataScrollOffset;                                  // 0x0394(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FGbxGFxPooledGridPoolInfo>                   MasterCellPool;                                          // 0x0398(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F6BY[0x10];                                  // 0x03A8(0x0010) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxRadioButtonList
	 * Size -> 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
	 */
	class UGbxGFxRadioButtonList : public UGbxGFxGridScrollingList
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxListItemNumber
	 * Size -> 0x0088 (FullSize[0x03A0] - InheritedSize[0x0318])
	 */
	class UGbxGFxListItemNumber : public UGbxGFxListCellWithData
	{
	public:
		unsigned char                                              UnknownData_GWW5[0x4];                                   // 0x0318(0x0004) Fix Super Size
		int32_t                                                    SliderMaxIncreases;                                      // 0x031C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SliderFastestSteps;                                      // 0x0320(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZW5S[0x1C];                                  // 0x0324(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxSlider*                                       SliderItem;                                              // 0x0340(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       ValueItem;                                               // 0x0348(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IFP8[0x50];                                  // 0x0350(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnSliderUpdated(float SliderPct);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxEditableTextField
	 * Size -> 0x0110 (FullSize[0x0418] - InheritedSize[0x0308])
	 */
	class UGbxGFxEditableTextField : public UGbxGFxListCell
	{
	public:
		unsigned char                                              UnknownData_H0EO[0x8];                                   // 0x0308(0x0008) Fix Super Size
		bool                                                       bConfirmOnFocusOut;                                      // 0x0310(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOWK[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EditText;                                                // 0x0318(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMultiline;                                              // 0x0328(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGFxVirtualKeyboardType                                    KeyboardType;                                            // 0x0329(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLoseFocusOnConfirm;                                     // 0x032A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5187[0xBD];                                  // 0x032B(0x00BD) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OnTextSubmittedAudioEventName;                           // 0x03E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                OnTextEditAbortedAudioEventName;                         // 0x03F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                OnTextInputAudioEventName;                               // 0x03F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_65V7[0x18];                                  // 0x0400(0x0018) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxGridScrollingListPaged
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class UGbxGFxGridScrollingListPaged : public UGbxGFxGridScrollingList
	{
	public:
		unsigned char                                              UnknownData_ZYRX[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMenuSwitcherMenuData
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UGbxGFxMenuSwitcherMenuData : public UGbxGFxMenuData
	{
	public:
		TArray<struct FGbxGFxMenuSwitcherSubmenuInfo>              CurrentSubmenus;                                         // 0x00C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FGbxGFxMenuSwitcherSubmenuInfo>              Submenus;                                                // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxHUDContainer
	 * Size -> 0x0028 (FullSize[0x02E0] - InheritedSize[0x02B8])
	 */
	class UGbxHUDContainer : public UGbxUserWidget
	{
	public:
		class UCanvasPanel*                                        RootPanel;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGbxPlayerController*                                OwningPlayerController;                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGbxHUD*                                             OwningHUD;                                               // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProjectedContainerZOrder;                                // 0x02D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOXF[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvasPanel*                                        DebugPanel;                                              // 0x02D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void HandleInit();
		void HandleDeinit();
		void HandleDeactivate();
		void HandleActivate();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxHUDWidget
	 * Size -> 0x0058 (FullSize[0x0310] - InheritedSize[0x02B8])
	 */
	class UGbxHUDWidget : public UGbxUserWidget
	{
	public:
		struct FGeometry                                           CachedGeometry;                                          // 0x02B8(0x0038) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UGbxHUDContainer*                                    OwningHUDContainer;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGbxHUD*                                             OwningHUD;                                               // 0x02F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGbxPlayerController*                                OwningPlayerController;                                  // 0x0300(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZCT[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		void HandleInit();
		void HandleDeinit();
		void HandleDeactivate();
		void HandleActivate();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxListItem
	 * Size -> 0x0030 (FullSize[0x02E8] - InheritedSize[0x02B8])
	 */
	class UGbxListItem : public UGbxUserWidget
	{
	public:
		class FScriptDelegate                                      OnListItemValueChanged;                                  // 0x02B8(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              ListOwner[0x10];                                         // 0x02C8(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxUI.GbxListItem.ListOwner
		class FName                                                ChangedAudioEventName;                                   // 0x02D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTLF[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (PADDING)

	public:
		int32_t GetItemIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxListItemText
	 * Size -> 0x0000 (FullSize[0x02E8] - InheritedSize[0x02E8])
	 */
	class UGbxListItemText : public UGbxListItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxHUDContainer
	 * Size -> 0x00E8 (FullSize[0x05C0] - InheritedSize[0x04D8])
	 */
	class UGbxGFxHUDContainer : public UGbxGFxMovie
	{
	public:
		unsigned char                                              UnknownData_04QO[0x8];                                   // 0x04D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_8SD2[0x30];                                  // 0x04E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxGFxHUDWidget*>                            Widgets;                                                 // 0x0510(0x0010) BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UGbxHUDData*                                         HUDData;                                                 // 0x0520(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxHUDFeedbackManager                              FeedbackManager;                                         // 0x0528(0x0068) BlueprintReadOnly, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TASA[0x8];                                   // 0x0590(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AGbxPlayerController>                 OwningPC;                                                // 0x0598(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AGbxHUD>                              OwningHUD;                                               // 0x05A0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class APawn>                                OwningPawn;                                              // 0x05A8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bViewportNeedsRefresh;                                   // 0x05B0(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bFinishedInitializing;                                   // 0x05B1(0x0001) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SZBV[0xE];                                   // 0x05B2(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxHUD
	 * Size -> 0x00B0 (FullSize[0x0628] - InheritedSize[0x0578])
	 */
	class AGbxHUD : public AHUD
	{
	public:
		unsigned char                                              UnknownData_D5II[0x18];                                  // 0x0578(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxHUDStateManager                                 HudStateManager;                                         // 0x0590(0x0040) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bDisplayScaleformHUD;                                    // 0x05D0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZCY[0x7];                                   // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               ChangedFromPawn;                                         // 0x05D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QH4G[0x8];                                   // 0x05E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxHUDContainer*                                 GFxHUDContainer;                                         // 0x05E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxHUDData*                                         OverrideContainerDefinition;                             // 0x05F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10NL[0x10];                                  // 0x05F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGbxMenuInputDevice                                        CurrentInputDevice;                                      // 0x0608(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_84N1[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AGbxPlayerController>                 OwningPC;                                                // 0x060C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AGbxCharacter>                        OwningPrimaryCharacter;                                  // 0x0614(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class APawn>                                OwningPawn;                                              // 0x061C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VAA3[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (PADDING)

	public:
		void STATIC_SwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
		void STATIC_SetHUDContainer(class AGbxPlayerController* PlayerController, class UGbxHUDData* ContainerDefinition);
		void STATIC_PushHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State, bool bAllowDuplicatePush);
		void STATIC_PopToSwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* PopToState, class UGbxHUDStateData* SwitchToState);
		void STATIC_PopToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
		void STATIC_PopSpecifiedHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
		void STATIC_PopHUDState(class AGbxPlayerController* PlayerController);
		void OnPrimaryCharacterChanged(class AGbxCharacter* Character);
		void OnPawnChanged(class APawn* Pawn, class APawn* OldPawn);
		void STATIC_GotoPreviousHUDState(class AGbxPlayerController* PlayerController);
		void STATIC_GotoHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
		class UGbxHUDStateData* STATIC_GetCurrentHUDState(class AGbxPlayerController* PlayerController);
		void STATIC_ClearToDefaultHUDState(class AGbxPlayerController* PlayerController);
		void STATIC_ClearHUDStates(class AGbxPlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxUILibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxUILibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SendTextToDebugHUD(class UObject* WorldContextObject, const class FText& Text, const struct FLinearColor& Color, int32_t TextSize, float Duration);
		class UGbxFullScreenMovie* STATIC_PlayFullScreenMovie(class AGbxPlayerController* GbxPC, class UMediaSource* MediaSource, bool bPlayOnceAndDestroy);
		class UGbxListItemText* STATIC_CreateTextListItemWithDelegates(class APlayerController* OwningPlayer, const class FText& LabelText, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItemText* STATIC_CreateTextListItem(class APlayerController* OwningPlayer, const class FText& LabelText);
		class UGbxListItemNumber* STATIC_CreateNumberListItemWithDelegates(class APlayerController* OwningPlayer, const class FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItemNumber* STATIC_CreateNumberListItem(class APlayerController* OwningPlayer, const class FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep);
		class UGbxListItem* STATIC_CreateListItemWithDelegates(class APlayerController* OwningPlayer, class UClass* ItemClass, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItem* STATIC_CreateListItem(class APlayerController* OwningPlayer, class UClass* ItemClass);
		class UGbxListItem* STATIC_CreateDefaultListItemWithDelegates(class APlayerController* OwningPlayer, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItem* STATIC_CreateDefaultListItem(class APlayerController* OwningPlayer);
		class UGbxListItemComboBox* STATIC_CreateComboBoxListItemWithDelegates(class APlayerController* OwningPlayer, const class FText& LabelText, TArray<class FText> Items, int32_t InitialIndex, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItemComboBox* STATIC_CreateComboBoxListItem(class APlayerController* OwningPlayer, const class FText& LabelText, TArray<class FText> Items, int32_t InitialIndex);
		class UGbxListItemBoolean* STATIC_CreateBooleanListItemWithDelegates(class APlayerController* OwningPlayer, const class FText& LabelText, bool InitialValue, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItemBoolean* STATIC_CreateBooleanListItem(class APlayerController* OwningPlayer, const class FText& LabelText, bool InitialValue);
		class FString STATIC_AbbreviateNumberText(float ValueToFormat);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxUIGlobals
	 * Size -> 0x0258 (FullSize[0x0288] - InheritedSize[0x0030])
	 */
	class UGbxUIGlobals : public UGbxDataAsset
	{
	public:
		class UGbxInputToGlyphMap*                                 InputToGlyphMap;                                         // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxPlatformToGlyphMap*                              PlatformToGlyphMap;                                      // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultPlatformGlyphHeight;                              // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23EB[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxDialogBoxData*                                   DialogBoxTemplates;                                      // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxListItemFactory*                                 DefaultListItemFactory;                                  // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FullScreenMovieWidget;                                   // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaPlayer*                                        FullScreenMediaPlayer;                                   // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxHUDData*>                                 PersistentWidgetGroups;                                  // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     MaxWidgetLoadTimePerFrameInMs;                           // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxContextualMenuData*                           GFxContextualMenuTemplate;                               // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MarkupStartCharacter;                                    // 0x0088(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MarkupEndCharacter;                                      // 0x0098(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FTextMarkupDictionaryEntry>     MarkupDictionary;                                        // 0x00A8(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           DefaultGlyphSize;                                        // 0x00F8(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GlyphMarkupStartCharacter;                               // 0x0100(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GlyphMarkupEndCharacter;                                 // 0x0110(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FText>                             ClosedCaptioningTable;                                   // 0x0120(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UGbxMenuData*>                                AlwaysLoadedGFxMenus;                                    // 0x0170(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              AlwaysLoadedGFxMovies[0x10];                             // 0x0180(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxUI.GbxUIGlobals.AlwaysLoadedGFxMovies
		int32_t                                                    HintGlyphVSpace;                                         // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFKI[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SplitscreenLayouts[0x50];                                // 0x0198(0x0050) UNKNOWN PROPERTY: MapProperty GbxUI.GbxUIGlobals.SplitscreenLayouts
		unsigned char                                              DLCSplitscreenLayouts[0x50];                             // 0x01E8(0x0050) UNKNOWN PROPERTY: MapProperty GbxUI.GbxUIGlobals.DLCSplitscreenLayouts
		TMap<struct FSoftObjectPath, struct FGbxDLCMenuSplitscreenLayouts> SoftDLCSpltiscreenLayouts;                               // 0x0238(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxUmgMenuData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UGbxUmgMenuData : public UGbxMenuData
	{
	public:
		class UClass*                                              MenuClass;                                               // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxListItemFactory*                                 ListItemFactory;                                         // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxCascadingList
	 * Size -> 0x0060 (FullSize[0x0318] - InheritedSize[0x02B8])
	 */
	class UGbxCascadingList : public UGbxUserWidget
	{
	public:
		class UClass*                                              DefaultListItemClass;                                    // 0x02B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxGridListWidget*>                          ListViews;                                               // 0x02C0(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnItemSelected;                                          // 0x02D0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnItemClicked;                                           // 0x02E0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnItemCreated;                                           // 0x02F0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class UGbxGridListWidget*                                  ActiveList;                                              // 0x0300(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGbxCascadingListItemData>                   NavigationStack;                                         // 0x0308(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void SetActiveList(class UGbxGridListWidget* List);
		void PushItems(TArray<struct FGbxCascadingListItemData> Items);
		void Pop();
		void OnShiftListsForward();
		void OnShiftListsBack();
		void OnItemSelected_Internal(class UGbxListItem* Item);
		void OnItemClicked_Internal(class UGbxListItem* Item);
		bool HasItems();
		int32_t GetStackDepth();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxComboBoxDropdownMenu
	 * Size -> 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
	 */
	class UGbxComboBoxDropdownMenu : public UGbxUmgMenu
	{
	public:
		TArray<struct FGbxComboBoxItemInfo>                        ChoiceListArray;                                         // 0x02F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UWidget*                                             ChoiceListContainer;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGridListWidget*                                  ChoiceList;                                              // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UGbxComboBox>                         ComboBoxOwner;                                           // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnChoiceClicked(class UGbxListItem* ListItem);
		void DismissWithoutChanging();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxComboBox
	 * Size -> 0x0070 (FullSize[0x0358] - InheritedSize[0x02E8])
	 */
	class UGbxComboBox : public UGbxListItem
	{
	public:
		class UClass*                                              DropdownMenuClass;                                       // 0x02E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DropdownMenuOffset;                                      // 0x02F0(0x0008) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnComboChoiceChanged;                                    // 0x02F8(0x0010) BlueprintVisible, ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGbxComboBoxItemInfo>                        ChoiceListArray;                                         // 0x0308(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		int32_t                                                    CurrentChoiceReferenceIndex;                             // 0x0318(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGeometry                                           LastKnownGeometry;                                       // 0x031C(0x0038) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O6OO[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnComboBoxClicked(class UGbxUserWidget* Widget, const struct FGbxMenuInputEvent& InputInfo);
		int32_t GetCurentChoiceReferenceIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxCoreDialogBoxHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxCoreDialogBoxHelpers : public UBlueprintFunctionLibrary
	{
	public:
		class UGbxDialogBox* STATIC_ShowYesNoDialog(class AGbxPlayerController* pc, const class FText& HeaderText, const class FText& MessageText, bool bAnyUserCanInteract);
		class UGbxDialogBox* STATIC_ShowOkayDialog(class AGbxPlayerController* pc, const class FText& HeaderText, const class FText& MessageText, bool bAnyUserCanInteract, EGbxDialogBoxHelpersDialogTemplate Template);
		class UGbxDialogBox* STATIC_ShowDialog(class AGbxPlayerController* pc, const struct FGbxDialogBoxInfo& DialogBoxInfo);
		class UGbxDialogBox* STATIC_ShowConfirmCancelDialog(class AGbxPlayerController* pc, const class FText& HeaderText, const class FText& MessageText, bool bAnyUserCanInteract);
		class UGbxDialogBox* STATIC_ShowBlockingDialog(class AGbxPlayerController* pc, const class FText& HeaderText, const class FText& MessageText, bool bBlocksAllUsers);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxCrosshairDataAsset
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UGbxCrosshairDataAsset : public UGbxDataAsset
	{
	public:
		class FString                                              CrosshairFrameName;                                      // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CrosshairActorClass;                                     // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideMinSpreadReticle;                                   // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideAccuracyReticle;                                    // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChargeClipState                                           ChargeClipState;                                         // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J36F[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenuSwitcherMenuData
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UGbxMenuSwitcherMenuData : public UGbxUmgMenuData
	{
	public:
		TArray<struct FGbxMenuSwitcherSubmenuInfo>                 Submenus;                                                // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxDebugMenuData
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UGbxDebugMenuData : public UGbxMenuSwitcherMenuData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenuSwitcher
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class UGbxMenuSwitcher : public UGbxUmgMenu
	{
	public:
		unsigned char                                              UnknownData_ZG1T[0x18];                                  // 0x02F0(0x0018) MISSED OFFSET (PADDING)

	public:
		void SwitchToPage(const class FName& SubMenuId);
		void PrevPage();
		void NextPage();
		class FName GetCurrentSubmenuId();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxDebugMenu
	 * Size -> 0x0028 (FullSize[0x0330] - InheritedSize[0x0308])
	 */
	class UGbxDebugMenu : public UGbxMenuSwitcher
	{
	public:
		class UGbxGridListWidget*                                  CategoryList;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBUTTON*                                             CloseButton;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPanelWidget*                                        SubmenuContainer;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        HiddenSubmenus;                                          // 0x0320(0x0010) ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate

	public:
		void OnCloseClicked();
		void OnCategorySelected(class UGbxUserWidget* Widget, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxDebugRumbleMenu
	 * Size -> 0x0040 (FullSize[0x0338] - InheritedSize[0x02F8])
	 */
	class UGbxDebugRumbleMenu : public UGbxDebugMenuSubmenu
	{
	public:
		float                                                      SliderStepSize;                                          // 0x02F8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AF6Q[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxScrollBoxList*                                   ContentPanel;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxListItemNumber*                                  LeftLargeSlider;                                         // 0x0308(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxListItemNumber*                                  LeftSmallSlider;                                         // 0x0310(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxListItemNumber*                                  RightLargeSlider;                                        // 0x0318(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxListItemNumber*                                  RightSmallSlider;                                        // 0x0320(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RIDP[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnSliderValueChanged(class UGbxListItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxDialogBoxData
	 * Size -> 0x0070 (FullSize[0x00C8] - InheritedSize[0x0058])
	 */
	class UGbxDialogBoxData : public UGbxUmgMenuData
	{
	public:
		struct FGbxDialogBoxInfo                                   DialogInfo;                                              // 0x0058(0x0060) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FGbxDialogBoxTemplateMapItem>                Templates;                                               // 0x00B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxDialogBox
	 * Size -> 0x00E0 (FullSize[0x03D0] - InheritedSize[0x02F0])
	 */
	class UGbxDialogBox : public UGbxUmgMenu
	{
	public:
		bool                                                       bWantsToDismiss;                                         // 0x02F0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D5G3[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                HeaderText;                                              // 0x02F8(0x0018) Transient, NativeAccessSpecifierPrivate
		class FText                                                BodyText;                                                // 0x0310(0x0018) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4JVU[0xA0];                                  // 0x0328(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxScrollBoxList*                                   ChoiceList;                                              // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateText(const class FText& NewHeaderText, const class FText& NewBodyText);
		void SetupDialog(const struct FGbxDialogBoxInfo& DialogBoxInfo);
		void SetHeaderTextFormatArg(const class FString& ArgName, const class FText& ReplacementText);
		void SetHeaderText(const class FText& NewText, bool bClearFormatArgs);
		void SetBodyTextFormatArg(const class FString& ArgName, const class FText& ReplacementText);
		void SetBodyText(const class FText& NewText, bool bClearFormatArgs);
		void OnChoiceClicked(class UGbxListItem* ClickedItem);
		void Dismiss();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxDialogBoxChoiceWidget
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UGbxDialogBoxChoiceWidget : public UGbxListItem
	{
	public:
		class FName                                                ChoiceNameId;                                            // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxDragDropContainerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxDragDropContainerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxFocusableWidgetStyleData
	 * Size -> 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
	 */
	class UGbxFocusableWidgetStyleData : public UGbxDataAsset
	{
	public:
		TArray<struct FGbxFocusableWidgetItemStyle>                Styles;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGbxFocusableWidgetItemStyle                        DefaultFocusedStyle;                                     // 0x0040(0x00C0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGbxFocusableWidgetItemStyle                        DefaultNotFocusedStyle;                                  // 0x0100(0x00C0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxFocusableWidget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxFocusableWidget : public UInterface
	{
	public:
		void SetFocusableWidgetEnabled(bool bEnabled);
		bool IsFocusableWidgetFocused();
		bool IsFocusableWidgetEnabled();
		EGbxFocusableWidgetState GetFocusableWidgetState();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxFullScreenMovie
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UGbxFullScreenMovie : public UGbxUserWidget
	{
	public:
		class UMediaPlayer*                                        CurrentPlayer;                                           // 0x02B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnMovieFinishedPlaying();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxContextualMenuData
	 * Size -> 0x0080 (FullSize[0x0140] - InheritedSize[0x00C0])
	 */
	class UGbxGFxContextualMenuData : public UGbxGFxMenuData
	{
	public:
		struct FContextualMenuInfo                                 ContextualMenuInfo;                                      // 0x00C0(0x0080) Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxContextualMenu
	 * Size -> 0x00E0 (FullSize[0x0760] - InheritedSize[0x0680])
	 */
	class UGbxGFxContextualMenu : public UGbxGFxMenu
	{
	public:
		TArray<struct FGbxGFxContextualMenuLocTableData>           LocTable;                                                // 0x0680(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UGFxObject*                                          ContextualMenu;                                          // 0x0690(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxGridScrollingList*                            ContentPanel;                                            // 0x0698(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       ToolTipsTextField;                                       // 0x06A0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1FD0[0x20];                                  // 0x06A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                RemoveFriendText;                                        // 0x06C8(0x0018) BlueprintReadOnly, Config, NativeAccessSpecifierPrivate
		class FText                                                AddShiftFriendText;                                      // 0x06E0(0x0018) BlueprintReadOnly, Config, NativeAccessSpecifierPrivate
		class FText                                                RemoveShiftFriendText;                                   // 0x06F8(0x0018) BlueprintReadOnly, Config, NativeAccessSpecifierPrivate
		class FText                                                BlockShiftUserText;                                      // 0x0710(0x0018) BlueprintReadOnly, Config, NativeAccessSpecifierPrivate
		class FText                                                UnblockShiftUserText;                                    // 0x0728(0x0018) BlueprintReadOnly, Config, NativeAccessSpecifierPrivate
		class FText                                                ReportShiftPlayerText;                                   // 0x0740(0x0018) BlueprintReadOnly, Config, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JX7P[0x8];                                   // 0x0758(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSelectionChanged(class UGbxGFxListCell* Item);
		void OnContextualMenuItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxContextualMenuHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxGFxContextualMenuHelpers : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxDragDropManager
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UGbxGFxDragDropManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_BIMX[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (PADDING)

	public:
		void OnDropButtonUnhovered(class UGbxGFxButton* UnhoveredButton, const struct FGbxMenuInputEvent& InputInfo);
		void OnDropButtonHovered(class UGbxGFxButton* HoveredButton, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxDropDownList
	 * Size -> 0x0080 (FullSize[0x01F0] - InheritedSize[0x0170])
	 */
	class UGbxGFxDropDownList : public UGbxGFxObject
	{
	public:
		class UGbxTextField*                                       CurrentSelectionText;                                    // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxSlider*                                       ListScrollBar;                                           // 0x0178(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxButton*                                       DropDownButton;                                          // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxButton*                                       TopButton;                                               // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxObject*                                       DropDownListContainer;                                   // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxComboBoxScrollingList*                        DropDownList;                                            // 0x0198(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U95I[0x8];                                   // 0x01A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        EntriesList;                                             // 0x01A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class FText                                                CurrentlySelectedEntry;                                  // 0x01B8(0x0018) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GPVY[0x20];                                  // 0x01D0(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnEntryClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
		void OnDropDownButtonClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxComboBoxScrollingList
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class UGbxGFxComboBoxScrollingList : public UGbxGFxGridScrollingList
	{
	public:
		unsigned char                                              UnknownData_J51E[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxHintBarContainer
	 * Size -> 0x0020 (FullSize[0x0340] - InheritedSize[0x0320])
	 */
	class UGbxGFxHintBarContainer : public UGbxGFxGridScrollingList
	{
	public:
		unsigned char                                              UnknownData_HAK2[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UGbxHintBar>                          HintBarOwningBar;                                        // 0x0328(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AGbxPlayerController>                 HintBarOwnerPC;                                          // 0x0330(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_226I[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxHintWidget
	 * Size -> 0x00C8 (FullSize[0x03D0] - InheritedSize[0x0308])
	 */
	class UGbxGFxHintWidget : public UGbxGFxListCell
	{
	public:
		unsigned char                                              UnknownData_IWOQ[0x8];                                   // 0x0308(0x0008) Fix Super Size
		TWeakObjectPtr<class UGbxHintBar>                          HintBarOwnerBar;                                         // 0x0310(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AGbxPlayerController>                 HintBarOwnerPC;                                          // 0x0318(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxHintInfo                                        HintBarHintInfo;                                         // 0x0320(0x0040) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D4K4[0x18];                                  // 0x0360(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxTextField*                                       HintText;                                                // 0x0378(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       HoldToPressBar;                                          // 0x0380(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxProgressBar*                                  HoldToPressGamepad;                                      // 0x0388(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxProgressBar*                                  HoldToPressKeyboard;                                     // 0x0390(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxProgressBar*                                  HoldToPressKeyboardWide;                                 // 0x0398(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxProgressBar*                                  HoldToPressKeyboardXWide;                                // 0x03A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       HintCaret;                                               // 0x03A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasInitialHintTextWidth;                                // 0x03B0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AQMD[0x3];                                   // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialHintTextWidth;                                    // 0x03B4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoldToPressGlyphType                                      HoldToPressType;                                         // 0x03B8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P7C9[0x3];                                   // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ManualPressToHoldProgress;                               // 0x03BC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasBroadcastPressToHoldEvent;                           // 0x03C0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsHintVisible;                                          // 0x03C1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAvailable;                                            // 0x03C2(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInputNeedsResetBeforeShowingProgress;                   // 0x03C3(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ExternalHintHeldProgress;                                // 0x03C4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QHD2[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnThisHintClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxListItemComboBox
	 * Size -> 0x0038 (FullSize[0x0350] - InheritedSize[0x0318])
	 */
	class UGbxGFxListItemComboBox : public UGbxGFxListCellWithData
	{
	public:
		class UGbxGFxDropDownList*                                 DropDownListItem;                                        // 0x0318(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7P9Q[0x30];                                  // 0x0320(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnSelectionUpdated(class UGbxGFxListCell* Item);
		void OnOwningListSelectionChanged(class UGbxGFxListCell* Item);
		void OnDropDownButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxListItemControls
	 * Size -> 0x0088 (FullSize[0x03A0] - InheritedSize[0x0318])
	 */
	class UGbxGFxListItemControls : public UGbxGFxListCellWithData
	{
	public:
		unsigned char                                              UnknownData_WVY2[0x8];                                   // 0x0318(0x0008) Fix Super Size
		unsigned char                                              UnknownData_SYOI[0x40];                                  // 0x0320(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxTextField*                                       TitleItem;                                               // 0x0360(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       BadBindingIcon;                                          // 0x0368(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       RebindButton;                                            // 0x0370(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       LinkedRebindButton;                                      // 0x0378(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ECE0[0x20];                                  // 0x0380(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMediaPlayer
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UGbxGFxMediaPlayer : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnMovieStartedPlaying;                                   // 0x0028(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMovieStoppedPlaying;                                   // 0x0038(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		struct FGbxGFxMediaPlayerConfig                            PlayerConfig;                                            // 0x0048(0x0030) Transient, NativeAccessSpecifierPrivate
		struct FGbxGFxMaterialRenderer                             MaterialRenderer;                                        // 0x0078(0x0018) Transient, NoDestructor, NativeAccessSpecifierPrivate
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnMovieTracksChanged();
		void OnMovieSeekCompleted();
		void OnMoviePlaybackSuspended();
		void OnMoviePlaybackResumed();
		void OnMovieMediaOpenFailed(const class FString& FailedUrl);
		void OnMovieMediaOpened(const class FString& OpenedUrl);
		void OnMovieMediaClosed();
		void OnMovieEndReached();
		void GbxGFxMediaPlayerEvent__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMenuSwitcherNavCell
	 * Size -> 0x0028 (FullSize[0x0330] - InheritedSize[0x0308])
	 */
	class UGbxGFxMenuSwitcherNavCell : public UGbxGFxListCell
	{
	public:
		unsigned char                                              UnknownData_MIMM[0x8];                                   // 0x0308(0x0008) Fix Super Size
		unsigned char                                              UnknownData_7HYN[0x18];                                  // 0x0310(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOuterFocusedState;                                      // 0x0328(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K158[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMenuSwitcherNavWidget
	 * Size -> 0x0090 (FullSize[0x0200] - InheritedSize[0x0170])
	 */
	class UGbxGFxMenuSwitcherNavWidget : public UGbxGFxObject
	{
	public:
		class FScriptDelegate                                      OnNavTabClickedDelegate;                                 // 0x0170(0x0010) ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class UGbxGFxHintWidget*                                   PrevTabHintClip;                                         // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxHintWidget*                                   NextTabHintClip;                                         // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxGridScrollingList*                            NavListClip;                                             // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AFT8[0x30];                                  // 0x0198(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGbxGFxMenuSwitchNavWidgetType                             NavType;                                                 // 0x01C8(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CWIQ[0x3];                                   // 0x01C9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_526B[0x4];                                   // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxGFxMenuSwitcherSubmenuInfo>              NavListSubmenuDatas;                                     // 0x01D0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FGbxGFxMenuSwitcherNavWidgetCustomItem>      NavListItemDatas;                                        // 0x01E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BJDT[0x10];                                  // 0x01F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnTabClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxSprite
	 * Size -> 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
	 */
	class UGbxGFxSprite : public UGbxGFxObject
	{
	public:
		class UGbxGFxObject*                                       Graphics;                                                // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2KME[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMouseBlocker
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UGbxGFxMouseBlocker : public UGbxGFxSprite
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxMouseCapturePanel
	 * Size -> 0x00E0 (FullSize[0x0250] - InheritedSize[0x0170])
	 */
	class UGbxGFxMouseCapturePanel : public UGbxGFxObject
	{
	public:
		unsigned char                                              UnknownData_IEGD[0xE0];                                  // 0x0170(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxRechargeableProgressBar
	 * Size -> 0x0028 (FullSize[0x0340] - InheritedSize[0x0318])
	 */
	class UGbxGFxRechargeableProgressBar : public UGbxGFxProgressBar
	{
	public:
		unsigned char                                              UnknownData_ANC3[0x8];                                   // 0x0318(0x0008) Fix Super Size
		unsigned char                                              UnknownData_XK53[0x20];                                  // 0x0320(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxSlider
	 * Size -> 0x00C8 (FullSize[0x0390] - InheritedSize[0x02C8])
	 */
	class UGbxGFxSlider : public UGbxGFxButton
	{
	public:
		struct FGbxGFxSliderAcceleration                           SliderAcceleration;                                      // 0x02C8(0x0010) Config, NoDestructor, NativeAccessSpecifierPublic
		class UGbxGFxButton*                                       UpOrLeftButton;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxButton*                                       DownOrRightButton;                                       // 0x02E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxButton*                                       SliderThumb;                                             // 0x02E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxButton*                                       SliderTrack;                                             // 0x02F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       SliderTrackButton;                                       // 0x02F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       MaskFill;                                                // 0x0300(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxGFxObject*                                       SliderDefaultThumb;                                      // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AN46[0x80];                                  // 0x0310(0x0080) MISSED OFFSET (PADDING)

	public:
		void GbxGFxSliderUpdateEvent__DelegateSignature(float SliderPercent);
		void EndSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
		void BeginRightSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
		void BeginLeftSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGridListWidget
	 * Size -> 0x00A0 (FullSize[0x01E8] - InheritedSize[0x0148])
	 */
	class UGbxGridListWidget : public UGridPanel
	{
	public:
		unsigned char                                              UnknownData_2277[0x18];                                  // 0x0148(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedColumn;                                          // 0x0160(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedRow;                                             // 0x0164(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedIndexWhenFocusWasLost;                           // 0x0168(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UGbxUmgMenu>                          MenuThatOwnsFocus;                                       // 0x016C(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GridColumns;                                             // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GridRows;                                                // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxGridWidgetFill                                         GridFill;                                                // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAWB[0x3];                                   // 0x017D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      SelectionChangedDelegate;                                // 0x0180(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ItemClickedDelegate;                                     // 0x0190(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		EGbxListWrapMode                                           RowWrapMode;                                             // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxListWrapMode                                           ColumnWrapMode;                                          // 0x01A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxFocusableWidgetMouseBehavior                           DefaultItemSelectionBehavior;                            // 0x01A2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBYW[0x5];                                   // 0x01A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxListItemFactory*                                 ListItemFactory;                                         // 0x01A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DefaultListItemClass;                                    // 0x01B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxListFocusChangedAction                                 FocusChangeAction;                                       // 0x01B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRegisterAsFocusableWidget;                              // 0x01B9(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7JF[0x6];                                   // 0x01BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FocusableWidgetNavUp;                                    // 0x01C0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavDown;                                  // 0x01C8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavLeft;                                  // 0x01D0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavRight;                                 // 0x01D8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFocusOnMenuCreation;                                    // 0x01E0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0SF[0x7];                                   // 0x01E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGuidePanel
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UGbxGuidePanel : public UCanvasPanel
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxHintBarWidgetContainer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxHintBarWidgetContainer : public UInterface
	{
	public:
		void HintBarSetVisible(bool bVisible);
		void HintBarInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext);
		void HintBarClearAllHints();
		void HintBarAppendHint(const struct FGbxHintInfo& HintInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxHintBar
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UGbxHintBar : public UObject
	{
	public:
		class UObject*                                             Container;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODK2[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ContainerInterface[0x10];                                // 0x0040(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxUI.GbxHintBar.ContainerInterface
		unsigned char                                              MenuOwner[0x10];                                         // 0x0050(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxUI.GbxHintBar.MenuOwner
		TArray<struct FGbxHintInfo>                                HintInfos;                                               // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7J6[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxHintWidgetMapItem>                       StagePlacedHints;                                        // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABS9[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAreHintsVisible;                                        // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInputBlocked;                                         // 0x00A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideOnOwnerMenuDeactivate;                              // 0x00A2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSendInputActionEvenIfOwnerIsDeactivated;                // 0x00A3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04XN[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnHintClicked(const class FName& InputAction, bool bHeld);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxHintWidget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxHintWidget : public UInterface
	{
	public:
		void HintWidgetSetVisible(bool bVisible);
		void HintWidgetSetInfo(const struct FGbxHintInfo& HintInfo);
		void HintWidgetInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxHUDData
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class UGbxHUDData : public UGbxDataAsset
	{
	public:
		class UClass*                                              ContainerClass;                                          // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGbxGFxHUDWidgetInfo>                        Widgets;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGbxHUDLayoutData                                   StandardLayout;                                          // 0x0048(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxHUDLayoutData                                   TwoPlayerHorizontalLayout;                               // 0x0058(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxHUDLayoutData                                   TwoPlayerVerticalLayout;                                 // 0x0068(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxHUDLayoutData                                   FourPlayerLayout;                                        // 0x0078(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxHUDLayoutData                                   StandardLayoutGearUpMode;                                // 0x0088(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxHUDLayoutData                                   TwoPlayerHorizontalLayoutGearUpMode;                     // 0x0098(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxHUDLayoutData                                   TwoPlayerVerticalLayoutGearUpMode;                       // 0x00A8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxHUDLayoutData                                   FourPlayerLayoutGearUpMode;                              // 0x00B8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UGbxGFxHUDFeedbackData*                              FeedbackData;                                            // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxHUDStateData*                                    StartState;                                              // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.HUDDataProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHUDDataProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxGFxHUDFeedbackData
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UGbxGFxHUDFeedbackData : public UGbxHUDFeedbackData
	{
	public:
		unsigned char                                              ValidWidgetTypes[0x10];                                  // 0x0088(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxUI.GbxGFxHUDFeedbackData.ValidWidgetTypes

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxHUDStateData
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UGbxHUDStateData : public UGbxDataAsset
	{
	public:
		class FName                                                StateName;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDInitializationAnimationSet                             InitializationAnimSet;                                   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxHUDStateListType                                       ListType;                                                // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5U5[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ValidWidgetTypes[0x10];                                  // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxUI.GbxHUDStateData.ValidWidgetTypes
		bool                                                       StayOnTopOfStack;                                        // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9FM[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxList
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxList : public UInterface
	{
	public:
		void TryToAcquireMenuFocus(bool bFromMouse);
		void SetSelectionChangedDelegate(const class FScriptDelegate& InSelectionChangedDelegate);
		void SetSelectedItem(class UGbxListItem* Item, bool bScrollIntoView, bool bAnimateScroll);
		void SetSelectedIndex(int32_t NewSelection, bool bScrollIntoView, bool bAnimateScroll);
		void SetItemClickedDelegate(const class FScriptDelegate& InItemClickedDelegate);
		void RemoveListItem(class UGbxListItem* Item);
		void RemoveAllListItems();
		void OnItemClicked(class UGbxListItem* Item);
		bool MoveSelectionUp();
		bool MoveSelectionRight();
		bool MoveSelectionLeft();
		bool MoveSelectionDown();
		bool IsListFocused();
		bool IsListEnabled();
		void InsertListItem(class UGbxListItem* Item);
		class UGbxListItem* GetSelectedItem();
		int32_t GetSelectedIndex();
		int32_t GetNumItemsInList();
		class UGbxListItemFactory* GetListItemFactory();
		class UGbxListItem* GetItemAtIndex(int32_t Index);
		class UClass* GetDefaultItemClass();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxListItemBoolean
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UGbxListItemBoolean : public UGbxListItem
	{
	public:
		class UCheckBox*                                           ValueCheckBox;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetChecked(bool bChecked);
		bool IsChecked();
		void HandleFocusableWidgetPressed(const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxListItemComboBox
	 * Size -> 0x0018 (FullSize[0x0300] - InheritedSize[0x02E8])
	 */
	class UGbxListItemComboBox : public UGbxListItem
	{
	public:
		class UComboBoxString*                                     ValueComboBox;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnComboBoxSelectionChanged;                              // 0x02F0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetSelectedOptionIndex(int32_t Index);
		void SelectPreviousOption();
		void SelectNextOption();
		void OnValueComboBoxChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		void ListItemComboBoxSelectionChangedDelegate__DelegateSignature(int32_t NewSelectedIndex);
		void InitializeComboBox(TArray<class FText> Items, int32_t InitialValue);
		int32_t GetSelectedOptionIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxListItemFactory
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UGbxListItemFactory : public UDataAsset
	{
	public:
		class UClass*                                              DefaultListItem;                                         // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BasicTextListItem;                                       // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BooleanListItem;                                         // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NumberListItem;                                          // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ComboBoxListItem;                                        // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UGbxListItemText* CreateTextItem(class APlayerController* Owner, const class FText& LabelText, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItemNumber* CreateNumberItem(class APlayerController* Owner, const class FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItem* STATIC_CreateItemWithDelegates(class APlayerController* Owner, class UClass* ItemClass, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItem* STATIC_CreateItem(class APlayerController* Owner, class UClass* ItemClass);
		class UGbxListItemComboBox* CreateComboBoxItem(class APlayerController* Owner, const class FText& LabelText, TArray<class FText> Items, int32_t InitialIndex, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate);
		class UGbxListItemBoolean* CreateBooleanItem(class APlayerController* Owner, const class FText& LabelText, bool InitialValue, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxListItemNumber
	 * Size -> 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
	 */
	class UGbxListItemNumber : public UGbxListItem
	{
	public:
		class USlider*                                             ValueSlider;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFHT[0x28];                                  // 0x02F0(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnSliderValueChanged(float NewPosition);
		void IncrementSlider();
		float GetCurrentValue();
		void DecrementSlider();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenu
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxMenu : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenuInputSettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGbxMenuInputSettings : public UObject
	{
	public:
		struct FGbxMenuKeyRepeatInfo                               KeyRepeatConfig;                                         // 0x0028(0x0018) Edit, Transient, Config, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AxisAsButtonThreshold;                                   // 0x0040(0x0004) Edit, ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxisThreshold;                                           // 0x0044(0x0004) Edit, ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGbxMenuInputAction>                         ActionMappings;                                          // 0x0048(0x0010) Edit, ZeroConstructor, Transient, Config, NativeAccessSpecifierPublic
		TArray<struct FGbxMenuInputAxisAction>                     AxisMappings;                                            // 0x0058(0x0010) Edit, ZeroConstructor, Transient, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenuInput
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UGbxMenuInput : public UObject
	{
	public:
		class FScriptDelegate                                      UnpairedInputHandlerDelegate;                            // 0x0028(0x0010) ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ET9[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShowDebugKeyStates;                                     // 0x0048(0x0001) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CSHR[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FramesToIgnoreMouseMoves;                                // 0x004C(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              InputListeners[0x10];                                    // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxUI.GbxMenuInput.InputListeners
		struct FGbxMenuKeyRepeatInfo                               KeyRepeatConfig;                                         // 0x0060(0x0018) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WJKJ[0x20];                                  // 0x0078(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AxisAsButtonThreshold;                                   // 0x0098(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AxisThreshold;                                           // 0x009C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGbxMenuInputAction>                         ActionMappings;                                          // 0x00A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FGbxMenuInputAxisAction>                     AxisMappings;                                            // 0x00B0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FGbxMenuInputRawMousePos>                    MousePoses;                                              // 0x00C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M1PI[0x20];                                  // 0x00D0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenuInputListener
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxMenuInputListener : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenuStackMenuInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGbxMenuStackMenuInfo : public UBaseMenuStackMenuInfo
	{
	public:
		unsigned char                                              MenuObject[0x10];                                        // 0x0028(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxUI.GbxMenuStackMenuInfo.MenuObject
		class UGbxMenuData*                                        MenuData;                                                // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMenuStack
	 * Size -> 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
	 */
	class UGbxMenuStack : public UObject
	{
	public:
		unsigned char                                              UnknownData_WETA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AGbxPlayerController>                 PCOwner;                                                 // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UGbxMenuInput>                        MenuInput;                                               // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxMenuStackMenuInfo*>                       MenuStack;                                               // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UGbxMenuStackMenuInfo*>                       MenuDeleteList;                                          // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FGbxMenuInputEvent>                          QueuedInputActions;                                      // 0x0060(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FGbxMenuInputEvent>                          UnpairedInputCache;                                      // 0x0070(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FGbxMenuAxisInputEvent>                      QueuedAxisInputActions;                                  // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UGbxMenuStackMenuInfo*>                       PopupMenus;                                              // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    PriorityBase;                                            // 0x00A0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PriorityDelta;                                           // 0x00A4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PopupMenuPriorityBase;                                   // 0x00A8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStackHasChanged;                                        // 0x00AC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTicking;                                              // 0x00AD(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingMenuInit;                                        // 0x00AE(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingMenuDeinit;                                      // 0x00AF(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingMenuDeactivate;                                  // 0x00B0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QN8I[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AxisAsButtonThreshold;                                   // 0x00B4(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxMenuInputDevice                                        CurrentInputDevice;                                      // 0x00B8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLastInputFromMouse;                                     // 0x00B9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RJC[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BlockAllRawInput;                                        // 0x00BC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsProcessingInput;                                      // 0x00C0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProcessingInputCancelled;                               // 0x00C1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStackHidden;                                            // 0x00C2(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PRD[0x65];                                  // 0x00C3(0x0065) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPrePushMenuDelegate;                                   // 0x0128(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMenuActivatedDelegate;                                 // 0x0138(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStackEmptied;                                          // 0x0148(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		TArray<class UGbxMenuData*>                                PassiveMenuLoadQueue;                                    // 0x0158(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UGbxMenuStackMenuInfo*                               PassiveLoadingMenu;                                      // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0CV[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGameInstance*                                    CachedGameInstance;                                      // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void Tick(float DeltaTime);
		class UObject* SwitchTo(class UGbxMenuData* MenuData);
		void SetBlockingMode(bool bShouldBlock);
		void SetBlockAllRawInput(bool bShouldBlock);
		class UObject* Push(class UGbxMenuData* MenuData);
		class UObject* PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuData);
		void PopTo(class UObject* Menu);
		void Pop();
		int32_t Num();
		void HandleRawInput(const struct FKey& Key, EInputEvent EVENTTYPE, int32_t ControllerId);
		class UObject* GetTopMenu();
		class UObject* GetMenuAtIndex(int32_t Index);
		int32_t GetIndexOfMenu(class UObject* Menu);
		EGbxMenuInputDevice GetCurrentInputDevice();
		void Draw();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxMeshWidget
	 * Size -> 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
	 */
	class UGbxMeshWidget : public UWidget
	{
	public:
		class USlateVectorArtData*                                 MeshData;                                                // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumUnits;                                             // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EQZ[0x1C];                                  // 0x010C(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxNoClipCanvasPanel
	 * Size -> 0x0010 (FullSize[0x0138] - InheritedSize[0x0128])
	 */
	class UGbxNoClipCanvasPanel : public UCanvasPanel
	{
	public:
		struct FVector2D                                           ClipZoneAdjustmentMin;                                   // 0x0128(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ClipZoneAdjustmentMax;                                   // 0x0130(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxProgressBar
	 * Size -> 0x00F0 (FullSize[0x03A8] - InheritedSize[0x02B8])
	 */
	class UGbxProgressBar : public UGbxUserWidget
	{
	public:
		class UTexture2D*                                          FillTexture;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDeltaBar;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVXX[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          DeltaTexture;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DeltaEffectTexture;                                      // 0x02D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BackgroundTexture;                                       // 0x02D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxProgressBarFillDirection                               FillDirection;                                           // 0x02E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MS43[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Percent;                                                 // 0x02E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Shear;                                                   // 0x02E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxProgressBarInterpolator                         DefaultInterpolator;                                     // 0x02EC(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBBN[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxProgressBarRange>                        Ranges;                                                  // 0x0318(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnInterpolationComplete;                                 // 0x0328(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnEnterRange;                                            // 0x0338(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class UImage*                                              Fill;                                                    // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              DeltaEffect;                                             // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              Background;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          CurrentValueText;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          MaxValueText;                                            // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxUserWidget*                                      PercentAnimationOwner;                                   // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetAnimation*                                    PercentAnimation;                                        // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBF0[0x28];                                  // 0x0380(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetShear(float InShear);
		void SetPercent(float InPercent);
		void SetMaxValueText(const class FText& Text);
		void SetFillColorAndOpacity(const struct FLinearColor& InColor);
		void SetCurrentValueText(const class FText& Text);
		bool STATIC_PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
		bool IsInterpolating();
		void InterpolateToPercentWithInterpolator(float InPercent, const struct FGbxProgressBarInterpolator& Interpolator);
		void InterpolateToPercent(float InPercent);
		void HandleShowDeltaEffect(class UWidget* Effect, float OldValue, float CurrentValue);
		void HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const struct FGbxProgressBarInterpolator& ActiveInterpolator);
		void HandleEnterPercentRange(const class FName& RangeName);
		float GetShear();
		float GetPercent();
		void GbxProgressBarRangeEvent__DelegateSignature(const class FName& RangeName);
		void GbxProgressBarEvent__DelegateSignature();
		bool STATIC_EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxRetainerBox
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UGbxRetainerBox : public URetainerBox
	{
	public:
		class FScriptDelegate                                      TransformDelegate;                                       // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxRichTextBlock
	 * Size -> 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
	 */
	class UGbxRichTextBlock : public URichTextBlock
	{
	public:
		int16_t                                                    Baseline;                                                // 0x0360(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0K4[0x2];                                   // 0x0362(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ShadowOffset;                                            // 0x0364(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x036C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G1KZ[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxScrollBoxList
	 * Size -> 0x0090 (FullSize[0x08F0] - InheritedSize[0x0860])
	 */
	class UGbxScrollBoxList : public UScrollBox
	{
	public:
		unsigned char                                              UnknownData_LY3C[0x18];                                  // 0x0860(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedIndex;                                           // 0x0878(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedIndexWhenFocusWasLost;                           // 0x087C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UGbxUmgMenu>                          MenuThatOwnsFocus;                                       // 0x0880(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SelectionChangedDelegate;                                // 0x0888(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ItemClickedDelegate;                                     // 0x0898(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		EGbxScrollBoxListWrapMode                                  WrapMode;                                                // 0x08A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxFocusableWidgetMouseBehavior                           DefaultItemSelectionBehavior;                            // 0x08A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8J4[0x6];                                   // 0x08AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxListItemFactory*                                 ListItemFactory;                                         // 0x08B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DefaultListItemClass;                                    // 0x08B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxScrollBoxListFocusChangedAction                        FocusChangeAction;                                       // 0x08C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRegisterAsFocusableWidget;                              // 0x08C1(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R83V[0x6];                                   // 0x08C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FocusableWidgetNavUp;                                    // 0x08C8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavDown;                                  // 0x08D0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavLeft;                                  // 0x08D8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FocusableWidgetNavRight;                                 // 0x08E0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFocusOnMenuCreation;                                    // 0x08E8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKKP[0x7];                                   // 0x08E9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxSpinner
	 * Size -> 0x0058 (FullSize[0x0320] - InheritedSize[0x02C8])
	 */
	class UGbxSpinner : public UGbxGFxButton
	{
	public:
		unsigned char                                              UnknownData_EMIJ[0x8];                                   // 0x02C8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_V7CD[0x20];                                  // 0x02D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxButton*                                       LeftButton;                                              // 0x02F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGFxButton*                                       RightButton;                                             // 0x02F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxTextField*                                       ChoiceText;                                              // 0x0300(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MAP[0x18];                                  // 0x0308(0x0018) MISSED OFFSET (PADDING)

	public:
		void SpinRight(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		void SpinnerValueUpdatedEvent__DelegateSignature();
		void SpinLeft(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxTextField
	 * Size -> 0x0100 (FullSize[0x0270] - InheritedSize[0x0170])
	 */
	class UGbxTextField : public UGbxGFxObject
	{
	public:
		unsigned char                                              UnknownData_TEOV[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxSlider*                                       ScrollBar;                                               // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XC2G[0xE8];                                  // 0x0188(0x00E8) MISSED OFFSET (PADDING)

	public:
		void OnScrollBarPositionUpdated(float SliderPercentage);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.UIAccessors
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUIAccessors : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxUILocalization
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxUILocalization : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_PlatformToText(const class FName& Platform, class AGbxPlayerController* pc);
		class FText STATIC_PlatformToRichText(const class FName& Platform, class AGbxPlayerController* pc, const struct FVector2D& GlyphSize);
		struct FSlateBrush STATIC_PlatformToGlyph(const class FName& Platform, class AGbxPlayerController* pc);
		class FText STATIC_PlatformToGFxHTMLText(const class FName& Platform, class AGbxPlayerController* pc, float GlyphHeight, int32_t VSpace);
		bool STATIC_IsPlatformGlyphAvailable(const class FName& Platform, class AGbxPlayerController* pc);
		bool STATIC_IsInputActionGlyphAvailable(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType);
		class FText STATIC_InputActionToText(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType);
		class FText STATIC_InputActionToRichText(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, const struct FVector2D& GlyphSize);
		struct FSlateBrush STATIC_InputActionToGlyph(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType);
		class FText STATIC_InputActionToGFxHTMLText(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, float GlyphHeight, int32_t VSpace);
		class FText STATIC_FKeyToGFxHTMLText(const struct FKey& Key, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, float GlyphHeight);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxInputToGlyphMap
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UGbxInputToGlyphMap : public UGbxDataAsset
	{
	public:
		TArray<struct FGbxInputToGlyphMapItem>                     InputMap;                                                // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FGbxInputToGlyphSpecialActionItem>           SpecialInputActionMap;                                   // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxPlatformToGlyphMap
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UGbxPlatformToGlyphMap : public UGbxDataAsset
	{
	public:
		TMap<class FName, struct FSlateBrush>                      PlatformMap;                                             // 0x0030(0x0050) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxUISpinnerWidget
	 * Size -> 0x0020 (FullSize[0x02D8] - InheritedSize[0x02B8])
	 */
	class UGbxUISpinnerWidget : public UGbxUserWidget
	{
	public:
		class UCanvasPanel*                                        SpinnerDisplayStrip;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TotalDigitsDisplayed;                                    // 0x02C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKI1[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationTime;                                           // 0x02C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CurrentValue;                                            // 0x02C8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTransitionUpwards;                                      // 0x02C9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9U0Q[0x2];                                   // 0x02CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentDistanceRemaining;                                // 0x02CC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurrentAnimSpeed;                                        // 0x02D0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              NewValueToGoTo;                                          // 0x02D4(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxSpinnerWidgetGoToMethod                                AnimationType;                                           // 0x02D5(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9L3V[0x2];                                   // 0x02D6(0x0002) MISSED OFFSET (PADDING)

	public:
		float MoveToNumber(unsigned char NewNumber, EGbxSpinnerWidgetGoToMethod GoToMethod);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxWidgetComponent
	 * Size -> 0x0028 (FullSize[0x0870] - InheritedSize[0x0848])
	 */
	class UGbxWidgetComponent : public UWidgetComponent
	{
	public:
		class UCurveFloat*                                         DistanceScaleCurve;                                      // 0x0848(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DistanceAlphaCurve;                                      // 0x0850(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBorder*                                             DistanceAlphaBorder;                                     // 0x0858(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGbxPlayerController*                                TrackedPlayerController;                                 // 0x0860(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxUserWidget*                                      GbxWidget;                                               // 0x0868(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Setup(class UClass* NewWidgetClass, class AGbxPlayerController* NewTrackedPlayer, class USceneComponent* ParentComponent, EWidgetSpace WidgetSpace, int32_t NewLayerZOrder, const class FName& CollisionProfile);
		void SetDistanceScaleCurve(class UCurveFloat* NewDistanceScaleCurve);
		void SetDistanceAlphaCurve(class UCurveFloat* NewDistanceAlphaCurve);
		void SetDistanceAlphaBorder(class UBorder* NewDistanceAlphaBorder);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxWidgetFocusManager
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UGbxWidgetFocusManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_VBA3[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             OwnerMenu;                                               // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_84K0[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             FocusedWidget;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B8X4[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxFocusableWidgetInfo>                     RegisteredWidgets;                                       // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4J75[0x28];                                  // 0x0068(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.GbxWorldSpaceProxyWidget
	 * Size -> 0x0048 (FullSize[0x0300] - InheritedSize[0x02B8])
	 */
	class UGbxWorldSpaceProxyWidget : public UGbxUserWidget
	{
	public:
		float                                                      Depth;                                                   // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Alignment;                                               // 0x02BC(0x0008) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWTU[0x3C];                                  // 0x02C4(0x003C) MISSED OFFSET (PADDING)

	public:
		struct FVector GetWorldLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxUI.InWorldDamageNumber
	 * Size -> 0x0030 (FullSize[0x02E8] - InheritedSize[0x02B8])
	 */
	class UInWorldDamageNumber : public UGbxUserWidget
	{
	public:
		class UGbxRichTextBlock*                                   DisplayField;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        DisplayPanel;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDamageAnimationPairing>                     DamageAnimationPairings;                                 // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class AGbxPlayerController*                                InstigatingPlayer;                                       // 0x02D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetComponent*                                    DamageNumberContainer;                                   // 0x02E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnWentOffscreen();
		void ImpulseAnimationCompleted(class UUserWidget* AssociatedWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
