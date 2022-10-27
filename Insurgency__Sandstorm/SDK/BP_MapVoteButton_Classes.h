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
	 * WidgetBlueprintGeneratedClass BP_MapVoteButton.BP_MapVoteButton_C
	 * Size -> 0x0130 (FullSize[0x0360] - InheritedSize[0x0230])
	 */
	class UBP_MapVoteButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    LoseAnimation;                                           // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    WinAnimation;                                            // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PulseVoteCount;                                          // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          BtnLabel;                                                // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_1;                                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             HoverHighlight;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SelectedNotch;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SelectHighlight;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             VoteContainer;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VoteCount;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ButtonText;                                              // 0x0288(0x0018) Edit, BlueprintVisible
		int32_t                                                    PreviousCount;                                           // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMapVoteSelection                                          Selection;                                               // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_W811[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOptionSelected;                                        // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateColor                                         ColorTextNormal;                                         // 0x02B8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ColorTextHovered;                                        // 0x02E0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasWon;                                                  // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CXWJ[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         ColorTextNormalShadow;                                   // 0x0310(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ColorTextHoveredShadow;                                  // 0x0338(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetSelectedStyle(bool bSelected);
		void SetHoverStyle(bool bHovered);
		void InternalSetVoteCount(int32_t Count);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void SetVoteCount(int32_t NewVoteCount);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void SetLocalVoteState(bool bSelected);
		void PlayWinningVoteAnimation();
		void PlayLosingVoteAnimation();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature();
		void ExecuteUbergraph_BP_MapVoteButton(int32_t EntryPoint);
		void OnOptionSelected__DelegateSignature(EMapVoteSelection Selection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
