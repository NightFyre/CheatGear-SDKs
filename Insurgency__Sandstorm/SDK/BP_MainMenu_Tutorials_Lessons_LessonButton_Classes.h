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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C
	 * Size -> 0x01A8 (FullSize[0x03D8] - InheritedSize[0x0230])
	 */
	class UBP_MainMenu_Tutorials_Lessons_LessonButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_1;                                                // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LessonButton;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                LessonText;                                              // 0x0250(0x0018) Edit, BlueprintVisible
		bool                                                       bSelected;                                               // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_THDH[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              Lesson;                                                  // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateColor                                         LessonButtonCurrentColor;                                // 0x0288(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LessonButtonDefaultColor;                                // 0x02B0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LessonButtonHoverColor;                                  // 0x02D8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LessonButtonSelectedColor;                               // 0x0300(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LessonButtonTextCurrentColor;                            // 0x0328(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LessonButtonTextDefaultColor;                            // 0x0350(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LessonButtonTextHoverColor;                              // 0x0378(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         LessonButtonTextSelectedColor;                           // 0x03A0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnUnselected();
		void SetLessonText();
		void BndEvt__LessonButton_K2Node_ComponentBoundEvent_507_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__LessonButton_K2Node_ComponentBoundEvent_517_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__LessonButton_K2Node_ComponentBoundEvent_559_OnButtonPressedEvent__DelegateSignature();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__LessonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_LessonButton(int32_t EntryPoint);
		void OnHovered__DelegateSignature(class UBP_MainMenu_Tutorials_Lessons_LessonButton_C* LessonButton);
		void OnPressed__DelegateSignature(class UBP_MainMenu_Tutorials_Lessons_LessonButton_C* LessonButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
