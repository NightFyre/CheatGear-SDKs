#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass BPFightForYourLifeComponent.BPFightForYourLifeComponent_C
	 * Size -> 0x00A0 (FullSize[0x1400] - InheritedSize[0x1360])
	 */
	class UBPFightForYourLifeComponent_C : public UFightForYourLifeComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1360(0x0008) Transient, DuplicateTransient
		class UBPUsableComponent_Revive_C*                         Revive_UsableComponent;                                  // 0x1368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAttributeModifierHandle                         ReviveTimeDisabledHandle;                                // 0x1370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGbxAttributeModifierHandle                         RechargeDisabledHandle;                                  // 0x1380(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class AOakCharacter*                                       OwnerOakChar;                                            // 0x1390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDamageComponent*                                    SecondWindAssistTarget;                                  // 0x1398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHUDNotificationAsset*                               SecondWindUIAsset;                                       // 0x13A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioEffect*                                   AudioEffect;                                             // 0x13A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDamageComponent*                                    DamageMark;                                              // 0x13B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Action_Injured;                                          // 0x13B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Action_Death;                                            // 0x13C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Action_Resurrect_Unarmed;                                // 0x13C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Action_Resurrect_Weapon;                                 // 0x13D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              DownedActor;                                             // 0x13D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWwisePlaybackInstance                              AudioLoopPlaybackInstance;                               // 0x13E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class APawn*                                               DamageInstigator;                                        // 0x13F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SecondWindKillCheck(class UActorComponent* DamagedActor, const struct FCausedDeathDetails& CausedDeathDetails);
		void WormholeStarting();
		void InjuredIsRespawning();
		void MarkDamagedEnemy(class AActor* DamagedActor);
		void DownState_CinematicPause_Local();
		void DownState_CinematicPause_Host();
		void Exertion_StanceChange(const struct FStanceChangedEventArgs& StanceArgs);
		void ImmediateTravelToResurrectLocal();
		void DownState_Finished_Local();
		void ImmediateTravelToResurrectHost(bool Interrupted);
		void ResurrectAtResurrectStation(class UTravelStationResurrectComponent* ResurrectStationComponent);
		void GivingUp_Stopped_Local();
		void GivingUp_Started_Local();
		void GivingUp_Stopped_Host();
		void GivingUp_Started_Host();
		void ReplenishHeavyAmmoToSetPercentage();
		void ReplenishGrenadeAmmoToSetPercentage();
		void ReplenishPistolAmmoToSetPercentage();
		void ReplenishShotgunAmmoToSetPercentage();
		void ReplenishSniperRifleAmmoToSetPercentage();
		void ReplenishAssault_RifleAmmoToSetPercentage();
		void ReplenishSMGAmmoToSetPercentage();
		void DownState_Finished_Host();
		void Reviving_Stopped_Host(bool IsHealed);
		void Reviving_Started_Local();
		void Reviving_Started_Host(class AActor* ActorBeingRevived);
		void RespawnAtResurrectStation();
		void ReplenishHealthAndShields(float HealthPercent, float ShieldPercent);
		void InjuredStop();
		void InjuredLive();
		void FightForYourLifeRevived();
		void FightForYourLifeTimeExpired();
		void BeingRevived_Stopped_Host();
		void DownState_Stopped_Local();
		void DownState_Stopped_Host();
		void BeingRevived_Started_Local();
		void BeingRevived_Started_Host();
		void FightForYourLifeKilledEnemy();
		void DownState_Started_Local();
		void DownState_Started_Host();
		void FFYL_Penalty_Recover(float Delay);
		void MarkDamagedEnemy_Died(class AActor* DamageReceiver, class AActor* DamageCauser);
		void MarkDamagedEnemy_RefreshDelay();
		void ReceiveBeginPlay();
		void FFYL_Penalty_Apply();
		void WatchForSecondWindKill(bool Start);
		void CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ExecuteUbergraph_BPFightForYourLifeComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
