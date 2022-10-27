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
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.DidUserClickLink
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ClickedLink                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::DidUserClickLink(bool* ClickedLink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.DidUserClickLink");
		
		UBP_MainMenu_AnnouncementPanel_C_DidUserClickLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClickedLink != nullptr)
			*ClickedLink = params.ClickedLink;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.GetTimeShown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              TimeShown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::GetTimeShown(float* TimeShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.GetTimeShown");
		
		UBP_MainMenu_AnnouncementPanel_C_GetTimeShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeShown != nullptr)
			*TimeShown = params.TimeShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.OnMadeVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::OnMadeVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.OnMadeVisible");
		
		UBP_MainMenu_AnnouncementPanel_C_OnMadeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.SwitchToReportNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGetAccountStatusResult                     AccountStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::SwitchToReportNotification(const struct FGetAccountStatusResult& AccountStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.SwitchToReportNotification");
		
		UBP_MainMenu_AnnouncementPanel_C_SwitchToReportNotification_Params params {};
		params.AccountStatus = AccountStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.BuildDataFromPopupData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMotdData                                   Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::BuildDataFromPopupData(const struct FMotdData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.BuildDataFromPopupData");
		
		UBP_MainMenu_AnnouncementPanel_C_BuildDataFromPopupData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.BndEvt__BP_PatchNotification_K2Node_ComponentBoundEvent_0_OnContinue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::BndEvt__BP_PatchNotification_K2Node_ComponentBoundEvent_0_OnContinue__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.BndEvt__BP_PatchNotification_K2Node_ComponentBoundEvent_0_OnContinue__DelegateSignature");
		
		UBP_MainMenu_AnnouncementPanel_C_BndEvt__BP_PatchNotification_K2Node_ComponentBoundEvent_0_OnContinue__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.BndEvt__BP_ReportNotification_K2Node_ComponentBoundEvent_3_OnContinue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::BndEvt__BP_ReportNotification_K2Node_ComponentBoundEvent_3_OnContinue__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.BndEvt__BP_ReportNotification_K2Node_ComponentBoundEvent_3_OnContinue__DelegateSignature");
		
		UBP_MainMenu_AnnouncementPanel_C_BndEvt__BP_ReportNotification_K2Node_ComponentBoundEvent_3_OnContinue__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.OnUserContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::OnUserContinue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.OnUserContinue");
		
		UBP_MainMenu_AnnouncementPanel_C_OnUserContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.ExecuteUbergraph_BP_MainMenu_AnnouncementPanel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::ExecuteUbergraph_BP_MainMenu_AnnouncementPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.ExecuteUbergraph_BP_MainMenu_AnnouncementPanel");
		
		UBP_MainMenu_AnnouncementPanel_C_ExecuteUbergraph_BP_MainMenu_AnnouncementPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.OnContinue__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromNewsAnnouncement                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TimeOnScreen                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bClickedLink                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_AnnouncementPanel_C::OnContinue__DelegateSignature(bool bFromNewsAnnouncement, float TimeOnScreen, bool bClickedLink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.OnContinue__DelegateSignature");
		
		UBP_MainMenu_AnnouncementPanel_C_OnContinue__DelegateSignature_Params params {};
		params.bFromNewsAnnouncement = bFromNewsAnnouncement;
		params.TimeOnScreen = TimeOnScreen;
		params.bClickedLink = bClickedLink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_AnnouncementPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_AnnouncementPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C");
		return ptr;
	}

}


