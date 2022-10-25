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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_Tutorials.BP_MainMenu_Tutorials_C
	 * Size -> 0x0038 (FullSize[0x02C0] - InheritedSize[0x0288])
	 */
	class UBP_MainMenu_Tutorials_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_MainMenu_Tutorials_Lessons_C*                    Lessons;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_Tutorials_Training_C*                   TrainingLevels;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     TutorialSectionSwitcher;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnPageSelected(EnumMainMenuPage NewPage);
		void OnPanelOpened();
		void BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BP_DefaultKeyHints_K2Node_ComponentBoundEvent_14_OnBackButtonPressed__DelegateSignature();
		void BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature(int32_t Index);
		void BndEvt__TrainingLevels_K2Node_ComponentBoundEvent_0_OnWantsLessons__DelegateSignature();
		void BndEvt__Lessons_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature();
		void BndEvt__TrainingLevels_K2Node_ComponentBoundEvent_204_OnNavigateBack__DelegateSignature();
		void ExecuteUbergraph_BP_MainMenu_Tutorials(int32_t EntryPoint);
		void OnNavigateBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
