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
	 * Class Water.SplashProbeDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USplashProbeDataAsset : public UDataAsset
	{
	public:
		TArray<struct FSplashProbe>                                Probes;                                                  // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.SplashProbeVFXComponent
	 * Size -> 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
	 */
	class USplashProbeVFXComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_OPVP[0x28];                                  // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplashProbeDataAsset*                               Probes;                                                  // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USplashProbeDataAsset*                               ProbesInstance;                                          // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FActorComponentSelector                             AttachProbesToOwner;                                     // 0x0100(0x0010) Edit, DisableEditOnInstance, ContainsInstancedReference
		class USceneComponent*                                     AttachProbesToComponent;                                 // 0x0110(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ProbeEnabled;                                            // 0x0118(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JDQS[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsProbeEnabled();
		void EnableSplashProbe(bool Enable);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterSplashProbeFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterSplashProbeFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TickProbes(class AActor* InOwner, TArray<struct FWaterSplashProbe>* InSplashProbes, float InDeltaTime);
		void STATIC_TickProbe(class AActor* InOwner, struct FWaterSplashProbe* InSplashProbe, float InDeltaTime);
		void STATIC_SetSamplingTime(TArray<struct FWaterSplashProbe>* InSplashProbes, float SamplingTime);
		struct FVector STATIC_GetRelativeWaterHeightChangeSpd(TArray<struct FWaterSplashProbe>* InSplashProbes, int32_t ProbeIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterSpoutVFXComponent
	 * Size -> 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
	 */
	class UWaterSpoutVFXComponent : public UActorComponent
	{
	public:
		TArray<struct FWaterSpout>                                 WaterSpouts;                                             // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		struct FVector                                             SplashEffectPointBottomZ;                                // 0x00D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SCTS[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             SpoutParticleSystem;                                     // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             SplashParticleSystem;                                    // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterSplashDelayMin;                                     // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterSplashDelayMax;                                     // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SplashEffectVFXOffset;                                   // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SplashSweepRadius;                                       // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldSpawnKillPlaneAtSplash;                            // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5WYB[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         SplashKillPlaneMesh;                                     // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SplashKillPlaneScale;                                    // 0x0118(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8CGV[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                SplashKillPlane;                                         // 0x0128(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FWaterSpout>                                 ActiveWaterSpouts;                                       // 0x0130(0x0010) ZeroConstructor, ContainsInstancedReference
		unsigned char                                              UnknownData_6UVF[0x18];                                  // 0x0140(0x0018) MISSED OFFSET (PADDING)

	public:
		void AddSplashVFXSpawnerWithLocation(struct FWaterSpout* WaterSplashLocator);
		void ActivateSplashVFXWithDelay();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.AthenaFFTWater
	 * Size -> 0x0028 (FullSize[0x0438] - InheritedSize[0x0410])
	 */
	class AAthenaFFTWater : public AFFTWater
	{
	public:
		unsigned char                                              UnknownData_Z1UC[0x28];                                  // 0x0410(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterEmissionVolumeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterEmissionVolumeInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.AthenaWaterEmissionVolume
	 * Size -> 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
	 */
	class AAthenaWaterEmissionVolume : public AWaterEmissionVolume
	{
	public:
		unsigned char                                              UnknownData_AJRZ[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.FFTWaterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFFTWaterInterface : public UInterface
	{
	public:
		void SetExtendedPlaneComponent(class UFFTWaterExtendedPlaneComponent* InFFTWaterComponent);
		void SetComponent(class UFFTWaterComponent* InFFTWaterComponent);
		void SetActor(class AAthenaFFTWater* InFFTWaterActor);
		class UFFTWaterExtendedPlaneComponent* GetExtendedPlaneComponent();
		class UFFTWaterComponent* GetComponent();
		class AAthenaFFTWater* GetActor();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterProperties
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UWaterProperties : public UObject
	{
	public:
		TArray<struct FWaterInformation>                           WaterInfo;                                               // 0x0028(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterInterface : public UInterface
	{
	public:
		bool IsReadyToBeQueried();
		EWaterQueryResult GetWaterInformationWithScaledChoppyness(const struct FVector& SamplePosition, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal, class AActor* Actor, float ChoppynessScalar);
		EWaterQueryResult GetWaterInformationBatched(TArray<struct FVector2D> SamplePositions, TArray<float>* Heights, TArray<struct FVector2D>* ApproxVelocities, TArray<struct FVector>* Normals, class AActor* Actor);
		EWaterQueryResult GetWaterInformation(const struct FVector& SamplePosition, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal, class AActor* Actor);
		EWaterQueryResult GetWaterHeightWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height, float ChoppynessScalar);
		EWaterQueryResult GetWaterHeight(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height);
		struct FWaterSimPlane GetActorWaterPlane(class AActor* Actor);
		struct FWaterInformation GetActorWaterInformation(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.FFTWaterService
	 * Size -> 0x0080 (FullSize[0x0448] - InheritedSize[0x03C8])
	 */
	class AFFTWaterService : public AActor
	{
	public:
		unsigned char                                              UnknownData_WJQS[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AAthenaFFTWater>                      FFTWaterActor;                                           // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class UFFTWaterComponent>                   FFTWaterComponent;                                       // 0x03E0(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class UFFTWaterExtendedPlaneComponent>      ExtendedPlaneComponent;                                  // 0x03E8(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper
		unsigned char                                              UnknownData_69JL[0x50];                                  // 0x03F0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ReplicatedServerCreationTime;                            // 0x0440(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_FFTWaterComponent();
		void OnRep_ExtendedPlaneComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.FlatWaterPlaneComponent
	 * Size -> 0x0018 (FullSize[0x05E0] - InheritedSize[0x05C8])
	 */
	class UFlatWaterPlaneComponent : public UBaseWaterComponent
	{
	public:
		unsigned char                                              UnknownData_KS9V[0x8];                                   // 0x05C8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_UV5Z[0x10];                                  // 0x05D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnActorLeaveWaterPlane(class AActor* Actor);
		void OnActorEnterWaterPlane(class AActor* Actor);
		struct FVector2D ConvertToWaterSpace(const struct FVector& WorldSpacePosition);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.MockWaterInterface
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMockWaterInterface : public UObject
	{
	public:
		unsigned char                                              UnknownData_JZIL[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.MockWaterServiceWithValidWaterPlane
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UMockWaterServiceWithValidWaterPlane : public UMockWaterInterface
	{
	public:
		class UFFTWaterComponent*                                  DefaultWaterComponent;                                   // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.NoSwimWaterId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNoSwimWaterId : public UWaterId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.SeaWaterId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USeaWaterId : public UWaterId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.ShipWaterId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShipWaterId : public UWaterId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.UndergroundSeaWaterId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUndergroundSeaWaterId : public UWaterId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBuoyancyFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterBuoyancyFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_TickBuoyancy(class AActor* InOwner, struct FWaterBuoyancy* InWaterBuoyancy, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar);
		void STATIC_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(struct FWaterBuoyancy* InWaterBuoyancy, float ZOffset);
		void STATIC_SetBuoyancyProbeCurveBlendDebugOverride(struct FWaterBuoyancy* InWaterBuoyancy, float UnaryBlendOverride);
		void STATIC_SetBuoyancyProbeCurveBlend(struct FWaterBuoyancy* InWaterBuoyancy, float Blend, EBuoyancyBlend BlendType);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBuoyancySampleMovementFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterBuoyancySampleMovementFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TickLocalSampleMovement(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, float DeltaTime);
		void STATIC_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement);
		void STATIC_StartMovingVolumeSamplesLocallyByConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, int32_t ConfigurationIndex);
		void STATIC_StartMovingVolumeSamplesLocally(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, class UCurveVector* InCenterOfMassOffsetCurve, TArray<struct FBuoyancySampleMovementConfigurationEntry>* NewSampleData, float BuoyancyScalarAtNewPosition, class UCurveFloat* BuoyancyScalarCurve, class UCurveFloat* ProbeMovementCurve, float MoveTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterEmissionVolumeService
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UWaterEmissionVolumeService : public UObject
	{
	public:
		unsigned char                                              UnknownData_IEXT[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterExclusionSurfaceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterExclusionSurfaceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterPlaneInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterPlaneInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterInteractionComponent
	 * Size -> 0x0028 (FullSize[0x0610] - InheritedSize[0x05E8])
	 */
	class UWaterInteractionComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_QN25[0x8];                                   // 0x05E8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_LLZV[0x20];                                  // 0x05F0(0x0020) MISSED OFFSET (PADDING)

	public:
		void LeaveWaterPlane(class UBaseWaterComponent* WaterComponent);
		void LeaveWaterExclusionZone();
		bool IsUsingWaterExcludedZone();
		bool IsUsingNonDefaultWaterPlane();
		bool IsInWaterExcludedZone();
		class UBaseWaterComponent* GetWaterPlaneComponent();
		unsigned char GetNumberOfWaterPlanes();
		void EnterWaterPlane(class UBaseWaterComponent* WaterComponent);
		void EnterWaterExclusionZone();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterPlaneExclusionComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UWaterPlaneExclusionComponent : public UActorComponent
	{
	public:
		struct FActorComponentSelector                             UseSpecificComponentForOverlaps;                         // 0x00C8(0x0010) Edit, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterPlaneRetrievalProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterPlaneRetrievalProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterVolumeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterVolumeInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
