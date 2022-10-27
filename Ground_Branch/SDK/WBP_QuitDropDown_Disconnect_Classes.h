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
	 * WidgetBlueprintGeneratedClass WBP_QuitDropDown_Disconnect.WBP_QuitDropDown_Disconnect_C
	 * Size -> 0x00D8 (FullSize[0x0338] - InheritedSize[0x0260])
	 */
	class UWBP_QuitDropDown_Disconnect_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Combo;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Button;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Disconnect;                                              // 0x0278(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnEntrySelected;                                         // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                BackToMainMenu;                                          // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         HoveredColour;                                           // 0x02B8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         DefaultColour;                                           // 0x02E0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                OnClickedDisonnectTitle;                                 // 0x0308(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                OnclickedDisconnectMessage;                              // 0x0320(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FSlateColor GetTextColorAndOpacity();
		void BndEvt__Button_Combo_K2Node_ComponentBoundEvent_1029_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void OnClickedDisconnect(class UWBP_DialogueBox_C* Dialogue);
		void ExecuteUbergraph_WBP_QuitDropDown_Disconnect(int32_t EntryPoint);
		void OnEntrySelected__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
