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
	 * WidgetBlueprintGeneratedClass WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C
	 * Size -> 0x0110 (FullSize[0x0370] - InheritedSize[0x0260])
	 */
	class UWBP_DialogueBox_TextInput_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Cancel;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Ok;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_FileName;                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_147;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Cancel;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      TextBlock_Message;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Ok;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Title;                                         // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOkClicked;                                             // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancelClicked;                                         // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                Title;                                                   // 0x02C8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                Message;                                                 // 0x02E0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FString                                              InitialInputText;                                        // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		EGBMessageDialogTypes                                      Type;                                                    // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_NWOJ[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OkText;                                                  // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                CancelText;                                              // 0x0328(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                YesText;                                                 // 0x0340(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NoText;                                                  // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool Get_Button_Password_Ok_bIsEnabled_1();
		void BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_883_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Password_Cancel_K2Node_ComponentBoundEvent_1107_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__EditableTextBox_FileName_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void Construct();
		void Close();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_DialogueBox_TextInput(int32_t EntryPoint);
		void OnCancelClicked__DelegateSignature();
		void OnOkClicked__DelegateSignature(const class FString& Filename);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
