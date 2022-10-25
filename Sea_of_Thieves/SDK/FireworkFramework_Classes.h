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
	 * Class FireworkFramework.FireworkAmbientLightComponent
	 * Size -> 0x0050 (FullSize[0x04F0] - InheritedSize[0x04A0])
	 */
	class UFireworkAmbientLightComponent : public UAmbientLightSourceComponent
	{
	public:
		unsigned char                                              UnknownData_J2X9[0x50];                                  // 0x04A0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworkDamagerType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFireworkDamagerType : public UDamagerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworkFeedbackDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UFireworkFeedbackDataAsset : public UDataAsset
	{
	public:
		float                                                      MaxExplosionRadius;                                      // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4YU9[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CameraShake;                                             // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      CameraShakeInnerRadiusMultiplier;                        // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_19SL[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UForceFeedbackEffect*                                ExplosionRumble;                                         // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworkDataAsset
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UFireworkDataAsset : public UDataAsset
	{
	public:
		struct FWeightedProbabilityRangeOfRanges                   PercentageTimeUntilTrailDisappears;                      // 0x0028(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   TimeUntilExplosion;                                      // 0x0058(0x0030) Edit, DisableEditOnInstance
		bool                                                       IsFlare;                                                 // 0x0088(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldCastAmbientLight;                                  // 0x0089(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JCWN[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFireworkAmbientLightData                           FireworkAmbientLightData;                                // 0x008C(0x0014) Edit, DisableEditOnInstance
		TArray<struct FWeightedFireworkVFXData>                    Explosions;                                              // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FWeightedProbabilityRange                           NumExplosions;                                           // 0x00B0(0x0020) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenExplosions;                                   // 0x00D0(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   ExplosionLocationOffset;                                 // 0x0100(0x0030) Edit, DisableEditOnInstance
		float                                                      FlashbangRadius;                                         // 0x0130(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AKC8[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseObjectPoolWrapper*                             ExplosionSfxPool;                                        // 0x0138(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         LaunchSfx;                                               // 0x0140(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFireworkFeedbackDataAsset*                          FireworkFeedbackData;                                    // 0x0148(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworkExplosion
	 * Size -> 0x00D8 (FullSize[0x04A0] - InheritedSize[0x03C8])
	 */
	class AFireworkExplosion : public AActor
	{
	public:
		unsigned char                                              UnknownData_PI2F[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeneratedFireworkData                              GeneratedFireworkData;                                   // 0x03D0(0x0058) Transient, Protected
		class USceneComponent*                                     RootSceneComponent;                                      // 0x0428(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFireworkAmbientLightComponent*                      FireworkAmbientLightComponent;                           // 0x0430(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SpawnedExplosionParticles;                               // 0x0438(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWwiseEmitter                                       AudioEmitter;                                            // 0x0440(0x0020) Transient
		unsigned char                                              UnknownData_SF9Y[0x40];                                  // 0x0460(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworkItemInfo
	 * Size -> 0x0020 (FullSize[0x0530] - InheritedSize[0x0510])
	 */
	class AFireworkItemInfo : public AItemInfo
	{
	public:
		class ULoadableFireworkComponent*                          LoadableProjectileComponent;                             // 0x0510(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               FireworkDataAsset;                                       // 0x0518(0x0010) Edit, ZeroConstructor
		int32_t                                                    GeneratedDataRNGSeed;                                    // 0x0528(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GFNK[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworkServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFireworkServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworkProjectile
	 * Size -> 0x0108 (FullSize[0x0708] - InheritedSize[0x0600])
	 */
	class AFireworkProjectile : public ALaunchableProjectile
	{
	public:
		unsigned char                                              UnknownData_EWDL[0x10];                                  // 0x0600(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    CollisionComponent;                                      // 0x0610(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MeshComponent;                                           // 0x0618(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionComponent*                                 ExplosionComponent;                                      // 0x0620(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFireworkStatsComponent*                             FireworkStatsComponent;                                  // 0x0628(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MeshDirectionComponent;                                  // 0x0630(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UProjectileAnimationComponent*                       AnimationComponent;                                      // 0x0638(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGeneratedFireworkData                              GeneratedFireworkData;                                   // 0x0640(0x0058) Transient
		unsigned char                                              UnknownData_66OJ[0x70];                                  // 0x0698(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworkService
	 * Size -> 0x0098 (FullSize[0x0460] - InheritedSize[0x03C8])
	 */
	class AFireworkService : public AActor
	{
	public:
		unsigned char                                              UnknownData_DJ0M[0x78];                                  // 0x03C8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfCachedFlares;                                    // 0x0440(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3E7H[0x1C];                                  // 0x0444(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworksSettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UFireworksSettings : public UDeveloperSettings
	{
	public:
		float                                                      FlashbangRadius;                                         // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlashbangFlashTimer;                                     // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlashbangFadeOutTimer;                                   // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlashbangCooldown;                                       // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoadedFuseTimer;                                         // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TZJK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworksSettingsDataAsset
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UFireworksSettingsDataAsset : public UDataAsset
	{
	public:
		float                                                      LoadedFuseTimer;                                         // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6NUT[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseObjectPoolWrapper*                             FuseSoundWisePool;                                       // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         FuseActivateSoundPlayEvent;                              // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         FuseSoundPlayEvent;                                      // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         FuseSoundStopEvent;                                      // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             FuseParticleSystem;                                      // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               FuseMeshAssetReference;                                  // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.FireworkStatsComponent
	 * Size -> 0x00C0 (FullSize[0x0188] - InheritedSize[0x00C8])
	 */
	class UFireworkStatsComponent : public UActorComponent
	{
	public:
		float                                                      FlareRadius;                                             // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AABY[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfFireworksFiredAtNight;                           // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FireworksFiredAtNightRadius;                             // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FiredFireworksAtNightTimer;                              // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_96EB[0xAC];                                  // 0x00DC(0x00AC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.ImpactProjectileIdFirework
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UImpactProjectileIdFirework : public UImpactProjectileId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.LoadableFireworkComponent
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class ULoadableFireworkComponent : public ULoadableProjectileComponent
	{
	public:
		bool                                                       ShouldProjectileTrailDoReflections;                      // 0x0130(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldUseGlobalOverrideFuseTimer;                        // 0x0131(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldUseGlobalOverrideFuseSfx;                          // 0x0132(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldUseGlobalOverrideFuseVfx;                          // 0x0133(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldUseGlobalOverrideFuseMesh;                         // 0x0134(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZDI7[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFireworksSettingsDataAsset*                         FireworksSettingsDataAsset;                              // 0x0138(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FireworkFramework.ProjectileAnimationComponent
	 * Size -> 0x01C8 (FullSize[0x0290] - InheritedSize[0x00C8])
	 */
	class UProjectileAnimationComponent : public UActorComponent
	{
	public:
		TArray<struct FWeightedProjectileMeshAnimationData>        ProjectileAnimationCurves;                               // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UStaticMeshComponent*                                MeshComponent;                                           // 0x00D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRuntimeVectorCurve                                 AnimationOffsetCurve;                                    // 0x00E0(0x0170) Transient
		unsigned char                                              UnknownData_XV6E[0x40];                                  // 0x0250(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
