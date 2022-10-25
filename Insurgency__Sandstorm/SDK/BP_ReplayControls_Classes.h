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
	 * WidgetBlueprintGeneratedClass BP_ReplayControls.BP_ReplayControls_C
	 * Size -> 0x0158 (FullSize[0x0388] - InheritedSize[0x0230])
	 */
	class UBP_ReplayControls_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ImageButton_C*                                   BP_ImageButton;                                          // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon;                                        // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon_C;                                      // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon_C_1;                                    // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon_C_4;                                    // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        EventCanvas;                                             // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ProgressBackground;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ProgressCanvas;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ProgressSliderBackground;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            RootSizeBox;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             SliderProgress;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextCurTimeDilation;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TimerText;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsProgressSliding;                                      // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWasPausedEnteringScrubbing;                             // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PQ9J[0x6];                                   // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FText>                           EventNameToText;                                         // 0x02B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, class UClass*>                         EventNameToWidget;                                       // 0x0300(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DemoTime;                                                // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RRGQ[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TextTimeDilationX;                                       // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TextMinSecTimer;                                         // 0x0370(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CreateReplayEventWidgets(TArray<struct FBlueprintReplayEvent>* Events);
		void UpdateTimeText();
		void UpdateTimeDilationText();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void ScrubToTime(float Time);
		class FText GetTimeDilationText();
		void UpdateSliderBackground();
		bool IsInteractable();
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		float GetSliderProgress();
		class FText GetTimerText();
		void OnEventsEnumerated_A1896B8F41770B019E95A6B00CA704BE(TArray<struct FBlueprintReplayEvent> EventsList);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__SliderProgress_K2Node_ComponentBoundEvent_30_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__SliderProgress_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature();
		void OnScrubToTimeComplete(bool bSuccessful);
		void BndEvt__Button_424_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnHidecontrols_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SliderProgress_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_374_OnClicked__DelegateSignature();
		void OnScrubbingStateChanged(bool bIsScrubbing);
		void ExecuteUbergraph_BP_ReplayControls(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
