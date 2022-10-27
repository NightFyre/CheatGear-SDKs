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
	 * WidgetBlueprintGeneratedClass WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C
	 * Size -> 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
	 */
	class UWBP_CharacterEditorScreen_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_CharacterEditor_C*                              WBP_CharacterEditor;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                ProfileName;                                             // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              OldViewTarget;                                           // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                MissingRequiredTitle;                                    // 0x0288(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MissingRequiredMessage;                                  // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SaveFailedTitle;                                         // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SaveFailedMessage;                                       // 0x02D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void Setup();
		void BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_1_OkClicked__DelegateSignature(class UVaRestJsonObject* JsonObj);
		void BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_2_CancelClicked__DelegateSignature();
		void Close();
		void ExecuteUbergraph_WBP_CharacterEditorScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
