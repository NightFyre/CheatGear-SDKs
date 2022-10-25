#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.GetVisibilityForAdmin
	 */
	struct UWBP_InGameMenuManager_C_GetVisibilityForAdmin_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.GetToolTipWidget_2
	 */
	struct UWBP_InGameMenuManager_C_GetToolTipWidget_2_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.GetToolTipWidget_1
	 */
	struct UWBP_InGameMenuManager_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.Get_Button_Settings_ToolTipWidget_1
	 */
	struct UWBP_InGameMenuManager_C_Get_Button_Settings_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.Get_Button_Vote_ToolTipWidget_1
	 */
	struct UWBP_InGameMenuManager_C_Get_Button_Vote_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.Get_Button_Friends_ToolTipWidget_1
	 */
	struct UWBP_InGameMenuManager_C_Get_Button_Friends_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.Get_Button_MainMenu_ToolTipWidget_1
	 */
	struct UWBP_InGameMenuManager_C_Get_Button_MainMenu_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.Get_Button_GameInfo_ToolTipWidget_1
	 */
	struct UWBP_InGameMenuManager_C_Get_Button_GameInfo_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnMouseButtonDown
	 */
	struct UWBP_InGameMenuManager_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnMouseButtonUp
	 */
	struct UWBP_InGameMenuManager_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnKeyDown
	 */
	struct UWBP_InGameMenuManager_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnKeyUp
	 */
	struct UWBP_InGameMenuManager_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.GetDebugButtonVis
	 */
	struct UWBP_InGameMenuManager_C_GetDebugButtonVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnPreviewKeyDown
	 */
	struct UWBP_InGameMenuManager_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.SwitchScreen
	 */
	struct UWBP_InGameMenuManager_C_SwitchScreen_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         WidgetObject;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.GetTimeText
	 */
	struct UWBP_InGameMenuManager_C_GetTimeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnLoaded_DD5CC48549EF6E77734D819873D36174
	 */
	struct UWBP_InGameMenuManager_C_OnLoaded_DD5CC48549EF6E77734D819873D36174_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnLoaded_DD5CC48549EF6E77734D819819709E75
	 */
	struct UWBP_InGameMenuManager_C_OnLoaded_DD5CC48549EF6E77734D819819709E75_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnLoaded_DD5CC48549EF6E77734D8198191199A7
	 */
	struct UWBP_InGameMenuManager_C_OnLoaded_DD5CC48549EF6E77734D8198191199A7_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnLoaded_DD5CC48549EF6E77734D81986217E956
	 */
	struct UWBP_InGameMenuManager_C_OnLoaded_DD5CC48549EF6E77734D81986217E956_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnLoaded_DD5CC48549EF6E77734D8198DBDCB2FE
	 */
	struct UWBP_InGameMenuManager_C_OnLoaded_DD5CC48549EF6E77734D8198DBDCB2FE_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnLoaded_DD5CC48549EF6E77734D81987A462BA2
	 */
	struct UWBP_InGameMenuManager_C_OnLoaded_DD5CC48549EF6E77734D81987A462BA2_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.Construct
	 */
	struct UWBP_InGameMenuManager_C_Construct_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.BndEvt__Button_Clock_K2Node_ComponentBoundEvent_877_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InGameMenuManager_C_BndEvt__Button_Clock_K2Node_ComponentBoundEvent_877_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.BndEvt__Button_Debug_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InGameMenuManager_C_BndEvt__Button_Debug_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.BndEvt__Button_ReportBugIssue_K2Node_ComponentBoundEvent_777_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InGameMenuManager_C_BndEvt__Button_ReportBugIssue_K2Node_ComponentBoundEvent_777_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1108_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InGameMenuManager_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1108_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.BndEvt__Button_GameInfo_K2Node_ComponentBoundEvent_183_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InGameMenuManager_C_BndEvt__Button_GameInfo_K2Node_ComponentBoundEvent_183_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InGameMenuManager_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InGameMenuManager_C_BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.BndEvt__Button_Admin_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InGameMenuManager_C_BndEvt__Button_Admin_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.OnOkReturnToMainMenu
	 */
	struct UWBP_InGameMenuManager_C_OnOkReturnToMainMenu_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.UpdateAdminButtonVisibility
	 */
	struct UWBP_InGameMenuManager_C_UpdateAdminButtonVisibility_Params
	{	};

	/**
	 * Function WBP_InGameMenuManager.WBP_InGameMenuManager_C.ExecuteUbergraph_WBP_InGameMenuManager
	 */
	struct UWBP_InGameMenuManager_C_ExecuteUbergraph_WBP_InGameMenuManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IOIX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
