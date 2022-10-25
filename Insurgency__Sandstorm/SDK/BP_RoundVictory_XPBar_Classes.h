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
	 * WidgetBlueprintGeneratedClass BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C
	 * Size -> 0x0160 (FullSize[0x0390] - InheritedSize[0x0230])
	 */
	class UBP_RoundVictory_XPBar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    LevelUp_ExitTransition_ToItems_Additive_OutageNotice;    // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LevelUp_ExitTransition_ToUnlockedClass;                  // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LevelUp_ExitTransition_ToItems;                          // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LevelUp_ExitTransition_NoItems;                          // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    XPFlashNewLevel;                                         // 0x0258(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    XPSparkPulseLoop;                                        // 0x0260(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    XPSparkFadeout;                                          // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LevelUp_Start;                                           // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        BarCanvas;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RankIcon_C*                                      ImageLevelUpRank;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RankIcon_C*                                      ImageMainRankIcon;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgClassUnlockedIcon;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             InventoryOutage;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            ItemsAttained;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ItemsOuterContainer;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        NewExperienceBar;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NewLevelFlash;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NextLevelValue;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        PriorExperienceBar;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        PriorExperienceBarBG;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextCurLevel;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextNextLevel;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextXPCur;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextXPTotal;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtUnlockedClassName;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            XPSourceContainer;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              XPSpark;                                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FGameStatsLevelUpReward                             LevelUpReward;                                           // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int64_t                                                    TargetXP;                                                // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int64_t                                                    CurrentXP;                                               // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IncrementRate;                                           // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IncrementAccel;                                          // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurLevel;                                                // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X0SB[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    NextLevelXP;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TickingIncrement;                                        // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8MB1[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FinalLevel;                                              // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPlayerClassLimit>                           QueuedClassUnlocks;                                      // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIncompleteResults;                                      // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasItemsToSee;                                           // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7WRY[0x2];                                   // 0x036A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredIncrementAnimDuration;                            // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverallAnimationSpeed;                                   // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AnimationQueueComplete;                                  // 0x0374(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FVK9[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameStatsXPComponent>                       XPComponentQueue;                                        // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    ComponentQueueInterval;                                  // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ComponentQueueRemaining;                                 // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_7();
		void SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_6();
		void SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_5();
		void SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_4();
		void SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_3();
		void SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_2();
		void SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_1();
		void PushNextQueuedXPComponent();
		void Estimate_Time_to_Animate(float* Seconds);
		void TransitionToNextState();
		void StartIncrementing();
		void IncrementingHitTotalXP();
		void IncrementingHitLevelUp();
		void SetProgressBarPct(bool bCurrentXPBar, float Pct);
		void TickIncrement(float Delta);
		void UpdateWidgets_Current(int64_t XP);
		void UpdateWidgets_Full(int64_t XP);
		void CalculateIncrementRate(int32_t Delta, int32_t* IncrementRate);
		void AddCurrencyUnlocked(int32_t Currency);
		void AddCosmeticUnlocked(int32_t ItemId);
		void GetUnlockedClasses(int32_t InStartLevel, int32_t InNewLevel, TArray<struct FPlayerClassLimit>* Results);
		void InitializeBar(int64_t TotalXP, int32_t EarnedXP, TArray<struct FGameStatsXPComponent>* XPComponents, bool BackendRewardsPending, const struct FGameStatsLevelUpReward& Rewards);
		void AnimEvent_IncreaseToNextLevel();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_BP_RoundVictory_XPBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
