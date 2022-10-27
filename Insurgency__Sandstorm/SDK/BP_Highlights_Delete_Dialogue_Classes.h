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
	 * WidgetBlueprintGeneratedClass BP_Highlights_Delete_Dialogue.BP_Highlights_Delete_Dialogue_C
	 * Size -> 0x0020 (FullSize[0x02A8] - InheritedSize[0x0288])
	 */
	class UBP_Highlights_Delete_Dialogue_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_GenericDialog_C*                                 BP_GenericDialog;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCancelPressed;                                         // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_12_OnCanceled__DelegateSignature();
		void BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_19_OnConfirmed__DelegateSignature();
		void ExecuteUbergraph_BP_Highlights_Delete_Dialogue(int32_t EntryPoint);
		void OnCancelPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
