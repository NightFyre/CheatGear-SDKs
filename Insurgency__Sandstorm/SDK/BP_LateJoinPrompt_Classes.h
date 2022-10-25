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
	 * WidgetBlueprintGeneratedClass BP_LateJoinPrompt.BP_LateJoinPrompt_C
	 * Size -> 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
	 */
	class UBP_LateJoinPrompt_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeInErrorBg;                                           // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon_2;                                      // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnJoin;                                                 // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ConsoleJoinBox;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     JoinButtonSwitcher;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      LastErrorTime;                                           // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F6FL[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CancelMatchmakingHoldTimer;                              // 0x0278(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                LastMatchmakingError;                                    // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetUsingController(bool UsingController, EeInputIconType Key);
		void JoinMatch();
		void ShouldBeVisibleForLatejoin(bool* bShouldBeVisible);
		void ShouldBeVisibleForMatchmaking(bool* bShouldBeVisible);
		ESlateVisibility GetOverallVisibility();
		void Construct();
		void BndEvt__BtnJoin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BP_LateJoinPrompt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
