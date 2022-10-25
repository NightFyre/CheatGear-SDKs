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
	 * WidgetBlueprintGeneratedClass BP_DebugMenu.BP_DebugMenu_C
	 * Size -> 0x0168 (FullSize[0x0398] - InheritedSize[0x0230])
	 */
	class UBP_DebugMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_DebugMenuButton_C*                               BP_DebugMenuButton_C_3;                                  // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BP_DebugMenuButton_C_4;                                  // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BP_DebugMenuButton_C_5;                                  // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButtonSlider_C*                         BP_DebugMenuButtonSlider;                                // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnBeginProfiling;                                       // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnBeginProfilingMatch;                                  // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnBugItGo;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnChangeLevelSubmenu;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnCheatCapture;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnCounterAttack;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnGiveWeapon;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnGiveWeaponUpgrade;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnHurtMe;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnRespawnAll;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnRoundTimer;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnServerEndRoundDefeat;                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnServerEndRoundVictory;                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnSkipMatchWaiting;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnSubmenuAI;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnSubmenuPlayer;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnSubmenuServer;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnSubmenuVisuals;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnToggleBulletImpacts;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DebugMenuButton_C*                               BtnToggleBulletTraces;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ImageButton_C*                                   CloseImageButton;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          HurtMeAmountText;                                        // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             HurtMeHealthAmount;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LevelsVerticalBox;                                       // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     ListWidgetSwitcher;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          MainCommands;                                            // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ScenariosVerticalBox;                                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SubmenuServerAdminMusic;                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          SubMenuStats;                                            // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          SubmenuWeapons;                                          // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          SubmenuWeaponUpgrades;                                   // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Title;                                                   // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       XCords;                                                  // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       YCords;                                                  // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       ZCords;                                                  // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<EBP_DebugMenuPages>                                 PageStack;                                               // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              AdminSelectedLevel;                                      // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void PopulateMusicEvents();
		void OnSelectGoBack(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void IsAdmin(bool* bIsAdmin);
		bool BindingServerBtnEnabled();
		void BackDefault(class UBP_DebugMenuButton_C* SelectedButton);
		void PopulateWeaponUpgrades();
		void PopulateWeaponList();
		void ToggleDebugMenu();
		class FText GetText_1();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void GetWidgetToFocus(class UWidget** Widget);
		void PopHistory(bool* bHasData, EBP_DebugMenuPages* Type);
		void PushHistory(EBP_DebugMenuPages Type);
		class FText GetTitleText();
		void Back(bool bCloseOnRoot);
		void OnChildCommand(const class FString& Command);
		void OpenCommandList(EBP_DebugMenuPages Type);
		void Construct();
		void BndEvt__BtnChangeLevelSubmenu_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnLevelOpenCompoundFire_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnSubmenuAI_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnSubmenuPlayer_K2Node_ComponentBoundEvent_110_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnGiveWeapon_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnGiveWeaponUpgrade_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnSubmenuVisuals_K2Node_ComponentBoundEvent_95_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnToggleBulletImpacts_K2Node_ComponentBoundEvent_163_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnToggleBulletTraces_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnSubmenuServer_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnServerChangeLevel_K2Node_ComponentBoundEvent_222_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnServerEndRoundVictory_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnServerEndRoundDefeat_K2Node_ComponentBoundEvent_85_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void OnMusicEventSelected(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BP_DebugMenuButton_C_2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnBeginProfiling_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnBeginProfilingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__BtnSkipMatchWaiting_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		void BndEvt__CloseImageButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__HurtMeHealthAmount_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__ZCords_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__YCords_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__XCords_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_BP_DebugMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
