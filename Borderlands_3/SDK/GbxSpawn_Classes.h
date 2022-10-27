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
	 * Class GbxSpawn.Spawner
	 * Size -> 0x0190 (FullSize[0x05E8] - InheritedSize[0x0458])
	 */
	class ASpawner : public AActor
	{
	public:
		unsigned char                                              UnknownData_GTF6[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActorSpawned;                                          // 0x0460(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorDied;                                             // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorFellOutOfWorld;                                   // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorSuspend;                                          // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorUnsuspend;                                        // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllSpawned;                                            // 0x04B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllDied;                                               // 0x04C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWaveWarmup;                                            // 0x04D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWaveStart;                                             // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWaveComplete;                                          // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReset;                                                 // 0x0500(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorSpawnedData;                                      // 0x0510(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5U3[0x18];                                  // 0x0520(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnExternalActorSpawnedData;                              // 0x0538(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorDiedData;                                         // 0x0548(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExternalActorDiedData;                                 // 0x0558(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnScriptedWarmup;                                        // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorSuspendData;                                      // 0x0578(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class USpawnerComponent*                                   SpawnerComponent;                                        // 0x0588(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpawnerLinkComponent*                               SpawnerLinkComponent;                                    // 0x0590(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpawnPointComponent*                                SpawnPointComponent;                                     // 0x0598(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpawnerTeamComponent*                               SpawnerTeamComponent;                                    // 0x05A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoGroundSpawnPointComponents;                         // 0x05A8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_08CV[0x7];                                   // 0x05A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ExcludeAutoGroundPointComponents;                        // 0x05B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RF2E[0x28];                                  // 0x05C0(0x0028) MISSED OFFSET (PADDING)

	public:
		void SuspendAllActors();
		void SetTeamOverride(class UTeam* OverrideTeam);
		void SetTeam(class UTeam* NewTeam);
		void SetAlwaysActive(bool bInAlwaysActive);
		void ResetSpawning();
		void OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle);
		void OnSpawningComplete(class ASpawner* Spawner);
		bool IsSpawnerEnabled();
		bool IsFinishedSpawning();
		class USpawnPointComponent* GetSpawnPointComponent();
		class USpawnerTeamComponent* GetSpawnerTeamComponent();
		class USpawnerLinkComponent* GetSpawnerLinkComponent();
		class USpawnerComponent* GetSpawnerComponent();
		int32_t GetNumAliveActors(bool bIncludeExternal);
		void EnableSpawner();
		void DisableSpawner();
		void DestroyAllActors();
		void CompleteScriptedWarmup();
		bool AreAllDead(bool bIncludeExternal);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerComponent
	 * Size -> 0x02A0 (FullSize[0x0990] - InheritedSize[0x06F0])
	 */
	class USpawnerComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_F2Q0[0x98];                                  // 0x06F0(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActorSpawned;                                          // 0x0788(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorDied;                                             // 0x0798(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorSuspend;                                          // 0x07A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorUnsuspend;                                        // 0x07B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllSpawned;                                            // 0x07C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllDied;                                               // 0x07D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWaveWarmup;                                            // 0x07E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWaveStart;                                             // 0x07F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWaveComplete;                                          // 0x0808(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnScriptedWarmup;                                        // 0x0818(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReset;                                                 // 0x0828(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorSpawnedData;                                      // 0x0838(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorDiedData;                                         // 0x0848(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorSuspendData;                                      // 0x0858(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45VC[0x20];                                  // 0x0868(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnabled;                                                // 0x0888(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SZQR[0x7];                                   // 0x0889(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ChanceToEnableOnInit;                                    // 0x0890(0x0038) Edit, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bAlwaysActive;                                           // 0x08C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bResetOnEnabled;                                         // 0x08C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EScriptedWarmup                                            ScriptedWarmup;                                          // 0x08CA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MJXJ[0x1];                                   // 0x08CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActivationRadius;                                        // 0x08CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bActivationUsesRadius;                                   // 0x08D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GB97[0x7];                                   // 0x08D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AVolume*>                                     ActivationVolumes;                                       // 0x08D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bActivationUsesVolumes;                                  // 0x08E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSpawnDetails                                       SpawnDetails;                                            // 0x08E9(0x0007) Edit, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      MinimumActivationTime;                                   // 0x08F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MBKO[0x4];                                   // 0x08F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpawnerStyle*                                       SpawnerStyle;                                            // 0x08F8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpawnerStyle*                                       SpawnerStyleOverride;                                    // 0x0900(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FSpawnLimitData>                             Limits;                                                  // 0x0908(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bApplyLimitsToGroup;                                     // 0x0918(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VGZF[0x7];                                   // 0x0919(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USpawnFactory*>                               WaitingFactories;                                        // 0x0920(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PYN6[0x10];                                  // 0x0930(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASpawnPoint*>                                 SpawnPoints;                                             // 0x0940(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bRandomizeSpawnPoints;                                   // 0x0950(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_027O[0x7];                                   // 0x0951(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnPointGroup>                            SpawnPointGroups;                                        // 0x0958(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		ESpawnPointUseType                                         SpawnPointUseType;                                       // 0x0968(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_16LO[0x3];                                   // 0x0969(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnPointClusterRadius;                                 // 0x096C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USpawnPointComponent*>                        SpawnPointComponents;                                    // 0x0970(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class ASpawner*                                            Spawner;                                                 // 0x0980(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIncludeExternalActorsForAllDiedEvent;                   // 0x0988(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NOFV[0x2];                                   // 0x0989(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESpawnerDrawStyle                                          DrawStyle;                                               // 0x098B(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseScriptedWarmup;                                      // 0x098C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2X5U[0x3];                                   // 0x098D(0x0003) MISSED OFFSET (PADDING)

	public:
		void SuspendAllActors();
		void SetTeam(class UTeam* NewTeam);
		void SetSpawnOptions(class USpawnOptionData* NewSpawnOptions);
		void ResetSpawning();
		void OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle);
		bool IsSpawnerStyleClassAllowed(class UClass* SpawnerStyleClass);
		bool IsFinishedSpawning();
		void IncludeExternalActorsForAllDiedEvent();
		class USpawnOptionData* GetSpawnOptions();
		class USpawnerComponent* GetParentSpawner();
		int32_t GetNumSuspendedActors();
		int32_t GetNumSpawnedActors(bool bIncludeExternal, bool bInGroup);
		int32_t GetNumDeadActors(bool bIncludeExternal, bool bInGroup);
		int32_t GetNumAliveActors(bool bIncludeExternal, bool bInGroup);
		TArray<class AActor*> GetAliveActors();
		void EnableSpawner();
		void DisableSpawner();
		void DestroyAllActors();
		void CompleteScriptedWarmup();
		bool AreAllDead(bool bIncludeExternal, bool bInGroup);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnPoint
	 * Size -> 0x0068 (FullSize[0x04C0] - InheritedSize[0x0458])
	 */
	class ASpawnPoint : public AActor
	{
	public:
		unsigned char                                              UnknownData_UHHZ[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActorSpawned;                                          // 0x0460(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorDied;                                             // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USceneComponent*                                     SpawnRootComponent;                                      // 0x0480(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpawnPointComponent*                                SpawnPointComponent;                                     // 0x0488(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class USpawnerComponent*>                           ConnectedSpawners;                                       // 0x0490(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class USceneComponent*                                     TempRootFix;                                             // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CCP3[0x18];                                  // 0x04A8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetSpawnStyleTag(const struct FGameplayTag& NewTag);
		void ResetStretchPoint();
		struct FGameplayTag GetSpawnStyleTag();
		void EnableSpawnPoint();
		void DisableSpawnPoint();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.AnimNotify_SpawnAnim
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_SpawnAnim : public UAnimNotify
	{
	public:
		ESpawnAnimNotifyAction                                     Action;                                                  // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SCBV[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.GbxAction_SpawnAnim
	 * Size -> 0x0018 (FullSize[0x01C0] - InheritedSize[0x01A8])
	 */
	class UGbxAction_SpawnAnim : public UGbxAction_Anim
	{
	public:
		class UClass*                                              SpawnPointAction;                                        // 0x01A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              SpawnPointActionStop;                                    // 0x01B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMovementMode                                              OverrideMovementMode;                                    // 0x01B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverrideMovementMode;                                   // 0x01B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDisableCollisionOnSpawn;                                // 0x01BA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5CUC[0x5];                                   // 0x01BB(0x0005) MISSED OFFSET (PADDING)

	public:
		class AActor* K2_GetSpawnPoint();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.GbxCondition_SpawnCostAvailable
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UGbxCondition_SpawnCostAvailable : public UGbxCondition
	{
	public:
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.MultiSpawnPoint
	 * Size -> 0x0010 (FullSize[0x04D0] - InheritedSize[0x04C0])
	 */
	class AMultiSpawnPoint : public ASpawnPoint
	{
	public:
		TArray<class USpawnPointComponent*>                        SpawnPointComponents;                                    // 0x04C0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnDLCScript
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnDLCScript : public UObject
	{
	public:
		void OnAllSpawned(class USpawnerComponent* SpawnerComponent);
		void OnAllDied(class USpawnerComponent* SpawnerComponent);
		void OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
		void OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnDLCData
	 * Size -> 0x0218 (FullSize[0x0248] - InheritedSize[0x0030])
	 */
	class USpawnDLCData : public UGbxDataAsset
	{
	public:
		TMap<class USpawnOptionData*, class USpawnOptionData*>     GlobalReplacement;                                       // 0x0030(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bGlobalReplacementAlwaysEnabledDuringEvent;              // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NFO6[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnDLCGroup>                              SpawnerReplacements;                                     // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class UClass*                                              Script;                                                  // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bScriptGloballyReplacedSpawners;                         // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bScriptManuallyReplacedSpawners;                         // 0x00A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SG1W[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           MaximumTotalEventEnemies;                                // 0x00A8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           MaximumEventEnemiesPerSpawner;                           // 0x0128(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           MaximumScriptedSpawnersPerGroup;                         // 0x01A8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FSpawnDLCScriptGroup>                        ScriptedSpawners;                                        // 0x0228(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UDLCScriptedSpawerExpansionList*>             ExpansionScriptedSpawners;                               // 0x0238(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.GlobalSpawnDLCData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGlobalSpawnDLCData : public UGbxDataAsset
	{
	public:
		TArray<struct FSpawnDLCItem>                               DLCs;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.DLCScriptedSpawerExpansionList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDLCScriptedSpawerExpansionList : public UGbxDataAsset
	{
	public:
		TArray<struct FSpawnDLCScriptGroup>                        ScriptedSpawners;                                        // 0x0030(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnedActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnedActorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnerBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SuspendSpawnedActors(class UObject* WorldContextObject);
		class AActor* STATIC_SpawnActorWithSpawnOptionsTransform(class AActor* Context, class USpawnOptionData* SpawnOptions, const struct FTransform& SpawnTransform);
		int32_t STATIC_SpawnActorWithSpawnOptionsAsync(class UObject* WorldContext, const struct FSpawnManagerAsyncRequest& Request);
		class AActor* STATIC_SpawnActorWithSpawnOptions(class AActor* Context, class USpawnOptionData* SpawnOptions, class USpawnPointComponent* SpawnPointComponent);
		class AActor* STATIC_SpawnActorWithSpawner(class AActor* Context, class USpawnFactory* Factory, class USpawnPointComponent* SpawnPointComponent, class USpawnerComponent* SpawnerComponent, class AActor* Owner);
		void STATIC_SetMaxSpawnCost(class UObject* WorldContextObject, int32_t NewMaxSpawnCost);
		void STATIC_RestoreSuspendedActors(class UObject* WorldContextObject);
		void STATIC_RemoveActorFromSpawnSystem(class AActor* Actor);
		void STATIC_CancelSpawnActorWithOptionsAsyncRequest(class UObject* WorldContext, int32_t RequestID);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerLinkComponent
	 * Size -> 0x0080 (FullSize[0x0770] - InheritedSize[0x06F0])
	 */
	class USpawnerLinkComponent : public UPrimitiveComponent
	{
	public:
		TArray<struct FSpawnerLinkData>                            LinkDataList;                                            // 0x06F0(0x0010) ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      LinkedSpawners;                                          // 0x0700(0x0010) Edit, ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate
		bool                                                       bAutoProximityLink;                                      // 0x0710(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y93O[0x7];                                   // 0x0711(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpawnerLinkData                                    MasterLinkData;                                          // 0x0718(0x0028) Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bBeingDestroyed;                                         // 0x0740(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3RR1[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     SharedStates;                                            // 0x0748(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ASpawner*>                                    AllLinkedSpawners;                                       // 0x0758(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_17AQ[0x8];                                   // 0x0768(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStateInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnerStateInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStyle
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USpawnerStyle : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStyle_Bunch
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class USpawnerStyle_Bunch : public USpawnerStyle
	{
	public:
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxParam                                           NumActorsParam;                                          // 0x0038(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      SpawnDelay;                                              // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GAVQ[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStyle_BunchList
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class USpawnerStyle_BunchList : public USpawnerStyle
	{
	public:
		TArray<struct FSpawnBunchListItem>                         Bunches;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      SpawnDelay;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WN1W[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStyle_Den
	 * Size -> 0x0220 (FullSize[0x0250] - InheritedSize[0x0030])
	 */
	class USpawnerStyle_Den : public USpawnerStyle
	{
	public:
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bInfinite;                                               // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X2RZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           NumActorsParam;                                          // 0x0040(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           MaxAliveActorsWhenPassive;                               // 0x00C0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           MaxAliveActorsWhenThreatened;                            // 0x0140(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      SpawnDelay;                                              // 0x01C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WaveDelay;                                               // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WavePercent;                                             // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O937[0x4];                                   // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           NumAliveActorsParam;                                     // 0x01D0(0x0080) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStyle_Encounter
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USpawnerStyle_Encounter : public USpawnerStyle
	{
	public:
		TArray<struct FEncounterWave>                              Waves;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStyle_Single
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class USpawnerStyle_Single : public USpawnerStyle
	{
	public:
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStyleFactory_Bunch
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class USpawnerStyleFactory_Bunch : public USpawnerStyle_Bunch
	{
	public:
		class USpawnFactory*                                       SpawnFactory;                                            // 0x00C0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESpawnLimitType                                            AliveLimitType;                                          // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_97EH[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpawnOptionData*                                    InternalSpawnOptions;                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsFactoryClassAllowed(class UClass* FactoryClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStyleFactory_Den
	 * Size -> 0x0018 (FullSize[0x0268] - InheritedSize[0x0250])
	 */
	class USpawnerStyleFactory_Den : public USpawnerStyle_Den
	{
	public:
		class USpawnFactory*                                       SpawnFactory;                                            // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESpawnLimitType                                            AliveLimitType;                                          // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EY2D[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpawnOptionData*                                    InternalSpawnOptions;                                    // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsFactoryClassAllowed(class UClass* FactoryClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerStyleFactory_Single
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class USpawnerStyleFactory_Single : public USpawnerStyle_Single
	{
	public:
		class USpawnFactory*                                       SpawnFactory;                                            // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESpawnLimitType                                            AliveLimitType;                                          // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L05I[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpawnOptionData*                                    InternalSpawnOptions;                                    // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsFactoryClassAllowed(class UClass* FactoryClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnerTeamComponent
	 * Size -> 0x0020 (FullSize[0x01D8] - InheritedSize[0x01B8])
	 */
	class USpawnerTeamComponent : public UTeamComponent
	{
	public:
		class UTeam*                                               OverrideTeam;                                            // 0x01B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverrideTeam;                                           // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TOY0[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ResolvedTeamType;                                        // 0x01C8(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTeam*                                               EvaluatedTeam;                                           // 0x01D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnFactory
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class USpawnFactory : public UObject
	{
	public:
		bool                                                       bUsedInSpawnPointOverlapChecks;                          // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideActorTags;                                      // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AXA8[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               Tags;                                                    // 0x0030(0x0020) Edit, NativeAccessSpecifierPrivate
		struct FSpawnDetails                                       SpawnDetails;                                            // 0x0050(0x0007) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XQFX[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTagContainerComponent*                      CachedActorClassTagComponent;                            // 0x0058(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTeam*                                               CachedTeam;                                              // 0x0060(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MZZ6[0x30];                                  // 0x0068(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnFactory_Container
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class USpawnFactory_Container : public USpawnFactory
	{
	public:
		class USpawnOptionData*                                    Options;                                                 // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnFactory_ContainerSoftRef
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class USpawnFactory_ContainerSoftRef : public USpawnFactory
	{
	public:
		struct FSpawnOptionDataSoftPath                            OptionsPath;                                             // 0x0098(0x0018) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnFactory_Generic
	 * Size -> 0x0140 (FullSize[0x01D8] - InheritedSize[0x0098])
	 */
	class USpawnFactory_Generic : public USpawnFactory
	{
	public:
		unsigned char                                              UnknownData_UO90[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ActorProperties;                                         // 0x00A0(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseActorProperties;                                     // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIncludeSkeletalMeshForSpawnExtent;                      // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YMNR[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActorClass[0x28];                                        // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxSpawn.SpawnFactory_Generic.ActorClass
		struct FVector                                             SpawnOrigin;                                             // 0x00D8(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SpawnExtent;                                             // 0x00E4(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverrideSpawnSize;                                      // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESpawnActorCollisionHandlingMethod                         CollisionHandling;                                       // 0x00F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverrideCollisionHandling;                              // 0x00F2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GVDK[0xD5];                                  // 0x00F3(0x00D5) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftObjectPath>                             ActorPropertyAssetRefCache;                              // 0x01C8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		bool STATIC_ShouldSkipActorProperty(class UProperty* ActorProperty);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnManager
	 * Size -> 0x0308 (FullSize[0x0330] - InheritedSize[0x0028])
	 */
	class USpawnManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_GZO1[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      AdditionalSpawnPointOverlapActors;                       // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5O6[0x148];                                 // 0x0040(0x0148) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnManagerAsyncRequestEntry>              AsyncRequests;                                           // 0x0188(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DWSW[0x10];                                  // 0x0198(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      SpawnManagerClassName;                                   // 0x01A8(0x0018) Edit, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxSpawnCost;                                            // 0x01C0(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanResetSpawners;                                       // 0x01C4(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FVYF[0x3];                                   // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnerResetPeriod;                                      // 0x01C8(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxActorsSpawnedPerFrame;                                // 0x01CC(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      UpdatePeriod;                                            // 0x01D0(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    SuspendTestPeriod;                                       // 0x01D4(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    IrrelevantPeriod;                                        // 0x01D8(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    AlwaysRelevantDistance;                                  // 0x01DC(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    AlwaysIrrelevantDistance;                                // 0x01E0(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_60UR[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GlobalDLCData[0x28];                                     // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxSpawn.SpawnManager.GlobalDLCData
		bool                                                       bUseMultiframeSpawning;                                  // 0x0210(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OM29[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              PrivateWorld;                                            // 0x0218(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USpawnDLCData*>                               DLCs;                                                    // 0x0220(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LIKU[0x20];                                  // 0x0230(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnerData>                                Spawners;                                                // 0x0250(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     CachedPlayerLocations;                                   // 0x0260(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class AController*>                                 CachedPlayers;                                           // 0x0270(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class AActor*                                              SpawnedActor;                                            // 0x0280(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AL94[0xA8];                                  // 0x0288(0x00A8) MISSED OFFSET (PADDING)

	public:
		void ActorDestroyed(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnSystemEditorSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USpawnSystemEditorSettings : public UDeveloperSettings
	{
	public:
		ESpawnSystemStreamStyle                                    StreamStyle;                                             // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FK8D[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnOptionData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class USpawnOptionData : public UGbxDataAsset
	{
	public:
		TArray<struct FSpawnFactoryData>                           Options;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FSpawnDetails                                       SpawnDetails;                                            // 0x0040(0x0007) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HSQ9[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnPointComponent
	 * Size -> 0x0290 (FullSize[0x0980] - InheritedSize[0x06F0])
	 */
	class USpawnPointComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_FPOP[0x8];                                   // 0x06F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActorSpawned;                                          // 0x06F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorDied;                                             // 0x0708(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpawnAnimComplete;                                     // 0x0718(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCHH[0x1A0];                                 // 0x0728(0x01A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnabled;                                                // 0x08C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QWJ9[0x7];                                   // 0x08C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASpawnPoint*                                         SpawnPoint;                                              // 0x08D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        SpawnAITreeTag;                                          // 0x08D8(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        SpawnAction;                                             // 0x08E0(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESpawnStretchType                                          SpawnStretchType;                                        // 0x08E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YPVE[0x3];                                   // 0x08E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceToGroundDistance;                                   // 0x08EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStretchOrient;                                          // 0x08F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HV65[0x7];                                   // 0x08F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               Tags;                                                    // 0x08F8(0x0020) Edit, NativeAccessSpecifierPrivate
		ESpawnPointFilter                                          FilterMatchType;                                         // 0x0918(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bFilterByTags;                                           // 0x0919(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGameplayContainerMatchType                                TagMatchType;                                            // 0x091A(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_964Q[0x5];                                   // 0x091B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StretchyPoint;                                           // 0x0920(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FGbxTriggerProperty                                 ResetStretch;                                            // 0x0950(0x0001) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WHXA[0x1F];                                  // 0x0951(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAttachSpawnedActors;                                    // 0x0970(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QGZW[0x7];                                   // 0x0971(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachSlotName;                                          // 0x0978(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetSpawnStyleTag(const struct FGameplayTag& NewTag);
		void ResetStretchPoint();
		bool HasSpawnAITreeTag();
		struct FTransform GetStretchyPoint();
		struct FGameplayTag GetSpawnStyleTag();
		struct FGameplayTag GetSpawnAITreeTag();
		void EnableSpawnPoint();
		void DisableSpawnPoint();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnPointProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnPointProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpawn.SpawnPreviewComponent
	 * Size -> 0x0058 (FullSize[0x0840] - InheritedSize[0x07E8])
	 */
	class USpawnPreviewComponent : public UPreviewComponent
	{
	public:
		TArray<struct FSpawnPreviewState>                          PreviewList;                                             // 0x07E8(0x0010) ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		int32_t                                                    ActiveSpawnPointIdx;                                     // 0x07F8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KRHU[0x4];                                   // 0x07FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PreviewAction;                                           // 0x0800(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoCycle;                                              // 0x0808(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxTriggerProperty                                 CycleActor;                                              // 0x0809(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bShowAction;                                             // 0x080A(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRepeatAction;                                           // 0x080B(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxTriggerProperty                                 ReplayAction;                                            // 0x080C(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QW0P[0x3];                                   // 0x080D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UGbxActionComponent>                  ActionComponent;                                         // 0x0810(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USpawnerComponent*>                           SpawnerList;                                             // 0x0818(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0FSN[0x18];                                  // 0x0828(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnReplayAction();
		void OnCycleActor(ECycleDirection Direction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
