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
	 * Class OakCS.CSAction
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UCSAction : public UObject
	{
	public:
		unsigned char                                              UnknownData_D235[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSActionInsertToken
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UCSActionInsertToken : public UCSAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSActionRemoveToken
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UCSActionRemoveToken : public UCSAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSActionSwapTileAndToken
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UCSActionSwapTileAndToken : public UCSAction
	{
	public:
		unsigned char                                              UnknownData_KODV[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSCheatManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCSCheatManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSCondition
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UCSCondition : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSConsole
	 * Size -> 0x0008 (FullSize[0x0668] - InheritedSize[0x0660])
	 */
	class ACSConsole : public AAdvancedInteractiveObject
	{
	public:
		class UGbxMenuData*                                        CSMenuData;                                              // 0x0660(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSConsoleProxy
	 * Size -> 0x0038 (FullSize[0x0520] - InheritedSize[0x04E8])
	 */
	class ACSConsoleProxy : public AAdvancedInteractiveObjectProxy
	{
	public:
		class FName                                                CurrentOpponent;                                         // 0x04E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CSMenuData[0x28];                                        // 0x04F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty OakCS.CSConsoleProxy.CSMenuData
		unsigned char                                              UnknownData_JS1Y[0x8];                                   // 0x0518(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnUnderParScoreReached();
		void OnSumbitPuzzleSolution(bool bIsOptimal);
		void OnQuitCitizenScienceArcade();
		void OnParScoreReached();
		void OnOptimalScoreReached();
		void OnFirstPuzzleOfCurrentDifficulty();
		void OnEnterPuzzle();
		void OnDifficultyLevelCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSLevelData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCSLevelData : public UGbxDataAsset
	{
	public:
		TArray<struct FCSLevelInfo>                                LevelInfos;                                              // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSPuzzleFeedbackManager
	 * Size -> 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
	 */
	class UCSPuzzleFeedbackManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_XE49[0x14];                                  // 0x0028(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCSPuzzleFeedbackSettings                           Settings;                                                // 0x003C(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGFxCSPuzzle>                         Puzzle;                                                  // 0x005C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGFxCSTokenPool>                      TokenPool;                                               // 0x0064(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGFxCSProgressBar>                    ProgressBar;                                             // 0x006C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxGFxObject>                        ProgressBarContainer;                                    // 0x0074(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UCSPuzzleSession>                     PuzzleSession;                                           // 0x007C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxGFxObject>                        ParScoreTextFeedback;                                    // 0x0084(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxGFxObject>                        ParScoreContainer;                                       // 0x008C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxTextField>                        ParScoreText;                                            // 0x0094(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxGFxObject>                        CurrentScoreContainer;                                   // 0x009C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxTextField>                        CurrentScoreText;                                        // 0x00A4(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxGFxObject>                        HighScoreContainer;                                      // 0x00AC(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxTextField>                        HighScoreText;                                           // 0x00B4(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxGFxObject>                        ProgressBarBonusScoreContainer;                          // 0x00BC(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxTextField>                        ProgressBarBonusScoreText;                               // 0x00C4(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxGFxObject>                        BonusScoreContainer;                                     // 0x00CC(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxTextField>                        BonusScoreText;                                          // 0x00D4(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxGFxObject>                        NumTokensContainer;                                      // 0x00DC(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxTextField>                        NumTokensText;                                           // 0x00E4(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGFxCSPuzzleMenu>                     OwningMenu;                                              // 0x00EC(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JB3B[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGFxCSPuzzleTile*>                            TweeningTiles;                                           // 0x00F8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PWKD[0x58];                                  // 0x0108(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSPuzzleIntroManager
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UCSPuzzleIntroManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_XCIP[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCSPuzzleIntroSettings                              Settings;                                                // 0x0038(0x0014) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H8JB[0x1C];                                  // 0x004C(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSPuzzleSession
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UCSPuzzleSession : public UObject
	{
	public:
		TArray<class UCSAction*>                                   PuzzleActions;                                           // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UTutorialPuzzle*                                     TutorialPuzzle;                                          // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FHG4[0xB8];                                  // 0x0040(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSTutorialBPLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCSTutorialBPLib : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnblockCSPuzzleIntro();
		void STATIC_UnblockCSPuzzleInputs();
		void STATIC_StopHighlightCSTutorialElement(ECSTutorialElement TutorialElement);
		void STATIC_ShowCSTutorialTooltip(const class FString& Tooltip);
		void STATIC_ShowCSTutorialElement(ECSTutorialElement TutorialElement);
		void STATIC_HighlightCSTutorialElement(ECSTutorialElement TutorialElement);
		void STATIC_HideCSTutorialTooltip(const class FString& Tooltip);
		void STATIC_HideCSTutorialElement(ECSTutorialElement TutorialElement);
		void STATIC_CSWaitForScore(class UWorld* World, ECSScoreCondition ScoreCondition, const struct FLatentActionInfo& LatentInfo);
		void STATIC_BlockCSPuzzleIntro();
		void STATIC_BlockCSPuzzleInputs();
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSButton
	 * Size -> 0x0010 (FullSize[0x0318] - InheritedSize[0x0308])
	 */
	class UGFxCSButton : public UGbxGFxListCell
	{
	public:
		class UGbxTextField*                                       HintText;                                                // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KW41[0x8];                                   // 0x0310(0x0008) Fix size for supers

	public:
		void OnInputDeviceChanged(EGbxMenuInputDevice NewInputDevice);
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSBoosterItem
	 * Size -> 0x0078 (FullSize[0x0390] - InheritedSize[0x0318])
	 */
	class UGFxCSBoosterItem : public UGFxCSButton
	{
	public:
		unsigned char                                              UnknownData_WN02[0x8];                                   // 0x0318(0x0008) Fix Super Size
		class UGbxTextField*                                       DisplayName;                                             // 0x0320(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       Description;                                             // 0x0328(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       UnlockDescription;                                       // 0x0330(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       Price;                                                   // 0x0338(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       Picture;                                                 // 0x0340(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       BoosterTimer;                                            // 0x0348(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R634[0x40];                                  // 0x0350(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSSubMenu
	 * Size -> 0x0018 (FullSize[0x06A0] - InheritedSize[0x0688])
	 */
	class UGFxCSSubMenu : public UGbxGFxMenuSwitcherSubmenu
	{
	public:
		TArray<class UGFxCSButton*>                                Buttons;                                                 // 0x0688(0x0010) BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AQO8[0x8];                                   // 0x0698(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSBoosterShopMenu
	 * Size -> 0x0070 (FullSize[0x0710] - InheritedSize[0x06A0])
	 */
	class UGFxCSBoosterShopMenu : public UGFxCSSubMenu
	{
	public:
		class FText                                                BuyBoosterMessageHeader;                                 // 0x06A0(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FText                                                BuyBoosterMessage;                                       // 0x06B8(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate
		int32_t                                                    NumBoosterItemByRow;                                     // 0x06D0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8U97[0x4];                                   // 0x06D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoosterData*                                        BoosterData;                                             // 0x06D8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxGridScrollingList*                            BoosterList;                                             // 0x06E0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSBoosterItem*                                   ClickedBoosterItem;                                      // 0x06E8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_99CF[0x20];                                  // 0x06F0(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnCSBucksAmountChanged(int32_t NewAmount);
		void OnConfirmPurchase(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
		void OnBoosterItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSHelpMenu
	 * Size -> 0x0130 (FullSize[0x07B0] - InheritedSize[0x0680])
	 */
	class UGFxCSHelpMenu : public UGbxGFxMenu
	{
	public:
		class UGFxCSButton*                                        RulesTab;                                                // 0x0680(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSButton*                                        ControllerTab;                                           // 0x0688(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       RulesContainer;                                          // 0x0690(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       HelpContainer;                                           // 0x0698(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       ControlsContainer;                                       // 0x06A0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSButton*                                        CloseButton;                                             // 0x06A8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ANWJ[0x100];                                 // 0x06B0(0x0100) MISSED OFFSET (PADDING)

	public:
		void OnCloseClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSHUD
	 * Size -> 0x0080 (FullSize[0x0720] - InheritedSize[0x06A0])
	 */
	class UGFxCSHUD : public UGbxGFxMenuSwitcher
	{
	public:
		unsigned char                                              UnknownData_348N[0x10];                                  // 0x06A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCSGlobals*                                          CitizenScienceGlobals;                                   // 0x06B0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxEchologWidgetBase*                               EchoWidget;                                              // 0x06B8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSSubtitles*                                     SubtitlesWidget;                                         // 0x06C0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       CSBucksAmountTextField;                                  // 0x06C8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       MenuTitle;                                               // 0x06D0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSButton*                                        BackButton;                                              // 0x06D8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSButton*                                        HelpButton;                                              // 0x06E0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       CSBucksObject;                                           // 0x06E8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       PlayerIdPanel;                                           // 0x06F0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       PlayerIdText;                                            // 0x06F8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RCHM[0x20];                                  // 0x0700(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnHelpClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		void OnCSBucksAmountChanged(int32_t NewAmount);
		void OnBackClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSLevelButton
	 * Size -> 0x00B8 (FullSize[0x03D0] - InheritedSize[0x0318])
	 */
	class UGFxCSLevelButton : public UGFxCSButton
	{
	public:
		class UGbxTextField*                                       NumLevel;                                                // 0x0318(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       CharacterName;                                           // 0x0320(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       LevelDifficulty;                                         // 0x0328(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       PuzzleCompletedNum;                                      // 0x0330(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       CharacterPicture;                                        // 0x0338(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSProgressBar*                                   ProgressBar;                                             // 0x0340(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       RewardPanel;                                             // 0x0348(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       RewardText;                                              // 0x0350(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       RewardPicture;                                           // 0x0358(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KM1L[0x70];                                  // 0x0360(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSLevelList
	 * Size -> 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
	 */
	class UGFxCSLevelList : public UGbxGFxGridScrollingList
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSLevelSelectorMenu
	 * Size -> 0x0020 (FullSize[0x06C0] - InheritedSize[0x06A0])
	 */
	class UGFxCSLevelSelectorMenu : public UGFxCSSubMenu
	{
	public:
		class UCSLevelData*                                        LevelData;                                               // 0x06A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DelayBeforeLoadingPuzzleMenu;                            // 0x06A8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TAXV[0x4];                                   // 0x06AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGFxCSLevelList*                                     LevelList;                                               // 0x06B0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UIBI[0x8];                                   // 0x06B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLevelItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSMainMenu
	 * Size -> 0x0050 (FullSize[0x06F0] - InheritedSize[0x06A0])
	 */
	class UGFxCSMainMenu : public UGFxCSSubMenu
	{
	public:
		class UGFxCSButton*                                        PlayButton;                                              // 0x06A0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSButton*                                        BuyBoosterButton;                                        // 0x06A8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSButton*                                        WhatsThisButton;                                         // 0x06B0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSButton*                                        QuitButton;                                              // 0x06B8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxButton*                                       HelpButton;                                              // 0x06C0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DidYouKnowTitle;                                         // 0x06C8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DidYouKnowText;                                          // 0x06D0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxDialogBox*                                    SparkAuthenticatingDialog;                               // 0x06D8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B4VK[0x10];                                  // 0x06E0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnWhatsThisClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		void OnPlayClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		void OnErrorDialogClicked(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
		void OnBuyBoosterClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSProgressBar
	 * Size -> 0x0020 (FullSize[0x0190] - InheritedSize[0x0170])
	 */
	class UGFxCSProgressBar : public UGbxGFxObject
	{
	public:
		class UGbxGFxObject*                                       MaskObj;                                                 // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       Marker;                                                  // 0x0178(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EKSC[0x10];                                  // 0x0180(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSPuzzle
	 * Size -> 0x0030 (FullSize[0x01A0] - InheritedSize[0x0170])
	 */
	class UGFxCSPuzzle : public UGbxGFxObject
	{
	public:
		unsigned char                                              UnknownData_GOU5[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGFxCSPuzzleGrid*                                    PuzzleGrid;                                              // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSPuzzleGuide*                                   PuzzleGuide;                                             // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSTokenPool*                                     TokenPool;                                               // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LLP8[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSPuzzleGrid
	 * Size -> 0x0080 (FullSize[0x01F0] - InheritedSize[0x0170])
	 */
	class UGFxCSPuzzleGrid : public UGbxGFxObject
	{
	public:
		unsigned char                                              UnknownData_VEFB[0x18];                                  // 0x0170(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGFxCSTileArray>                             PuzzleTiles;                                             // 0x0188(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGFxCSTileArray>                             GridTiles;                                               // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       GridMask;                                                // 0x01A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSTokenTile*                                     LooseToken;                                              // 0x01B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B9NR[0x38];                                  // 0x01B8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSPuzzleGuide
	 * Size -> 0x0020 (FullSize[0x0190] - InheritedSize[0x0170])
	 */
	class UGFxCSPuzzleGuide : public UGbxGFxObject
	{
	public:
		TArray<struct FGFxCSTileArray>                             GuideTiles;                                              // 0x0170(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TKW3[0x10];                                  // 0x0180(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSPuzzleMenu
	 * Size -> 0x0190 (FullSize[0x0830] - InheritedSize[0x06A0])
	 */
	class UGFxCSPuzzleMenu : public UGFxCSSubMenu
	{
	public:
		unsigned char                                              UnknownData_CKW6[0x10];                                  // 0x06A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnQuit;                                                  // 0x06B0(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2U4W[0x8];                                   // 0x06C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxDialogBox*                                    RequestingPuzzleDialog;                                  // 0x06C8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCSPuzzleFeedbackManager*                            PuzzleFeedbackManager;                                   // 0x06D0(0x0008) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCSPuzzleIntroManager*                               PuzzleIntroManager;                                      // 0x06D8(0x0008) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSPuzzle*                                        Puzzle;                                                  // 0x06E0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       ParScoreContainer;                                       // 0x06E8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       ParScoreText;                                            // 0x06F0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       CurrentScoreContainer;                                   // 0x06F8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       CurrentScoreText;                                        // 0x0700(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       HighScoreContainer;                                      // 0x0708(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       HighScoreText;                                           // 0x0710(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       DebugContainer;                                          // 0x0718(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugCurrentScoreText;                                   // 0x0720(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugRealCurrentScoreText;                               // 0x0728(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugParScoreText;                                       // 0x0730(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugRealParScoreText;                                   // 0x0738(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugHighestScoreText;                                   // 0x0740(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugRealHighestScoreText;                               // 0x0748(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugNbTokenLeftText;                                    // 0x0750(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugMatchingTileValueText;                              // 0x0758(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugPerfectAlignmentModifierText;                       // 0x0760(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugPuzzleId;                                           // 0x0768(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       DebugTokenPos;                                           // 0x0770(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       ParScoreTextFeedback;                                    // 0x0778(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSProgressBar*                                   ProgressBar;                                             // 0x0780(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       ProgressBarBonusScoreContainer;                          // 0x0788(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       ProgressBarBonusScoreText;                               // 0x0790(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxButton*                                       QuitButton;                                              // 0x0798(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxButton*                                       QuickPassButton;                                         // 0x07A0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       QuickPassButtonTxt;                                      // 0x07A8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxButton*                                       SubmitButton;                                            // 0x07B0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       SubmitButtonContainer;                                   // 0x07B8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       ProgressBarContainer;                                    // 0x07C0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       NotificationContainer;                                   // 0x07C8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       NotificationText;                                        // 0x07D0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       BonusScoreContainer;                                     // 0x07D8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       BonusScoreText;                                          // 0x07E0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       NumTokensPanel;                                          // 0x07E8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       NumTokensContainer;                                      // 0x07F0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       NumTokensText;                                           // 0x07F8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       NumTotalTokensText;                                      // 0x0800(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XEMR[0x28];                                  // 0x0808(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnSubmitClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		void OnQuitConfirmed(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
		void OnQuickPassClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		void OnErrorDialogClicked(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
		void OnConfirmQuickPass(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
		void GoToRewardScreenMenu();
		void GoToMainMenu();
		void extTokenTileTurnedOn();
		void extTokenTileTurnedOff();
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSPuzzleTile
	 * Size -> 0x00C0 (FullSize[0x0230] - InheritedSize[0x0170])
	 */
	class UGFxCSPuzzleTile : public UGbxGFxObject
	{
	public:
		unsigned char                                              UnknownData_6BD2[0x40];                                  // 0x0170(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxObject*                                       AnimObject;                                              // 0x01B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IDM7[0x20];                                  // 0x01B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxObject*                                       FocusedFeedback;                                         // 0x01D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGbxTextField*>                               PlayerIds;                                               // 0x01E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X2NW[0x40];                                  // 0x01F0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSGridTile
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UGFxCSGridTile : public UGFxCSPuzzleTile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSGuideTile
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UGFxCSGuideTile : public UGFxCSPuzzleTile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSTokenTile
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UGFxCSTokenTile : public UGFxCSPuzzleTile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSRewardScreenItem
	 * Size -> 0x0020 (FullSize[0x0190] - InheritedSize[0x0170])
	 */
	class UGFxCSRewardScreenItem : public UGbxGFxObject
	{
	public:
		class UGbxTextField*                                       ItemLabel;                                               // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       ItemValue;                                               // 0x0178(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UV42[0x10];                                  // 0x0180(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSRewardScreenMenu
	 * Size -> 0x01F0 (FullSize[0x0890] - InheritedSize[0x06A0])
	 */
	class UGFxCSRewardScreenMenu : public UGFxCSSubMenu
	{
	public:
		unsigned char                                              UnknownData_9I0O[0x4];                                   // 0x06A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProgressBarAnimSpeed;                                    // 0x06A4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DelayBetweenBonuses;                                     // 0x06A8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TextAnimationTime;                                       // 0x06AC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                BaseRewardText;                                          // 0x06B0(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FText                                                ExtraPointText;                                          // 0x06C8(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FText                                                HighScoreMatchedText;                                    // 0x06E0(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FText                                                HighScoreBeatText;                                       // 0x06F8(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FText                                                PioneerText;                                             // 0x0710(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class UCSLevelData*                                        LevelData;                                               // 0x0728(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UGbxTextField>                        PlayerCSBucksAmountText;                                 // 0x0730(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       PuzzleCompletedTextPanel;                                // 0x0738(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       MainContentPanel;                                        // 0x0740(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       ProgressTextPanel;                                       // 0x0748(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       NumCompletedPuzzleTextPanel;                             // 0x0750(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       NumCompletedPuzzleText;                                  // 0x0758(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxTextField*                                       NumTargetPuzzleText;                                     // 0x0760(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSProgressBar*                                   ProgressBar;                                             // 0x0768(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       NewCustomizationAnimText;                                // 0x0770(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       AnimRewardPanel;                                         // 0x0778(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       CharacterPicture;                                        // 0x0780(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       CustomizationPicture;                                    // 0x0788(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSRewardScreenItem*                              PuzzleRewardItem;                                        // 0x0790(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxCSRewardScreenItem*                              TotalPuzzleRewardItem;                                   // 0x0798(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGFxCSRewardScreenItem*>                      BonusItems;                                              // 0x07A0(0x0010) BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UGbxGFxGridScrollingList*                            ButtonList;                                              // 0x07B0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3PZ5[0xD8];                                  // 0x07B8(0x00D8) MISSED OFFSET (PADDING)

	public:
		void OnPlayNextCharacterClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		void OnPlayAgainClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		void OnMainMenuButtonClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
		void GoToPuzzleMenu();
		void GoToMainMenu();
		void extRefreshNumCompletedPuzzle();
		void extPuzzleCompletedTextAnimDone();
		void extOnShowPuzzleRewardDone();
		void extOnShowBonusDone();
		void extNumCompletedPuzzleAnimDone();
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSStartScreen
	 * Size -> 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
	 */
	class UGFxCSStartScreen : public UGbxGFxMenu
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSSubtitles
	 * Size -> 0x00B0 (FullSize[0x0220] - InheritedSize[0x0170])
	 */
	class UGFxCSSubtitles : public UGbxGFxObject
	{
	public:
		float                                                      ClosedCaptionLifetime;                                   // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxTextScalingForLargestBackground;                      // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<float>                                              SubtitleBackgroundSizeMapping;                           // 0x0178(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_00AT[0x18];                                  // 0x0188(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxTextField*                                       SubtitleField;                                           // 0x01A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGFxObject*                                       SubtitleBackground;                                      // 0x01A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESubtitleLayoutType                                        CurrentSubtitleLayoutType;                               // 0x01B0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J1M1[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxGFxObject*                                       ClosedCaptioningContainer;                               // 0x01B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FClosedCaptionEntry>                         ClosedCaptioningLines;                                   // 0x01C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FSubtitleLine>                               SubtitleLines;                                           // 0x01D0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KZYC[0x8];                                   // 0x01E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    CurrentSubtitleID;                                       // 0x01E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopAfterCurrentSubtitle;                               // 0x01F0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSubtitleChangePending;                                  // 0x01F1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PWLK[0x2];                                   // 0x01F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SubtitleLifetime;                                        // 0x01F4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7LCD[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CachedSubtitle;                                          // 0x0200(0x0018) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5WX3[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSTokenPool
	 * Size -> 0x0030 (FullSize[0x01A0] - InheritedSize[0x0170])
	 */
	class UGFxCSTokenPool : public UGbxGFxObject
	{
	public:
		class UGbxGFxObject*                                       TokenPoolMask;                                           // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGFxCSTokenTile*>                             TokenTiles;                                              // 0x0178(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UGFxCSGridTile*>                              GridTiles;                                               // 0x0188(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ALZA[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.GFxCSWhatsThisMenu
	 * Size -> 0x0080 (FullSize[0x0720] - InheritedSize[0x06A0])
	 */
	class UGFxCSWhatsThisMenu : public UGFxCSSubMenu
	{
	public:
		class UGbxLevelSequence*                                   MovieSequencer;                                          // 0x06A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MediaMaterial;                                           // 0x06A8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialName;                                            // 0x06B0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FadeName;                                                // 0x06B8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParticleSystemName;                                      // 0x06C0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ScreenParticle;                                          // 0x06C8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleDepth;                                           // 0x06D0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeTime;                                                // 0x06D4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         StartAudioSetupForMovieEvent;                            // 0x06D8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         StopAudioSetupForMovieEvent;                             // 0x06E0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScreenParticleManagerComponent*                     ScreenParticleManagerComponent;                          // 0x06E8(0x0008) ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequencePlayer*                                MovieSequencePlayer;                                     // 0x06F0(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ALevelSequenceActor*                                 MovieSequenceActor;                                      // 0x06F8(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZ3J[0x20];                                  // 0x0700(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnMovieMediaOpenFailed(const class FString& FailedUrl);
		void OnMovieMediaOpened();
		void OnMovieEndReached();
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.OakCitizenScienceManager
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UOakCitizenScienceManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_GQ4T[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCSPuzzleSession*                                    CurrentPuzzleSession;                                    // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCSGlobals*                                          CSGlobals;                                               // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3EA8[0x40];                                  // 0x00B8(0x0040) MISSED OFFSET (PADDING)

	public:
		class UOakCitizenScienceManager* STATIC_GetCitizenScienceManager();
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.TutorialPuzzle
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UTutorialPuzzle : public UObject
	{
	public:
		unsigned char                                              UnknownData_GQ8R[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PuzzleLines;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PuzzleGuides;                                            // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfTokens;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoringMatchingTile;                                     // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScoringPerfectAlignment;                                 // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoringParScore;                                         // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoringBestScore;                                        // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD0V[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnTutorialStart();
		void OnTutorialEnd();
		class UWorld* GetTutorialWorld();
		static UClass* StaticClass();
	};

	/**
	 * Class OakCS.CSGlobals
	 * Size -> 0x01C0 (FullSize[0x01F0] - InheritedSize[0x0030])
	 */
	class UCSGlobals : public UGbxDataAsset
	{
	public:
		class UInventoryCategoryData*                              CSBucksInventoryType;                                    // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UOakCustomizationData*>                       SkinRewards;                                             // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UOakCustomizationData*>                       HeadRewards;                                             // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    HighScoreMatchedModifier;                                // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HighScoreBeatenModifier;                                 // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDebugPuzzle>                                DebugPuzzles;                                            // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      TutorialPuzzle;                                          // 0x0070(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UCSLevelData*                                        LevelData;                                               // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoosterData*                                        BoosterData;                                             // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ShiftAccountRequiredTitle;                               // 0x0090(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                ShiftAccountRequiredText;                                // 0x00A8(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                SubmitPuzzleErrorTitle;                                  // 0x00C0(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                SubmitPuzzleErrorText;                                   // 0x00D8(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                GetPuzzleErrorTitle;                                     // 0x00F0(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                GetPuzzleErrorText;                                      // 0x0108(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                BuyBoosterMessageTitle;                                  // 0x0120(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                BuyBoosterMessageText;                                   // 0x0138(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                OverrideBoosterMessageTitle;                             // 0x0150(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                OverrideBoosterMessageText;                              // 0x0168(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                QuitPuzzleMessageTitle;                                  // 0x0180(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                QuitPuzzleMessageBody;                                   // 0x0198(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                QuickPassMessageTitle;                                   // 0x01B0(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                QuickPassMessageText;                                    // 0x01C8(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FText>                                        DidYouKnowMessages;                                      // 0x01E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
