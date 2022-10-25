#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * Class ShooterGame.BTDecorator_HasLoSTo
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UBTDecorator_HasLoSTo : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              EnemyKey;                                                // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.BTTask_FindPickup
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTTask_FindPickup : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.BTTask_FindPointNearEnemy
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTTask_FindPointNearEnemy : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterAIController
	 * Size -> 0x0020 (FullSize[0x0348] - InheritedSize[0x0328])
	 */
	class AShooterAIController : public AAIController
	{
	public:
		class UBlackboardComponent*                                BlackboardComp;                                          // 0x0328(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBehaviorTreeComponent*                              BehaviorComp;                                            // 0x0330(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G5GM[0x10];                                  // 0x0338(0x0010) MISSED OFFSET (PADDING)

	public:
		void ShootEnemy();
		bool FindClosestEnemyWithLOS(class AShooterCharacter* ExcludeEnemy);
		void FindClosestEnemy();
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterCharacter
	 * Size -> 0x01F0 (FullSize[0x06A8] - InheritedSize[0x04B8])
	 */
	class AShooterCharacter : public ACharacter
	{
	public:
		class USkeletalMeshComponent*                              Mesh1P;                                                  // 0x04B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                WeaponAttachPoint;                                       // 0x04C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      DefaultInventoryClasses;                                 // 0x04C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class AShooterWeapon*>                              Inventory;                                               // 0x04D8(0x0010) Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class AShooterWeapon*                                      CurrentWeapon;                                           // 0x04E8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTakeHitInfo                                        LastTakeHitInfo;                                         // 0x04F0(0x0130) Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U1DD[0x4];                                   // 0x0620(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetingSpeedModifier;                                  // 0x0624(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsTargeting : 1;                                        // 0x0628(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F458[0x3];                                   // 0x0629(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RunningSpeedModifier;                                    // 0x062C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToRun : 1;                                         // 0x0630(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YSVL[0xF];                                   // 0x0631(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    MeshMIDs;                                                // 0x0640(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UAnimMontage*                                        DeathAnim;                                               // 0x0650(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           DeathSound;                                              // 0x0658(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     RespawnFX;                                               // 0x0660(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           RespawnSound;                                            // 0x0668(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           LowHealthSound;                                          // 0x0670(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           RunLoopSound;                                            // 0x0678(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           RunStopSound;                                            // 0x0680(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           TargetingSound;                                          // 0x0688(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     RunLoopAC;                                               // 0x0690(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     LowHealthWarningPlayer;                                  // 0x0698(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsDying : 1;                                            // 0x06A0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEHY[0x3];                                   // 0x06A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health;                                                  // 0x06A4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ServerSetTargeting(bool bNewTargeting);
		void ServerSetRunning(bool bNewRunning, bool bToggle);
		void ServerEquipWeapon(class AShooterWeapon* NewWeapon);
		void OnRep_LastTakeHitInfo();
		void OnRep_CurrentWeapon(class AShooterWeapon* LastWeapon);
		bool IsTargeting();
		bool IsRunning();
		bool IsFirstPerson();
		bool IsFiring();
		class AShooterWeapon* GetWeapon();
		float GetTargetingSpeedModifier();
		float GetRunningSpeedModifier();
		struct FRotator GetAimOffsets();
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterBot
	 * Size -> 0x0008 (FullSize[0x06B0] - InheritedSize[0x06A8])
	 */
	class AShooterBot : public AShooterCharacter
	{
	public:
		class UBehaviorTree*                                       BotBehavior;                                             // 0x06A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterCharacterMovement
	 * Size -> 0x0000 (FullSize[0x0B00] - InheritedSize[0x0B00])
	 */
	class UShooterCharacterMovement : public UCharacterMovementComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterChatWidgetStyle
	 * Size -> 0x0908 (FullSize[0x0938] - InheritedSize[0x0030])
	 */
	class UShooterChatWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FShooterChatStyle                                   ChatStyle;                                               // 0x0030(0x0908) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterPlayerController
	 * Size -> 0x0078 (FullSize[0x05E8] - InheritedSize[0x0570])
	 */
	class AShooterPlayerController : public APlayerController
	{
	public:
		unsigned char                                              bInfiniteAmmo : 1;                                       // 0x0570(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInfiniteClip : 1;                                       // 0x0570(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bHealthRegen : 1;                                        // 0x0570(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bGodMode : 1;                                            // 0x0570(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H11V[0x68];                                  // 0x0571(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAnalogFireTrigger;                                      // 0x05D9(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E19N[0x2];                                   // 0x05DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireTriggerThreshold;                                    // 0x05DC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_44SU[0x8];                                   // 0x05E0(0x0008) MISSED OFFSET (PADDING)

	public:
		void Suicide();
		void SimulateInputKey(const struct FKey& Key, bool bPressed);
		void SetGodMode(bool bEnable);
		void ServerSuicide();
		void ServerSay(const class FString& Msg);
		void ServerCheat(const class FString& Msg);
		void Say(const class FString& Msg);
		void OnLeaderboardReadComplete(bool bWasSuccessful);
		void ClientStartOnlineGame();
		void ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation);
		void ClientSendRoundEndEvent(bool bIsWinner, int32_t ExpendedTimeInSeconds);
		void ClientGameStarted();
		void ClientEndOnlineGame();
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterCheatManager
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UShooterCheatManager : public UCheatManager
	{
	public:
		void ToggleMatchTimer();
		void ToggleInfiniteClip();
		void ToggleInfiniteAmmo();
		void SpawnBot();
		void ForceMatchStart();
		void Cheat(const class FString& Msg);
		void ChangeTeam(int32_t NewTeamNumber);
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterDamageType
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UShooterDamageType : public UDamageType
	{
	public:
		struct FCanvasIcon                                         KillIcon;                                                // 0x0040(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UForceFeedbackEffect*                                HitForceFeedback;                                        // 0x0058(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UForceFeedbackEffect*                                KilledForceFeedback;                                     // 0x0060(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterDemoSpectator
	 * Size -> 0x0028 (FullSize[0x0598] - InheritedSize[0x0570])
	 */
	class AShooterDemoSpectator : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_42NT[0x28];                                  // 0x0570(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterEngine
	 * Size -> 0x0000 (FullSize[0x0E30] - InheritedSize[0x0E30])
	 */
	class UShooterEngine : public UGameEngine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterExplosionEffect
	 * Size -> 0x00C8 (FullSize[0x02E8] - InheritedSize[0x0220])
	 */
	class AShooterExplosionEffect : public AActor
	{
	public:
		class UParticleSystem*                                     ExplosionFX;                                             // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPointLightComponent*                                ExplosionLight;                                          // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ExplosionLightFadeOut;                                   // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXH7[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           ExplosionSound;                                          // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalData                                          Decal;                                                   // 0x0240(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FHitResult                                          SurfaceHit;                                              // 0x0250(0x008C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Q3P[0xC];                                   // 0x02DC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterGameMode
	 * Size -> 0x0060 (FullSize[0x0368] - InheritedSize[0x0308])
	 */
	class AShooterGameMode : public AGameMode
	{
	public:
		class UClass*                                              BotPawnClass;                                            // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WarmupTime;                                              // 0x0310(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RoundTime;                                               // 0x0314(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TimeBetweenMatches;                                      // 0x0318(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    KillScore;                                               // 0x031C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DeathScore;                                              // 0x0320(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageSelfScale;                                         // 0x0324(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxBots;                                                 // 0x0328(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F6W5[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AShooterAIController*>                        BotControllers;                                          // 0x0330(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UClass*                                              PlatformPlayerControllerClass;                           // 0x0340(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DG6I[0x10];                                  // 0x0348(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AShooterPickup*>                              LevelPickups;                                            // 0x0358(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void SetAllowBots(bool bInAllowBots, int32_t InMaxBots);
		void FinishMatch();
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterGame_FreeForAll
	 * Size -> 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
	 */
	class AShooterGame_FreeForAll : public AShooterGameMode
	{
	public:
		class AShooterPlayerState*                                 WinnerPlayerState;                                       // 0x0368(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterGame_Menu
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class AShooterGame_Menu : public AGameModeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterGame_TeamDeathMatch
	 * Size -> 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
	 */
	class AShooterGame_TeamDeathMatch : public AShooterGameMode
	{
	public:
		unsigned char                                              UnknownData_LD2W[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterGameInstance
	 * Size -> 0x02A8 (FullSize[0x0450] - InheritedSize[0x01A8])
	 */
	class UShooterGameInstance : public UGameInstance
	{
	public:
		class FString                                              WelcomeScreenMap;                                        // 0x01A8(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              MainMenuMap;                                             // 0x01B8(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C2NP[0x288];                                 // 0x01C8(0x0288) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterGameSession
	 * Size -> 0x0108 (FullSize[0x0340] - InheritedSize[0x0238])
	 */
	class AShooterGameSession : public AGameSession
	{
	public:
		unsigned char                                              UnknownData_K8T0[0x108];                                 // 0x0238(0x0108) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterGameState
	 * Size -> 0x0148 (FullSize[0x03D8] - InheritedSize[0x0290])
	 */
	class AShooterGameState : public AGameState
	{
	public:
		int32_t                                                    NumTeams;                                                // 0x0290(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFXS[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TeamScores;                                              // 0x0298(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    RemainingTime;                                           // 0x02A8(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTimerPaused;                                            // 0x02AC(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GULE[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActivityId;                                              // 0x02B0(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableGameFeedback;                                     // 0x02C0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VF0M[0x117];                                 // 0x02C1(0x0117) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterGameUserSettings
	 * Size -> 0x0008 (FullSize[0x0128] - InheritedSize[0x0120])
	 */
	class UShooterGameUserSettings : public UGameUserSettings
	{
	public:
		int32_t                                                    GraphicsQuality;                                         // 0x0120(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsLanMatch;                                             // 0x0124(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsDedicatedServer;                                      // 0x0125(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsForceSystemResolution;                                // 0x0126(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S3T6[0x1];                                   // 0x0127(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterGameViewportClient
	 * Size -> 0x0050 (FullSize[0x03B0] - InheritedSize[0x0360])
	 */
	class UShooterGameViewportClient : public UGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_OIJV[0x50];                                  // 0x0360(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterHUD
	 * Size -> 0x0410 (FullSize[0x0720] - InheritedSize[0x0310])
	 */
	class AShooterHUD : public AHUD
	{
	public:
		unsigned char                                              UnknownData_5IEK[0x20];                                  // 0x0310(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCanvasIcon                                         HitNotifyIcon[0x8];                                      // 0x0330(0x00C0) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         KillsBg;                                                 // 0x03F0(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         TimePlaceBg;                                             // 0x0408(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         PrimaryWeapBg;                                           // 0x0420(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         SecondaryWeapBg;                                         // 0x0438(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         Crosshair[0x5];                                          // 0x0450(0x0078) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         HitNotifyCrosshair;                                      // 0x04C8(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         DeathMessagesBg;                                         // 0x04E0(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         HealthBarBg;                                             // 0x04F8(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         HealthBar;                                               // 0x0510(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         HealthIcon;                                              // 0x0528(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         KillsIcon;                                               // 0x0540(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         KilledIcon;                                              // 0x0558(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         TimerIcon;                                               // 0x0570(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         PlaceIcon;                                               // 0x0588(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HA06[0x90];                                  // 0x05A0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          HitNotifyTexture;                                        // 0x0630(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          HUDMainTexture;                                          // 0x0638(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          HUDAssets02Texture;                                      // 0x0640(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          LowHealthOverlayTexture;                                 // 0x0648(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFont*                                               BigFont;                                                 // 0x0650(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFont*                                               NormalFont;                                              // 0x0658(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QHC6[0xC0];                                  // 0x0660(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterImpactEffect
	 * Size -> 0x0130 (FullSize[0x0350] - InheritedSize[0x0220])
	 */
	class AShooterImpactEffect : public AActor
	{
	public:
		class UParticleSystem*                                     DefaultFX;                                               // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ConcreteFX;                                              // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DirtFX;                                                  // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     WaterFX;                                                 // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     MetalFX;                                                 // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     WoodFX;                                                  // 0x0248(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     GlassFX;                                                 // 0x0250(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     GrassFX;                                                 // 0x0258(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     FleshFX;                                                 // 0x0260(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DefaultSound;                                            // 0x0268(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           ConcreteSound;                                           // 0x0270(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DirtSound;                                               // 0x0278(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           WaterSound;                                              // 0x0280(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           MetalSound;                                              // 0x0288(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           WoodSound;                                               // 0x0290(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GlassSound;                                              // 0x0298(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GrassSound;                                              // 0x02A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           FleshSound;                                              // 0x02A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalData                                          DefaultDecal;                                            // 0x02B0(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FHitResult                                          SurfaceHit;                                              // 0x02C0(0x008C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XY5T[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterLocalPlayer
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class UShooterLocalPlayer : public ULocalPlayer
	{
	public:
		class UShooterPersistentUser*                              PersistentUser;                                          // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterMenuItemWidgetStyle
	 * Size -> 0x01A0 (FullSize[0x01D0] - InheritedSize[0x0030])
	 */
	class UShooterMenuItemWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FShooterMenuItemStyle                               MenuItemStyle;                                           // 0x0030(0x01A0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterMenuSoundsWidgetStyle
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UShooterMenuSoundsWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FShooterMenuSoundsStyle                             SoundsStyle;                                             // 0x0030(0x0038) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterMenuWidgetStyle
	 * Size -> 0x0200 (FullSize[0x0230] - InheritedSize[0x0030])
	 */
	class UShooterMenuWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FShooterMenuStyle                                   MenuStyle;                                               // 0x0030(0x0200) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterOnlineSessionClient
	 * Size -> 0x0000 (FullSize[0x01E0] - InheritedSize[0x01E0])
	 */
	class UShooterOnlineSessionClient : public UOnlineSessionClient
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterOptionsWidgetStyle
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UShooterOptionsWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FShooterOptionsStyle                                OptionsStyle;                                            // 0x0030(0x0038) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterPersistentUser
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UShooterPersistentUser : public USaveGame
	{
	public:
		int32_t                                                    Kills;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Deaths;                                                  // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Wins;                                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Losses;                                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BulletsFired;                                            // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RocketsFired;                                            // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BotsCount;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsRecordingDemos;                                       // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M6NN[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Gamma;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimSensitivity;                                          // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInvertedYAxis;                                          // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVibrationOpt;                                           // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NVJ0[0x1E];                                  // 0x0052(0x001E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterPickup
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class AShooterPickup : public AActor
	{
	public:
		class UParticleSystemComponent*                            PickupPSC;                                               // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     ActiveFX;                                                // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     RespawningFX;                                            // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           PickupSound;                                             // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           RespawnSound;                                            // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RespawnTime;                                             // 0x0248(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsActive : 1;                                           // 0x024C(0x0001) BIT_FIELD Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8ZP9[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   PickedUpBy;                                              // 0x0250(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WD4X[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRespawnEvent();
		void OnRep_IsActive();
		void OnPickedUpEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterPickup_Ammo
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class AShooterPickup_Ammo : public AShooterPickup
	{
	public:
		int32_t                                                    AmmoClips;                                               // 0x0260(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IPFW[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WeaponType;                                              // 0x0268(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterPickup_Health
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class AShooterPickup_Health : public AShooterPickup
	{
	public:
		int32_t                                                    Health;                                                  // 0x0260(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6QB1[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterPlayerCameraManager
	 * Size -> 0x0010 (FullSize[0x27C0] - InheritedSize[0x27B0])
	 */
	class AShooterPlayerCameraManager : public APlayerCameraManager
	{
	public:
		unsigned char                                              UnknownData_V3RZ[0x10];                                  // 0x27B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterPlayerController_Menu
	 * Size -> 0x0000 (FullSize[0x0570] - InheritedSize[0x0570])
	 */
	class AShooterPlayerController_Menu : public APlayerController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterPlayerState
	 * Size -> 0x0028 (FullSize[0x0348] - InheritedSize[0x0320])
	 */
	class AShooterPlayerState : public APlayerState
	{
	public:
		int32_t                                                    TeamNumber;                                              // 0x0320(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumKills;                                                // 0x0324(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumDeaths;                                               // 0x0328(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumBulletsFired;                                         // 0x032C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumRocketsFired;                                         // 0x0330(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bQuitter : 1;                                            // 0x0334(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KAWE[0x3];                                   // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchID;                                                 // 0x0338(0x0010) Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnRep_TeamColor();
		void InformAboutKill(class AShooterPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class AShooterPlayerState* KilledPlayerState);
		void BroadcastDeath(class AShooterPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class AShooterPlayerState* KilledPlayerState);
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterProjectile
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class AShooterProjectile : public AActor
	{
	public:
		class UProjectileMovementComponent*                        MovementComp;                                            // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USphereComponent*                                    CollisionComp;                                           // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystemComponent*                            ParticleComp;                                            // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ExplosionTemplate;                                       // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EG9P[0x28];                                  // 0x0240(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExploded;                                               // 0x0268(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K5BD[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_Exploded();
		void OnImpact(const struct FHitResult& HitResult);
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterReplicationGraph
	 * Size -> 0x0128 (FullSize[0x05C0] - InheritedSize[0x0498])
	 */
	class UShooterReplicationGraph : public UReplicationGraph
	{
	public:
		TArray<class UClass*>                                      SpatializedClasses;                                      // 0x0498(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      NonSpatializedChildClasses;                              // 0x04A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      AlwaysRelevantClasses;                                   // 0x04B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UReplicationGraphNode_GridSpatialization2D*          GridNode;                                                // 0x04C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_ActorList*                     AlwaysRelevantNode;                                      // 0x04D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IQO[0xE8];                                  // 0x04D8(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterReplicationGraphNode_AlwaysRelevant_ForConnection
	 * Size -> 0x0248 (FullSize[0x0298] - InheritedSize[0x0050])
	 */
	class UShooterReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_9BDW[0x228];                                 // 0x0050(0x0228) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastPawn;                                                // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAlwaysRelevantActorInfo>                    PastRelevantActors;                                      // 0x0280(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_86QP[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterReplicationGraphNode_PlayerStateFrequencyLimiter
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UShooterReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_U7F2[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterScoreboardWidgetStyle
	 * Size -> 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
	 */
	class UShooterScoreboardWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FShooterScoreboardStyle                             ScoreboardStyle;                                         // 0x0030(0x0120) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterSpectatorPawn
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class AShooterSpectatorPawn : public ASpectatorPawn
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterTeamStart
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	class AShooterTeamStart : public APlayerStart
	{
	public:
		int32_t                                                    SpawnTeam;                                               // 0x0250(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNotForPlayers : 1;                                      // 0x0254(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNotForBots : 1;                                         // 0x0254(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPF0[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterTestControllerBase
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UShooterTestControllerBase : public UGauntletTestController
	{
	public:
		unsigned char                                              UnknownData_CZ16[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterTestControllerBasicDedicatedServerTest
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UShooterTestControllerBasicDedicatedServerTest : public UShooterTestControllerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterTestControllerBootTest
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UShooterTestControllerBootTest : public UGauntletTestControllerBootTest
	{
	public:
		unsigned char                                              UnknownData_D539[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterTestControllerDedicatedServerTest
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UShooterTestControllerDedicatedServerTest : public UShooterTestControllerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterTestControllerListenServerClient
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UShooterTestControllerListenServerClient : public UShooterTestControllerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterTestControllerListenServerHost
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UShooterTestControllerListenServerHost : public UShooterTestControllerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterTestControllerListenServerQuickMatchClient
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UShooterTestControllerListenServerQuickMatchClient : public UShooterTestControllerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterWeapon
	 * Size -> 0x0280 (FullSize[0x04A0] - InheritedSize[0x0220])
	 */
	class AShooterWeapon : public AActor
	{
	public:
		struct FCanvasIcon                                         PrimaryIcon;                                             // 0x0220(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         SecondaryIcon;                                           // 0x0238(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         PrimaryClipIcon;                                         // 0x0250(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         SecondaryClipIcon;                                       // 0x0268(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AmmoIconsCount;                                          // 0x0280(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimaryClipIconOffset;                                   // 0x0284(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryClipIconOffset;                                 // 0x0288(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFJ5[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCanvasIcon                                         Crosshair[0x5];                                          // 0x0290(0x0078) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         AimingCrosshair[0x5];                                    // 0x0308(0x0078) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       UseLaserDot;                                             // 0x0380(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCustomCrosshair;                                      // 0x0381(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCustomAimingCrosshair;                                // 0x0382(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideCrosshairWhileNotAiming;                            // 0x0383(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimerIntervalAdjustment;                                 // 0x0384(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowAutomaticWeaponCatchup;                            // 0x0388(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1MV[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   MyPawn;                                                  // 0x0390(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponData                                         WeaponConfig;                                            // 0x0398(0x0018) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              Mesh1P;                                                  // 0x03B0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              Mesh3P;                                                  // 0x03B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     FireAC;                                                  // 0x03C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MuzzleAttachPoint;                                       // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     MuzzleFX;                                                // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            MuzzlePSC;                                               // 0x03D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            MuzzlePSCSecondary;                                      // 0x03E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              FireCameraShake;                                         // 0x03E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UForceFeedbackEffect*                                FireForceFeedback;                                       // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           FireSound;                                               // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           FireLoopSound;                                           // 0x0400(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           FireFinishSound;                                         // 0x0408(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           OutOfAmmoSound;                                          // 0x0410(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           ReloadSound;                                             // 0x0418(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         ReloadAnim;                                              // 0x0420(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           EquipSound;                                              // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         EquipAnim;                                               // 0x0438(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         FireAnim;                                                // 0x0448(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedMuzzleFX : 1;                                     // 0x0458(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedFireSound : 1;                                    // 0x0458(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedFireAnim : 1;                                     // 0x0458(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D74L : 3;                                    // 0x0458(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bPendingReload : 1;                                      // 0x0458(0x0001) BIT_FIELD Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M836[0x17];                                  // 0x0459(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentAmmo;                                             // 0x0470(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentAmmoInClip;                                       // 0x0474(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BurstCounter;                                            // 0x0478(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1SNZ[0x24];                                  // 0x047C(0x0024) MISSED OFFSET (PADDING)

	public:
		void ServerStopReload();
		void ServerStopFire();
		void ServerStartReload();
		void ServerStartFire();
		void ServerHandleFiring();
		void OnRep_Reload();
		void OnRep_MyPawn();
		void OnRep_BurstCounter();
		class AShooterCharacter* GetPawnOwner();
		void ClientStartReload();
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterWeapon_Instant
	 * Size -> 0x0058 (FullSize[0x04F8] - InheritedSize[0x04A0])
	 */
	class AShooterWeapon_Instant : public AShooterWeapon
	{
	public:
		struct FInstantWeaponData                                  InstantConfig;                                           // 0x04A0(0x0028) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UClass*                                              ImpactTemplate;                                          // 0x04C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     TrailFX;                                                 // 0x04D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TrailTargetParam;                                        // 0x04D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FInstantHitInfo                                     HitNotify;                                               // 0x04E0(0x0014) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3EG5[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void ServerNotifyMiss(const struct FVector_NetQuantizeNormal& ShootDir, int32_t RandomSeed, float ReticleSpread);
		void ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir, int32_t RandomSeed, float ReticleSpread);
		void OnRep_HitNotify();
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.ShooterWeapon_Projectile
	 * Size -> 0x0020 (FullSize[0x04C0] - InheritedSize[0x04A0])
	 */
	class AShooterWeapon_Projectile : public AShooterWeapon
	{
	public:
		struct FProjectileWeaponData                               ProjectileConfig;                                        // 0x04A0(0x0020) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
		static UClass* StaticClass();
	};

	/**
	 * Class ShooterGame.SoundNodeLocalPlayer
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USoundNodeLocalPlayer : public USoundNode
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
