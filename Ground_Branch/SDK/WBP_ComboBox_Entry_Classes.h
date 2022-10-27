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
	 * WidgetBlueprintGeneratedClass WBP_ComboBox_Entry.WBP_ComboBox_Entry_C
	 * Size -> 0x00BF (FullSize[0x03B0] - InheritedSize[0x02F1])
	 */
	class UWBP_ComboBox_Entry_C : public UWBP_Tab_Master_C
	{
	public:
		unsigned char                                              UnknownData_7P3W[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheckBox*                                           CheckBox_Tab;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ItemSkinName;                                  // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0310(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    Index;                                                   // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_25E8[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         SelectedTextColour;                                      // 0x0330(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        SelectedTextShadowColour;                                // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         UnselectedTextColour;                                    // 0x0368(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        UnselectedTextShadowColour;                              // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnEntrySelected;                                         // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FLinearColor GetTextShadowColorAndOpacity();
		struct FSlateColor GetTextColorAndOpacity();
		void BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void InternalSetSelected(bool IsSelected);
		void InternalOnSelected();
		void ExecuteUbergraph_WBP_ComboBox_Entry(int32_t EntryPoint);
		void OnEntrySelected__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
