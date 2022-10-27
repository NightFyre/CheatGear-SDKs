#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C
	 * Size -> 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
	 */
	class UWBP_ModifierSetting_ComboBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UComboBoxString*                                     ModifierComboBox;                                        // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ModifierSettingBox_C*                           ModifierSetting;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                SettingText;                                             // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class FString>                                      DefaultOptions;                                          // 0x0260(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    DefaultSelectedOptionIdx;                                // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_JWJ9[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpening;                                               // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetSettingText(class FText* SettingText);
		void SetSettingText(const class FText& InSettingText);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature();
		void OnInitialized();
		void ExecuteUbergraph_WBP_ModifierSetting_ComboBox(int32_t EntryPoint);
		void OnOpening__DelegateSignature();
		void OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
