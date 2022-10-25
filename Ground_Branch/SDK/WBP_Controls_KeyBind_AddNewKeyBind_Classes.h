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
	 * WidgetBlueprintGeneratedClass WBP_Controls_KeyBind_AddNewKeyBind.WBP_Controls_KeyBind_AddNewKeyBind_C
	 * Size -> 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
	 */
	class UWBP_Controls_KeyBind_AddNewKeyBind_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_AddBind;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_919;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FInputBindableCommand                               BoundCommand;                                            // 0x0278(0x0048) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnAddNewKeyBind;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__Button_AddBind_K2Node_ComponentBoundEvent_1024_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_WBP_Controls_KeyBind_AddNewKeyBind(int32_t EntryPoint);
		void OnAddNewKeyBind__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
