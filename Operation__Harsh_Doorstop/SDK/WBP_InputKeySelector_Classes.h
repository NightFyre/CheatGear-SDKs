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
	 * WidgetBlueprintGeneratedClass WBP_InputKeySelector.WBP_InputKeySelector_C
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UWBP_InputKeySelector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInputKeySelector*                                   IKS;                                                     // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnKeySelected;                                           // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnIsSelectingKeyChanged;                                 // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetSelectedKey(const struct FKey& SelectedKey);
		void GetSelectedKey(struct FKey* SelectedKey);
		void BndEvt__IKS_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature();
		void BndEvt__IKS_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void ExecuteUbergraph_WBP_InputKeySelector(int32_t EntryPoint);
		void OnIsSelectingKeyChanged__DelegateSignature();
		void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
