#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.ChangeFilter
	 */
	struct UServerBrowserWidget_C_ChangeFilter_Params
	{
	public:
		class FText                                                Filter;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.UpdatePreviewPrisoners
	 */
	struct UServerBrowserWidget_C_UpdatePreviewPrisoners_Params
	{
	public:
		class FString                                              ServerIp;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ServerResponsePort;                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K0UA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.GetCurrentUser
	 */
	struct UServerBrowserWidget_C_GetCurrentUser_Params
	{
	public:
		class UUser*                                               User;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.SaveDirectionConnectionAddress
	 */
	struct UServerBrowserWidget_C_SaveDirectionConnectionAddress_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServerAndConnect
	 */
	struct UServerBrowserWidget_C_ChooseServerAndConnect_Params
	{
	public:
		class FString                                              AuthToken;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServer
	 */
	struct UServerBrowserWidget_C_ChooseServer_Params
	{
	public:
		class FString                                              Ip;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ResponsePort;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.HidePasswordPopup
	 */
	struct UServerBrowserWidget_C_HidePasswordPopup_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.ShowPasswordPopup
	 */
	struct UServerBrowserWidget_C_ShowPasswordPopup_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.EnterPassword
	 */
	struct UServerBrowserWidget_C_EnterPassword_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.ConnectToServerInfo
	 */
	struct UServerBrowserWidget_C_ConnectToServerInfo_Params
	{
	public:
		struct FServerInfo                                         ServerInfo;                                              // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              AuthToken;                                               // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateSelectedServer
	 */
	struct UServerBrowserWidget_C_UpdateSelectedServer_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OnPreviewKeyDown
	 */
	struct UServerBrowserWidget_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.SelectServerForConnection
	 */
	struct UServerBrowserWidget_C_SelectServerForConnection_Params
	{
	public:
		class UServerInfoWidget_C*                                 ServerInfo;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.Get_Refresh_bIsEnabled_1
	 */
	struct UServerBrowserWidget_C_Get_Refresh_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.GetVisibility_1
	 */
	struct UServerBrowserWidget_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.ToggleCategory
	 */
	struct UServerBrowserWidget_C_ToggleCategory_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_TrashMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.Scroll
	 */
	struct UServerBrowserWidget_C_Scroll_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OnMouseWheel
	 */
	struct UServerBrowserWidget_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.Construct
	 */
	struct UServerBrowserWidget_C_Construct_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateList
	 */
	struct UServerBrowserWidget_C_UpdateList_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.RemoveInfo
	 */
	struct UServerBrowserWidget_C_RemoveInfo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.AddNewInfo
	 */
	struct UServerBrowserWidget_C_AddNewInfo_Params
	{
	public:
		struct FServerInfo                                         ServerInfo;                                              // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OnClickedOnServerInfo
	 */
	struct UServerBrowserWidget_C_OnClickedOnServerInfo_Params
	{
	public:
		class UServerInfoWidget_C*                                 ServerInfoWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OnServerInfoDoubleClicked
	 */
	struct UServerBrowserWidget_C_OnServerInfoDoubleClicked_Params
	{
	public:
		class UServerInfoWidget_C*                                 ServerInfoWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldIndex;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Value;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldIndex;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Value;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OnESC
	 */
	struct UServerBrowserWidget_C_OnESC_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.CancelPassword
	 */
	struct UServerBrowserWidget_C_CancelPassword_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.GoBack
	 */
	struct UServerBrowserWidget_C_GoBack_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldIndex;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Value;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OnFavoriteRemoved
	 */
	struct UServerBrowserWidget_C_OnFavoriteRemoved_Params
	{
	public:
		struct FServerInfo                                         Info;                                                    // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.ShowErrorDialog
	 */
	struct UServerBrowserWidget_C_ShowErrorDialog_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BeginWaitingOnServerResponse
	 */
	struct UServerBrowserWidget_C_BeginWaitingOnServerResponse_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.EndWaitingOnServerResponse
	 */
	struct UServerBrowserWidget_C_EndWaitingOnServerResponse_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OpenContinueOrNewDialog
	 */
	struct UServerBrowserWidget_C_OpenContinueOrNewDialog_Params
	{
	public:
		class FString                                              Ip;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    GameplayPort;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ResponsePort;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              AuthToken;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OnContinueWithCharacter
	 */
	struct UServerBrowserWidget_C_OnContinueWithCharacter_Params
	{
	public:
		class FString                                              Ip;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    GameplayPort;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ResponsePort;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              AuthToken;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OnCreateNewCharacter
	 */
	struct UServerBrowserWidget_C_OnCreateNewCharacter_Params
	{
	public:
		class FString                                              Ip;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    GameplayPort;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ResponsePort;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              AuthToken;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.OnNewCharacterConfirmed
	 */
	struct UServerBrowserWidget_C_OnNewCharacterConfirmed_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.NewCharacterCanceled
	 */
	struct UServerBrowserWidget_C_NewCharacterCanceled_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_SortByButton_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESortByTypes                                               Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.ClearSorts
	 */
	struct UServerBrowserWidget_C_ClearSorts_Params
	{	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_SortByButton_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESortByTypes                                               Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_SortByButton_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESortByTypes                                               Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_SortByButton_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESortByTypes                                               Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_SortByButton_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESortByTypes                                               Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.Tick
	 */
	struct UServerBrowserWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByVersion_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UServerBrowserWidget_C_BndEvt__SortByVersion_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_SortByButton_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESortByTypes                                               Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerBrowserWidget.ServerBrowserWidget_C.ExecuteUbergraph_ServerBrowserWidget
	 */
	struct UServerBrowserWidget_C_ExecuteUbergraph_ServerBrowserWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OVDK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
