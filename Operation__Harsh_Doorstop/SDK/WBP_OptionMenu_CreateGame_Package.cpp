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
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.GetValidDisplayNameForGMDefinition
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHDGameModeDefinition*                       GMDef                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayName                                                (Parm, OutParm)
	 */
	void UWBP_OptionMenu_CreateGame_C::GetValidDisplayNameForGMDefinition(class UHDGameModeDefinition* GMDef, class FText* DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.GetValidDisplayNameForGMDefinition");
		
		UWBP_OptionMenu_CreateGame_C_GetValidDisplayNameForGMDefinition_Params params {};
		params.GMDef = GMDef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayName != nullptr)
			*DisplayName = params.DisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FindGMDefinitionByClassName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ClassName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class UHDGameModeDefinition*                       GMDef                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::FindGMDefinitionByClassName(class FString* ClassName, class UHDGameModeDefinition** GMDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FindGMDefinitionByClassName");
		
		UWBP_OptionMenu_CreateGame_C_FindGMDefinitionByClassName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassName != nullptr)
			*ClassName = params.ClassName;
		if (GMDef != nullptr)
			*GMDef = params.GMDef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ContainsGMByClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bContainsGM                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_CreateGame_C::ContainsGMByClass(bool* bContainsGM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ContainsGMByClass");
		
		UWBP_OptionMenu_CreateGame_C_ContainsGMByClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bContainsGM != nullptr)
			*bContainsGM = params.bContainsGM;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FilterExcludesGMClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bLegacyAASSupport                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bExcludeGM                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_CreateGame_C::FilterExcludesGMClass(bool bLegacyAASSupport, bool* bExcludeGM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FilterExcludesGMClass");
		
		UWBP_OptionMenu_CreateGame_C_FilterExcludesGMClass_Params params {};
		params.bLegacyAASSupport = bLegacyAASSupport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bExcludeGM != nullptr)
			*bExcludeGM = params.bExcludeGM;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FilterExcludesMapPrefix
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bExcludePrefix                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_CreateGame_C::FilterExcludesMapPrefix(const class FString& MapName, bool* bExcludePrefix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FilterExcludesMapPrefix");
		
		UWBP_OptionMenu_CreateGame_C_FilterExcludesMapPrefix_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bExcludePrefix != nullptr)
			*bExcludePrefix = params.bExcludePrefix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.SortGMList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFGameModeInfo>                      GMListToSort                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               bDescending                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_CreateGame_C::SortGMList(TArray<struct FFGameModeInfo>* GMListToSort, bool bDescending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.SortGMList");
		
		UWBP_OptionMenu_CreateGame_C_SortGMList_Params params {};
		params.bDescending = bDescending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GMListToSort != nullptr)
			*GMListToSort = params.GMListToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.SortMapList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFMapInfo>                           MapListToSort                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               bDescending                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_CreateGame_C::SortMapList(TArray<struct FFMapInfo>* MapListToSort, bool bDescending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.SortMapList");
		
		UWBP_OptionMenu_CreateGame_C_SortMapList_Params params {};
		params.bDescending = bDescending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapListToSort != nullptr)
			*MapListToSort = params.MapListToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.UpdateStartButtonState
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_CreateGame_C::UpdateStartButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.UpdateStartButtonState");
		
		UWBP_OptionMenu_CreateGame_C_UpdateStartButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ClearMapPreviewImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_CreateGame_C::ClearMapPreviewImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ClearMapPreviewImage");
		
		UWBP_OptionMenu_CreateGame_C_ClearMapPreviewImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.SetMapPreviewImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  NewImg                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::SetMapPreviewImage(class UTexture2D* NewImg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.SetMapPreviewImage");
		
		UWBP_OptionMenu_CreateGame_C_SetMapPreviewImage_Params params {};
		params.NewImg = NewImg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AddGMToList
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGameModeInfo                              GMInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UBP_GMListItemData_C*                        NewGMItem                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::AddGMToList(struct FFGameModeInfo* GMInfo, class UBP_GMListItemData_C** NewGMItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AddGMToList");
		
		UWBP_OptionMenu_CreateGame_C_AddGMToList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GMInfo != nullptr)
			*GMInfo = params.GMInfo;
		if (NewGMItem != nullptr)
			*NewGMItem = params.NewGMItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.CreateGMListItem
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGameModeInfo                              GMInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UBP_GMListItemData_C*                        GMItem                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::CreateGMListItem(struct FFGameModeInfo* GMInfo, class UBP_GMListItemData_C** GMItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.CreateGMListItem");
		
		UWBP_OptionMenu_CreateGame_C_CreateGMListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GMInfo != nullptr)
			*GMInfo = params.GMInfo;
		if (GMItem != nullptr)
			*GMItem = params.GMItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.HandleStartGame
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFMapInfo                                   SelectedMapInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FFGameModeInfo                              SelectedGMInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::HandleStartGame(struct FFMapInfo* SelectedMapInfo, struct FFGameModeInfo* SelectedGMInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.HandleStartGame");
		
		UWBP_OptionMenu_CreateGame_C_HandleStartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedMapInfo != nullptr)
			*SelectedMapInfo = params.SelectedMapInfo;
		if (SelectedGMInfo != nullptr)
			*SelectedGMInfo = params.SelectedGMInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AppendOptionsFromActiveModifiers
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_CreateGame_C::AppendOptionsFromActiveModifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AppendOptionsFromActiveModifiers");
		
		UWBP_OptionMenu_CreateGame_C_AppendOptionsFromActiveModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.GetActiveModifiers
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void UWBP_OptionMenu_CreateGame_C::GetActiveModifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.GetActiveModifiers");
		
		UWBP_OptionMenu_CreateGame_C_GetActiveModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AppendTravelURL
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OptionsToAdd                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::AppendTravelURL(class FString* OptionsToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AppendTravelURL");
		
		UWBP_OptionMenu_CreateGame_C_AppendTravelURL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionsToAdd != nullptr)
			*OptionsToAdd = params.OptionsToAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AddMapToList
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFMapInfo                                   MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UBP_MapListItemData_C*                       NewMapItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::AddMapToList(struct FFMapInfo* MapInfo, class UBP_MapListItemData_C** NewMapItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AddMapToList");
		
		UWBP_OptionMenu_CreateGame_C_AddMapToList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapInfo != nullptr)
			*MapInfo = params.MapInfo;
		if (NewMapItem != nullptr)
			*NewMapItem = params.NewMapItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.CreateMapListItem
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFMapInfo                                   MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UBP_MapListItemData_C*                       MapItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::CreateMapListItem(struct FFMapInfo* MapInfo, class UBP_MapListItemData_C** MapItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.CreateMapListItem");
		
		UWBP_OptionMenu_CreateGame_C_CreateMapListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapInfo != nullptr)
			*MapInfo = params.MapInfo;
		if (MapItem != nullptr)
			*MapItem = params.MapItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.RepopulateMapListFromRegistry
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_GMListItemData_C*                        GMItemFilter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::RepopulateMapListFromRegistry(class UBP_GMListItemData_C* GMItemFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.RepopulateMapListFromRegistry");
		
		UWBP_OptionMenu_CreateGame_C_RepopulateMapListFromRegistry_Params params {};
		params.GMItemFilter = GMItemFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.RepopulateGameListFromRegistry
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_CreateGame_C::RepopulateGameListFromRegistry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.RepopulateGameListFromRegistry");
		
		UWBP_OptionMenu_CreateGame_C_RepopulateGameListFromRegistry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ShouldAddGMListing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHDGameModeDefinition*                       GMDef                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddListing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_CreateGame_C::ShouldAddGMListing(class UHDGameModeDefinition* GMDef, bool* bAddListing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ShouldAddGMListing");
		
		UWBP_OptionMenu_CreateGame_C_ShouldAddGMListing_Params params {};
		params.GMDef = GMDef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAddListing != nullptr)
			*bAddListing = params.bAddListing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FetchGameModesFromRegistry
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFGameModeInfo>                      GMsFound                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::FetchGameModesFromRegistry(TArray<struct FFGameModeInfo>* GMsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FetchGameModesFromRegistry");
		
		UWBP_OptionMenu_CreateGame_C_FetchGameModesFromRegistry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GMsFound != nullptr)
			*GMsFound = params.GMsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ShouldAddMapListing
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             MapAssetId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddListing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_CreateGame_C::ShouldAddMapListing(struct FPrimaryAssetId* MapAssetId, bool* bAddListing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ShouldAddMapListing");
		
		UWBP_OptionMenu_CreateGame_C_ShouldAddMapListing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapAssetId != nullptr)
			*MapAssetId = params.MapAssetId;
		if (bAddListing != nullptr)
			*bAddListing = params.bAddListing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FetchMapsFromRegistry
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFMapInfo>                           MapsFound                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::FetchMapsFromRegistry(TArray<struct FFMapInfo>* MapsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FetchMapsFromRegistry");
		
		UWBP_OptionMenu_CreateGame_C_FetchMapsFromRegistry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapsFound != nullptr)
			*MapsFound = params.MapsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.Completed_D5E8D9AE41A0DF3C4DEC0184D72FF481
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UObject*>                             Loaded                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::Completed_D5E8D9AE41A0DF3C4DEC0184D72FF481(TArray<class UObject*> Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.Completed_D5E8D9AE41A0DF3C4DEC0184D72FF481");
		
		UWBP_OptionMenu_CreateGame_C_Completed_D5E8D9AE41A0DF3C4DEC0184D72FF481_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__CreateGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_CreateGame_C::BndEvt__CreateGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__CreateGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_OptionMenu_CreateGame_C_BndEvt__CreateGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_OptionMenu_CreateGame_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.OnInitialized");
		
		UWBP_OptionMenu_CreateGame_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__GMList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_CreateGame_C::BndEvt__GMList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__GMList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature");
		
		UWBP_OptionMenu_CreateGame_C_BndEvt__GMList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__GMList_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::BndEvt__GMList_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__GMList_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature");
		
		UWBP_OptionMenu_CreateGame_C_BndEvt__GMList_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__MapList_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::BndEvt__MapList_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__MapList_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature");
		
		UWBP_OptionMenu_CreateGame_C_BndEvt__MapList_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_CreateGame_C::BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature");
		
		UWBP_OptionMenu_CreateGame_C_BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FetchGameModes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_CreateGame_C::FetchGameModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FetchGameModes");
		
		UWBP_OptionMenu_CreateGame_C_FetchGameModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_OptionMenu_CreateGame_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.Destruct");
		
		UWBP_OptionMenu_CreateGame_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ExecuteUbergraph_WBP_OptionMenu_CreateGame
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_CreateGame_C::ExecuteUbergraph_WBP_OptionMenu_CreateGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ExecuteUbergraph_WBP_OptionMenu_CreateGame");
		
		UWBP_OptionMenu_CreateGame_C_ExecuteUbergraph_WBP_OptionMenu_CreateGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.OnBuildTravelURL__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_CreateGame_C::OnBuildTravelURL__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.OnBuildTravelURL__DelegateSignature");
		
		UWBP_OptionMenu_CreateGame_C_OnBuildTravelURL__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionMenu_CreateGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionMenu_CreateGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C");
		return ptr;
	}

}


