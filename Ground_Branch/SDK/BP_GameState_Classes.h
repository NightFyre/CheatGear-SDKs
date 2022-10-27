#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_GameState.BP_GameState_C
	 * Size -> 0x00F8 (FullSize[0x07B8] - InheritedSize[0x06C0])
	 */
	class ABP_GameState_C : public AGBGameState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanStartVote;                                           // 0x06D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X2JE[0x7];                                   // 0x06D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ReadyCountdownMessage;                                   // 0x06D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PreRoundWaitMessage;                                     // 0x06F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                InProgressMessage;                                       // 0x0708(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PostRoundWaitMessage;                                    // 0x0720(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        TimerHandle_InactiveCheck;                               // 0x0738(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                ScheduledShutdownMessage;                                // 0x0740(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TimeLimitReachedMessage;                                 // 0x0758(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              StatusValue;                                             // 0x0770(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bUseRounds;                                              // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EC8M[0x7];                                   // 0x0781(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle_BringBackRoundTimer;                         // 0x0788(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                TimeRemainingMessage;                                    // 0x0790(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<float>                                              TimeReminders;                                           // 0x07A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetTimeToNextTimeReminder(float CurrentRoundTime, float* TimeToNextTimeReminder);
		void GetRoundStageText(class FText* OutText);
		void GetSpectatorOptions(TArray<class UWidget*>* OutOptions);
		void OnVoteStartedEvent(class APlayerState* VoteStarter, const class FString& Command, const class FString& Params, int32_t VoteTime);
		void OnVoteCountUpdatedEvent(int32_t YesVotes, int32_t NoVotes);
		void OnVoteEndedEvent(bool bPassed, int32_t NextVoteDelay);
		void AllowVotingAgain();
		void RoundStageSet();
		void AddDeathOverlay();
		void ShowMissionSummary();
		void ReceiveBeginPlay();
		void BindToPlayerControllerState();
		void OnPlayerControllerStateChanged_Event_1(const class FName& OldState, const class FName& NewState);
		void InactiveCheck();
		void StartInactiveCheck();
		void StopInactiveCheck();
		void RefreshPlayerStats();
		void OnGameMessageEvent(const class FName& GameMessageId, const class FName& Type, float Duration);
		void ShowRoundTimeAlertOnWatch();
		void ExecuteUbergraph_BP_GameState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
