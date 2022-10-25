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
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.HideAchievementsOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::HideAchievementsOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.HideAchievementsOnConsole");
		
		UBP_MainMenu_Profile_C_HideAchievementsOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.NewFunction_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Profile_C::NewFunction_1(class AController* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.NewFunction_1");
		
		UBP_MainMenu_Profile_C_NewFunction_1_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.HideCommunityOnConsole
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::HideCommunityOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.HideCommunityOnConsole");
		
		UBP_MainMenu_Profile_C_HideCommunityOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.HideHistoryOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::HideHistoryOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.HideHistoryOnConsole");
		
		UBP_MainMenu_Profile_C_HideHistoryOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnTabPanelSwitched
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Profile_C::OnTabPanelSwitched(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnTabPanelSwitched");
		
		UBP_MainMenu_Profile_C_OnTabPanelSwitched_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.PopulateSelectedCategory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::PopulateSelectedCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.PopulateSelectedCategory");
		
		UBP_MainMenu_Profile_C_PopulateSelectedCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_Profile_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnFocusReceived");
		
		UBP_MainMenu_Profile_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.SetPlayerNameBreadcrumb
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::SetPlayerNameBreadcrumb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.SetPlayerNameBreadcrumb");
		
		UBP_MainMenu_Profile_C_SetPlayerNameBreadcrumb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_Profile_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnKeyDown");
		
		UBP_MainMenu_Profile_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnPageSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Profile_C::OnPageSelected(EnumMainMenuPage NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnPageSelected");
		
		UBP_MainMenu_Profile_C_OnPageSelected_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.Construct");
		
		UBP_MainMenu_Profile_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Profile_C::BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature");
		
		UBP_MainMenu_Profile_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Profile_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnPanelOpened");
		
		UBP_MainMenu_Profile_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnProfileUpdatedDelegate
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSandstormPlayerProfile                     NewData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MainMenu_Profile_C::OnProfileUpdatedDelegate(const struct FSandstormPlayerProfile& NewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnProfileUpdatedDelegate");
		
		UBP_MainMenu_Profile_C_OnProfileUpdatedDelegate_Params params {};
		params.NewData = NewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__StatFilter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Profile_C::BndEvt__StatFilter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__StatFilter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_MainMenu_Profile_C_BndEvt__StatFilter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__StatFilter_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::BndEvt__StatFilter_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.BndEvt__StatFilter_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");
		
		UBP_MainMenu_Profile_C_BndEvt__StatFilter_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.ExecuteUbergraph_BP_MainMenu_Profile
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Profile_C::ExecuteUbergraph_BP_MainMenu_Profile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.ExecuteUbergraph_BP_MainMenu_Profile");
		
		UBP_MainMenu_Profile_C_ExecuteUbergraph_BP_MainMenu_Profile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Profile_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Profile.BP_MainMenu_Profile_C.OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_Profile_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_Profile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_Profile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_Profile.BP_MainMenu_Profile_C");
		return ptr;
	}

}


