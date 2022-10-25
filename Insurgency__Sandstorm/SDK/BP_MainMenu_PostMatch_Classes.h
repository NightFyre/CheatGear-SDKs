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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C
	 * Size -> 0x0100 (FullSize[0x0388] - InheritedSize[0x0288])
	 */
	class UBP_MainMenu_PostMatch_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DefaultKeyHints_C*                               BP_DefaultKeyHints;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_PostMatch_Stats_C*                      BP_MainMenu_PostMatch_Stats;                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuTabs_C*                                      BP_MenuTabs;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ProfileAppearance_C*                             BP_ProfileAppearance;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ButtonCancel;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ButtonNextMatch;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerName;                                              // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             TempPendingRequeueBox;                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextNextQueueIn;                                         // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOpenServerBrowser;                                     // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        ColorButtonHover;                                        // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColorButton;                                             // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              GameTypeSelection;                                       // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5F0I[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ModesSupportedVersus;                                    // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ModesSupportedCoop;                                      // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ModesSupportedCustom;                                    // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		ESlateVisibility GetAppearanceCreditVisibility();
		class FText GetLastKnownAppearanceCreditBalance();
		bool Get_BtnNextMatch_bIsEnabled_1();
		class FText Get_SectionText_Text_1();
		ESlateVisibility Get_TextNextQueueIn_Visibility_1();
		class FText Get_TextNextQueueIn_Text_1();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		class FText Get_PlayerName_Text_1();
		void OnPageSelected(EnumMainMenuPage NewPage);
		void BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_211_OnTabSelected__DelegateSignature(int32_t Index);
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__ButtonNextMatch_K2Node_ComponentBoundEvent_199_OnClick__DelegateSignature();
		void BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_238_OnClick__DelegateSignature();
		void OnPanelClosed();
		void ExecuteUbergraph_BP_MainMenu_PostMatch(int32_t EntryPoint);
		void OnNavigateBack__DelegateSignature();
		void OnOpenServerBrowser__DelegateSignature(const class FName& Type);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
