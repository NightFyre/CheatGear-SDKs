#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OakCS.CSConsoleProxy.OnUnderParScoreReached
	 */
	struct ACSConsoleProxy_OnUnderParScoreReached_Params
	{	};

	/**
	 * Function OakCS.CSConsoleProxy.OnSumbitPuzzleSolution
	 */
	struct ACSConsoleProxy_OnSumbitPuzzleSolution_Params
	{
	public:
		bool                                                       bIsOptimal;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.CSConsoleProxy.OnQuitCitizenScienceArcade
	 */
	struct ACSConsoleProxy_OnQuitCitizenScienceArcade_Params
	{	};

	/**
	 * Function OakCS.CSConsoleProxy.OnParScoreReached
	 */
	struct ACSConsoleProxy_OnParScoreReached_Params
	{	};

	/**
	 * Function OakCS.CSConsoleProxy.OnOptimalScoreReached
	 */
	struct ACSConsoleProxy_OnOptimalScoreReached_Params
	{	};

	/**
	 * Function OakCS.CSConsoleProxy.OnFirstPuzzleOfCurrentDifficulty
	 */
	struct ACSConsoleProxy_OnFirstPuzzleOfCurrentDifficulty_Params
	{	};

	/**
	 * Function OakCS.CSConsoleProxy.OnEnterPuzzle
	 */
	struct ACSConsoleProxy_OnEnterPuzzle_Params
	{	};

	/**
	 * Function OakCS.CSConsoleProxy.OnDifficultyLevelCompleted
	 */
	struct ACSConsoleProxy_OnDifficultyLevelCompleted_Params
	{	};

	/**
	 * Function OakCS.CSTutorialBPLib.UnblockCSPuzzleIntro
	 */
	struct UCSTutorialBPLib_UnblockCSPuzzleIntro_Params
	{	};

	/**
	 * Function OakCS.CSTutorialBPLib.UnblockCSPuzzleInputs
	 */
	struct UCSTutorialBPLib_UnblockCSPuzzleInputs_Params
	{	};

	/**
	 * Function OakCS.CSTutorialBPLib.StopHighlightCSTutorialElement
	 */
	struct UCSTutorialBPLib_StopHighlightCSTutorialElement_Params
	{
	public:
		ECSTutorialElement                                         TutorialElement;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.CSTutorialBPLib.ShowCSTutorialTooltip
	 */
	struct UCSTutorialBPLib_ShowCSTutorialTooltip_Params
	{
	public:
		class FString                                              Tooltip;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.CSTutorialBPLib.ShowCSTutorialElement
	 */
	struct UCSTutorialBPLib_ShowCSTutorialElement_Params
	{
	public:
		ECSTutorialElement                                         TutorialElement;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.CSTutorialBPLib.HighlightCSTutorialElement
	 */
	struct UCSTutorialBPLib_HighlightCSTutorialElement_Params
	{
	public:
		ECSTutorialElement                                         TutorialElement;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.CSTutorialBPLib.HideCSTutorialTooltip
	 */
	struct UCSTutorialBPLib_HideCSTutorialTooltip_Params
	{
	public:
		class FString                                              Tooltip;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.CSTutorialBPLib.HideCSTutorialElement
	 */
	struct UCSTutorialBPLib_HideCSTutorialElement_Params
	{
	public:
		ECSTutorialElement                                         TutorialElement;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.CSTutorialBPLib.CSWaitForScore
	 */
	struct UCSTutorialBPLib_CSWaitForScore_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECSScoreCondition                                          ScoreCondition;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_04WQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.CSTutorialBPLib.BlockCSPuzzleIntro
	 */
	struct UCSTutorialBPLib_BlockCSPuzzleIntro_Params
	{	};

	/**
	 * Function OakCS.CSTutorialBPLib.BlockCSPuzzleInputs
	 */
	struct UCSTutorialBPLib_BlockCSPuzzleInputs_Params
	{	};

	/**
	 * Function OakCS.GFxCSButton.OnInputDeviceChanged
	 */
	struct UGFxCSButton_OnInputDeviceChanged_Params
	{
	public:
		EGbxMenuInputDevice                                        NewInputDevice;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSBoosterShopMenu.OnCSBucksAmountChanged
	 */
	struct UGFxCSBoosterShopMenu_OnCSBucksAmountChanged_Params
	{
	public:
		int32_t                                                    NewAmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSBoosterShopMenu.OnConfirmPurchase
	 */
	struct UGFxCSBoosterShopMenu_OnConfirmPurchase_Params
	{
	public:
		class UGbxGFxDialogBox*                                    SourceDialog;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChoiceNameId;                                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSBoosterShopMenu.OnBoosterItemClicked
	 */
	struct UGFxCSBoosterShopMenu_OnBoosterItemClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSHelpMenu.OnCloseClicked
	 */
	struct UGFxCSHelpMenu_OnCloseClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSHUD.OnHelpClicked
	 */
	struct UGFxCSHUD_OnHelpClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSHUD.OnCSBucksAmountChanged
	 */
	struct UGFxCSHUD_OnCSBucksAmountChanged_Params
	{
	public:
		int32_t                                                    NewAmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSHUD.OnBackClicked
	 */
	struct UGFxCSHUD_OnBackClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSLevelSelectorMenu.OnLevelItemClicked
	 */
	struct UGFxCSLevelSelectorMenu_OnLevelItemClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSMainMenu.OnWhatsThisClicked
	 */
	struct UGFxCSMainMenu_OnWhatsThisClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSMainMenu.OnPlayClicked
	 */
	struct UGFxCSMainMenu_OnPlayClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSMainMenu.OnErrorDialogClicked
	 */
	struct UGFxCSMainMenu_OnErrorDialogClicked_Params
	{
	public:
		class UGbxGFxDialogBox*                                    SourceDialog;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChoiceNameId;                                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSMainMenu.OnBuyBoosterClicked
	 */
	struct UGFxCSMainMenu_OnBuyBoosterClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSPuzzleMenu.OnSubmitClicked
	 */
	struct UGFxCSPuzzleMenu_OnSubmitClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSPuzzleMenu.OnQuitConfirmed
	 */
	struct UGFxCSPuzzleMenu_OnQuitConfirmed_Params
	{
	public:
		class UGbxGFxDialogBox*                                    SourceDialog;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChoiceNameId;                                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSPuzzleMenu.OnQuickPassClicked
	 */
	struct UGFxCSPuzzleMenu_OnQuickPassClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSPuzzleMenu.OnErrorDialogClicked
	 */
	struct UGFxCSPuzzleMenu_OnErrorDialogClicked_Params
	{
	public:
		class UGbxGFxDialogBox*                                    SourceDialog;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChoiceNameId;                                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSPuzzleMenu.OnConfirmQuickPass
	 */
	struct UGFxCSPuzzleMenu_OnConfirmQuickPass_Params
	{
	public:
		class UGbxGFxDialogBox*                                    SourceDialog;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChoiceNameId;                                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSPuzzleMenu.GoToRewardScreenMenu
	 */
	struct UGFxCSPuzzleMenu_GoToRewardScreenMenu_Params
	{	};

	/**
	 * Function OakCS.GFxCSPuzzleMenu.GoToMainMenu
	 */
	struct UGFxCSPuzzleMenu_GoToMainMenu_Params
	{	};

	/**
	 * Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOn
	 */
	struct UGFxCSPuzzleMenu_extTokenTileTurnedOn_Params
	{	};

	/**
	 * Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOff
	 */
	struct UGFxCSPuzzleMenu_extTokenTileTurnedOff_Params
	{	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.OnPlayNextCharacterClicked
	 */
	struct UGFxCSRewardScreenMenu_OnPlayNextCharacterClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.OnPlayAgainClicked
	 */
	struct UGFxCSRewardScreenMenu_OnPlayAgainClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.OnMainMenuButtonClicked
	 */
	struct UGFxCSRewardScreenMenu_OnMainMenuButtonClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.GoToPuzzleMenu
	 */
	struct UGFxCSRewardScreenMenu_GoToPuzzleMenu_Params
	{	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.GoToMainMenu
	 */
	struct UGFxCSRewardScreenMenu_GoToMainMenu_Params
	{	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.extRefreshNumCompletedPuzzle
	 */
	struct UGFxCSRewardScreenMenu_extRefreshNumCompletedPuzzle_Params
	{	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.extPuzzleCompletedTextAnimDone
	 */
	struct UGFxCSRewardScreenMenu_extPuzzleCompletedTextAnimDone_Params
	{	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.extOnShowPuzzleRewardDone
	 */
	struct UGFxCSRewardScreenMenu_extOnShowPuzzleRewardDone_Params
	{	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.extOnShowBonusDone
	 */
	struct UGFxCSRewardScreenMenu_extOnShowBonusDone_Params
	{	};

	/**
	 * Function OakCS.GFxCSRewardScreenMenu.extNumCompletedPuzzleAnimDone
	 */
	struct UGFxCSRewardScreenMenu_extNumCompletedPuzzleAnimDone_Params
	{	};

	/**
	 * Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpenFailed
	 */
	struct UGFxCSWhatsThisMenu_OnMovieMediaOpenFailed_Params
	{
	public:
		class FString                                              FailedUrl;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpened
	 */
	struct UGFxCSWhatsThisMenu_OnMovieMediaOpened_Params
	{	};

	/**
	 * Function OakCS.GFxCSWhatsThisMenu.OnMovieEndReached
	 */
	struct UGFxCSWhatsThisMenu_OnMovieEndReached_Params
	{	};

	/**
	 * Function OakCS.OakCitizenScienceManager.GetCitizenScienceManager
	 */
	struct UOakCitizenScienceManager_GetCitizenScienceManager_Params
	{
	public:
		class UOakCitizenScienceManager*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OakCS.TutorialPuzzle.OnTutorialStart
	 */
	struct UTutorialPuzzle_OnTutorialStart_Params
	{	};

	/**
	 * Function OakCS.TutorialPuzzle.OnTutorialEnd
	 */
	struct UTutorialPuzzle_OnTutorialEnd_Params
	{	};

	/**
	 * Function OakCS.TutorialPuzzle.GetTutorialWorld
	 */
	struct UTutorialPuzzle_GetTutorialWorld_Params
	{
	public:
		class UWorld*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
