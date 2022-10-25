#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass GOAP_Controller.GOAP_Controller_C
	 * Size -> 0x00E0 (FullSize[0x07E8] - InheritedSize[0x0708])
	 */
	class AGOAP_Controller_C : public ARaidGOAPController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0708(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FVector                                             Loot_Actual_Loc;                                         // 0x0710(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8462[0x4];                                   // 0x071C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ActorsUsed;                                              // 0x0720(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       UsedLootRecently;                                        // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YLNJ[0x3];                                   // 0x0731(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Loot_EQS_Loc;                                            // 0x0734(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LootActorToUse;                                          // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Text_Color;                                              // 0x0748(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAtom>                                       NewVar_1;                                                // 0x0758(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FAtom>                                       atoms;                                                   // 0x0768(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              GoalToCarryout;                                          // 0x0778(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FVector>                                     PlacesRecentlyLooted;                                    // 0x0788(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       JustLostPlayer;                                          // 0x0798(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       b_TookDamage;                                            // 0x0799(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       b_TookDamageWithoutATarget;                              // 0x079A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0EPY[0x1];                                   // 0x079B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastDamagedTime;                                         // 0x079C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CanHearButNotSee;                                        // 0x07A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       b_firstSeenPlayer;                                       // 0x07A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1KV8[0x3];                                   // 0x07A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidCharacter*                                      TargetThisCheck;                                         // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHuntingState;                                           // 0x07B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_10OR[0x3];                                   // 0x07B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PositionLastHeardPlayer;                                 // 0x07B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeUn;                                                  // 0x07C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReSeePlayerCooldown;                                     // 0x07C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0CBT[0x3];                                   // 0x07C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentAmmo;                                             // 0x07C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxAmmoForMyGun;                                         // 0x07CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StoredBaseMissRate;                                      // 0x07D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IL65[0x4];                                   // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        LastSeenPlayertimer;                                     // 0x07D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        HuntingForPreyTimer;                                     // 0x07E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void CheckSetGroupTargetLogic(bool* NewParam);
		void Temp_ReloadedAmmo();
		void Temp_RemoveAmmo();
		void SetInitialAmmo();
		void NewFunction_1();
		void Get_Ammo_Info(int32_t* CurrentAmmo, bool* HasZeroAmmo);
		void ReSeenPlayerCooldown(bool Reset);
		void CheckIfCurrentTargetAlive();
		void WorkOutTarget(class ARaidCharacter* SeenChar);
		void NoTargetStalkingState(bool Reset, float TimeToHuntForSeconds);
		void FirstSeenPlayer(bool Reset);
		void SetATarget_IfDifferentPersonOrCloser(class ARaidCharacter* TEnemy);
		void TookDamageWithoutHavingATarget(bool Reset);
		void ResetLost();
		bool StartsettingKeys(ERaidAIState NewState);
		void ProcessTaskComplete(const class FString& TaskState, const class FString& GoalFinsihed);
		void StateLogic(ERaidGOAPEvent NewGOAPEvent, class ARaidCharacter* SeenChar, const struct FAIStimulus& Stimulus);
		void OnLoaded_50EF9035470C6F40F0D618AF20DD24AA(class UObject* Loaded);
		void OnLoaded_75A398344E9F583E768203A8B2779CA8(class UObject* Loaded);
		void OnGOAPEvent(ERaidGOAPEvent NewGOAPEvent, class ARaidCharacter* SeenChar, const struct FAIStimulus& Stimulus);
		void QueryFinsihed(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void PlayVoice(bool IsAShout, class UDataTable* VoiceSetDT, const class FName& VoiceLine);
		void Ai_TurnOnOffDebugText(bool TurnOn);
		void ReceiveTick(float DeltaSeconds);
		void AIShout(bool Whisper, const class FName& SoundRow, class UDataTable* DataTable);
		void Multi_AIShout(bool Whisper, const class FName& Sound_row, class UDataTable* DataTable);
		void StartlastDamagedTimer();
		void TurnOffRecentlyHeardAfterTime();
		void TurnOffReSeenPlayerCooldown();
		void Ai_SetMyGoal(const class FString& CurrentPlan);
		void CustomEvent_1();
		void OnGOAPTaskCompleted(const class FString& TaskFinsihed, const class FString& GoalComplete);
		void ReceiveBeginPlay();
		void HasLootedRecently(float TimeTilllCanUseALootableAgain);
		void GetRandomLookingPos();
		void Ai_StoreBaseMissRate(float BaseMissRate);
		void Ai_CheckSetMyInitialAmmoCount();
		void DebugStimulusEvent(class AActor* Actor, const struct FAIStimulus& Stimulus, ERaidGOAPEvent NormalEvent);
		void UsedALootableAtLocation(const struct FVector& LootLocation);
		void LostPlayerStartHunting();
		void StartGOAPEvent();
		void StopGOAPEvent();
		void ExecuteUbergraph_GOAP_Controller(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
