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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C
	 * Size -> 0x035A (FullSize[0x058A] - InheritedSize[0x0230])
	 */
	class UBP_MainMenu_Tutorials_Training_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_HighlightsNotification_C*                        BasicTrainingNotification;                               // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon;                                        // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CombatTrainingActionText;                                // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             CombatTrainingBg;                                        // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CombatTrainingButton;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CombatTrainingDescriptionText;                           // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CombatTrainingDivider;                                   // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CombatTrainingHeaderText;                                // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LessonsActionText;                                       // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             LessonsBg;                                               // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LessonsButton;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LessonsDescriptionText;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LessonsDivider;                                          // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LessonsHeaderText;                                       // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RangeActionText;                                         // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             RangeBg;                                                 // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RangeButton;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RangeButtonDayNight;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RangeDescription;                                        // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RangeDivider;                                            // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RangeHeaderTitle;                                        // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RangeImage_Time;                                         // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SwitchImage;                                             // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Time;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              SelectedScenarioName;                                    // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                LocalGameBreadcrumbTop;                                  // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LocalGameBreadcrumbBottom;                               // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateBrush                                         SelectedTrainingLevelImage;                              // 0x0358(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		ESlateVisibility                                           CombatTrainingActionVisibility;                          // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESlateVisibility                                           LessonsActionVisibility;                                 // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FU9L[0x6];                                   // 0x03E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         PillarBackgroundDefaultColor;                            // 0x03E8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         PillarBackgroundHoverColor;                              // 0x0410(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         CombatPillarCurrentBackgroundColor;                      // 0x0438(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LessonPillarCurrentBackgroundColor;                      // 0x0460(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnWantsLessons;                                          // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateColor                                         CombatPillarCurrentTextColor;                            // 0x0498(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LessonPillarCurrentTextColor;                            // 0x04C0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         PillarDefaultTextColor;                                  // 0x04E8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         PillarHoverTextColor;                                    // 0x0510(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RangePillarCurrentBackgroundColor;                       // 0x0538(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RangePillarCurrentTextColor;                             // 0x0560(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		ESlateVisibility                                           RangeActionVisibility;                                   // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDay;                                                   // 0x0589(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ToggleDayNight();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ChangeDescriptionOnPS4();
		class FText Get_Text_Block_Time_Text();
		void CheckShouldHighlightTrainingBox();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void GetBreadcrumbData(class FText* Top, class FText* Bottom);
		void OnPageSelected(EnumMainMenuPage NewPage);
		void BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature();
		void BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_332_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_360_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__LessonsButton_K2Node_ComponentBoundEvent_379_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__LessonsButton_K2Node_ComponentBoundEvent_393_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__LessonsButton_K2Node_ComponentBoundEvent_410_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void Construct();
		void BndEvt__RangeButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__RangeButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RangeButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RangeButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__RangeButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__LessonsButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__LessonsButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_32_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_33_OnButtonFocusEvent__DelegateSignature();
		void ExecuteUbergraph_BP_MainMenu_Tutorials_Training(int32_t EntryPoint);
		void OnWantsLessons__DelegateSignature();
		void OnNavigateBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
