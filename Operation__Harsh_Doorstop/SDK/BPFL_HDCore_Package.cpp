/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetPackageShortName
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      LongName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ShortName                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetPackageShortName(class FString* LongName, class UObject* __WorldContext, bool* bSuccess, class FString* ShortName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetPackageShortName");
		
		UBPFL_HDCore_C_GetPackageShortName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LongName != nullptr)
			*LongName = params.LongName;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (ShortName != nullptr)
			*ShortName = params.ShortName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetPluginDisplayNameFromPath
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      AssetPath                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ModName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetPluginDisplayNameFromPath(class FString* AssetPath, class UObject* __WorldContext, class FString* ModName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetPluginDisplayNameFromPath");
		
		UBPFL_HDCore_C_GetPluginDisplayNameFromPath_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetPath != nullptr)
			*AssetPath = params.AssetPath;
		if (ModName != nullptr)
			*ModName = params.ModName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetContentRootFromPackageName
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      PackageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ContentRootName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetContentRootFromPackageName(class FString* PackageName, class UObject* __WorldContext, bool* bSuccess, class FString* ContentRootName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetContentRootFromPackageName");
		
		UBPFL_HDCore_C_GetContentRootFromPackageName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PackageName != nullptr)
			*PackageName = params.PackageName;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (ContentRootName != nullptr)
			*ContentRootName = params.ContentRootName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetContentRootPathFromPackageName
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      PackageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ContentRootPath                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetContentRootPathFromPackageName(class FString* PackageName, class UObject* __WorldContext, bool* bSuccess, class FString* ContentRootPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetContentRootPathFromPackageName");
		
		UBPFL_HDCore_C_GetContentRootPathFromPackageName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PackageName != nullptr)
			*PackageName = params.PackageName;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (ContentRootPath != nullptr)
			*ContentRootPath = params.ContentRootPath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.AddOption
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class FString                                      StrToAdd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_AddOption(class FString* Options, class FString* StrToAdd, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.AddOption");
		
		UBPFL_HDCore_C_AddOption_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
		if (StrToAdd != nullptr)
			*StrToAdd = params.StrToAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.SplitLoadedPrimaryAssetClassIds
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FPrimaryAssetId>                     AssetIds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FPrimaryAssetId>                     UnloadedAssetIds                                           (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              LoadedAssetClasses                                         (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_SplitLoadedPrimaryAssetClassIds(TArray<struct FPrimaryAssetId>* AssetIds, class UObject* __WorldContext, TArray<struct FPrimaryAssetId>* UnloadedAssetIds, TArray<class UClass*>* LoadedAssetClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.SplitLoadedPrimaryAssetClassIds");
		
		UBPFL_HDCore_C_SplitLoadedPrimaryAssetClassIds_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetIds != nullptr)
			*AssetIds = params.AssetIds;
		if (UnloadedAssetIds != nullptr)
			*UnloadedAssetIds = params.UnloadedAssetIds;
		if (LoadedAssetClasses != nullptr)
			*LoadedAssetClasses = params.LoadedAssetClasses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.SplitLoadedPrimaryAssetIds
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FPrimaryAssetId>                     AssetIds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FPrimaryAssetId>                     UnloadedAssetIds                                           (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<class UObject*>                             LoadedAssets                                               (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_SplitLoadedPrimaryAssetIds(TArray<struct FPrimaryAssetId>* AssetIds, class UObject* __WorldContext, TArray<struct FPrimaryAssetId>* UnloadedAssetIds, TArray<class UObject*>* LoadedAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.SplitLoadedPrimaryAssetIds");
		
		UBPFL_HDCore_C_SplitLoadedPrimaryAssetIds_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetIds != nullptr)
			*AssetIds = params.AssetIds;
		if (UnloadedAssetIds != nullptr)
			*UnloadedAssetIds = params.UnloadedAssetIds;
		if (LoadedAssets != nullptr)
			*LoadedAssets = params.LoadedAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetAllMapAssets
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FAssetData>                          LevelAssets                                                (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetAllMapAssets(class UObject* __WorldContext, bool* bSuccess, TArray<struct FAssetData>* LevelAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetAllMapAssets");
		
		UBPFL_HDCore_C_GetAllMapAssets_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (LevelAssets != nullptr)
			*LevelAssets = params.LevelAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetPlayerControllerFromPlayerState
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           OwnerPC                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetPlayerControllerFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class APlayerController** OwnerPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetPlayerControllerFromPlayerState");
		
		UBPFL_HDCore_C_GetPlayerControllerFromPlayerState_Params params {};
		params.PlayerState = PlayerState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnerPC != nullptr)
			*OwnerPC = params.OwnerPC;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetControllerFromPlayerState
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 OwnerC                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetControllerFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class AController** OwnerC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetControllerFromPlayerState");
		
		UBPFL_HDCore_C_GetControllerFromPlayerState_Params params {};
		params.PlayerState = PlayerState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnerC != nullptr)
			*OwnerC = params.OwnerC;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetBluforOpforTeamStateForTeam
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDTeamState*                                HDTeamState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetBluforOpforTeamStateForTeam(EHDTeam Team, class UObject* __WorldContext, class AHDTeamState** HDTeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetBluforOpforTeamStateForTeam");
		
		UBPFL_HDCore_C_GetBluforOpforTeamStateForTeam_Params params {};
		params.Team = Team;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HDTeamState != nullptr)
			*HDTeamState = params.HDTeamState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetHDFactionInfoForTeam
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      HDFactionInfoClass                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetHDFactionInfoForTeam(EHDTeam Team, class UObject* __WorldContext, class UClass** HDFactionInfoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetHDFactionInfoForTeam");
		
		UBPFL_HDCore_C_GetHDFactionInfoForTeam_Params params {};
		params.Team = Team;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HDFactionInfoClass != nullptr)
			*HDFactionInfoClass = params.HDFactionInfoClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetIndexForPhoneticCodeWord
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      CodeWord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LetterIdx                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetIndexForPhoneticCodeWord(const class FString& CodeWord, class UObject* __WorldContext, int32_t* LetterIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetIndexForPhoneticCodeWord");
		
		UBPFL_HDCore_C_GetIndexForPhoneticCodeWord_Params params {};
		params.CodeWord = CodeWord;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LetterIdx != nullptr)
			*LetterIdx = params.LetterIdx;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetIndexForPredefinedSquadName
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        SquadName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SquadNameIdx                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetIndexForPredefinedSquadName(const class FText& SquadName, class UObject* __WorldContext, int32_t* SquadNameIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetIndexForPredefinedSquadName");
		
		UBPFL_HDCore_C_GetIndexForPredefinedSquadName_Params params {};
		params.SquadName = SquadName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SquadNameIdx != nullptr)
			*SquadNameIdx = params.SquadNameIdx;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetPhoneticCodeWordByIndex
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            LetterIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CodeWord                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetPhoneticCodeWordByIndex(int32_t LetterIdx, class UObject* __WorldContext, class FString* CodeWord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetPhoneticCodeWordByIndex");
		
		UBPFL_HDCore_C_GetPhoneticCodeWordByIndex_Params params {};
		params.LetterIdx = LetterIdx;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CodeWord != nullptr)
			*CodeWord = params.CodeWord;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetPhoneticCodeWordByCharacter
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      LetterChar                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CodeWord                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetPhoneticCodeWordByCharacter(const class FString& LetterChar, class UObject* __WorldContext, class FString* CodeWord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetPhoneticCodeWordByCharacter");
		
		UBPFL_HDCore_C_GetPhoneticCodeWordByCharacter_Params params {};
		params.LetterChar = LetterChar;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CodeWord != nullptr)
			*CodeWord = params.CodeWord;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetPredefinedSquadNameByIndex
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            SquadCreationIdx                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        SquadName                                                  (Parm, OutParm)
	 */
	void UBPFL_HDCore_C::STATIC_GetPredefinedSquadNameByIndex(int32_t SquadCreationIdx, class UObject* __WorldContext, class FText* SquadName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetPredefinedSquadNameByIndex");
		
		UBPFL_HDCore_C_GetPredefinedSquadNameByIndex_Params params {};
		params.SquadCreationIdx = SquadCreationIdx;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SquadName != nullptr)
			*SquadName = params.SquadName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetHDTeamStateForTeam
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDTeamState*                                HDTeamState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetHDTeamStateForTeam(EHDTeam Team, class UObject* __WorldContext, class AHDTeamState** HDTeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetHDTeamStateForTeam");
		
		UBPFL_HDCore_C_GetHDTeamStateForTeam_Params params {};
		params.Team = Team;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HDTeamState != nullptr)
			*HDTeamState = params.HDTeamState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetHDHUDBP
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HDHUDBase_C*                             HDHUD                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetHDHUDBP(int32_t PlayerIndex, class UObject* __WorldContext, class ABP_HDHUDBase_C** HDHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetHDHUDBP");
		
		UBPFL_HDCore_C_GetHDHUDBP_Params params {};
		params.PlayerIndex = PlayerIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HDHUD != nullptr)
			*HDHUD = params.HDHUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameState
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDGameState*                                HDGameState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetHDGameState(class UObject* __WorldContext, class AHDGameState** HDGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameState");
		
		UBPFL_HDCore_C_GetHDGameState_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HDGameState != nullptr)
			*HDGameState = params.HDGameState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameMode
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDBaseGameMode*                             HDGame                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetHDGameMode(class UObject* __WorldContext, class AHDBaseGameMode** HDGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameMode");
		
		UBPFL_HDCore_C_GetHDGameMode_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HDGame != nullptr)
			*HDGame = params.HDGame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetHDPlayerCharacterBP
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HDPlayerCharacterBase_C*                 HDPlayerChar                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetHDPlayerCharacterBP(int32_t PlayerIndex, class UObject* __WorldContext, class ABP_HDPlayerCharacterBase_C** HDPlayerChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetHDPlayerCharacterBP");
		
		UBPFL_HDCore_C_GetHDPlayerCharacterBP_Params params {};
		params.PlayerIndex = PlayerIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HDPlayerChar != nullptr)
			*HDPlayerChar = params.HDPlayerChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDCore.BPFL_HDCore_C.GetHDPlayerControllerBP
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HDPlayerControllerBase_C*                HDPC                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDCore_C::STATIC_GetHDPlayerControllerBP(int32_t PlayerIndex, class UObject* __WorldContext, class ABP_HDPlayerControllerBase_C** HDPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDCore.BPFL_HDCore_C.GetHDPlayerControllerBP");
		
		UBPFL_HDCore_C_GetHDPlayerControllerBP_Params params {};
		params.PlayerIndex = PlayerIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HDPC != nullptr)
			*HDPC = params.HDPC;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_HDCore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_HDCore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_HDCore.BPFL_HDCore_C");
		return ptr;
	}

}


