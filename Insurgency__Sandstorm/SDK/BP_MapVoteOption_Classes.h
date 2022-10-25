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
	 * WidgetBlueprintGeneratedClass BP_MapVoteOption.BP_MapVoteOption_C
	 * Size -> 0x01A1 (FullSize[0x03D1] - InheritedSize[0x0230])
	 */
	class UBP_MapVoteOption_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeInVote;                                              // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LoseAnimation;                                           // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    WinAnimation;                                            // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PulseVoteCount;                                          // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Button_1;                                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GamemodeImage;                                           // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LevelName;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MapImage;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MouseoverBorder;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             MouseoverHighlight;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ScenarioName;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SelectedHighlight;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SelectedNotch;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             VoteContainer;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VoteCount;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         ColorTextRegular;                                        // 0x02B8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ColorTextHighlighted;                                    // 0x02E0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Selected;                                                // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Hovered;                                                 // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V291[0x6];                                   // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMapVoteOption                                      Data;                                                    // 0x0310(0x00A8) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnOptionSelected;                                        // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EMapVoteSelection                                          Selection;                                               // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_848E[0x3];                                   // 0x03C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PreviousCount;                                           // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasWon;                                                  // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetMapImageFromData();
		void InternalSetVoteCount(int32_t Amount);
		void LoadSettingsFromData();
		void SetSelectedStyle(bool bInSelected);
		void SetHoverStyle(bool bHovered);
		void OnLoaded_3B597585448036DC333A7F90BDE02D9A(class UObject* Loaded);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void SetVoteCount(int32_t NewVoteCount);
		void SetLocalVoteState(bool bSelected);
		void PlayWinningVoteAnimation();
		void PlayLosingVoteAnimation();
		void OnGamemodeImageAssetSet();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature();
		void ExecuteUbergraph_BP_MapVoteOption(int32_t EntryPoint);
		void OnOptionSelected__DelegateSignature(EMapVoteSelection Selection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
