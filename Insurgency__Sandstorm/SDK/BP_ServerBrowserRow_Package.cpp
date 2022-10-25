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
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.UpdateFavoriteState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::UpdateFavoriteState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.UpdateFavoriteState");
		
		UBP_ServerBrowserRow_C_UpdateFavoriteState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.IsFavoriteServer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsFavorite                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowserRow_C::IsFavoriteServer(bool* IsFavorite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.IsFavoriteServer");
		
		UBP_ServerBrowserRow_C_IsFavoriteServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFavorite != nullptr)
			*IsFavorite = params.IsFavorite;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.PopulateMutatorList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::PopulateMutatorList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.PopulateMutatorList");
		
		UBP_ServerBrowserRow_C_PopulateMutatorList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.SetFavoriteStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Favorite                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowserRow_C::SetFavoriteStatus(bool Favorite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.SetFavoriteStatus");
		
		UBP_ServerBrowserRow_C_SetFavoriteStatus_Params params {};
		params.Favorite = Favorite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.SetModList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGetAllModsSchema                           ModResults                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ServerBrowserRow_C::SetModList(const struct FGetAllModsSchema& ModResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.SetModList");
		
		UBP_ServerBrowserRow_C_SetModList_Params params {};
		params.ModResults = ModResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.FetchAdditionalServerInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::FetchAdditionalServerInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.FetchAdditionalServerInfo");
		
		UBP_ServerBrowserRow_C_FetchAdditionalServerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.GetImageForServerType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTexture2D*                                  Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowserRow_C::GetImageForServerType(class UTexture2D** Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.GetImageForServerType");
		
		UBP_ServerBrowserRow_C_GetImageForServerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.GetServerBrowserName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UBP_ServerBrowserRow_C::GetServerBrowserName(const class FText& InText, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.GetServerBrowserName");
		
		UBP_ServerBrowserRow_C_GetServerBrowserName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.UpdateFavoriteStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFavorite                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowserRow_C::UpdateFavoriteStatus(bool IsFavorite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.UpdateFavoriteStatus");
		
		UBP_ServerBrowserRow_C_UpdateFavoriteStatus_Params params {};
		params.IsFavorite = IsFavorite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.InitializeRowFromServer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::InitializeRowFromServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.InitializeRowFromServer");
		
		UBP_ServerBrowserRow_C_InitializeRowFromServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.SetRowSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowserRow_C::SetRowSelected(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.SetRowSelected");
		
		UBP_ServerBrowserRow_C_SetRowSelected_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_ServerBrowserRow_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnFocusReceived");
		
		UBP_ServerBrowserRow_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_ServerBrowserRow_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnKeyDown");
		
		UBP_ServerBrowserRow_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.GetBrushColor_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_ServerBrowserRow_C::GetBrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.GetBrushColor_1");
		
		UBP_ServerBrowserRow_C_GetBrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.Get_PasswordProtected_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ServerBrowserRow_C::Get_PasswordProtected_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.Get_PasswordProtected_Visibility_1");
		
		UBP_ServerBrowserRow_C_Get_PasswordProtected_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.Get_JoinServer_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_ServerBrowserRow_C::Get_JoinServer_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.Get_JoinServer_bIsEnabled_1");
		
		UBP_ServerBrowserRow_C_Get_JoinServer_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnModsRetrieved_2EF1BEE342472D50EFB722822A73A793
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGetAllModsSchema                           ModData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ServerBrowserRow_C::OnModsRetrieved_2EF1BEE342472D50EFB722822A73A793(const struct FGetAllModsSchema& ModData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnModsRetrieved_2EF1BEE342472D50EFB722822A73A793");
		
		UBP_ServerBrowserRow_C_OnModsRetrieved_2EF1BEE342472D50EFB722822A73A793_Params params {};
		params.ModData = ModData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BP_OnItemExpansionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowserRow_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BP_OnItemExpansionChanged");
		
		UBP_ServerBrowserRow_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::BndEvt__JoinServer_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ServerBrowserRow_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ServerBrowserRow_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnMouseEnter");
		
		UBP_ServerBrowserRow_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ServerBrowserRow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnMouseLeave");
		
		UBP_ServerBrowserRow_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowserRow_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnListItemObjectSet");
		
		UBP_ServerBrowserRow_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BP_OnItemSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ServerBrowserRow_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BP_OnItemSelectionChanged");
		
		UBP_ServerBrowserRow_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BP_OnEntryReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BP_OnEntryReleased");
		
		UBP_ServerBrowserRow_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::BndEvt__JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ServerBrowserRow_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::BndEvt__JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ServerBrowserRow_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__FavoriteBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::BndEvt__FavoriteBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__FavoriteBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UBP_ServerBrowserRow_C_BndEvt__FavoriteBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.FetchModList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::FetchModList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.FetchModList");
		
		UBP_ServerBrowserRow_C_FetchModList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnClickedJoinServer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ServerBrowserRow_C::OnClickedJoinServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnClickedJoinServer");
		
		UBP_ServerBrowserRow_C_OnClickedJoinServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.ExecuteUbergraph_BP_ServerBrowserRow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowserRow_C::ExecuteUbergraph_BP_ServerBrowserRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.ExecuteUbergraph_BP_ServerBrowserRow");
		
		UBP_ServerBrowserRow_C_ExecuteUbergraph_BP_ServerBrowserRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnFavoriteStatusChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_ServerBrowserRow_C*                      ForRow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ServerBrowserRow_C::OnFavoriteStatusChanged__DelegateSignature(class UBP_ServerBrowserRow_C* ForRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnFavoriteStatusChanged__DelegateSignature");
		
		UBP_ServerBrowserRow_C_OnFavoriteStatusChanged__DelegateSignature_Params params {};
		params.ForRow = ForRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnJoinRequested__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintFindSessionResult                 Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ServerBrowserRow_C::OnJoinRequested__DelegateSignature(const struct FBlueprintFindSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnJoinRequested__DelegateSignature");
		
		UBP_ServerBrowserRow_C_OnJoinRequested__DelegateSignature_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ServerBrowserRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ServerBrowserRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ServerBrowserRow.BP_ServerBrowserRow_C");
		return ptr;
	}

}


