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
	 * WidgetBlueprintGeneratedClass BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C
	 * Size -> 0x01C0 (FullSize[0x0458] - InheritedSize[0x0298])
	 */
	class UBP_OptionsRow_KeyInput_C : public UBP_OptionsRow_BaseClass_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionIcon_C*                                 BindingKeyIcon;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     BoundWidgetSwitcher;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ButtonClear;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ButtonRebind;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ButtonRevert;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_179;                                           // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnActionMappingUpdated;                                  // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FKeyBindingOption                                   KeyBindingOption;                                        // 0x02E0(0x0130) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                KeyBindingText;                                          // 0x0410(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                KeyBindingDescription;                                   // 0x0428(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                KeyBindingUnmodifiedText;                                // 0x0440(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CommitKeyUpdate(const struct FInputChord& NewKey);
		void RebuildBindingIcon();
		void RevertKey();
		void ChangeKey(const struct FKey& NewKey);
		ESlateVisibility Get_RevertButton_Visibility_1();
		ESlateVisibility Get_ClearButton_Visibility_1();
		void PopulateSettings();
		void Construct();
		void BndEvt__ButtonRebind_K2Node_ComponentBoundEvent_50_OnClick__DelegateSignature();
		void OnKeyBound(const class FName& Action, const struct FKey& NewKey);
		void BndEvt__ButtonClear_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature();
		void BndEvt__ButtonRevert_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_OptionsRow_KeyInput(int32_t EntryPoint);
		void OnActionMappingUpdated__DelegateSignature(const struct FKeyBindingOption& BindingOption, const struct FInputChord& NewKey, class UBP_OptionsRow_KeyInput_C* KeyWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
