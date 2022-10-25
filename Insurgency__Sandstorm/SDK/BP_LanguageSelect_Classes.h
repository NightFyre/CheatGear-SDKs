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
	 * WidgetBlueprintGeneratedClass BP_LanguageSelect.BP_LanguageSelect_C
	 * Size -> 0x00A9 (FullSize[0x02D9] - InheritedSize[0x0230])
	 */
	class UBP_LanguageSelect_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     BackgroundBlur_121;                                      // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 BP_GenericDialog;                                        // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LanguageSelect_Row_C*                            BP_LanguageSelect_Row_1430;                              // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LanguageSelect_Row_C*                            BP_LanguageSelect_Row_C_1432;                            // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LanguageSelect_Row_C*                            BP_LanguageSelect_Row_C_1433;                            // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               CancelButton;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ChangeHintHovered;                                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ChangeHintSelected;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Globe;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   LanguageGrid;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Title;                                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              LastSelectedLanguage;                                    // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             LanguageApplied;                                         // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                TitleText;                                               // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_LanguageSelect_Row_C*                            HighlightedRowRef;                                       // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasChangedLanguage;                                     // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		ESlateVisibility GetVisibility_1();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void PromptLanguage();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void ApplyChanges();
		void SetSelectedButton(const class FString& LanguageTag);
		void OnLanguageSelected(const class FString& LanguageTag, const class FText& LanguageName);
		void BuildLanguageButtons();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature();
		void BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_2_OnCanceled__DelegateSignature();
		void BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
		void ExecuteUbergraph_BP_LanguageSelect(int32_t EntryPoint);
		void LanguageApplied__DelegateSignature(bool IsNewCulture);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
