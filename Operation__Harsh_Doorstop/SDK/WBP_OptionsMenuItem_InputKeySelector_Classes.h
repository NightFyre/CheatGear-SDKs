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
	 * WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C
	 * Size -> 0x0090 (FullSize[0x02C0] - InheritedSize[0x0230])
	 */
	class UWBP_OptionsMenuItem_InputKeySelector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_InputKeySelector_C*                             OptionIKS;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OptionText;                                              // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                TextDescription;                                         // 0x0260(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FName                                                InputName;                                               // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnKeySelected;                                           // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      InputScale;                                              // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8OFM[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                MappedKey;                                               // 0x0298(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnIsSelectingKeyChanged;                                 // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsSelectingKey(bool* IsSelecting);
		void ClearSelectedKey(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS, const struct FKey& NewKey, bool bIsPlayerChangingKeyBindings);
		void SetSelectedKey(const struct FKey& SelectedKey);
		void GetSelectedKey(struct FKey* SelectedKey);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
		void ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector(int32_t EntryPoint);
		void OnIsSelectingKeyChanged__DelegateSignature();
		void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
