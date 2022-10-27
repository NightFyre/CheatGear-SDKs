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
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.PlayMenuMusic
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::PlayMenuMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.PlayMenuMusic");
		
		UWBP_MainMenu_C_PlayMenuMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnMouseWheel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_MainMenu_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnMouseWheel");
		
		UWBP_MainMenu_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_MainMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnMouseButtonDown");
		
		UWBP_MainMenu_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.TeardownSubNavBarClickEvents
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::TeardownSubNavBarClickEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.TeardownSubNavBarClickEvents");
		
		UWBP_MainMenu_C_TeardownSubNavBarClickEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.SetupSubNavBarClickEvents
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::SetupSubNavBarClickEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.SetupSubNavBarClickEvents");
		
		UWBP_MainMenu_C_SetupSubNavBarClickEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.ToggleSubNavBar
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_C::ToggleSubNavBar(bool bNewVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ToggleSubNavBar");
		
		UWBP_MainMenu_C_ToggleSubNavBar_Params params {};
		params.bNewVisible = bNewVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.ClearCurrentOptionMenu
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::ClearCurrentOptionMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ClearCurrentOptionMenu");
		
		UWBP_MainMenu_C_ClearCurrentOptionMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.PopulateSubNavBar
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFSubMenuOption>                     SubMenuOptions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::PopulateSubNavBar(TArray<struct FFSubMenuOption>* SubMenuOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.PopulateSubNavBar");
		
		UWBP_MainMenu_C_PopulateSubNavBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubMenuOptions != nullptr)
			*SubMenuOptions = params.SubMenuOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.ClearSubNavBarOptions
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::ClearSubNavBarOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ClearSubNavBarOptions");
		
		UWBP_MainMenu_C_ClearSubNavBarOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.UpdateSubNavBarOptions
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::UpdateSubNavBarOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.UpdateSubNavBarOptions");
		
		UWBP_MainMenu_C_UpdateSubNavBarOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.GetNavBarHBox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHorizontalBox*                              HBoxToUse                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::GetNavBarHBox(class UHorizontalBox** HBoxToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GetNavBarHBox");
		
		UWBP_MainMenu_C_GetNavBarHBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HBoxToUse != nullptr)
			*HBoxToUse = params.HBoxToUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.SetOptionMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewOptionMenuClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_C::SetOptionMenu(class UClass* NewOptionMenuClass, bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.SetOptionMenu");
		
		UWBP_MainMenu_C_SetOptionMenu_Params params {};
		params.NewOptionMenuClass = NewOptionMenuClass;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.GetNavBtnCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::GetNavBtnCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GetNavBtnCount");
		
		UWBP_MainMenu_C_GetNavBtnCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.SetupCopyrightNotice
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::SetupCopyrightNotice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.SetupCopyrightNotice");
		
		UWBP_MainMenu_C_SetupCopyrightNotice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.SetActiveMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewOptionMenuClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_C::SetActiveMenu(int32_t NewIndex, class UClass* NewOptionMenuClass, bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.SetActiveMenu");
		
		UWBP_MainMenu_C_SetActiveMenu_Params params {};
		params.NewIndex = NewIndex;
		params.NewOptionMenuClass = NewOptionMenuClass;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.SetupNavBarClickEvents
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::SetupNavBarClickEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.SetupNavBarClickEvents");
		
		UWBP_MainMenu_C_SetupNavBarClickEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.SetupMenuBackgroundWidget
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::SetupMenuBackgroundWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.SetupMenuBackgroundWidget");
		
		UWBP_MainMenu_C_SetupMenuBackgroundWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.InitMenuState
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsDesignTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_C::InitMenuState(bool bIsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.InitMenuState");
		
		UWBP_MainMenu_C_InitMenuState_Params params {};
		params.bIsDesignTime = bIsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ResumeNavBtn_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MainMenu_NavBarButton_C*                ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::BndEvt__ResumeNavBtn_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ResumeNavBtn_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__ResumeNavBtn_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnNavBtnClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MainMenu_NavBarButton_C*                ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::OnNavBtnClicked(class UWBP_MainMenu_NavBarButton_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnNavBtnClicked");
		
		UWBP_MainMenu_C_OnNavBtnClicked_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ReturnToMenuNavBtn_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MainMenu_NavBarButton_C*                ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::BndEvt__ReturnToMenuNavBtn_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ReturnToMenuNavBtn_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__ReturnToMenuNavBtn_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnSubNavBtnClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MainMenu_NavBarButton_SubMenu_C*        ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::OnSubNavBtnClicked(class UWBP_MainMenu_NavBarButton_SubMenu_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnSubNavBtnClicked");
		
		UWBP_MainMenu_C_OnSubNavBtnClicked_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnPauseMenuPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::OnPauseMenuPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnPauseMenuPressed");
		
		UWBP_MainMenu_C_OnPauseMenuPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Construct");
		
		UWBP_MainMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ShootingRangeNavBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MainMenu_NavBarButton_C*                ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::BndEvt__ShootingRangeNavBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ShootingRangeNavBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__ShootingRangeNavBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.PreConstruct");
		
		UWBP_MainMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_MainMenu_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnInitialized");
		
		UWBP_MainMenu_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ExitGameNavBtn_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MainMenu_NavBarButton_C*                ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::BndEvt__ExitGameNavBtn_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ExitGameNavBtn_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__ExitGameNavBtn_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__PauseExitGameNavBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MainMenu_NavBarButton_C*                ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::BndEvt__PauseExitGameNavBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__PauseExitGameNavBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__PauseExitGameNavBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::ExecuteUbergraph_WBP_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu");
		
		UWBP_MainMenu_C_ExecuteUbergraph_WBP_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu.WBP_MainMenu_C");
		return ptr;
	}

}


