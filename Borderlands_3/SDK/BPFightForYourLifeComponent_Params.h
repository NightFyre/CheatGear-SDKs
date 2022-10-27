#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.SecondWindKillCheck
	 */
	struct UBPFightForYourLifeComponent_C_SecondWindKillCheck_Params
	{
	public:
		class UActorComponent*                                     DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 CausedDeathDetails;                                      // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WormholeStarting
	 */
	struct UBPFightForYourLifeComponent_C_WormholeStarting_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredIsRespawning
	 */
	struct UBPFightForYourLifeComponent_C_InjuredIsRespawning_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy
	 */
	struct UBPFightForYourLifeComponent_C_MarkDamagedEnemy_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Local
	 */
	struct UBPFightForYourLifeComponent_C_DownState_CinematicPause_Local_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Host
	 */
	struct UBPFightForYourLifeComponent_C_DownState_CinematicPause_Host_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Exertion_StanceChange
	 */
	struct UBPFightForYourLifeComponent_C_Exertion_StanceChange_Params
	{
	public:
		struct FStanceChangedEventArgs                             StanceArgs;                                              // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectLocal
	 */
	struct UBPFightForYourLifeComponent_C_ImmediateTravelToResurrectLocal_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Local
	 */
	struct UBPFightForYourLifeComponent_C_DownState_Finished_Local_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectHost
	 */
	struct UBPFightForYourLifeComponent_C_ImmediateTravelToResurrectHost_Params
	{
	public:
		bool                                                       Interrupted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ANYQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ResurrectAtResurrectStation
	 */
	struct UBPFightForYourLifeComponent_C_ResurrectAtResurrectStation_Params
	{
	public:
		class UTravelStationResurrectComponent*                    ResurrectStationComponent;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Local
	 */
	struct UBPFightForYourLifeComponent_C_GivingUp_Stopped_Local_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Local
	 */
	struct UBPFightForYourLifeComponent_C_GivingUp_Started_Local_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Host
	 */
	struct UBPFightForYourLifeComponent_C_GivingUp_Stopped_Host_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Host
	 */
	struct UBPFightForYourLifeComponent_C_GivingUp_Started_Host_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHeavyAmmoToSetPercentage
	 */
	struct UBPFightForYourLifeComponent_C_ReplenishHeavyAmmoToSetPercentage_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishGrenadeAmmoToSetPercentage
	 */
	struct UBPFightForYourLifeComponent_C_ReplenishGrenadeAmmoToSetPercentage_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishPistolAmmoToSetPercentage
	 */
	struct UBPFightForYourLifeComponent_C_ReplenishPistolAmmoToSetPercentage_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishShotgunAmmoToSetPercentage
	 */
	struct UBPFightForYourLifeComponent_C_ReplenishShotgunAmmoToSetPercentage_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSniperRifleAmmoToSetPercentage
	 */
	struct UBPFightForYourLifeComponent_C_ReplenishSniperRifleAmmoToSetPercentage_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishAssault RifleAmmoToSetPercentage
	 */
	struct UBPFightForYourLifeComponent_C_ReplenishAssault_RifleAmmoToSetPercentage_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSMGAmmoToSetPercentage
	 */
	struct UBPFightForYourLifeComponent_C_ReplenishSMGAmmoToSetPercentage_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Host
	 */
	struct UBPFightForYourLifeComponent_C_DownState_Finished_Host_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Stopped_Host
	 */
	struct UBPFightForYourLifeComponent_C_Reviving_Stopped_Host_Params
	{
	public:
		bool                                                       IsHealed;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Local
	 */
	struct UBPFightForYourLifeComponent_C_Reviving_Started_Local_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Host
	 */
	struct UBPFightForYourLifeComponent_C_Reviving_Started_Host_Params
	{
	public:
		class AActor*                                              ActorBeingRevived;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.RespawnAtResurrectStation
	 */
	struct UBPFightForYourLifeComponent_C_RespawnAtResurrectStation_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHealthAndShields
	 */
	struct UBPFightForYourLifeComponent_C_ReplenishHealthAndShields_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShieldPercent;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredStop
	 */
	struct UBPFightForYourLifeComponent_C_InjuredStop_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredLive
	 */
	struct UBPFightForYourLifeComponent_C_InjuredLive_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeRevived
	 */
	struct UBPFightForYourLifeComponent_C_FightForYourLifeRevived_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeTimeExpired
	 */
	struct UBPFightForYourLifeComponent_C_FightForYourLifeTimeExpired_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Stopped_Host
	 */
	struct UBPFightForYourLifeComponent_C_BeingRevived_Stopped_Host_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Local
	 */
	struct UBPFightForYourLifeComponent_C_DownState_Stopped_Local_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Host
	 */
	struct UBPFightForYourLifeComponent_C_DownState_Stopped_Host_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Local
	 */
	struct UBPFightForYourLifeComponent_C_BeingRevived_Started_Local_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Host
	 */
	struct UBPFightForYourLifeComponent_C_BeingRevived_Started_Host_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeKilledEnemy
	 */
	struct UBPFightForYourLifeComponent_C_FightForYourLifeKilledEnemy_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Local
	 */
	struct UBPFightForYourLifeComponent_C_DownState_Started_Local_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Host
	 */
	struct UBPFightForYourLifeComponent_C_DownState_Started_Host_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Recover
	 */
	struct UBPFightForYourLifeComponent_C_FFYL_Penalty_Recover_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_Died
	 */
	struct UBPFightForYourLifeComponent_C_MarkDamagedEnemy_Died_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_RefreshDelay
	 */
	struct UBPFightForYourLifeComponent_C_MarkDamagedEnemy_RefreshDelay_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReceiveBeginPlay
	 */
	struct UBPFightForYourLifeComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Apply
	 */
	struct UBPFightForYourLifeComponent_C_FFYL_Penalty_Apply_Params
	{	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WatchForSecondWindKill
	 */
	struct UBPFightForYourLifeComponent_C_WatchForSecondWindKill_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.CausedDeath
	 */
	struct UBPFightForYourLifeComponent_C_CausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ExecuteUbergraph_BPFightForYourLifeComponent
	 */
	struct UBPFightForYourLifeComponent_C_ExecuteUbergraph_BPFightForYourLifeComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8N3I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
