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
	 * WidgetBlueprintGeneratedClass BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C
	 * Size -> 0x0089 (FullSize[0x02B9] - InheritedSize[0x0230])
	 */
	class UBP_Widget_ConsentDialog_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ToggleOption_C*                                  DoNotRemindSelection;                                    // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 InnerDialog;                                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                DialogText;                                              // 0x0260(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bUseCheckbox;                                            // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_49TQ[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CheckboxText;                                            // 0x0280(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnConfirmed;                                             // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bDefaultCheckboxState;                                   // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PreConstruct(bool IsDesignTime);
		void BndEvt__InnerDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature();
		void BndEvt__InnerDialog_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature();
		void ExecuteUbergraph_BP_Widget_ConsentDialog(int32_t EntryPoint);
		void OnConfirmed__DelegateSignature(bool bCheckboxSelected);
		void OnCancelled__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
