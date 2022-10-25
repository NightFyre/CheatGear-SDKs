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
	 * WidgetBlueprintGeneratedClass WBP_Button_Preset.WBP_Button_Preset_C
	 * Size -> 0x01C1 (FullSize[0x0421] - InheritedSize[0x0260])
	 */
	class UWBP_Button_Preset_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_156;                                              // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Preset;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DisplayName_Preset;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Title_Preset;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0290(0x0018) Edit, BlueprintVisible
		class FString                                              Type;                                                    // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       bUsedForAppearance;                                      // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V9YF[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_Button_Item_C*>                          ItemButtons;                                             // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnPresetPressed;                                         // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWBP_CharacterEditor_C*                              CharacterEditorRef;                                      // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Filename;                                                // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DisplayName;                                             // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bCustomised;                                             // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VAF8[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CustomedDisplayName;                                     // 0x0310(0x0018) Edit, BlueprintVisible
		class FString                                              SavePresetName;                                          // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              SavePresetFileName;                                      // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                OverWriteTitle;                                          // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                OverWriteMessage;                                        // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PresetNameTitle;                                         // 0x0378(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PresetNameMessage;                                       // 0x0390(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Tooltip_PresetHelp;                                      // 0x03A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TeamRestrictedTitle;                                     // 0x03C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              TeamRestrictedString;                                    // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                TeamRestrictedMessage;                                   // 0x03E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                SkinTypeTagKey;                                          // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWBP_Button_Item_C*>                          UpdatedButtons;                                          // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FName                                                SkinMaterialPrefixTag;                                   // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableLoadAndSave;                                      // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		ESlateVisibility GetVisibilityForLoadAndSaveElements();
		void IsValidKitAssetList(const class FName& InLoadoutName, class UVaRestJsonObject* KitJsonObj, bool* bIsValid);
		void GetItemTypeButton(const class FString& TypeAsString, class UWBP_Button_Item_C** OutButtonitem);
		struct FSlateColor GetDisplayNamePresetColorAndOpacity();
		class UWidget* GetButtonPresetToolTipWidget();
		void GenerateJsonDataEntry(class UVaRestJsonObject** OutDataEntry);
		void AddItemData(class UVaRestJsonObject* InJsonObj, bool* bOutDataAdded);
		class FText GetPresetDisplayName();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnPresetSelected_Event_1(const class FString& DisplayString, const class FString& Filename, class UVaRestJsonObject* JsonObj);
		void Construct();
		void OnSaveClicked_Event_1();
		void BindSaveButton();
		void OnOkClicked_Event_1(const class FString& Filename);
		void PostUpdate_Event_1();
		void OnPresetDeleted_Event_1(const class FString& Filename);
		void Setup(class UVaRestJsonObject* JsonData);
		void SavePreset();
		void OnConfirmOkClicked_Event_1(class UWBP_DialogueBox_C* Dialogue);
		void OnCancelClicked_Event_2();
		void SavePrompt();
		void HideSelectionArea();
		void ShowRestrictedAssets();
		void ClearPresetList();
		void ExecuteUbergraph_WBP_Button_Preset(int32_t EntryPoint);
		void OnPresetPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
