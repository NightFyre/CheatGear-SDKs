#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass UI_SquadConfirmation.UI_SquadConfirmation_C
	 * Size -> 0x02F0 (FullSize[0x0550] - InheritedSize[0x0260])
	 */
	class UUI_SquadConfirmation_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             AcceptButton;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CancelButton;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UExtendedRichTextBlock*                              DialogText;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnConfirm;                                               // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                TextFormat;                                              // 0x02A0(0x0018) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TextStyle;                                               // 0x02B8(0x0270) Edit, BlueprintVisible
		struct FSlateColor                                         Color;                                                   // 0x0528(0x0028) Edit, BlueprintVisible

	public:
		void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_SquadConfirmation(int32_t EntryPoint);
		void OnCancel__DelegateSignature();
		void OnConfirm__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
