#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class TreasuryFramework.ShimmerActor
	 * Size -> 0x00A8 (FullSize[0x0470] - InheritedSize[0x03C8])
	 */
	class AShimmerActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_P2DJ[0xA8];                                  // 0x03C8(0x00A8) MISSED OFFSET (PADDING)

	public:
		void OnDeactivateShimmer();
		void OnActivateShimmer();
		static UClass* StaticClass();
	};

	/**
	 * Class TreasuryFramework.TreasuryWaveDataAsset
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UTreasuryWaveDataAsset : public UDataAsset
	{
	public:
		TArray<class UAIProgressiveWavesSpawner*>                  Waves1Player;                                            // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<class UAIProgressiveWavesSpawner*>                  Waves2Player;                                            // 0x0038(0x0010) Edit, ZeroConstructor
		TArray<class UAIProgressiveWavesSpawner*>                  Waves3Player;                                            // 0x0048(0x0010) Edit, ZeroConstructor
		TArray<class UAIProgressiveWavesSpawner*>                  Waves4Player;                                            // 0x0058(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TreasuryFramework.TreasuryRoom
	 * Size -> 0x0130 (FullSize[0x04F8] - InheritedSize[0x03C8])
	 */
	class ATreasuryRoom : public AActor
	{
	public:
		unsigned char                                              UnknownData_PDS8[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       RoomAreaComponent;                                       // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TreasuryInactiveDurationMinSeconds;                      // 0x03D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TreasuryInactiveDurationMaxSeconds;                      // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RoomFailureDurationSeconds;                              // 0x03E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaveDelaySeconds;                                        // 0x03E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EncounterDelaySeconds;                                   // 0x03E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VaultDoorAnimDurationSeconds;                            // 0x03EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VaultDoorOpenDurationSeconds;                            // 0x03F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinWavesInEncounter;                                     // 0x03F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxWavesInEncounter;                                     // 0x03F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxEncounters;                                           // 0x03FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTreasuryWaveEncounter>                      WaveEncounters;                                          // 0x0400(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate
		class AActor*                                              FloodMechanismActor;                                     // 0x0410(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              FloodTriggerActor;                                       // 0x0418(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              DrainMechanismActor;                                     // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              DrainTriggerActor;                                       // 0x0428(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              VaultMechanismActor;                                     // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              VaultTriggerActor;                                       // 0x0438(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              VaultLootSpawner;                                        // 0x0440(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AActor*                                              VaultLootSpawnLocationActor;                             // 0x0448(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class AActor>                                    Shimmer;                                                 // 0x0450(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnTemplate, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_7U9Z[0x4];                                   // 0x046C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<class AActor*>                                      OverlappingActors;                                       // 0x0470(0x0010) ZeroConstructor, Protected
		TArray<TWeakObjectPtr<class AController>>                  CachedParticipantControllers;                            // 0x0480(0x0010) ZeroConstructor, Protected, UObjectWrapper
		class AActor*                                              VaultLootSpawnerActor;                                   // 0x0490(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FPlayerStat                                         VaultOpenStat;                                           // 0x0498(0x0004) Edit, Protected
		unsigned char                                              UnknownData_LBT8[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMechanismActionComponent*                           FloodMechanismComponent;                                 // 0x04A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UMechanismActionComponent*                           DrainMechanismComponent;                                 // 0x04A8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UMechanismActionComponent*                           VaultMechanismComponent;                                 // 0x04B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              FloodTriggerComponent[0x10];                             // 0x04B8(0x0010) UNKNOWN PROPERTY: InterfaceProperty TreasuryFramework.TreasuryRoom.FloodTriggerComponent
		unsigned char                                              DrainTriggerComponent[0x10];                             // 0x04C8(0x0010) UNKNOWN PROPERTY: InterfaceProperty TreasuryFramework.TreasuryRoom.DrainTriggerComponent
		unsigned char                                              VaultTriggerComponent[0x10];                             // 0x04D8(0x0010) UNKNOWN PROPERTY: InterfaceProperty TreasuryFramework.TreasuryRoom.VaultTriggerComponent
		unsigned char                                              UnknownData_LOTQ[0x10];                                  // 0x04E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnWaveStart(ETreasuryEncounterType EncounterType, ETreasuryWaveType WaveType);
		void OnWaveFinishedVaultMaster();
		void OnWaveFinished();
		void OnWaveComplete(ETreasuryEncounterType EncounterType);
		void OnVaultOpen();
		void OnVaultClosed();
		void OnTreasuryStateChange(ETreasuryState PrevState, ETreasuryState NewState);
		void OnTreasuryDeactivate();
		void OnTreasuryActivate();
		void OnStartRaiseWater();
		void OnStartDrainWater();
		void OnRoomStarted();
		void OnRaisedWater();
		void OnLeaveRoom(class AActor* OtherActor);
		void OnEnterRoom(class AActor* OtherActor);
		void OnEncounterParamsSetup();
		void OnDrainedWater();
		ETreasuryState GetState();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
