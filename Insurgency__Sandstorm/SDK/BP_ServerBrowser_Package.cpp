/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.ChangeVisibilityForConsoles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::ChangeVisibilityForConsoles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ChangeVisibilityForConsoles");
		
		UBP_ServerBrowser_C_ChangeVisibilityForConsoles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.LoadServerBrowserPreferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::LoadServerBrowserPreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.LoadServerBrowserPreferences");
		
		UBP_ServerBrowser_C_LoadServerBrowserPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.HideAllDialogs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::HideAllDialogs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.HideAllDialogs");
		
		UBP_ServerBrowser_C_HideAllDialogs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.HideErrorDialog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::HideErrorDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.HideErrorDialog");
		
		UBP_ServerBrowser_C_HideErrorDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.JoinModdedServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNeverAskAgain                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowser_C::JoinModdedServer(bool bNeverAskAgain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.JoinModdedServer");
		
		UBP_ServerBrowser_C_JoinModdedServer_Params params {};
		params.bNeverAskAgain = bNeverAskAgain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.HideModdedServerConsentDialog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::HideModdedServerConsentDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.HideModdedServerConsentDialog");
		
		UBP_ServerBrowser_C_HideModdedServerConsentDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.ShowModdedServerConsentDialog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::ShowModdedServerConsentDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ShowModdedServerConsentDialog");
		
		UBP_ServerBrowser_C_ShowModdedServerConsentDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.JoinPendingSession
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::JoinPendingSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.JoinPendingSession");
		
		UBP_ServerBrowser_C_JoinPendingSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.SortRuleset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::SortRuleset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.SortRuleset");
		
		UBP_ServerBrowser_C_SortRuleset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.CheckTestingBuild
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowser_C::CheckTestingBuild(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.CheckTestingBuild");
		
		UBP_ServerBrowser_C_CheckTestingBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.DebugServer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::DebugServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.DebugServer");
		
		UBP_ServerBrowser_C_DebugServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.SaveServerBrowserSettings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::SaveServerBrowserSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.SaveServerBrowserSettings");
		
		UBP_ServerBrowser_C_SaveServerBrowserSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.FindServersWithString
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SearchForServers                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::FindServersWithString(const class FString& SearchForServers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.FindServersWithString");
		
		UBP_ServerBrowser_C_FindServersWithString_Params params {};
		params.SearchForServers = SearchForServers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.MoveToServerSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::MoveToServerSelection(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.MoveToServerSelection");
		
		UBP_ServerBrowser_C_MoveToServerSelection_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.Get_PingSortUpDown_Brush_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_ServerBrowser_C::Get_PingSortUpDown_Brush_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.Get_PingSortUpDown_Brush_1");
		
		UBP_ServerBrowser_C_Get_PingSortUpDown_Brush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.UpdateSortButtonColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EServerListSortType                                SortedBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::UpdateSortButtonColors(EServerListSortType SortedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.UpdateSortButtonColors");
		
		UBP_ServerBrowser_C_UpdateSortButtonColors_Params params {};
		params.SortedBy = SortedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.ResortServers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EServerListSortType                                SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reverse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowser_C::ResortServers(EServerListSortType SortType, bool Reverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ResortServers");
		
		UBP_ServerBrowser_C_ResortServers_Params params {};
		params.SortType = SortType;
		params.Reverse = Reverse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.ResetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::ResetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ResetState");
		
		UBP_ServerBrowser_C_ResetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.ClearServerList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::ClearServerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ClearServerList");
		
		UBP_ServerBrowser_C_ClearServerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.OnTypeSearching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldReverse                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowser_C::OnTypeSearching(const class FString& Type, bool* ShouldReverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnTypeSearching");
		
		UBP_ServerBrowser_C_OnTypeSearching_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldReverse != nullptr)
			*ShouldReverse = params.ShouldReverse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.ShouldRowBeFiltered
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UServerListEntry*                            Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldFilterOut                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowser_C::ShouldRowBeFiltered(class UServerListEntry* Server, bool* bShouldFilterOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ShouldRowBeFiltered");
		
		UBP_ServerBrowser_C_ShouldRowBeFiltered_Params params {};
		params.Server = Server;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldFilterOut != nullptr)
			*bShouldFilterOut = params.bShouldFilterOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.RecreateServerListRows
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::RecreateServerListRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.RecreateServerListRows");
		
		UBP_ServerBrowser_C_RecreateServerListRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.SearchResultToRowObject
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintFindSessionResult                 SearchResult                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UServerListEntry*                            Obj                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::SearchResultToRowObject(const struct FBlueprintFindSessionResult& SearchResult, class UServerListEntry** Obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.SearchResultToRowObject");
		
		UBP_ServerBrowser_C_SearchResultToRowObject_Params params {};
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Obj != nullptr)
			*Obj = params.Obj;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.JoinPasswordedServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        EnteredPassword                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ServerBrowser_C::JoinPasswordedServer(const class FText& EnteredPassword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.JoinPasswordedServer");
		
		UBP_ServerBrowser_C_JoinPasswordedServer_Params params {};
		params.EnteredPassword = EnteredPassword;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.HidePasswordInterface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::HidePasswordInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.HidePasswordInterface");
		
		UBP_ServerBrowser_C_HidePasswordInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.ShowPasswordInterface
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::ShowPasswordInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ShowPasswordInterface");
		
		UBP_ServerBrowser_C_ShowPasswordInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.OnJoinSessionRequested
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintFindSessionResult                 Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ServerBrowser_C::OnJoinSessionRequested(const struct FBlueprintFindSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnJoinSessionRequested");
		
		UBP_ServerBrowser_C_OnJoinSessionRequested_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.RefreshServers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowser_C::RefreshServers(bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.RefreshServers");
		
		UBP_ServerBrowser_C_RefreshServers_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_65A5909A48B0A895C117D2B16F9DAB4A
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintFindSessionResult>         Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::OnFailure_65A5909A48B0A895C117D2B16F9DAB4A(TArray<struct FBlueprintFindSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_65A5909A48B0A895C117D2B16F9DAB4A");
		
		UBP_ServerBrowser_C_OnFailure_65A5909A48B0A895C117D2B16F9DAB4A_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_65A5909A48B0A895C117D2B16F9DAB4A
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintFindSessionResult>         Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::OnSuccess_65A5909A48B0A895C117D2B16F9DAB4A(TArray<struct FBlueprintFindSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_65A5909A48B0A895C117D2B16F9DAB4A");
		
		UBP_ServerBrowser_C_OnSuccess_65A5909A48B0A895C117D2B16F9DAB4A_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.Construct");
		
		UBP_ServerBrowser_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__RefreshButton_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnJoinPassword_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnJoinPassword_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnJoinPassword_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnJoinPassword_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnCancelPassword_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnCancelPassword_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnCancelPassword_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnCancelPassword_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByName_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnSortByName_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByName_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnSortByName_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByMap_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnSortByMap_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByMap_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnSortByMap_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByMode_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnSortByMode_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByMode_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnSortByMode_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByPing_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnSortByPing_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByPing_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnSortByPing_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortPlayers_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnSortPlayers_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortPlayers_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnSortPlayers_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.OnRefresh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowser_C::OnRefresh(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnRefresh");
		
		UBP_ServerBrowser_C_OnRefresh_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__PasswordInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::BndEvt__PasswordInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__PasswordInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__PasswordInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByModded_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnSortByModded_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByModded_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnSortByModded_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByXP_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnSortByXP_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByXP_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnSortByXP_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByPassword_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnSortByPassword_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByPassword_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnSortByPassword_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FavoriteList_K2Node_ComponentBoundEvent_13_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::BndEvt__FavoriteList_K2Node_ComponentBoundEvent_13_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FavoriteList_K2Node_ComponentBoundEvent_13_OnListEntryGeneratedDynamic__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__FavoriteList_K2Node_ComponentBoundEvent_13_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.OnFavoriteStatusChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_ServerBrowserRow_C*                      ForRow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::OnFavoriteStatusChanged(class UBP_ServerBrowserRow_C* ForRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnFavoriteStatusChanged");
		
		UBP_ServerBrowser_C_OnFavoriteStatusChanged_Params params {};
		params.ForRow = ForRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByCustom_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::BndEvt__BtnSortByCustom_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByCustom_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_BndEvt__BtnSortByCustom_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.Attempt To Search With Current Filters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowser_C::Attempt_To_Search_With_Current_Filters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.Attempt To Search With Current Filters");
		
		UBP_ServerBrowser_C_Attempt_To_Search_With_Current_Filters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.ExecuteUbergraph_BP_ServerBrowser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowser_C::ExecuteUbergraph_BP_ServerBrowser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ExecuteUbergraph_BP_ServerBrowser");
		
		UBP_ServerBrowser_C_ExecuteUbergraph_BP_ServerBrowser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.OnNewStatus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ServerBrowser_C::OnNewStatus__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnNewStatus__DelegateSignature");
		
		UBP_ServerBrowser_C_OnNewStatus__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowser.BP_ServerBrowser_C.RefreshEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowser_C::RefreshEvent__DelegateSignature(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.RefreshEvent__DelegateSignature");
		
		UBP_ServerBrowser_C_RefreshEvent__DelegateSignature_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ServerBrowser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ServerBrowser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ServerBrowser.BP_ServerBrowser_C");
		return ptr;
	}

}


