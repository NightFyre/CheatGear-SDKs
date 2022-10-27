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
	 * WidgetBlueprintGeneratedClass BP_GenericTextEntry.BP_GenericTextEntry_C
	 * Size -> 0x0081 (FullSize[0x02B1] - InheritedSize[0x0230])
	 */
	class UBP_GenericTextEntry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEditableTextBox*                                    EditableTextBox_1;                                       // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bReadOnly;                                               // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_5HO9[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DefaultText;                                             // 0x0248(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		class FText                                                HintText;                                                // 0x0260(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		class FText                                                BoxTooltipText;                                          // 0x0278(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bPasswordEntry;                                          // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void ShowVirtualKeyboard(bool bShow, int32_t UserIndex);
		void SetPasswordEntry(bool bNewPasswordEntry);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetEnteredText(class FText* newText);
		void GetEnteredText(class FText* Text);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_59_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_73_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_BP_GenericTextEntry(int32_t EntryPoint);
		void OnTextChanged__DelegateSignature(const class FText& Text);
		void OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
