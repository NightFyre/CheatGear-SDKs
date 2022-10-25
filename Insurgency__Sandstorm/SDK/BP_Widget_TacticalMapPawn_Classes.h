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
	 * WidgetBlueprintGeneratedClass BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C
	 * Size -> 0x00B4 (FullSize[0x0344] - InheritedSize[0x0290])
	 */
	class UBP_Widget_TacticalMapPawn_C : public UMapSoldierWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimPulse;                                               // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Static;                                                  // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             HoverBorder;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Pulse;                                                   // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpecialClassIcon;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SpectatePlayerBtn;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextPlayerName;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ActiveHover;                                             // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O5SN[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SelfPlayerIconColor;                                     // 0x02D4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLocalPlayerAnimActive;                                  // 0x02E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1ZM[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BuddyColor;                                              // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                PlayerName;                                              // 0x02F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        HoverColor;                                              // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHoverStatusChanged;                                    // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bHasSpecialClassIcon;                                    // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PendingObjectiveStatusUpdate;                            // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0VZ5[0x2];                                   // 0x0332(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        PartyColor;                                              // 0x0334(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateObjectiveStatus();
		void OnObjectiveStateChange();
		void UpdatePlayerClassIconVisibility();
		void SetPlayerClassIcon();
		void UpdatePlayerColor();
		void CheckLocalPlayerAnimation();
		ESlateVisibility GetNameVisibility();
		struct FLinearColor GetArrowColor();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BlueprintOnUpdateLocalViewTarget();
		void WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_1();
		void WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_2();
		void BlueprintOnTeamChange(unsigned char TeamId, class ATeamInfo* TeamInfo);
		void OnPlayerClassChanged(class AINSSoldier* Player);
		void BlueprintOnUpdateObjective(class AINSPlayerState* PlayerState, class AObjectiveBase* NewActiveObjective);
		void BlueprintOnObjectiveStateChange();
		void ExecuteUbergraph_BP_Widget_TacticalMapPawn(int32_t EntryPoint);
		void OnHoverStatusChanged__DelegateSignature(class AINSPlayerState* Player, bool Hovered);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
