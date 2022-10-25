/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSActionInsertToken.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSActionInsertToken::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSActionInsertToken");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSActionRemoveToken.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSActionRemoveToken::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSActionRemoveToken");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSActionSwapTileAndToken.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSActionSwapTileAndToken::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSActionSwapTileAndToken");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACSConsole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACSConsole::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSConsole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.CSConsoleProxy.OnUnderParScoreReached
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACSConsoleProxy::OnUnderParScoreReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnUnderParScoreReached");
		
		ACSConsoleProxy_OnUnderParScoreReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.CSConsoleProxy.OnSumbitPuzzleSolution
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOptimal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACSConsoleProxy::OnSumbitPuzzleSolution(bool bIsOptimal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnSumbitPuzzleSolution");
		
		ACSConsoleProxy_OnSumbitPuzzleSolution_Params params {};
		params.bIsOptimal = bIsOptimal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.CSConsoleProxy.OnQuitCitizenScienceArcade
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACSConsoleProxy::OnQuitCitizenScienceArcade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnQuitCitizenScienceArcade");
		
		ACSConsoleProxy_OnQuitCitizenScienceArcade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.CSConsoleProxy.OnParScoreReached
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACSConsoleProxy::OnParScoreReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnParScoreReached");
		
		ACSConsoleProxy_OnParScoreReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.CSConsoleProxy.OnOptimalScoreReached
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACSConsoleProxy::OnOptimalScoreReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnOptimalScoreReached");
		
		ACSConsoleProxy_OnOptimalScoreReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.CSConsoleProxy.OnFirstPuzzleOfCurrentDifficulty
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACSConsoleProxy::OnFirstPuzzleOfCurrentDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnFirstPuzzleOfCurrentDifficulty");
		
		ACSConsoleProxy_OnFirstPuzzleOfCurrentDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.CSConsoleProxy.OnEnterPuzzle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACSConsoleProxy::OnEnterPuzzle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnEnterPuzzle");
		
		ACSConsoleProxy_OnEnterPuzzle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.CSConsoleProxy.OnDifficultyLevelCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACSConsoleProxy::OnDifficultyLevelCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnDifficultyLevelCompleted");
		
		ACSConsoleProxy_OnDifficultyLevelCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACSConsoleProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACSConsoleProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSConsoleProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSLevelData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSLevelData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSLevelData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSPuzzleFeedbackManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSPuzzleFeedbackManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSPuzzleFeedbackManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSPuzzleIntroManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSPuzzleIntroManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSPuzzleIntroManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSPuzzleSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSPuzzleSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSPuzzleSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01586220
	 * 		Name   -> Function OakCS.CSTutorialBPLib.UnblockCSPuzzleIntro
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UCSTutorialBPLib::STATIC_UnblockCSPuzzleIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.UnblockCSPuzzleIntro");
		
		UCSTutorialBPLib_UnblockCSPuzzleIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01586200
	 * 		Name   -> Function OakCS.CSTutorialBPLib.UnblockCSPuzzleInputs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UCSTutorialBPLib::STATIC_UnblockCSPuzzleInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.UnblockCSPuzzleInputs");
		
		UCSTutorialBPLib_UnblockCSPuzzleInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01586190
	 * 		Name   -> Function OakCS.CSTutorialBPLib.StopHighlightCSTutorialElement
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECSTutorialElement                                 TutorialElement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCSTutorialBPLib::STATIC_StopHighlightCSTutorialElement(ECSTutorialElement TutorialElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.StopHighlightCSTutorialElement");
		
		UCSTutorialBPLib_StopHighlightCSTutorialElement_Params params {};
		params.TutorialElement = TutorialElement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015860C0
	 * 		Name   -> Function OakCS.CSTutorialBPLib.ShowCSTutorialTooltip
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Tooltip                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCSTutorialBPLib::STATIC_ShowCSTutorialTooltip(const class FString& Tooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.ShowCSTutorialTooltip");
		
		UCSTutorialBPLib_ShowCSTutorialTooltip_Params params {};
		params.Tooltip = Tooltip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01586050
	 * 		Name   -> Function OakCS.CSTutorialBPLib.ShowCSTutorialElement
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECSTutorialElement                                 TutorialElement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCSTutorialBPLib::STATIC_ShowCSTutorialElement(ECSTutorialElement TutorialElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.ShowCSTutorialElement");
		
		UCSTutorialBPLib_ShowCSTutorialElement_Params params {};
		params.TutorialElement = TutorialElement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584460
	 * 		Name   -> Function OakCS.CSTutorialBPLib.HighlightCSTutorialElement
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECSTutorialElement                                 TutorialElement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCSTutorialBPLib::STATIC_HighlightCSTutorialElement(ECSTutorialElement TutorialElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.HighlightCSTutorialElement");
		
		UCSTutorialBPLib_HighlightCSTutorialElement_Params params {};
		params.TutorialElement = TutorialElement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584390
	 * 		Name   -> Function OakCS.CSTutorialBPLib.HideCSTutorialTooltip
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Tooltip                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCSTutorialBPLib::STATIC_HideCSTutorialTooltip(const class FString& Tooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.HideCSTutorialTooltip");
		
		UCSTutorialBPLib_HideCSTutorialTooltip_Params params {};
		params.Tooltip = Tooltip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584320
	 * 		Name   -> Function OakCS.CSTutorialBPLib.HideCSTutorialElement
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECSTutorialElement                                 TutorialElement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCSTutorialBPLib::STATIC_HideCSTutorialElement(ECSTutorialElement TutorialElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.HideCSTutorialElement");
		
		UCSTutorialBPLib_HideCSTutorialElement_Params params {};
		params.TutorialElement = TutorialElement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584130
	 * 		Name   -> Function OakCS.CSTutorialBPLib.CSWaitForScore
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECSScoreCondition                                  ScoreCondition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCSTutorialBPLib::STATIC_CSWaitForScore(class UWorld* World, ECSScoreCondition ScoreCondition, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.CSWaitForScore");
		
		UCSTutorialBPLib_CSWaitForScore_Params params {};
		params.World = World;
		params.ScoreCondition = ScoreCondition;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584110
	 * 		Name   -> Function OakCS.CSTutorialBPLib.BlockCSPuzzleIntro
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UCSTutorialBPLib::STATIC_BlockCSPuzzleIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.BlockCSPuzzleIntro");
		
		UCSTutorialBPLib_BlockCSPuzzleIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015840F0
	 * 		Name   -> Function OakCS.CSTutorialBPLib.BlockCSPuzzleInputs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UCSTutorialBPLib::STATIC_BlockCSPuzzleInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.BlockCSPuzzleInputs");
		
		UCSTutorialBPLib_BlockCSPuzzleInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSTutorialBPLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSTutorialBPLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSTutorialBPLib");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015852A0
	 * 		Name   -> Function OakCS.GFxCSButton.OnInputDeviceChanged
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EGbxMenuInputDevice                                NewInputDevice                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxCSButton::OnInputDeviceChanged(EGbxMenuInputDevice NewInputDevice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSButton.OnInputDeviceChanged");
		
		UGFxCSButton_OnInputDeviceChanged_Params params {};
		params.NewInputDevice = NewInputDevice;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSBoosterItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSBoosterItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSBoosterItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSSubMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSSubMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSSubMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015848C0
	 * 		Name   -> Function OakCS.GFxCSBoosterShopMenu.OnCSBucksAmountChanged
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		int32_t                                            NewAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxCSBoosterShopMenu::OnCSBucksAmountChanged(int32_t NewAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSBoosterShopMenu.OnCSBucksAmountChanged");
		
		UGFxCSBoosterShopMenu_OnCSBucksAmountChanged_Params params {};
		params.NewAmount = NewAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584B10
	 * 		Name   -> Function OakCS.GFxCSBoosterShopMenu.OnConfirmPurchase
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxDialogBox*                            SourceDialog                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChoiceNameId                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSBoosterShopMenu::OnConfirmPurchase(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSBoosterShopMenu.OnConfirmPurchase");
		
		UGFxCSBoosterShopMenu_OnConfirmPurchase_Params params {};
		params.SourceDialog = SourceDialog;
		params.ChoiceNameId = ChoiceNameId;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584620
	 * 		Name   -> Function OakCS.GFxCSBoosterShopMenu.OnBoosterItemClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSBoosterShopMenu::OnBoosterItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSBoosterShopMenu.OnBoosterItemClicked");
		
		UGFxCSBoosterShopMenu_OnBoosterItemClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSBoosterShopMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSBoosterShopMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSBoosterShopMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015849C0
	 * 		Name   -> Function OakCS.GFxCSHelpMenu.OnCloseClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSHelpMenu::OnCloseClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSHelpMenu.OnCloseClicked");
		
		UGFxCSHelpMenu_OnCloseClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSHelpMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSHelpMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSHelpMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01585150
	 * 		Name   -> Function OakCS.GFxCSHUD.OnHelpClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSHUD::OnHelpClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSHUD.OnHelpClicked");
		
		UGFxCSHUD_OnHelpClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584940
	 * 		Name   -> Function OakCS.GFxCSHUD.OnCSBucksAmountChanged
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		int32_t                                            NewAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxCSHUD::OnCSBucksAmountChanged(int32_t NewAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSHUD.OnCSBucksAmountChanged");
		
		UGFxCSHUD_OnCSBucksAmountChanged_Params params {};
		params.NewAmount = NewAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015844D0
	 * 		Name   -> Function OakCS.GFxCSHUD.OnBackClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSHUD::OnBackClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSHUD.OnBackClicked");
		
		UGFxCSHUD_OnBackClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSLevelButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSLevelButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSLevelButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSLevelList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSLevelList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSLevelList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01585320
	 * 		Name   -> Function OakCS.GFxCSLevelSelectorMenu.OnLevelItemClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSLevelSelectorMenu::OnLevelItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSLevelSelectorMenu.OnLevelItemClicked");
		
		UGFxCSLevelSelectorMenu_OnLevelItemClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSLevelSelectorMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSLevelSelectorMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSLevelSelectorMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01585F00
	 * 		Name   -> Function OakCS.GFxCSMainMenu.OnWhatsThisClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSMainMenu::OnWhatsThisClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSMainMenu.OnWhatsThisClicked");
		
		UGFxCSMainMenu_OnWhatsThisClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01585830
	 * 		Name   -> Function OakCS.GFxCSMainMenu.OnPlayClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSMainMenu::OnPlayClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSMainMenu.OnPlayClicked");
		
		UGFxCSMainMenu_OnPlayClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584E30
	 * 		Name   -> Function OakCS.GFxCSMainMenu.OnErrorDialogClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxDialogBox*                            SourceDialog                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChoiceNameId                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSMainMenu::OnErrorDialogClicked(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSMainMenu.OnErrorDialogClicked");
		
		UGFxCSMainMenu_OnErrorDialogClicked_Params params {};
		params.SourceDialog = SourceDialog;
		params.ChoiceNameId = ChoiceNameId;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584770
	 * 		Name   -> Function OakCS.GFxCSMainMenu.OnBuyBoosterClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSMainMenu::OnBuyBoosterClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSMainMenu.OnBuyBoosterClicked");
		
		UGFxCSMainMenu_OnBuyBoosterClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSMainMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSMainMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSMainMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSProgressBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSProgressBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSPuzzle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSPuzzle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSPuzzle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSPuzzleGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSPuzzleGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSPuzzleGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSPuzzleGuide.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSPuzzleGuide::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSPuzzleGuide");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01585DB0
	 * 		Name   -> Function OakCS.GFxCSPuzzleMenu.OnSubmitClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSPuzzleMenu::OnSubmitClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnSubmitClicked");
		
		UGFxCSPuzzleMenu_OnSubmitClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01585C20
	 * 		Name   -> Function OakCS.GFxCSPuzzleMenu.OnQuitConfirmed
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxDialogBox*                            SourceDialog                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChoiceNameId                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSPuzzleMenu::OnQuitConfirmed(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnQuitConfirmed");
		
		UGFxCSPuzzleMenu_OnQuitConfirmed_Params params {};
		params.SourceDialog = SourceDialog;
		params.ChoiceNameId = ChoiceNameId;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01585AD0
	 * 		Name   -> Function OakCS.GFxCSPuzzleMenu.OnQuickPassClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSPuzzleMenu::OnQuickPassClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnQuickPassClicked");
		
		UGFxCSPuzzleMenu_OnQuickPassClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584FC0
	 * 		Name   -> Function OakCS.GFxCSPuzzleMenu.OnErrorDialogClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxDialogBox*                            SourceDialog                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChoiceNameId                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSPuzzleMenu::OnErrorDialogClicked(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnErrorDialogClicked");
		
		UGFxCSPuzzleMenu_OnErrorDialogClicked_Params params {};
		params.SourceDialog = SourceDialog;
		params.ChoiceNameId = ChoiceNameId;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584CA0
	 * 		Name   -> Function OakCS.GFxCSPuzzleMenu.OnConfirmQuickPass
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxDialogBox*                            SourceDialog                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChoiceNameId                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSPuzzleMenu::OnConfirmQuickPass(class UGbxGFxDialogBox* SourceDialog, const class FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnConfirmQuickPass");
		
		UGFxCSPuzzleMenu_OnConfirmQuickPass_Params params {};
		params.SourceDialog = SourceDialog;
		params.ChoiceNameId = ChoiceNameId;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584300
	 * 		Name   -> Function OakCS.GFxCSPuzzleMenu.GoToRewardScreenMenu
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSPuzzleMenu::GoToRewardScreenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.GoToRewardScreenMenu");
		
		UGFxCSPuzzleMenu_GoToRewardScreenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015842A0
	 * 		Name   -> Function OakCS.GFxCSPuzzleMenu.GoToMainMenu
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSPuzzleMenu::GoToMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.GoToMainMenu");
		
		UGFxCSPuzzleMenu_GoToMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01586300
	 * 		Name   -> Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOn
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSPuzzleMenu::extTokenTileTurnedOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOn");
		
		UGFxCSPuzzleMenu_extTokenTileTurnedOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015862E0
	 * 		Name   -> Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOff
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSPuzzleMenu::extTokenTileTurnedOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOff");
		
		UGFxCSPuzzleMenu_extTokenTileTurnedOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSPuzzleMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSPuzzleMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSPuzzleMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSPuzzleTile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSPuzzleTile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSPuzzleTile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSGridTile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSGridTile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSGridTile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSGuideTile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSGuideTile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSGuideTile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSTokenTile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSTokenTile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSTokenTile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSRewardScreenItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSRewardScreenItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSRewardScreenItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01585980
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.OnPlayNextCharacterClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSRewardScreenMenu::OnPlayNextCharacterClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.OnPlayNextCharacterClicked");
		
		UGFxCSRewardScreenMenu_OnPlayNextCharacterClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015856E0
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.OnPlayAgainClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSRewardScreenMenu::OnPlayAgainClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.OnPlayAgainClicked");
		
		UGFxCSRewardScreenMenu_OnPlayAgainClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01585470
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.OnMainMenuButtonClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxCSRewardScreenMenu::OnMainMenuButtonClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.OnMainMenuButtonClicked");
		
		UGFxCSRewardScreenMenu_OnMainMenuButtonClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015842E0
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.GoToPuzzleMenu
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSRewardScreenMenu::GoToPuzzleMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.GoToPuzzleMenu");
		
		UGFxCSRewardScreenMenu_GoToPuzzleMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015842C0
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.GoToMainMenu
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSRewardScreenMenu::GoToMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.GoToMainMenu");
		
		UGFxCSRewardScreenMenu_GoToMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015862C0
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.extRefreshNumCompletedPuzzle
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSRewardScreenMenu::extRefreshNumCompletedPuzzle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extRefreshNumCompletedPuzzle");
		
		UGFxCSRewardScreenMenu_extRefreshNumCompletedPuzzle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015862A0
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.extPuzzleCompletedTextAnimDone
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSRewardScreenMenu::extPuzzleCompletedTextAnimDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extPuzzleCompletedTextAnimDone");
		
		UGFxCSRewardScreenMenu_extPuzzleCompletedTextAnimDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01586280
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.extOnShowPuzzleRewardDone
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSRewardScreenMenu::extOnShowPuzzleRewardDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extOnShowPuzzleRewardDone");
		
		UGFxCSRewardScreenMenu_extOnShowPuzzleRewardDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01586260
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.extOnShowBonusDone
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSRewardScreenMenu::extOnShowBonusDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extOnShowBonusDone");
		
		UGFxCSRewardScreenMenu_extOnShowBonusDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01586240
	 * 		Name   -> Function OakCS.GFxCSRewardScreenMenu.extNumCompletedPuzzleAnimDone
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UGFxCSRewardScreenMenu::extNumCompletedPuzzleAnimDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extNumCompletedPuzzleAnimDone");
		
		UGFxCSRewardScreenMenu_extNumCompletedPuzzleAnimDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSRewardScreenMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSRewardScreenMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSRewardScreenMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSStartScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSStartScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSStartScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSSubtitles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSSubtitles::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSSubtitles");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSTokenPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSTokenPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSTokenPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015855E0
	 * 		Name   -> Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpenFailed
	 * 		Flags  -> (Final, Native, Protected, Const)
	 * Parameters:
	 * 		class FString                                      FailedUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxCSWhatsThisMenu::OnMovieMediaOpenFailed(const class FString& FailedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpenFailed");
		
		UGFxCSWhatsThisMenu_OnMovieMediaOpenFailed_Params params {};
		params.FailedUrl = FailedUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015856C0
	 * 		Name   -> Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpened
	 * 		Flags  -> (Final, Native, Protected, Const)
	 */
	void UGFxCSWhatsThisMenu::OnMovieMediaOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpened");
		
		UGFxCSWhatsThisMenu_OnMovieMediaOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015855C0
	 * 		Name   -> Function OakCS.GFxCSWhatsThisMenu.OnMovieEndReached
	 * 		Flags  -> (Final, Native, Protected, Const)
	 */
	void UGFxCSWhatsThisMenu::OnMovieEndReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSWhatsThisMenu.OnMovieEndReached");
		
		UGFxCSWhatsThisMenu_OnMovieEndReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCSWhatsThisMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCSWhatsThisMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.GFxCSWhatsThisMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584250
	 * 		Name   -> Function OakCS.OakCitizenScienceManager.GetCitizenScienceManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UOakCitizenScienceManager* UOakCitizenScienceManager::STATIC_GetCitizenScienceManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.OakCitizenScienceManager.GetCitizenScienceManager");
		
		UOakCitizenScienceManager_GetCitizenScienceManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakCitizenScienceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakCitizenScienceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.OakCitizenScienceManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.TutorialPuzzle.OnTutorialStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTutorialPuzzle::OnTutorialStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.TutorialPuzzle.OnTutorialStart");
		
		UTutorialPuzzle_OnTutorialStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCS.TutorialPuzzle.OnTutorialEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTutorialPuzzle::OnTutorialEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.TutorialPuzzle.OnTutorialEnd");
		
		UTutorialPuzzle_OnTutorialEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01584280
	 * 		Name   -> Function OakCS.TutorialPuzzle.GetTutorialWorld
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UWorld* UTutorialPuzzle::GetTutorialWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCS.TutorialPuzzle.GetTutorialWorld");
		
		UTutorialPuzzle_GetTutorialWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialPuzzle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialPuzzle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.TutorialPuzzle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGlobals.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGlobals::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakCS.CSGlobals");
		return ptr;
	}

}


