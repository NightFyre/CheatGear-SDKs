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
	 * WidgetBlueprintGeneratedClass BP_LessonHint.BP_LessonHint_C
	 * Size -> 0x0160 (FullSize[0x03B8] - InheritedSize[0x0258])
	 */
	class UBP_LessonHint_C : public ULessonLoadingWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_TextWithActions_C*                               BP_TextWithActions;                                      // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HintCanvas;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_1;                                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      KeyBindPrompt;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LessonNameText;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      LessonVideoKeybindPrompt;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MediaPlaybackImage;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 OpenLessonHint;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMediaPlayer*                                        LessonMediaPlayer;                                       // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                NameText;                                                // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                HintText;                                                // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bFadingIn;                                               // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFadingOut;                                              // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MKNM[0x2];                                   // 0x02E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeStartTime;                                           // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeDuration;                                            // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bVisible;                                                // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QJYU[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LoadingVideo[0x28];                                      // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bPauseOnly;                                              // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBigImage;                                               // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZCMN[0x6];                                   // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         EmptyBrush;                                              // 0x0320(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSoftObjectPath>                             LoadedSoftObjects;                                       // 0x03A8(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void NeedRebindInputs(bool* bIsCentered);
		void UpdateFade(bool bin);
		void StartFade(bool bin);
		void Unload_Loaded_Movies();
		void NotifyNewLesson(class UClass* Lesson, bool bWantsToShowVideo);
		void OnHintExpired();
		void MoreInfoPressed();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnLessonVideoLoadedEvent();
		void OnNewHint(const struct FHintInfo& HintInfo);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_LessonHint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
