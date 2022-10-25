#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BP_Widget_PlayerReport.BP_Widget_PlayerReport_C
	 * Size -> 0x00D0 (FullSize[0x0300] - InheritedSize[0x0230])
	 */
	class UBP_Widget_PlayerReport_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               CancelButtonAction;                                      // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 ConfirmCancel;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_DropdownIndexed_C*                    DropdownReason;                                          // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 GenericError;                                            // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerName;                                              // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiLineEditableText*                              PlayerReportText;                                        // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 ReportDialogue;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GenericLoadingDialog_C*                          ReportInProgress;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 ReportThanks;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               SendButtonAction;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FUniqueNetIdRepl                                    ReportingPlayer;                                         // 0x0290(0x0028) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FUniqueNetIdRepl                                    ReportedPlayer;                                          // 0x02B8(0x0028) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              PlayerNameString;                                        // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		class UWidget* NavigateToSelectReason(EUINavigation Navigation);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void Get_Catagory_From_Dropdown(class UBP_OptionsRow_DropdownIndexed_C* Target, EReportCategoryEnum* Catagory);
		void OnSendReportComplete_5147F2B3474381C64A68EF89A97CF1AC(bool bSuccess, const struct FSendReportResult& Result);
		void OnSendReportComplete_F393412742B87002BA1246B11F4E7BA5(bool bSuccess, const struct FSendReportResult& Result);
		void OnSendReportComplete_AD4A16B44B190E9B83ED858E253CAFE8(bool bSuccess, const struct FSendReportResult& Result);
		void EndDialogue();
		void BndEvt__ReportThanks_K2Node_ComponentBoundEvent_3_OnConfirmed__DelegateSignature();
		void BndEvt__SendBtn_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature();
		void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_9_OnHover__DelegateSignature();
		void BndEvt__ReportInProgress_K2Node_ComponentBoundEvent_1_OnActionCancelled__DelegateSignature();
		void Request_New_Popup(int32_t Selected_Enum);
		void BndEvt__GenericError_K2Node_ComponentBoundEvent_3_OnCanceled__DelegateSignature();
		void BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_7_OnCanceled__DelegateSignature();
		void BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature();
		void BndEvt__GenericError_K2Node_ComponentBoundEvent_5_OnConfirmed__DelegateSignature();
		void BndEvt__PlayerReportText_K2Node_ComponentBoundEvent_12_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__GenericError_K2Node_ComponentBoundEvent_11_OnConfirmedExtraButton__DelegateSignature();
		void OnShowRoundOver(const struct FPlayerRoundOverData& UIData);
		void Construct();
		void BndEvt__SendButtonAction_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
		void BndEvt__CancelButtonAction_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature();
		void ExecuteUbergraph_BP_Widget_PlayerReport(int32_t EntryPoint);
		void OnClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
