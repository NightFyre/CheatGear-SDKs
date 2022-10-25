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
	 * WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C
	 * Size -> 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
	 */
	class UWBP_OptionsMenuItem_Checkbox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Checkbox_C*                                     OptionCBox;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OptionText;                                              // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             CheckStateChanged;                                       // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CheckStateChangedBool;                                   // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                TextDescription;                                         // 0x0280(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void SetCheckedState(ECheckBoxState NewCheckedState);
		void SetIsChecked(bool bChecked);
		void IsChecked(bool* bChecked);
		void GetCheckedState(ECheckBoxState* CheckedState);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature(ECheckBoxState CheckedState);
		void BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature(bool bChecked);
		void ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox(int32_t EntryPoint);
		void CheckStateChangedBool__DelegateSignature(bool bChecked);
		void CheckStateChanged__DelegateSignature(ECheckBoxState CheckedState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
