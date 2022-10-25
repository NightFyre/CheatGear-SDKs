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
	 * WidgetBlueprintGeneratedClass BP_Settings_PageBase.BP_Settings_PageBase_C
	 * Size -> 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
	 */
	class UBP_Settings_PageBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USizeBox*                                            HoverInfoContainer;                                      // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          OptionsSlot;                                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USaberInvalidationBox*                               SaberInvalidationBox_1;                                  // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollSettings;                                          // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_2;                                             // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsMenu*                                        OwningOptionsMenu;                                       // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                HoveredSettingHeaderText;                                // 0x0270(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                HoveredSettingDescriptionText;                           // 0x0288(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		ESlateVisibility                                           HoveredSettingVisibility;                                // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RL9V[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_MainMenu_Settings_C*                             OwningSettingsMenu;                                      // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void ScrollToWidget(class UWidget* NewWidget);
		void SetOwningSettingsMenu(class UBP_MainMenu_Settings_C* SettingsMenu);
		void HideHoveredInfo();
		void SetHoveredInfoText(const class FText& HeaderText, const class FText& DescriptionText);
		void SetOwningOptionsMenu(class UOptionsMenu* OptionsMenu);
		void BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature();
		void BndEvt__ButtonReset_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BP_Settings_PageBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
