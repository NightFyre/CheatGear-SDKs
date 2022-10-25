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
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnSecurityCodeEntered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ConfirmText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ModMenu_C::OnSecurityCodeEntered(const class FText& ConfirmText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnSecurityCodeEntered");
		
		UBP_MainMenu_ModMenu_C_OnSecurityCodeEntered_Params params {};
		params.ConfirmText = ConfirmText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnDialogCanceled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::OnDialogCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnDialogCanceled");
		
		UBP_MainMenu_ModMenu_C_OnDialogCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnEmailEntered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ConfirmText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ModMenu_C::OnEmailEntered(const class FText& ConfirmText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnEmailEntered");
		
		UBP_MainMenu_ModMenu_C_OnEmailEntered_Params params {};
		params.ConfirmText = ConfirmText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnEmailRequested
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::OnEmailRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnEmailRequested");
		
		UBP_MainMenu_ModMenu_C_OnEmailRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.ResetPageCount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::ResetPageCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.ResetPageCount");
		
		UBP_MainMenu_ModMenu_C_ResetPageCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_ModMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnKeyDown");
		
		UBP_MainMenu_ModMenu_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.GetModButtonToFocus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            ModId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     OutFocusWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ModMenu_C::GetModButtonToFocus(int64_t ModId, class UWidget** OutFocusWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.GetModButtonToFocus");
		
		UBP_MainMenu_ModMenu_C_GetModButtonToFocus_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFocusWidget != nullptr)
			*OutFocusWidget = params.OutFocusWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_ModMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnFocusReceived");
		
		UBP_MainMenu_ModMenu_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.GetFirstModToFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     OutFocusWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ModMenu_C::GetFirstModToFocus(class UWidget** OutFocusWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.GetFirstModToFocus");
		
		UBP_MainMenu_ModMenu_C_GetFirstModToFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFocusWidget != nullptr)
			*OutFocusWidget = params.OutFocusWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_MainMenu_ModMenu_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnCustomNavigation");
		
		UBP_MainMenu_ModMenu_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnRequestNavigateBack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_MainMenu_ModMenu_C::OnRequestNavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnRequestNavigateBack");
		
		UBP_MainMenu_ModMenu_C_OnRequestNavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.UpdateFilterFromText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        FilterText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ModMenu_C::UpdateFilterFromText(const class FText& FilterText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.UpdateFilterFromText");
		
		UBP_MainMenu_ModMenu_C_UpdateFilterFromText_Params params {};
		params.FilterText = FilterText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.SetLoadingMods
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLoading                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ResultCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ModMenu_C::SetLoadingMods(bool bLoading, int32_t ResultCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.SetLoadingMods");
		
		UBP_MainMenu_ModMenu_C_SetLoadingMods_Params params {};
		params.bLoading = bLoading;
		params.ResultCount = ResultCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.UpdatePageText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::UpdatePageText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.UpdatePageText");
		
		UBP_MainMenu_ModMenu_C_UpdatePageText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.UpdateMasterTagList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::UpdateMasterTagList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.UpdateMasterTagList");
		
		UBP_MainMenu_ModMenu_C_UpdateMasterTagList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnFiltersDirtied
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::OnFiltersDirtied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnFiltersDirtied");
		
		UBP_MainMenu_ModMenu_C_OnFiltersDirtied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.CreateTagSection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FModTag>                             Tags                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ModMenu_C::CreateTagSection(const class FText& Category, TArray<struct FModTag>* Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.CreateTagSection");
		
		UBP_MainMenu_ModMenu_C_CreateTagSection_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tags != nullptr)
			*Tags = params.Tags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnModsRetrieved_F9CB590E437BEDD51CD46F9EDD1CB41E
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGetAllModsSchema                           ModData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MainMenu_ModMenu_C::OnModsRetrieved_F9CB590E437BEDD51CD46F9EDD1CB41E(const struct FGetAllModsSchema& ModData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnModsRetrieved_F9CB590E437BEDD51CD46F9EDD1CB41E");
		
		UBP_MainMenu_ModMenu_C_OnModsRetrieved_F9CB590E437BEDD51CD46F9EDD1CB41E_Params params {};
		params.ModData = ModData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnModsRetrieved_01C14770496E6424D919B3B1A36365AA
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGetAllModsSchema                           ModData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MainMenu_ModMenu_C::OnModsRetrieved_01C14770496E6424D919B3B1A36365AA(const struct FGetAllModsSchema& ModData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnModsRetrieved_01C14770496E6424D919B3B1A36365AA");
		
		UBP_MainMenu_ModMenu_C_OnModsRetrieved_01C14770496E6424D919B3B1A36365AA_Params params {};
		params.ModData = ModData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ModMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.PreConstruct");
		
		UBP_MainMenu_ModMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.Construct");
		
		UBP_MainMenu_ModMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnTagsUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_Widget_ModTagGroup_C*                    Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ModMenu_C::OnTagsUpdated(class UBP_Widget_ModTagGroup_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnTagsUpdated");
		
		UBP_MainMenu_ModMenu_C_OnTagsUpdated_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.RefreshModList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::RefreshModList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.RefreshModList");
		
		UBP_MainMenu_ModMenu_C_RefreshModList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_0_OnTextCommit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ModMenu_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_0_OnTextCommit__DelegateSignature(const class FText& newText, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_0_OnTextCommit__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_0_OnTextCommit__DelegateSignature_Params params {};
		params.newText = newText;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OpenModPage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FModObject                                  ModData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ModMenu_C::OpenModPage(const struct FModObject& ModData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OpenModPage");
		
		UBP_MainMenu_ModMenu_C_OpenModPage_Params params {};
		params.ModData = ModData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnPanelOpened");
		
		UBP_MainMenu_ModMenu_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnStoppedTyping__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ModMenu_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnStoppedTyping__DelegateSignature(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnStoppedTyping__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnStoppedTyping__DelegateSignature_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_4_OnTabSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ModMenu_C::BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_4_OnTabSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_4_OnTabSelected__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_4_OnTabSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnPresentMods
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGetAllModsSchema                           Mods                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ModMenu_C::OnPresentMods(const struct FGetAllModsSchema& Mods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnPresentMods");
		
		UBP_MainMenu_ModMenu_C_OnPresentMods_Params params {};
		params.Mods = Mods;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.SetRequestInFlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewRequestInFlight                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ModMenu_C::SetRequestInFlight(bool bNewRequestInFlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.SetRequestInFlight");
		
		UBP_MainMenu_ModMenu_C_SetRequestInFlight_Params params {};
		params.bNewRequestInFlight = bNewRequestInFlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__PageSelect_K2Node_ComponentBoundEvent_5_OnNavigateNext__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::BndEvt__PageSelect_K2Node_ComponentBoundEvent_5_OnNavigateNext__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__PageSelect_K2Node_ComponentBoundEvent_5_OnNavigateNext__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_BndEvt__PageSelect_K2Node_ComponentBoundEvent_5_OnNavigateNext__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__PageSelect_K2Node_ComponentBoundEvent_6_OnNavigatePrevious__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::BndEvt__PageSelect_K2Node_ComponentBoundEvent_6_OnNavigatePrevious__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__PageSelect_K2Node_ComponentBoundEvent_6_OnNavigatePrevious__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_BndEvt__PageSelect_K2Node_ComponentBoundEvent_6_OnNavigatePrevious__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.ExecuteUbergraph_BP_MainMenu_ModMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ModMenu_C::ExecuteUbergraph_BP_MainMenu_ModMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.ExecuteUbergraph_BP_MainMenu_ModMenu");
		
		UBP_MainMenu_ModMenu_C_ExecuteUbergraph_BP_MainMenu_ModMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ModMenu_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_ModMenu_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_ModMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_ModMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C");
		return ptr;
	}

}


