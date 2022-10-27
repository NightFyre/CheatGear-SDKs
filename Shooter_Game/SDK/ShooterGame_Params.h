#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * Function ShooterGame.ShooterAIController.ShootEnemy
	 */
	struct AShooterAIController_ShootEnemy_Params
	{	};

	/**
	 * Function ShooterGame.ShooterAIController.FindClosestEnemyWithLOS
	 */
	struct AShooterAIController_FindClosestEnemyWithLOS_Params
	{
	public:
		class AShooterCharacter*                                   ExcludeEnemy;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterAIController.FindClosestEnemy
	 */
	struct AShooterAIController_FindClosestEnemy_Params
	{	};

	/**
	 * Function ShooterGame.ShooterCharacter.ServerSetTargeting
	 */
	struct AShooterCharacter_ServerSetTargeting_Params
	{
	public:
		bool                                                       bNewTargeting;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.ServerSetRunning
	 */
	struct AShooterCharacter_ServerSetRunning_Params
	{
	public:
		bool                                                       bNewRunning;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bToggle;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.ServerEquipWeapon
	 */
	struct AShooterCharacter_ServerEquipWeapon_Params
	{
	public:
		class AShooterWeapon*                                      NewWeapon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.OnRep_LastTakeHitInfo
	 */
	struct AShooterCharacter_OnRep_LastTakeHitInfo_Params
	{	};

	/**
	 * Function ShooterGame.ShooterCharacter.OnRep_CurrentWeapon
	 */
	struct AShooterCharacter_OnRep_CurrentWeapon_Params
	{
	public:
		class AShooterWeapon*                                      LastWeapon;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.IsTargeting
	 */
	struct AShooterCharacter_IsTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.IsRunning
	 */
	struct AShooterCharacter_IsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.IsFirstPerson
	 */
	struct AShooterCharacter_IsFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.IsFiring
	 */
	struct AShooterCharacter_IsFiring_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.GetWeapon
	 */
	struct AShooterCharacter_GetWeapon_Params
	{
	public:
		class AShooterWeapon*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.GetTargetingSpeedModifier
	 */
	struct AShooterCharacter_GetTargetingSpeedModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.GetRunningSpeedModifier
	 */
	struct AShooterCharacter_GetRunningSpeedModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCharacter.GetAimOffsets
	 */
	struct AShooterCharacter_GetAimOffsets_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerController.Suicide
	 */
	struct AShooterPlayerController_Suicide_Params
	{	};

	/**
	 * Function ShooterGame.ShooterPlayerController.SimulateInputKey
	 */
	struct AShooterPlayerController_SimulateInputKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPressed;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerController.SetGodMode
	 */
	struct AShooterPlayerController_SetGodMode_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerController.ServerSuicide
	 */
	struct AShooterPlayerController_ServerSuicide_Params
	{	};

	/**
	 * Function ShooterGame.ShooterPlayerController.ServerSay
	 */
	struct AShooterPlayerController_ServerSay_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerController.ServerCheat
	 */
	struct AShooterPlayerController_ServerCheat_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerController.Say
	 */
	struct AShooterPlayerController_Say_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerController.OnLeaderboardReadComplete
	 */
	struct AShooterPlayerController_OnLeaderboardReadComplete_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerController.ClientStartOnlineGame
	 */
	struct AShooterPlayerController_ClientStartOnlineGame_Params
	{	};

	/**
	 * Function ShooterGame.ShooterPlayerController.ClientSetSpectatorCamera
	 */
	struct AShooterPlayerController_ClientSetSpectatorCamera_Params
	{
	public:
		struct FVector                                             CameraLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            CameraRotation;                                          // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerController.ClientSendRoundEndEvent
	 */
	struct AShooterPlayerController_ClientSendRoundEndEvent_Params
	{
	public:
		bool                                                       bIsWinner;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DIV8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ExpendedTimeInSeconds;                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerController.ClientGameStarted
	 */
	struct AShooterPlayerController_ClientGameStarted_Params
	{	};

	/**
	 * Function ShooterGame.ShooterPlayerController.ClientEndOnlineGame
	 */
	struct AShooterPlayerController_ClientEndOnlineGame_Params
	{	};

	/**
	 * Function ShooterGame.ShooterCheatManager.ToggleMatchTimer
	 */
	struct UShooterCheatManager_ToggleMatchTimer_Params
	{	};

	/**
	 * Function ShooterGame.ShooterCheatManager.ToggleInfiniteClip
	 */
	struct UShooterCheatManager_ToggleInfiniteClip_Params
	{	};

	/**
	 * Function ShooterGame.ShooterCheatManager.ToggleInfiniteAmmo
	 */
	struct UShooterCheatManager_ToggleInfiniteAmmo_Params
	{	};

	/**
	 * Function ShooterGame.ShooterCheatManager.SpawnBot
	 */
	struct UShooterCheatManager_SpawnBot_Params
	{	};

	/**
	 * Function ShooterGame.ShooterCheatManager.ForceMatchStart
	 */
	struct UShooterCheatManager_ForceMatchStart_Params
	{	};

	/**
	 * Function ShooterGame.ShooterCheatManager.Cheat
	 */
	struct UShooterCheatManager_Cheat_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterCheatManager.ChangeTeam
	 */
	struct UShooterCheatManager_ChangeTeam_Params
	{
	public:
		int32_t                                                    NewTeamNumber;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterGameMode.SetAllowBots
	 */
	struct AShooterGameMode_SetAllowBots_Params
	{
	public:
		bool                                                       bInAllowBots;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q7D4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InMaxBots;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterGameMode.FinishMatch
	 */
	struct AShooterGameMode_FinishMatch_Params
	{	};

	/**
	 * Function ShooterGame.ShooterPickup.OnRespawnEvent
	 */
	struct AShooterPickup_OnRespawnEvent_Params
	{	};

	/**
	 * Function ShooterGame.ShooterPickup.OnRep_IsActive
	 */
	struct AShooterPickup_OnRep_IsActive_Params
	{	};

	/**
	 * Function ShooterGame.ShooterPickup.OnPickedUpEvent
	 */
	struct AShooterPickup_OnPickedUpEvent_Params
	{	};

	/**
	 * Function ShooterGame.ShooterPlayerState.OnRep_TeamColor
	 */
	struct AShooterPlayerState_OnRep_TeamColor_Params
	{	};

	/**
	 * Function ShooterGame.ShooterPlayerState.InformAboutKill
	 */
	struct AShooterPlayerState_InformAboutKill_Params
	{
	public:
		class AShooterPlayerState*                                 KillerPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDamageType*                                         KillerDamageType;                                        // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AShooterPlayerState*                                 KilledPlayerState;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterPlayerState.BroadcastDeath
	 */
	struct AShooterPlayerState_BroadcastDeath_Params
	{
	public:
		class AShooterPlayerState*                                 KillerPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDamageType*                                         KillerDamageType;                                        // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AShooterPlayerState*                                 KilledPlayerState;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterProjectile.OnRep_Exploded
	 */
	struct AShooterProjectile_OnRep_Exploded_Params
	{	};

	/**
	 * Function ShooterGame.ShooterProjectile.OnImpact
	 */
	struct AShooterProjectile_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterWeapon.ServerStopReload
	 */
	struct AShooterWeapon_ServerStopReload_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon.ServerStopFire
	 */
	struct AShooterWeapon_ServerStopFire_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon.ServerStartReload
	 */
	struct AShooterWeapon_ServerStartReload_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon.ServerStartFire
	 */
	struct AShooterWeapon_ServerStartFire_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon.ServerHandleFiring
	 */
	struct AShooterWeapon_ServerHandleFiring_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon.OnRep_Reload
	 */
	struct AShooterWeapon_OnRep_Reload_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon.OnRep_MyPawn
	 */
	struct AShooterWeapon_OnRep_MyPawn_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon.OnRep_BurstCounter
	 */
	struct AShooterWeapon_OnRep_BurstCounter_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon.GetPawnOwner
	 */
	struct AShooterWeapon_GetPawnOwner_Params
	{
	public:
		class AShooterCharacter*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterWeapon.ClientStartReload
	 */
	struct AShooterWeapon_ClientStartReload_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon_Instant.ServerNotifyMiss
	 */
	struct AShooterWeapon_Instant_ServerNotifyMiss_Params
	{
	public:
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RandomSeed;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReticleSpread;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterWeapon_Instant.ServerNotifyHit
	 */
	struct AShooterWeapon_Instant_ServerNotifyHit_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x008C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RandomSeed;                                              // 0x0098(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReticleSpread;                                           // 0x009C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ShooterGame.ShooterWeapon_Instant.OnRep_HitNotify
	 */
	struct AShooterWeapon_Instant_OnRep_HitNotify_Params
	{	};

	/**
	 * Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectile
	 */
	struct AShooterWeapon_Projectile_ServerFireProjectile_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
