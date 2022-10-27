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
	 * WidgetBlueprintGeneratedClass WBP_ComboBox.WBP_ComboBox_C
	 * Size -> 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
	 */
	class UWBP_ComboBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Combo;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_697;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         MenuAnchor_Content;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_125;                                           // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        Entries;                                                 // 0x0288(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnIndexChanged;                                          // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Index;                                                   // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_32EG[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                BadEntry;                                                // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class FText GetComboBoxEntryText();
		class UWidget* OnGetMenuContent();
		void BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature();
		void SetupContent(class UWBP_ComboBox_Content_C* MenuDropdownContent);
		void OnIndexChanged_Event(int32_t Index);
		void ExecuteUbergraph_WBP_ComboBox(int32_t EntryPoint);
		void OnIndexChanged__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
