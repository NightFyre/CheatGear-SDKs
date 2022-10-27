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
	 * Class NaturalDisasters.AshenLordAshCloudSetupDataAsset
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UAshenLordAshCloudSetupDataAsset : public UDataAsset
	{
	public:
		struct FWeightedProbabilityRangeOfRanges                   AshCloudRadiusInMetres;                                  // 0x0028(0x0030) Edit
		float                                                      AshCloudHeightCoefficient;                               // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S31G[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   AshCloudLifetime;                                        // 0x0060(0x0030) Edit
		class UCurveFloat*                                         ScaleUpSpeedCurve;                                       // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DissipationCurve;                                        // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.AshenLordAshCloud
	 * Size -> 0x0088 (FullSize[0x0450] - InheritedSize[0x03C8])
	 */
	class AAshenLordAshCloud : public AActor
	{
	public:
		class UStaticMeshComponent*                                CloudMesh;                                               // 0x03C8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAshenLordAshCloudSetupDataAsset*                    SetupData;                                               // 0x03D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InnerRangeStartOffset;                                   // 0x03D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OuterRangeStart;                                         // 0x03DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NormalisedEngulfedRTPC;                                  // 0x03E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RTPCSecondsBetweenUpdates;                               // 0x03E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I2J4[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LifeTime;                                                // 0x03F0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      StartTime;                                               // 0x03F4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      TimeOffset;                                              // 0x03F8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		EAshCloudState                                             CloudState;                                              // 0x03FC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_6MTN[0x37];                                  // 0x03FD(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxRadiusMultiplier;                                     // 0x0434(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TSR1[0x18];                                  // 0x0438(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdatePostSettingsBP();
		void SetDissipationDensityBP(float CloudDensity);
		void OnRep_StateChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.AshenLordVolcano
	 * Size -> 0x0070 (FullSize[0x0438] - InheritedSize[0x03C8])
	 */
	class AAshenLordVolcano : public AActor
	{
	public:
		class UAshenLordVolcanoSetupDataAsset*                     VolcanoSetupData;                                        // 0x03C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_FGT4[0x68];                                  // 0x03D0(0x0068) MISSED OFFSET (PADDING)

	public:
		void Multicast_FireProjectile(int32_t WeightedVolcanoProjectileIndex, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate);
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.VolcanoSetupDataAsset
	 * Size -> 0x0420 (FullSize[0x0448] - InheritedSize[0x0028])
	 */
	class UVolcanoSetupDataAsset : public UDataAsset
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OLI6[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   WarmUpDuration;                                          // 0x0030(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   EruptionDuration;                                        // 0x0060(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   DormantDuration;                                         // 0x0090(0x0030) Edit, DisableEditOnInstance
		float                                                      MinimumDurationForTheEffects;                            // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AOF4[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   GroundAndWaterStayHotDurationAfterVolcanoFinishesDuration; // 0x00C8(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   ProjectileTriggerFrequency;                              // 0x00F8(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   PercentageOfMaxTargetingRange;                           // 0x0128(0x0030) Edit, DisableEditOnInstance
		int32_t                                                    MinNumProjectilesToTrigger;                              // 0x0158(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumProjectilesToTrigger;                              // 0x015C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExtraProjectilePoolNumProjectiles;                       // 0x0160(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H13N[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVolcanoTargetChances                               ChanceToTargetPlayers;                                   // 0x0168(0x0058) Edit, DisableEditOnInstance
		struct FVolcanoTargetChances                               ChanceToTargetShips;                                     // 0x01C0(0x0058) Edit, DisableEditOnInstance
		struct FVolcanoTargetChances                               ChanceToTargetWatercraft;                                // 0x0218(0x0058) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   PlayerNearMissDistanceInMetres;                          // 0x0270(0x0030) Edit, DisableEditOnInstance
		float                                                      InnerShipNearMissRadiusInMetres;                         // 0x02A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OuterShipNearMissRadiusInMetres;                         // 0x02A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InnerWatercraftNearMissRadiusInMetres;                   // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OuterWatercraftNearMissRadiusInMetres;                   // 0x02AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FWeightedVolcanoProjectile>                  Projectiles;                                             // 0x02B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedbackIgnitionEffect;                             // 0x02C0(0x0010) Edit, ZeroConstructor
		class UClass*                                              LocalMiniProjectilesClass;                               // 0x02D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   LocalMiniProjectilesSpawnHeightAbovePlayerInMetres;      // 0x02D8(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   LocalMiniProjectilesSpawnDistanceFromPlayerInMetres;     // 0x0308(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   LocalMiniProjectilesTimeBetweenSpawns;                   // 0x0338(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRange                           NumLocalMiniProjectilesToTrigger;                        // 0x0368(0x0020) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   LocalMiniProjectilesSpeed;                               // 0x0388(0x0030) Edit, DisableEditOnInstance
		float                                                      LocalMiniProjectilesGravityScale;                        // 0x03B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TDGI[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   LocalMiniProjectilesSpawnAngleRange;                     // 0x03C0(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   LocalMiniProjectilesSpawnStartPositionOffsetInMetres;    // 0x03F0(0x0030) Edit, DisableEditOnInstance
		float                                                      LocalMiniProjectilesSpawnDistanceSpeedScalar;            // 0x0420(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LocalMiniProjectilesSpawnDistanceMaxPlayerSpeed;         // 0x0424(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBetweenLocalEmbers;                                  // 0x0428(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O1NW[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVolcanoSetupDataEmbersEntry>                LocalEmbers;                                             // 0x0430(0x0010) Edit, ZeroConstructor
		float                                                      EmbersSpawnOffsetInMetres;                               // 0x0440(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ServerMigrationDistanceAsMultipleOfOuterTargetRadius;    // 0x0444(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.AshenLordVolcanoSetupDataAsset
	 * Size -> 0x0150 (FullSize[0x0178] - InheritedSize[0x0028])
	 */
	class UAshenLordVolcanoSetupDataAsset : public UDataAsset
	{
	public:
		struct FWeightedProbabilityRangeOfRanges                   ProjectileTriggerFrequency;                              // 0x0028(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRange                           NumProjectilesToTrigger;                                 // 0x0058(0x0020) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   SpawnHeightInMetres;                                     // 0x0078(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   TargetDistanceFromCenterInMetres;                        // 0x00A8(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenSpawns;                                       // 0x00D8(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   StartPositionOffsetInMetres;                             // 0x0108(0x0030) Edit, DisableEditOnInstance
		TArray<struct FWeightedAshenLordVolcanoProjectile>         Projectiles;                                             // 0x0138(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FPoolableCollectionMapConfiguration                 PoolableProjectilesConfig;                               // 0x0148(0x0018) Edit, DisableEditOnInstance
		struct FVolcanoSetupDataEmbersEntry                        Embers;                                                  // 0x0160(0x0010) Edit
		float                                                      EmberSpawnHeightInMeters;                                // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBetweenEmbers;                                       // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.AshenLordWorldEndCloud
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class AAshenLordWorldEndCloud : public AActor
	{
	public:
		float                                                      SelfDestructDelayOnComplete;                             // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAshenLordWorldEndCloudState                               CloudState;                                              // 0x03CC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FWBG[0x3];                                   // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAshenLordWorldEndCloudAnimation                    CurrentCloudAnimation;                                   // 0x03D0(0x0008) Net
		unsigned char                                              UnknownData_APTM[0x8];                                   // 0x03D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_CloudStateChange();
		void AnimateCloud(float AdjustedLifetime);
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.Geyser
	 * Size -> 0x00B0 (FullSize[0x0478] - InheritedSize[0x03C8])
	 */
	class AGeyser : public AActor
	{
	public:
		unsigned char                                              UnknownData_WRJE[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGeyserSetupDataAsset*                               SetupData;                                               // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		EGeyserState                                               GeyserState;                                             // 0x03D8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G3MY[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseObjectPoolWrapper*                             GeyserBuildUpPool;                                       // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseObjectPoolWrapper*                             GeyserBlowPool;                                          // 0x03E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StartActiveAudioLoopEvent;                               // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopActiveAudioLoopEvent;                                // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayEruptingAudioEvent;                                  // 0x0400(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionComponent*                                 ExplosionComponent;                                      // 0x0408(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ActiveParticlesComponent;                                // 0x0410(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            EruptingParticlesComponent;                              // 0x0418(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionChannel                                          HitTestTraceChannel;                                     // 0x0420(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W5DQ[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GeyserHoleClass;                                         // 0x0428(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AHole*                                               GeyserHole;                                              // 0x0430(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RYJB[0x40];                                  // 0x0438(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnRep_GeyserState();
		void Multicast_TriggerExplosion();
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.DisableGeyserMechanismAction
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class ADisableGeyserMechanismAction : public AActor
	{
	public:
		class UMechanismActionComponent*                           MechanismActionComponent;                                // 0x03C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AGeyser*>                                     GeysersToDisable;                                        // 0x03D0(0x0010) Edit, ZeroConstructor

	public:
		void OnActionStateChanged(EMechanismActionState PreviousState, EMechanismActionState NewState, class AActor* InInstigator);
		void OnActionReset();
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.EarthquakeSetupDataAsset
	 * Size -> 0x0300 (FullSize[0x0328] - InheritedSize[0x0028])
	 */
	class UEarthquakeSetupDataAsset : public UDataAsset
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ECLI[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   WarmUpDuration;                                          // 0x0030(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   EarthquakeDuration;                                      // 0x0060(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   CoolDownDuration;                                        // 0x0090(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   DormantDuration;                                         // 0x00C0(0x0030) Edit, DisableEditOnInstance
		float                                                      ChanceOfTriggeringAVolcano;                              // 0x00F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         PercentageThroughEarthquakeToStartVolcano;               // 0x00F4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_39K2[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerFeedback                                     WarmupPlayerFeedback;                                    // 0x0108(0x0080) Edit, DisableEditOnInstance
		struct FPlayerFeedback                                     ActivePlayerFeedback;                                    // 0x0188(0x0080) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   StaggerStrengthDuration;                                 // 0x0208(0x0030) Edit, DisableEditOnInstance
		float                                                      StaggerStrengthModifierWhenOnAShip;                      // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         PercentageThroughCameraShakeToStartNextOne;              // 0x023C(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FFloatRange                                         TimeToShipPush;                                          // 0x024C(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_COU5[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   ForceToApplyToShip;                                      // 0x0260(0x0030) Edit, DisableEditOnInstance
		float                                                      MaximumShipSpeedToBePushed;                              // 0x0290(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceEarthquakeTriggersGeysers;                         // 0x0294(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenLocalEffects;                                 // 0x0298(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRange                           NumberOfLocalEffectsToTrigger;                           // 0x02C8(0x0020) Edit, DisableEditOnInstance
		float                                                      EffectConeAngle;                                         // 0x02E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EffectRaycastDistanceInMetres;                           // 0x02EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDistanceThrottledRandomParticleSystemPicker        EarthquakeEffects;                                       // 0x02F0(0x0010) Edit, DisableEditOnInstance
		float                                                      WarmupWindTurbulence;                                    // 0x0300(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         WarmupGustPower;                                         // 0x0304(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ActiveWindTurbulence;                                    // 0x0314(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         ActiveGustPower;                                         // 0x0318(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.Earthquake
	 * Size -> 0x01F0 (FullSize[0x05B8] - InheritedSize[0x03C8])
	 */
	class AEarthquake : public AActor
	{
	public:
		unsigned char                                              UnknownData_2AOS[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEarthquakeSetupDataAsset*                           EarthquakeSetupData;                                     // 0x03D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEarthquakeSetupDataAsset*                           EarthquakeSetupDataOverride;                             // 0x03E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEarthquakeSetupDataAsset*                           SelectedEarthquakeDataForNextQuake;                      // 0x03E8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FEarthquakeStoryCustomisationData>           StoryCustomisationData;                                  // 0x03F0(0x0010) Edit, ZeroConstructor
		class AVolcano*                                            AssociatedVolcano;                                       // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGeyserManager*                                      AssociatedGeyserManager;                                 // 0x0408(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EarthquakeEffectInnerRadiusOffsetInMetres;               // 0x0410(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KKOC[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseObjectPoolWrapper*                             AudioPool;                                               // 0x0418(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayEarthquakeLarge;                                     // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopEarthquakeLarge;                                     // 0x0428(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayEarthquakeSmall;                                     // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopEarthquakeSmall;                                     // 0x0438(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EarthquakeRtpcName;                                      // 0x0440(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EarthquakeRtpcMin;                                       // 0x0448(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EarthquakeRtpcMax;                                       // 0x044C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EarthquakeSizeToUseLargeAttenuation;                     // 0x0450(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZHKM[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   HitDetectionVolume;                                      // 0x0458(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindZoneComponent*                                  WindZone;                                                // 0x0460(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEarthquakeState                                           EarthquakeState;                                         // 0x0468(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XRR6[0x14F];                                 // 0x0469(0x014F) MISSED OFFSET (PADDING)

	public:
		void OnRep_EarthquakeState(EEarthquakeState OldEarthquakeState);
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.MechanismGeyser
	 * Size -> 0x0010 (FullSize[0x0488] - InheritedSize[0x0478])
	 */
	class AMechanismGeyser : public AGeyser
	{
	public:
		EGeyserState                                               GeyserStateWhenMechanismIsInactive;                      // 0x0478(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_QYQD[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMechanismActionComponent*                           MechanismActionComponent;                                // 0x0480(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnMechanismActionStateChanged(EMechanismActionState PreviousState, EMechanismActionState NewState, class AActor* InInstigator);
		void OnMechanismActionReset();
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.GeyserManagerSetupDataAsset
	 * Size -> 0x0198 (FullSize[0x01C0] - InheritedSize[0x0028])
	 */
	class UGeyserManagerSetupDataAsset : public UDataAsset
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_530A[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   DormantDuration;                                         // 0x0030(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   ActiveDuration;                                          // 0x0060(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   DelayBetweenGeyserGroupsDuringGeyserEvent;               // 0x0090(0x0030) Edit, DisableEditOnInstance
		bool                                                       StartInactive;                                           // 0x00C0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NoRestartAfterGeyserSpurtComplete;                       // 0x00C1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseUniqueLocationsForEachGeyser;                         // 0x00C2(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GWDJ[0x1];                                   // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDistanceFromPlayerInMetres;                           // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinGeyserSequenceSpacing;                                // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QE48[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GeyserToSpawn;                                           // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FWeightedProbabilityRange                           NumGeyserGroupsToSpawn;                                  // 0x00D8(0x0020) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRange                           NumGeysersToSpawnPerGroup;                               // 0x00F8(0x0020) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   SpawnDistanceFromPlayerInMetres;                         // 0x0118(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   SpawnRadiusInMetres;                                     // 0x0148(0x0030) Edit, DisableEditOnInstance
		TArray<struct FGeyserSpawnAngleOption>                     SpawnAngleRelativeToPlayerDirection;                     // 0x0178(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   DelayBetweenEachGeyserSpawningInAGroup;                  // 0x0188(0x0030) Edit, DisableEditOnInstance
		float                                                      MaximumDensityRadiusInMetres;                            // 0x01B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaximumDensityMaxNumGeysersWithinRadius;                 // 0x01BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.NaturalDisasterRegistryInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNaturalDisasterRegistryInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.GeyserManager
	 * Size -> 0x0080 (FullSize[0x0448] - InheritedSize[0x03C8])
	 */
	class AGeyserManager : public AActor
	{
	public:
		class UGeyserManagerSetupDataAsset*                        GeyserManagerSetupData;                                  // 0x03C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGeyserManagerSetupDataAsset*                        GeyserManagerSetupDataOverride;                          // 0x03D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGeyserManagerSetupDataAsset*                        SelectedGeyserManagerForNextActivation;                  // 0x03D8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGeyserManagerStoryCustomisationData>        StoryCustomisationData;                                  // 0x03E0(0x0010) Edit, ZeroConstructor
		class USceneComponent*                                     Root;                                                    // 0x03F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGeyserManagerState                                        State;                                                   // 0x03F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G0QV[0x4F];                                  // 0x03F9(0x004F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.GeyserItemSpawnComponent
	 * Size -> 0x0020 (FullSize[0x0460] - InheritedSize[0x0440])
	 */
	class UGeyserItemSpawnComponent : public UItemSpawnComponent
	{
	public:
		unsigned char                                              UnknownData_4R59[0x20];                                  // 0x0440(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnGeyserSpawned(const struct FVector& GeyserSpawnLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.GeyserSetupDataAsset
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UGeyserSetupDataAsset : public UDataAsset
	{
	public:
		struct FWeightedProbabilityRangeOfRanges                   DormantDuration;                                         // 0x0028(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   InitialWarningDuration;                                  // 0x0058(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRange                           NumSpurtsPerActivation;                                  // 0x0088(0x0020) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenSpurts;                                       // 0x00A8(0x0030) Edit, DisableEditOnInstance
		bool                                                       ShouldDestroyOnDeactivation;                             // 0x00D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D3TE[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DestroyAfterDeactivationDelay;                           // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.LavaStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULavaStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.LavaZone
	 * Size -> 0x00A8 (FullSize[0x0470] - InheritedSize[0x03C8])
	 */
	class ALavaZone : public AActor
	{
	public:
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenActivations;                                  // 0x03C8(0x0030) Edit
		struct FWeightedProbabilityRangeOfRanges                   ActiveDuration;                                          // 0x03F8(0x0030) Edit
		struct FStoryFlag                                          StoryFlag;                                               // 0x0428(0x0008) Edit
		class UPhysicalMaterial*                                   LavaMaterial;                                            // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      ActorsInZone;                                            // 0x0438(0x0010) Net, ZeroConstructor, Transient, RepNotify
		bool                                                       Active;                                                  // 0x0448(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       InitializeFromGlobalState;                               // 0x0449(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SelfActivating;                                          // 0x044A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C9IT[0x5];                                   // 0x044B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MaterialZone[0x10];                                      // 0x0450(0x0010) UNKNOWN PROPERTY: InterfaceProperty NaturalDisasters.LavaZone.MaterialZone
		unsigned char                                              LocalPlayerDispatcher[0x10];                             // 0x0460(0x0010) UNKNOWN PROPERTY: InterfaceProperty NaturalDisasters.LavaZone.LocalPlayerDispatcher

	public:
		void OnRep_ActorsInZone(TArray<class AActor*> PreviousActors);
		void OnRep_Active();
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.VolcanoInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVolcanoInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.VolcanoServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVolcanoServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.SeatStat_IslandVolcanoActive
	 * Size -> 0x0068 (FullSize[0x00B0] - InheritedSize[0x0048])
	 */
	class USeatStat_IslandVolcanoActive : public USeatStat
	{
	public:
		class FName                                                VolcanoIslandName;                                       // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0FGV[0x60];                                  // 0x0050(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.SuperheatedWaterSetupDataAsset
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class USuperheatedWaterSetupDataAsset : public UDataAsset
	{
	public:
		float                                                      TimeBetweenHealthReduction;                              // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumWaterDepthToCauseDamage;                          // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenLargeSurfaceEffects;                          // 0x0030(0x0030) Edit, DisableEditOnInstance
		float                                                      LargeSurfaceEffectMinimumDistanceInMetres;               // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WLAE[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomParticleSystemPicker                         LargeSurfaceEffects;                                     // 0x0068(0x0010) Edit, DisableEditOnInstance
		float                                                      EffectSpawnHeight;                                       // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MurkStrengthToStartEffects;                              // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenSmallSurfaceEffects;                          // 0x0080(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRange                           NumSmallSurfaceEffects;                                  // 0x00B0(0x0020) Edit, DisableEditOnInstance
		struct FDistanceThrottledRandomParticleSystemPicker        SmallSurfaceEffects;                                     // 0x00D0(0x0010) Edit, DisableEditOnInstance
		float                                                      SmallSurfaceEffectNearbyPlayerRadiusInMetres;            // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmallSurfaceEffectOffsetRadiusInMetres;                  // 0x00E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.SuperheatedWater
	 * Size -> 0x0108 (FullSize[0x0570] - InheritedSize[0x0468])
	 */
	class ASuperheatedWater : public AMurk
	{
	public:
		unsigned char                                              UnknownData_E31V[0x10];                                  // 0x0468(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USuperheatedWaterSetupDataAsset*                     SetupData;                                               // 0x0478(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   HitDetectionVolume;                                      // 0x0480(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FakeUnderwaterLocationsMinDistanceInMetres;              // 0x0488(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FakeUnderwaterLocationsDistanceBetweenPointsInMetres;    // 0x048C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<TWeakObjectPtr<class AAthenaPlayerCharacter>>       PlayersInZone;                                           // 0x0490(0x0010) Net, ZeroConstructor, RepNotify, UObjectWrapper
		unsigned char                                              UnknownData_EEQL[0xD0];                                  // 0x04A0(0x00D0) MISSED OFFSET (PADDING)

	public:
		void OnRep_PlayersInZone();
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.Volcano
	 * Size -> 0x0228 (FullSize[0x05F0] - InheritedSize[0x03C8])
	 */
	class AVolcano : public AActor
	{
	public:
		unsigned char                                              UnknownData_LRBZ[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVolcanoSetupDataAsset*                              VolcanoSetupDataOverride;                                // 0x03E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVolcanoSetupDataAsset*                              SelectedVolcanoDataForNextEruption;                      // 0x03E8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVolcanoStoryCustomisationData>              StoryCustomisationData;                                  // 0x03F0(0x0010) Edit, ZeroConstructor
		class UCapsuleComponent*                                   HitDetectionVolume;                                      // 0x0400(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseDormantDuration;                                      // 0x0408(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ENX9[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVolcanoSetupDataAsset*                              VolcanoSetupData;                                        // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMurk*                                               AssociatedSuperheatedWater;                              // 0x0418(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALavaZone*                                           AssociatedLavaZone;                                      // 0x0420(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InnerTargetRadiusInMetres;                               // 0x0428(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OuterTargetRadiusInMetres;                               // 0x042C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NearbyPlayerRangeToFireProjectilesInMetres;              // 0x0430(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RandomShipPositionScale;                                 // 0x0434(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            WarmingUpEmitter;                                        // 0x0438(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            EruptingEmitter;                                         // 0x0440(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendedLightingZoneComponent*                       BlendedLightingZoneComponent;                            // 0x0448(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendedAtmosphericPressureZoneComponent*            BlendedAtmosphericPressureZoneComponent;                 // 0x0450(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendedPostProcessingRainZoneComponent*             BlendedPostProcessingRainZoneComponent;                  // 0x0458(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ProjectileLaunchOffset;                                  // 0x0460(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_URH4[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseObjectPoolWrapper*                             AudioPool;                                               // 0x0470(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         WarmupAudioPlayEvent;                                    // 0x0478(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         WarmupAudioStopEvent;                                    // 0x0480(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         EruptingAudioPlayEvent;                                  // 0x0488(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         EruptingAudioStopEvent;                                  // 0x0490(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   InstantKillZone;                                         // 0x0498(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InstantKillZoneTestInterval;                             // 0x04A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVolcanoStateData                                   StateData;                                               // 0x04A4(0x000C) Net, RepNotify
		class FName                                                AssociatedIslandName;                                    // 0x04B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8IIS[0x138];                                 // 0x04B8(0x0138) MISSED OFFSET (PADDING)

	public:
		void OnRep_VolcanoState(const struct FVolcanoStateData& OldVolcanoState);
		void Multicast_FireProjectile(const struct FVector& AuthoritySpawnLocation, TArray<struct FVolcanoProjectileData> VolcanoProjectileDataArray);
		static UClass* StaticClass();
	};

	/**
	 * Class NaturalDisasters.VolcanoService
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UVolcanoService : public UObject
	{
	public:
		unsigned char                                              UnknownData_KD8H[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
