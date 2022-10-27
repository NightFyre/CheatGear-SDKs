#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass UI_CharacterSelection.UI_CharacterSelection_C
	 * Size -> 0x0080 (FullSize[0x02E0] - InheritedSize[0x0260])
	 */
	class UUI_CharacterSelection_C : public UCharacterSelectionWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_TrashMenuButton_C*                               BackButton;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            CharacterSlotsOverlay;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CharacterSlotsVerticalBox;                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               CreateButton;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CriminalRecord_C*                                CriminalRecord;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            CriminalRecordOverlay;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_YesNoMenuConfirmation_C*                         DeleteCharacterConfirmation;                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_5;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_351;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvasPanel;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          MainScrollBox;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               SelectButton;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CharacterSlot_C*                                 _deletingCharSlot;                                       // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserProfile*                                        _selectedUserProfile;                                    // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature();
		void BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void Construct();
		void BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature();
		void BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature();
		void BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature();
		void BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature();
		void OnESC();
		void CancelCriminalRecord();
		void CancelDeleteCharacter();
		void Back();
		void OnCharacterDeleted(class UUI_CharacterSlot_C* Widget);
		void OnCharacterSelected(class UUserProfile* UserProfile);
		void ExecuteUbergraph_UI_CharacterSelection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
