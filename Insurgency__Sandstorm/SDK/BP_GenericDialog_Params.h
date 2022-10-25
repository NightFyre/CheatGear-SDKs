#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_GenericDialog.BP_GenericDialog_C.SetTitleIconImage
	 */
	struct UBP_GenericDialog_C_SetTitleIconImage_Params
	{
	public:
		unsigned char                                              UnknownData_JWFG[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.OnKeyUp
	 */
	struct UBP_GenericDialog_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.SetCustomWidgetVisibility
	 */
	struct UBP_GenericDialog_C_SetCustomWidgetVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.UpdateDialogType
	 */
	struct UBP_GenericDialog_C_UpdateDialogType_Params
	{
	public:
		EDialogType                                                NewType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.DialogExtraButtonClicked
	 */
	struct UBP_GenericDialog_C_DialogExtraButtonClicked_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.SetExtraButtonText
	 */
	struct UBP_GenericDialog_C_SetExtraButtonText_Params
	{
	public:
		class FText                                                NewButtonText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.SetCancelButtonText
	 */
	struct UBP_GenericDialog_C_SetCancelButtonText_Params
	{
	public:
		class FText                                                NewButtonText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.SetOKButtonText
	 */
	struct UBP_GenericDialog_C_SetOKButtonText_Params
	{
	public:
		class FText                                                NewButtonText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.SetupDialogType
	 */
	struct UBP_GenericDialog_C_SetupDialogType_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.GetEnteredText
	 */
	struct UBP_GenericDialog_C_GetEnteredText_Params
	{
	public:
		class FText                                                Output;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.Set Confirmation Text
	 */
	struct UBP_GenericDialog_C_Set_Confirmation_Text_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.UpdateTitleText
	 */
	struct UBP_GenericDialog_C_UpdateTitleText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bConvertToUpper;                                         // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JT06[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.DialogConfirmed
	 */
	struct UBP_GenericDialog_C_DialogConfirmed_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.DialogCancel
	 */
	struct UBP_GenericDialog_C_DialogCancel_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.OnKeyDown
	 */
	struct UBP_GenericDialog_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.OnFocusReceived
	 */
	struct UBP_GenericDialog_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.SetDefaultTextEntryText
	 */
	struct UBP_GenericDialog_C_SetDefaultTextEntryText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.PreConstruct
	 */
	struct UBP_GenericDialog_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_42_OnPressed__DelegateSignature
	 */
	struct UBP_GenericDialog_C_BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_42_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_GenericDialog_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__TextEntry_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature
	 */
	struct UBP_GenericDialog_C_BndEvt__TextEntry_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBP_GenericDialog_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 */
	struct UBP_GenericDialog_C_BndEvt__ExtraButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.BP_ClosingVirtualKeyboard
	 */
	struct UBP_GenericDialog_C_BP_ClosingVirtualKeyboard_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.BP_OpeningVirtualKeyboard
	 */
	struct UBP_GenericDialog_C_BP_OpeningVirtualKeyboard_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.ExecuteUbergraph_BP_GenericDialog
	 */
	struct UBP_GenericDialog_C_ExecuteUbergraph_BP_GenericDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6XAP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmedWithEmptyText__DelegateSignature
	 */
	struct UBP_GenericDialog_C_OnConfirmedWithEmptyText__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmedExtraButton__DelegateSignature
	 */
	struct UBP_GenericDialog_C_OnConfirmedExtraButton__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.OnCloseButtonPressed__DelegateSignature
	 */
	struct UBP_GenericDialog_C_OnCloseButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmedWithText__DelegateSignature
	 */
	struct UBP_GenericDialog_C_OnConfirmedWithText__DelegateSignature_Params
	{
	public:
		class FText                                                ConfirmText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmed__DelegateSignature
	 */
	struct UBP_GenericDialog_C_OnConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GenericDialog.BP_GenericDialog_C.OnCanceled__DelegateSignature
	 */
	struct UBP_GenericDialog_C_OnCanceled__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
