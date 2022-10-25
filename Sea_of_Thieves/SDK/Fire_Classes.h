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
	 * Class Fire.FlammableComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UFlammableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_AO9L[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       OnFire;                                                  // 0x00D8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_CEA5[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_OnFire();
		void Multicast_NotifyExtinguished_RPC(const struct FVector& InExtinguishLocationWS);
		bool IsOnFire();
		void IncrementFireSource();
		void DecrementFireSource();
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.ActorFlammableComponent
	 * Size -> 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
	 */
	class UActorFlammableComponent : public UFlammableComponent
	{
	public:
		unsigned char                                              UnknownData_RUFZ[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     FireVFX;                                                 // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UParticleSystem*                                     SteamVFX;                                                // 0x0100(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      FireVFXIntensity;                                        // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_X13G[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.BlownByWindStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlownByWindStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.ExtinguishableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UExtinguishableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireDamagerType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFireDamagerType : public UDamagerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireExplosionDamagerType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFireExplosionDamagerType : public UDamagerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFireStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FlammableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFlammableInterface : public UInterface
	{
	public:
		void IncrementFireSource();
		void DecrementFireSource();
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FlammableWieldableComponent
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UFlammableWieldableComponent : public UFlammableComponent
	{
	public:
		struct FStatus                                             IgnitedStatus;                                           // 0x00E0(0x0018) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.TimedFlammableComponent
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UTimedFlammableComponent : public UFlammableComponent
	{
	public:
		bool                                                       UseExtinguishTimer;                                      // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AllowFireToBeReplenishedBeforeExtinguishTimerExpired;    // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F27W[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeInSecondsUntilFireExtinguished;                      // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.IgniteStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UIgniteStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.StatusResponseExtinguish
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusResponseExtinguish : public UStatusResponse
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.StatusResponseIgnite
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusResponseIgnite : public UStatusResponse
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireGridCellSelectionParamsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UFireGridCellSelectionParamsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FFireGridCellSelectionParams>                FireGridCellSelectionParams;                             // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FirePropagationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFirePropagationInterface : public UInterface
	{
	public:
		void SetAllCellsState(EFireCellState State);
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.CookerIgnitionComponent
	 * Size -> 0x0078 (FullSize[0x0140] - InheritedSize[0x00C8])
	 */
	class UCookerIgnitionComponent : public UActorComponent
	{
	public:
		struct FCookerIgnitionParams                               CookerIgnitionParams;                                    // 0x00C8(0x0078) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireCellStateTimingParamsDataAsset
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UFireCellStateTimingParamsDataAsset : public UDataAsset
	{
	public:
		struct FFireCellStateTimingParams                          TimingParams;                                            // 0x0028(0x0094) Edit
		unsigned char                                              UnknownData_4MXS[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireGridAudioManager
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UFireGridAudioManager : public UObject
	{
	public:
		struct FFireCellAudioParams                                FireAudioParams;                                         // 0x0028(0x0040) Transient, Protected
		class AActor*                                              OwningActor;                                             // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFirePropagator*                                     FirePropagator;                                          // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IYUP[0x58];                                  // 0x0078(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireGridLocationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFireGridLocationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireGridProxyInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFireGridProxyInterface : public UFireGridLocationInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireGridVFXParamsDataAsset
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UFireGridVFXParamsDataAsset : public UDataAsset
	{
	public:
		struct FFireGridVFXParams                                  Params;                                                  // 0x0028(0x0040) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FireGridVFXManager
	 * Size -> 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
	 */
	class UFireGridVFXManager : public UObject
	{
	public:
		class UFireGridVFXParamsDataAsset*                         VFXParams;                                               // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		TMap<class FName, class UParticleSystemComponent*>         SpawnedParticleSystemsForTemplates;                      // 0x0030(0x0050) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected
		TArray<struct FFireParticleSystem>                         SpawnedCustomParticleSystemsForCells;                    // 0x0080(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected
		TMap<int32_t, struct FFireMesh>                            SpawnedMeshesForCells;                                   // 0x0090(0x0050) ZeroConstructor, Transient, ContainsInstancedReference, Protected
		TMap<int32_t, class UParticleSystemComponent*>             SpawnedParticleSystemsForSmokeDescs;                     // 0x00E0(0x0050) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected
		class UParticleSystemComponent*                            SpawnedExteriorSmokeParticleSystem;                      // 0x0130(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UParticleSystemComponent*                            SpawnedLowDetailParticleSystem;                          // 0x0138(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		TArray<struct FFireMesh>                                   DespawningMeshes;                                        // 0x0140(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected
		TArray<struct FFireGridRelativeSpawnDesc>                  InteriorSmokeSpawnDescs;                                 // 0x0150(0x0010) ZeroConstructor, Protected
		TArray<struct FFireGridLowDetailRelativeSpawnDesc>         LowDetailVFXSpawnDescs;                                  // 0x0160(0x0010) ZeroConstructor, Protected
		TArray<struct FFireParticleSpawnData>                      ParticleSpawnLODSettings;                                // 0x0170(0x0010) ZeroConstructor, Protected
		TArray<struct FFireGridLowDetailRelativeSpawnDesc>         ExteriorSmokeVFXSpawnDescs;                              // 0x0180(0x0010) ZeroConstructor, Protected
		TArray<struct FFireDefaultVFXSpawnData>                    VFXToSpawn;                                              // 0x0190(0x0010) ZeroConstructor, Transient, Protected
		unsigned char                                              UnknownData_PU48[0x8];                                   // 0x01A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFireParticleSpawnList>                      InterleavedSpawnLists;                                   // 0x01A8(0x0010) ZeroConstructor
		class UFirePropagator*                                     Propagator;                                              // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2Z34[0x50];                                  // 0x01C0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.FirePropagator
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UFirePropagator : public UObject
	{
	public:
		unsigned char                                              UnknownData_WC29[0x90];                                  // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFireCellStateTimingParamsDataAsset*                 CellStateTimingParams;                                   // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OF5B[0x4];                                   // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaterHeightOffsetToFloodCells;                           // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3ENK[0x58];                                  // 0x00C8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.MastFlammableComponent
	 * Size -> 0x0028 (FullSize[0x0138] - InheritedSize[0x0110])
	 */
	class UMastFlammableComponent : public UActorFlammableComponent
	{
	public:
		unsigned char                                              UnknownData_2MZR[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FireGridLocation;                                        // 0x0118(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VFQZ[0x14];                                  // 0x0124(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.ShipFireDamageParamsDataAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UShipFireDamageParamsDataAsset : public UDataAsset
	{
	public:
		struct FShipFireDamageParams                               FireDamageParams;                                        // 0x0028(0x0018) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.ShipFireLightParamsDataAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UShipFireLightParamsDataAsset : public UDataAsset
	{
	public:
		struct FShipFireLightParams                                Params;                                                  // 0x0028(0x0014) Edit
		unsigned char                                              UnknownData_T2GE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Fire.ShipFirePropagationComponent
	 * Size -> 0x03C8 (FullSize[0x0490] - InheritedSize[0x00C8])
	 */
	class UShipFirePropagationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NM41[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FeatureToggleName;                                       // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ShipSize;                                                // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      CellSize;                                                // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntVector                                          GridDimensions;                                          // 0x00EC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             GridOffset;                                              // 0x00F8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XNSP[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFirePropagator*                                     Propagator;                                              // 0x0108(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShipFireDamageParamsDataAsset*                      FireDamageDataAsset;                                     // 0x0110(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FFireCellDesc>                               FireCellDescs;                                           // 0x0118(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              UnknownData_JSKK[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatus                                             BurnStatus;                                              // 0x0138(0x0018) Edit, DisableEditOnInstance
		class UFireGridVFXManager*                                 VFXManager;                                              // 0x0150(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFireGridVfxSpawnSettings                           VfxSpawnSettings;                                        // 0x0158(0x0058) Edit, DisableEditOnInstance
		struct FShipFireLightManager                               FireLightManager;                                        // 0x01B0(0x0150) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FFireGridCharringManager                            FireCharringManager;                                     // 0x0300(0x00C8) Edit, DisableEditOnInstance
		TArray<struct FReplicatedFireCellData>                     ReplicatedCellData;                                      // 0x03C8(0x0010) Net, ZeroConstructor, Transient, RepNotify
		struct FReplicatedFireCellCharringData                     ReplicatedCellCharringData;                              // 0x03D8(0x0018) Net, Transient, RepNotify
		class UFireGridAudioManager*                               FireAudioManager;                                        // 0x03F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFireCellAudioParams                                FireAudioParams;                                         // 0x03F8(0x0040) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_8GTW[0x58];                                  // 0x0438(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnRep_CellData();
		void OnRep_CellCharringData();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
