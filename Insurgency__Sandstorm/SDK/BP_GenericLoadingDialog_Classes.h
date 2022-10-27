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
	 * WidgetBlueprintGeneratedClass BP_GenericLoadingDialog.BP_GenericLoadingDialog_C
	 * Size -> 0x0060 (FullSize[0x0290] - InheritedSize[0x0230])
	 */
	class UBP_GenericLoadingDialog_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Widget_LoadingSpinner_C*                         BP_Widget_LoadingSpinner;                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 DialogWidget;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                Text;                                                    // 0x0260(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bCanCancel;                                              // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_KWZQ[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActionCancelled;                                       // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__DialogWidget_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature();
		void ExecuteUbergraph_BP_GenericLoadingDialog(int32_t EntryPoint);
		void OnActionCancelled__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
