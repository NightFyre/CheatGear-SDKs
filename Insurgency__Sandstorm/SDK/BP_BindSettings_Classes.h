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
	 * WidgetBlueprintGeneratedClass BP_BindSettings.BP_BindSettings_C
	 * Size -> 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
	 */
	class UBP_BindSettings_C : public UKeyBindingsMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        BindingsBox;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Settings_PageBase_C*                             BP_Settings_PageBase;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESlateVisibility                                           VisibilityVar;                                           // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9HNB[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ConflictKeyRow[0x28];                                    // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UBP_OptionsRow_BaseClass_C*                          HoveredItemCache;                                        // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void CreateKeyConflictDialog(struct FKeyBindingOption* KeyBindingOption, const struct FKey& ConflictingKey, const class FName& ConflictingActionName, class UBP_OptionsRow_KeyInput_C* KeyWidget);
		void OnReplaceKeyBinding(const struct FKeyBindingOption& BindingOption, const struct FKey& ConflictedKey, const class FName& ConflictAction);
		void PopulateKeyBindings();
		void OnActionKeyUpdated(const struct FKeyBindingOption& KeyBindOption, const struct FInputChord& NewKey, class UBP_OptionsRow_KeyInput_C* KeyWidget);
		bool Get_BtnSaveChanges_bIsEnabled_1();
		void PopulateOptions();
		void OnTabSelected();
		void Construct();
		void BlueprintResetToDefaults();
		void BlueprintApplyChanges();
		void OnKeyBindHovered(const class FText& HoveredKeyTitle, const class FText& HoveredKeyDescription, class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void BlueprintRefreshSettings();
		void OnProfileBlockLoadedDelegate_Event_1(EProfileBlockType Type, bool bFromCloud);
		void ExecuteUbergraph_BP_BindSettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
