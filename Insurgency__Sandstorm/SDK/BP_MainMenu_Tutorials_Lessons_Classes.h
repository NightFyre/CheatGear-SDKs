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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C
	 * Size -> 0x0121 (FullSize[0x03A9] - InheritedSize[0x0288])
	 */
	class UBP_MainMenu_Tutorials_Lessons_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BP_KeyActionButton;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuTabs_C*                                      LessonCategoryTabs;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            LessonInformationContainer;                              // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          LessonScrollList;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RichTextActions;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_1;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_1;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_2;                                             // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      TextInstructions;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_2;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ELessonCategory                                            CurrentLessonCategory;                                   // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WA1P[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      Lessons;                                                 // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UBP_MainMenu_Tutorials_Lessons_LessonButton_C*       CurrentLessonButton;                                     // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UINSLocalPlayer*                                     LocalPlayer;                                             // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                CurrentLessonName;                                       // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                CurrentLessonInstructions;                               // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UMediaPlayer*                                        LessonMediaPlayer;                                       // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                CurrentLessonActions;                                    // 0x0350(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSoftObjectPath>                             LoadedSoftObjects;                                       // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		ESlateVisibility                                           LessonViewVisibility;                                    // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CCKS[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bBackGoIngame;                                           // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GG40[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNavigateIngame;                                        // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SetBack;                                                 // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void SetScrollHintOpacity();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void FindAndSelectLessonInList(class UClass* Lesson);
		void FilterUnusedLessons();
		void GetCategoryLessonCount(ELessonCategory Category, int32_t* Count);
		void AddLessonButton(class UClass* Lesson, bool bSelectOnAdd);
		void PopulateLessonList();
		void ViewSpecificLesson(class UClass* Lesson);
		void UnloadLoadedMovies();
		void ClearMovie();
		void GetLocalPlayer(class UINSLocalPlayer** LocalPlayer);
		void AddCategoryButton(ELessonCategory Category);
		void PressLessonButton(class UBP_MainMenu_Tutorials_Lessons_LessonButton_C* LessonButton);
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__LessonCategoryTabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature(int32_t Index);
		void OnPanelClosed();
		void OnPanelOpened();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons(int32_t EntryPoint);
		void OnNavigateIngame__DelegateSignature();
		void OnNavigateBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
