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
	 * WidgetBlueprintGeneratedClass BP_TutorialPromptModal.BP_TutorialPromptModal_C
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UBP_TutorialPromptModal_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BtnCancel;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnPlayTutorial;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSkipTutorial;                                         // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSkipTutorial;                                          // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayTutorial;                                          // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void Construct();
		void BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
		void BndEvt__BtnSkipTutorial_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void ExecuteUbergraph_BP_TutorialPromptModal(int32_t EntryPoint);
		void OnPlayTutorial__DelegateSignature();
		void OnSkipTutorial__DelegateSignature();
		void OnCancel__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
