/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.ChangeFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Filter                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UServerBrowserWidget_C::ChangeFilter(const class FText& Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ChangeFilter");
		
		UServerBrowserWidget_C_ChangeFilter_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.UpdatePreviewPrisoners
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ServerIp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ServerResponsePort                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::UpdatePreviewPrisoners(const class FString& ServerIp, int32_t ServerResponsePort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.UpdatePreviewPrisoners");
		
		UServerBrowserWidget_C_UpdatePreviewPrisoners_Params params {};
		params.ServerIp = ServerIp;
		params.ServerResponsePort = ServerResponsePort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.GetCurrentUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUser*                                       User                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::GetCurrentUser(class UUser** User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.GetCurrentUser");
		
		UServerBrowserWidget_C_GetCurrentUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (User != nullptr)
			*User = params.User;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.SaveDirectionConnectionAddress
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::SaveDirectionConnectionAddress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.SaveDirectionConnectionAddress");
		
		UServerBrowserWidget_C_SaveDirectionConnectionAddress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServerAndConnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AuthToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::ChooseServerAndConnect(const class FString& AuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServerAndConnect");
		
		UServerBrowserWidget_C_ChooseServerAndConnect_Params params {};
		params.AuthToken = AuthToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Ip                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResponsePort                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::ChooseServer(class FString* Ip, int32_t* ResponsePort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServer");
		
		UServerBrowserWidget_C_ChooseServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ip != nullptr)
			*Ip = params.Ip;
		if (ResponsePort != nullptr)
			*ResponsePort = params.ResponsePort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.HidePasswordPopup
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::HidePasswordPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.HidePasswordPopup");
		
		UServerBrowserWidget_C_HidePasswordPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.ShowPasswordPopup
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::ShowPasswordPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ShowPasswordPopup");
		
		UServerBrowserWidget_C_ShowPasswordPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.EnterPassword
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::EnterPassword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.EnterPassword");
		
		UServerBrowserWidget_C_EnterPassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.ConnectToServerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FServerInfo                                 ServerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      AuthToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::ConnectToServerInfo(const struct FServerInfo& ServerInfo, const class FString& AuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ConnectToServerInfo");
		
		UServerBrowserWidget_C_ConnectToServerInfo_Params params {};
		params.ServerInfo = ServerInfo;
		params.AuthToken = AuthToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateSelectedServer
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::UpdateSelectedServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateSelectedServer");
		
		UServerBrowserWidget_C_UpdateSelectedServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UServerBrowserWidget_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnPreviewKeyDown");
		
		UServerBrowserWidget_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.SelectServerForConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UServerInfoWidget_C*                         ServerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::SelectServerForConnection(class UServerInfoWidget_C* ServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.SelectServerForConnection");
		
		UServerBrowserWidget_C_SelectServerForConnection_Params params {};
		params.ServerInfo = ServerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.Get_Refresh_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UServerBrowserWidget_C::Get_Refresh_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Get_Refresh_bIsEnabled_1");
		
		UServerBrowserWidget_C_Get_Refresh_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UServerBrowserWidget_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.GetVisibility_1");
		
		UServerBrowserWidget_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.ToggleCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_TrashMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::ToggleCategory(class UWidget* Widget, class UUI_TrashMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ToggleCategory");
		
		UServerBrowserWidget_C_ToggleCategory_Params params {};
		params.Widget = Widget;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.Scroll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::Scroll(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Scroll");
		
		UServerBrowserWidget_C_Scroll_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UServerBrowserWidget_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnMouseWheel");
		
		UServerBrowserWidget_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Construct");
		
		UServerBrowserWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateList
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::UpdateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateList");
		
		UServerBrowserWidget_C_UpdateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.RemoveInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::RemoveInfo(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.RemoveInfo");
		
		UServerBrowserWidget_C_RemoveInfo_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.AddNewInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FServerInfo                                 ServerInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UServerBrowserWidget_C::AddNewInfo(const struct FServerInfo& ServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.AddNewInfo");
		
		UServerBrowserWidget_C_AddNewInfo_Params params {};
		params.ServerInfo = ServerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OnClickedOnServerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UServerInfoWidget_C*                         ServerInfoWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::OnClickedOnServerInfo(class UServerInfoWidget_C* ServerInfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnClickedOnServerInfo");
		
		UServerBrowserWidget_C_OnClickedOnServerInfo_Params params {};
		params.ServerInfoWidget = ServerInfoWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OnServerInfoDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UServerInfoWidget_C*                         ServerInfoWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::OnServerInfoDoubleClicked(class UServerInfoWidget_C* ServerInfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnServerInfoDoubleClicked");
		
		UServerBrowserWidget_C_OnServerInfoDoubleClicked_Params params {};
		params.ServerInfoWidget = ServerInfoWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UServerBrowserWidget_C::BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature(int32_t Index, int32_t OldIndex, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.OldIndex = OldIndex;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UServerBrowserWidget_C::BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature(int32_t Index, int32_t OldIndex, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.OldIndex = OldIndex;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OnESC
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::OnESC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnESC");
		
		UServerBrowserWidget_C_OnESC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.CancelPassword
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::CancelPassword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.CancelPassword");
		
		UServerBrowserWidget_C_CancelPassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.GoBack
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::GoBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.GoBack");
		
		UServerBrowserWidget_C_GoBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UServerBrowserWidget_C::BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int32_t Index, int32_t OldIndex, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.OldIndex = OldIndex;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OnFavoriteRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FServerInfo                                 Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UServerBrowserWidget_C::OnFavoriteRemoved(const struct FServerInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnFavoriteRemoved");
		
		UServerBrowserWidget_C_OnFavoriteRemoved_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.ShowErrorDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UServerBrowserWidget_C::ShowErrorDialog(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ShowErrorDialog");
		
		UServerBrowserWidget_C_ShowErrorDialog_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BeginWaitingOnServerResponse
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BeginWaitingOnServerResponse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BeginWaitingOnServerResponse");
		
		UServerBrowserWidget_C_BeginWaitingOnServerResponse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.EndWaitingOnServerResponse
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::EndWaitingOnServerResponse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.EndWaitingOnServerResponse");
		
		UServerBrowserWidget_C_EndWaitingOnServerResponse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UServerBrowserWidget_C::BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OpenContinueOrNewDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Ip                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            GameplayPort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResponsePort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AuthToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::OpenContinueOrNewDialog(const class FString& Ip, int32_t GameplayPort, int32_t ResponsePort, const class FString& AuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OpenContinueOrNewDialog");
		
		UServerBrowserWidget_C_OpenContinueOrNewDialog_Params params {};
		params.Ip = Ip;
		params.GameplayPort = GameplayPort;
		params.ResponsePort = ResponsePort;
		params.AuthToken = AuthToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OnContinueWithCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Ip                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            GameplayPort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResponsePort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AuthToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::OnContinueWithCharacter(const class FString& Ip, int32_t GameplayPort, int32_t ResponsePort, const class FString& AuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnContinueWithCharacter");
		
		UServerBrowserWidget_C_OnContinueWithCharacter_Params params {};
		params.Ip = Ip;
		params.GameplayPort = GameplayPort;
		params.ResponsePort = ResponsePort;
		params.AuthToken = AuthToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OnCreateNewCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Ip                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            GameplayPort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResponsePort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AuthToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::OnCreateNewCharacter(const class FString& Ip, int32_t GameplayPort, int32_t ResponsePort, const class FString& AuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnCreateNewCharacter");
		
		UServerBrowserWidget_C_OnCreateNewCharacter_Params params {};
		params.Ip = Ip;
		params.GameplayPort = GameplayPort;
		params.ResponsePort = ResponsePort;
		params.AuthToken = AuthToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.OnNewCharacterConfirmed
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::OnNewCharacterConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnNewCharacterConfirmed");
		
		UServerBrowserWidget_C_OnNewCharacterConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.NewCharacterCanceled
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::NewCharacterCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.NewCharacterCanceled");
		
		UServerBrowserWidget_C_NewCharacterCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_SortByButton_C*                          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESortByTypes                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.ClearSorts
	 * 		Flags  -> ()
	 */
	void UServerBrowserWidget_C::ClearSorts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ClearSorts");
		
		UServerBrowserWidget_C_ClearSorts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_SortByButton_C*                          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESortByTypes                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_SortByButton_C*                          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESortByTypes                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_SortByButton_C*                          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESortByTypes                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_SortByButton_C*                          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESortByTypes                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UServerBrowserWidget_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Tick");
		
		UServerBrowserWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByVersion_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_SortByButton_C*                          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESortByTypes                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::BndEvt__SortByVersion_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByVersion_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UServerBrowserWidget_C_BndEvt__SortByVersion_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerBrowserWidget.ServerBrowserWidget_C.ExecuteUbergraph_ServerBrowserWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerBrowserWidget_C::ExecuteUbergraph_ServerBrowserWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ExecuteUbergraph_ServerBrowserWidget");
		
		UServerBrowserWidget_C_ExecuteUbergraph_ServerBrowserWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerBrowserWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerBrowserWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ServerBrowserWidget.ServerBrowserWidget_C");
		return ptr;
	}

}


