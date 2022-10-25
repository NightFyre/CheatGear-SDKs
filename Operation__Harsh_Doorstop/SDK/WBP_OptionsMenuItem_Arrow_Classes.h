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
	 * WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C
	 * Size -> 0x00B0 (FullSize[0x02E0] - InheritedSize[0x0230])
	 */
	class UWBP_OptionsMenuItem_Arrow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             NextOptionBtn;                                           // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OptionText;                                              // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PrevOptionBtn;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SelectedOptionSizeBox;                                   // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SelectedOptionText;                                      // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0260(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FFOptionItemSelection>                       Options;                                                 // 0x0278(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    SelectedOptionIndex;                                     // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_VW3K[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                TextDescription;                                         // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                      TextWidth;                                               // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EArrowOptionsPreset                                        OptionsPreset;                                           // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_1SGO[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFOptionItemSelection>                       ScalabilityOptions;                                      // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectionChangedByUser;                                // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void FindOptionIndex(const class FText& OptionDisplayName, int32_t* Index);
		void SetSelectedOption(const class FText& OptionDisplayName);
		void SetSelectedOptionByValue(const class FString& OptionValue);
		void PopulateOptionsByPreset(EArrowOptionsPreset Preset);
		void FindOptionValueIndex(const class FString& OptionValue, int32_t* Index);
		void SetSelectedOptionByIndex(int32_t Index);
		void ClearSelection();
		void INTERNAL_ClearSelection(ESelectInfo DeselectionType);
		void RemoveOptionAtIndex(int32_t IndexToRemove, bool* bRemovalSuccess);
		void GetOptionCount(int32_t* OptionCount);
		void AddOption(struct FFOptionItemSelection* NewOption);
		void GetOptionValueAtIndex(int32_t Index, class FString* OptionValue);
		void GetSelectedOptionValue(class FString* OptionValue);
		void INTERNAL_SetSelectedOptionByIndex(int32_t Index, ESelectInfo SelectionType);
		void ClearOptions();
		void BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnItemSelectionChanged(const class FString& SelectedItemValue, ESelectInfo SelectionType);
		void ExecuteUbergraph_WBP_OptionsMenuItem_Arrow(int32_t EntryPoint);
		void OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue);
		void OnSelectionChanged__DelegateSignature(const class FString& SelectedItemValue, ESelectInfo SelectionType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
