#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * WidgetBlueprintGeneratedClass WBP_FrontEndMenuManager.WBP_FrontEndMenuManager_C
	 * Size -> 0x0308 (FullSize[0x0568] - InheritedSize[0x0260])
	 */
	class UWBP_FrontEndMenuManager_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_BuildInfo_C*                                    BuildInfo_130;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Credits;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_CustomiseOperator;                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_HostGame;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_PlayOffline;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Quit;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_ServerBrowser;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Settings;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Training;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HideIfNotCTE;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_18;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_GameVersion;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_2;                                             // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_3;                                             // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_4;                                             // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1372;                                          // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_CTEOrNot;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_News_C*                                         WBP_News;                                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         HoveredFontColour;                                       // 0x0300(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         DefaultFontColour;                                       // 0x0328(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Training;                                           // 0x0350(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Training_ToolTip;                                   // 0x0368(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Settings;                                           // 0x0380(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Settings_ToolTip;                                   // 0x0398(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Credits;                                            // 0x03B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Credits_ToolTip;                                    // 0x03C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Quit;                                               // 0x03E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Quit_ToolTip;                                       // 0x03F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UUserWidget*                                         CurrentScreen;                                           // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Text_PlayOffline;                                        // 0x0418(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_PlayOffline_ToolTip;                                // 0x0430(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_ServerBrowser;                                      // 0x0448(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_ServerBrowser_ToolTip;                              // 0x0460(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_CustomiseOperator;                                  // 0x0478(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_CustomiseOperator_ToolTip;                          // 0x0490(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Host;                                               // 0x04A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Host_ToolTip;                                       // 0x04C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SaveFailedTitle;                                         // 0x04D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SaveFailedMessage;                                       // 0x04F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConfimRunTrainingTitle;                                  // 0x0508(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConfirmRunTrainingMessage;                               // 0x0520(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConfirmQuitTitle;                                        // 0x0538(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConfirmQuitMessage;                                      // 0x0550(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UWidget* GetToolTipWidget_2();
		class UWidget* GetToolTipWidget_1();
		class UWidget* Get_Button_CustomiseOperator_ToolTipWidget_1();
		class UWidget* Get_Button_ServerBrowser_ToolTipWidget_1();
		class UWidget* Get_Button_HostGame_ToolTipWidget_1();
		class UWidget* Get_Button_PlayOffline_ToolTipWidget_1();
		class UWidget* Get_Button_Training_ToolTipWidget_1();
		void WriteAccessCheck();
		struct FSlateColor GetQuitFontColour();
		struct FSlateColor GetCreditsFontColour();
		struct FSlateColor GetSettingsFontColour();
		struct FSlateColor GetPlayFontColour();
		void OnLoaded_F58963B04C789C48C74184BBEC45BF6B(class UClass* Loaded);
		void OnLoaded_F58963B04C789C48C74184BB31E4BFBF(class UClass* Loaded);
		void OnLoaded_F58963B04C789C48C74184BB52EBA4D3(class UClass* Loaded);
		void OnLoaded_F58963B04C789C48C74184BB6BBD4CD6(class UClass* Loaded);
		void OnLoaded_F58963B04C789C48C74184BB75BADC38(class UClass* Loaded);
		void OnLoaded_F58963B04C789C48C74184BB49F34926(class UClass* Loaded);
		void OnLoaded_82C4A83F4A024B871A9C30BC46D2B931(class UObject* Loaded);
		void Construct();
		void BndEvt__Button_Quit_K2Node_ComponentBoundEvent_537_OnButtonClickedEvent__DelegateSignature();
		void ChectForNetworkOrTravelFailure();
		void BndEvt__Button_Training_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_PlayOffline_K2Node_ComponentBoundEvent_380_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_ServerBrowser_K2Node_ComponentBoundEvent_399_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_CustomiseOperator_K2Node_ComponentBoundEvent_419_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Settings_K2Node_ComponentBoundEvent_440_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Credits_K2Node_ComponentBoundEvent_462_OnButtonClickedEvent__DelegateSignature();
		void ShowMenu();
		void BndEvt__Button_HostGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void OnClickedOkRunTraining(class UWBP_DialogueBox_C* Dialogue);
		void OnOkClickedQuit(class UWBP_DialogueBox_C* Dialogue);
		void ExecuteUbergraph_WBP_FrontEndMenuManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
