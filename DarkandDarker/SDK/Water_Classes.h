#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Class Water.BuoyancyComponent
	 * Size -> 0x0160 (FullSize[0x0210] - InheritedSize[0x00B0])
	 */
	class UBuoyancyComponent : public UActorComponent
	{
	public:
		TArray<struct FSphericalPontoon>                           Pontoons;                                                // 0x00B0(0x0010) ZeroConstructor, Deprecated, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnteredWaterDelegate;                                  // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitedWaterDelegate;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FBuoyancyData                                       BuoyancyData;                                            // 0x00E0(0x0088) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UWaterBodyComponent*>                         CurrentWaterBodyComponents;                              // 0x0168(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UPrimitiveComponent*                                 SimulatingComponent;                                     // 0x0178(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IDBV[0x90];                                  // 0x0180(0x0090) MISSED OFFSET (PADDING)

	public:
		void OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon);
		void OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon);
		bool IsOverlappingWaterBody();
		bool IsInWaterBody();
		void GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32_t* OutWaterBodyIdx, struct FVector* OutWaterVelocity);
		TArray<class UWaterBodyComponent*> GetCurrentWaterBodyComponents();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.BuoyancyManager
	 * Size -> 0x00B8 (FullSize[0x0330] - InheritedSize[0x0278])
	 */
	class ABuoyancyManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_P6GG[0x50];                                  // 0x0278(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBuoyancyComponent*>                          BuoyancyComponents;                                      // 0x02C8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TJIN[0x58];                                  // 0x02D8(0x0058) MISSED OFFSET (PADDING)

	public:
		bool STATIC_GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager** Manager);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.EnvQueryTest_InsideWaterBody
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
	{
	public:
		bool                                                       bIncludeWaves;                                           // 0x01F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimpleWaves;                                            // 0x01F9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreExclusionVolumes;                                 // 0x01FA(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJKU[0x5];                                   // 0x01FB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaveGeneratorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGerstnerWaterWaveGeneratorBase : public UObject
	{
	public:
		void GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaveGeneratorSimple
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
	{
	public:
		int32_t                                                    NumWaves;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Randomness;                                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWavelength;                                           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWavelength;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WavelengthFalloff;                                       // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAmplitude;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAmplitude;                                            // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmplitudeFalloff;                                        // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindAngleDeg;                                            // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionAngularSpreadDeg;                               // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmallWaveSteepness;                                      // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LargeWaveSteepness;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SteepnessFalloff;                                        // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaveGeneratorSpectrum
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
	{
	public:
		EWaveSpectrumType                                          SpectrumType;                                            // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RB3R[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGerstnerWaveOctave>                         Octaves;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterWavesBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterWavesBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterWaves
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterWaves : public UWaterWavesBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaves
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGerstnerWaterWaves : public UWaterWaves
	{
	public:
		class UGerstnerWaterWaveGeneratorBase*                     GerstnerWaveGenerator;                                   // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGerstnerWave>                               GerstnerWaves;                                           // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      MaxWaveHeight;                                           // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CGC1[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaveSubsystem
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_7NZ0[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.LakeCollisionComponent
	 * Size -> 0x0020 (FullSize[0x0560] - InheritedSize[0x0540])
	 */
	class ULakeCollisionComponent : public UPrimitiveComponent
	{
	public:
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0540(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             BoxExtent;                                               // 0x0548(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.NiagaraDataInterfaceWater
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
	{
	public:
		class UWaterBodyComponent*                                 SourceBodyComponent;                                     // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.NiagaraWaterFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UWaterBodyComponent* WaterBodyComponent);
		void STATIC_SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.OceanCollisionComponent
	 * Size -> 0x0040 (FullSize[0x0580] - InheritedSize[0x0540])
	 */
	class UOceanCollisionComponent : public UPrimitiveComponent
	{
	public:
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0540(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JJPP[0x38];                                  // 0x0548(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.OceanBoxCollisionComponent
	 * Size -> 0x0008 (FullSize[0x0580] - InheritedSize[0x0578])
	 */
	class UOceanBoxCollisionComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_EY78[0x8];                                   // 0x0578(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBody
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class AWaterBody : public AActor
	{
	public:
		unsigned char                                              UnknownData_H90E[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWaterSplineComponent*                               SplineComp;                                              // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWaterSplineMetadata*                                WaterSplineMetadata;                                     // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWaterBodyComponent*                                 WaterBodyComponent;                                      // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WaterBodyIndex;                                          // 0x0298(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWaterBodyType                                             WaterBodyType;                                           // 0x029C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C35X[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWaterWavesBase*                                     WaterWaves;                                              // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
		void SetWaterMaterial(class UMaterialInterface* InMaterial);
		void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
		struct FVector GetWaterVelocityVectorAtSplineInputKey(float InKey);
		float GetWaterVelocityAtSplineInputKey(float InKey);
		class UWaterSplineComponent* GetWaterSpline();
		class UMaterialInstanceDynamic* GetWaterMaterialInstance();
		EWaterBodyType GetWaterBodyType();
		class UWaterBodyComponent* GetWaterBodyComponent();
		class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
		class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
		TArray<class AWaterBodyIsland*> GetIslands();
		TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
		float GetAudioIntensityAtSplineInputKey(float InKey);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterBodyGenerator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyComponent
	 * Size -> 0x0E70 (FullSize[0x13B0] - InheritedSize[0x0540])
	 */
	class UWaterBodyComponent : public UPrimitiveComponent
	{
	public:
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0540(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetWaveMaskDepth;                                     // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWaveHeightOffset;                                     // 0x054C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillCollisionUnderWaterBodiesForNavmesh;                // 0x0550(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HP0P[0xF];                                   // 0x0551(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUnderwaterPostProcessSettings                      UnderwaterPostProcessSettings;                           // 0x0560(0x06E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWaterCurveSettings                                 CurveSettings;                                           // 0x0C40(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  WaterMaterial;                                           // 0x0C60(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  UnderwaterPostProcessMaterial;                           // 0x0C68(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShapeDilation;                                           // 0x0C70(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionHeightOffset;                                   // 0x0C74(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsLandscape;                                       // 0x0C78(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateCollisions;                                     // 0x0C79(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1TR[0x2];                                   // 0x0C7A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WaterBodyIndex;                                          // 0x0C7C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMesh*                                         WaterMeshOverride;                                       // 0x0C80(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    OverlapMaterialPriority;                                 // 0x0C88(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                CollisionProfileName;                                    // 0x0C8C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HHB9[0x4];                                   // 0x0C94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWaterSplineMetadata*                                WaterSplineMetadata;                                     // 0x0C98(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            WaterMID;                                                // 0x0CA0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            UnderwaterPostProcessMID;                                // 0x0CA8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<TLazyObjectPtr<class AWaterBodyIsland>>             Islands;                                                 // 0x0CB0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<TLazyObjectPtr<class AWaterBodyExclusionVolume>>    ExclusionVolumes;                                        // 0x0CC0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TWeakObjectPtr<class ALandscapeProxy>                      Landscape;                                               // 0x0CD0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P8Z7[0x8];                                   // 0x0CD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                CurrentPostProcessSettings;                              // 0x0CE0(0x06C0) Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       bCanAffectNavigation;                                    // 0x13A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BA1B[0x7];                                   // 0x13A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WaterNavAreaClass;                                       // 0x13A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
		class UWaterWavesBase* GetWaterWaves();
		float GetWaterVelocityAtSplineInputKey(float InKey);
		void GetWaterSurfaceInfoAtLocation(const struct FVector& InLocation, struct FVector* OutWaterSurfaceLocation, struct FVector* OutWaterSurfaceNormal, struct FVector* OutWaterVelocity, float* OutWaterDepth, bool bIncludeDepth);
		class UWaterSplineComponent* GetWaterSpline();
		class UMaterialInstanceDynamic* GetWaterMaterialInstance();
		class UMaterialInterface* GetWaterMaterial();
		class AWaterBody* GetWaterBodyActor();
		class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
		TArray<class UPrimitiveComponent*> GetStandardRenderableComponents();
		class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
		class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
		float GetMaxWaveHeight();
		TArray<class AWaterBodyIsland*> GetIslands();
		TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
		TArray<class UPrimitiveComponent*> GetCollisionComponents();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.CustomMeshGenerator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCustomMeshGenerator : public UWaterBodyGenerator
	{
	public:
		class UStaticMeshComponent*                                MeshComp;                                                // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyCustom
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class AWaterBodyCustom : public AWaterBody
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyCustomComponent
	 * Size -> 0x0010 (FullSize[0x13C0] - InheritedSize[0x13B0])
	 */
	class UWaterBodyCustomComponent : public UWaterBodyComponent
	{
	public:
		class UStaticMeshComponent*                                MeshComp;                                                // 0x13B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VZ8R[0x8];                                   // 0x13B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyExclusionVolume
	 * Size -> 0x0018 (FullSize[0x02D8] - InheritedSize[0x02C0])
	 */
	class AWaterBodyExclusionVolume : public APhysicsVolume
	{
	public:
		bool                                                       bIgnoreAllOverlappingWaterBodies;                        // 0x02C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AA7N[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AWaterBody*>                                  WaterBodiesToIgnore;                                     // 0x02C8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyIsland
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class AWaterBodyIsland : public AActor
	{
	public:
		unsigned char                                              UnknownData_5UK0[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWaterSplineComponent*                               SplineComp;                                              // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UWaterSplineComponent* GetWaterSpline();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.LakeGenerator
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULakeGenerator : public UWaterBodyGenerator
	{
	public:
		class UStaticMeshComponent*                                LakeMeshComp;                                            // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       LakeCollisionComp;                                       // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULakeCollisionComponent*                             LakeCollision;                                           // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyLake
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class AWaterBodyLake : public AWaterBody
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyLakeComponent
	 * Size -> 0x0010 (FullSize[0x13C0] - InheritedSize[0x13B0])
	 */
	class UWaterBodyLakeComponent : public UWaterBodyComponent
	{
	public:
		class UStaticMeshComponent*                                LakeMeshComp;                                            // 0x13B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULakeCollisionComponent*                             LakeCollision;                                           // 0x13B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.OceanGenerator
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOceanGenerator : public UWaterBodyGenerator
	{
	public:
		TArray<class UOceanBoxCollisionComponent*>                 CollisionBoxes;                                          // 0x0028(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPublic
		TArray<class UOceanCollisionComponent*>                    CollisionHullSets;                                       // 0x0038(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyOcean
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class AWaterBodyOcean : public AWaterBody
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyOceanComponent
	 * Size -> 0x0040 (FullSize[0x13F0] - InheritedSize[0x13B0])
	 */
	class UWaterBodyOceanComponent : public UWaterBodyComponent
	{
	public:
		TArray<class UOceanBoxCollisionComponent*>                 CollisionBoxes;                                          // 0x13B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierProtected
		TArray<class UOceanCollisionComponent*>                    CollisionHullSets;                                       // 0x13C0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierProtected
		struct FVector                                             CollisionExtents;                                        // 0x13D0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeightOffset;                                            // 0x13E8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XXVD[0x4];                                   // 0x13EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.RiverGenerator
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URiverGenerator : public UWaterBodyGenerator
	{
	public:
		TArray<class USplineMeshComponent*>                        SplineMeshComponents;                                    // 0x0028(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyRiver
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class AWaterBodyRiver : public AWaterBody
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyRiverComponent
	 * Size -> 0x0030 (FullSize[0x13E0] - InheritedSize[0x13B0])
	 */
	class UWaterBodyRiverComponent : public UWaterBodyComponent
	{
	public:
		TArray<class USplineMeshComponent*>                        SplineMeshComponents;                                    // 0x13B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  LakeTransitionMaterial;                                  // 0x13C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            LakeTransitionMID;                                       // 0x13C8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OceanTransitionMaterial;                                 // 0x13D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            OceanTransitionMID;                                      // 0x13D8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBrushActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterBrushActorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterMeshComponent
	 * Size -> 0x0158 (FullSize[0x06C0] - InheritedSize[0x0568])
	 */
	class UWaterMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_ZXZ7[0x8];                                   // 0x0568(0x0008) Fix Super Size
		class UMaterialInterface*                                  FarDistanceMaterial;                                     // 0x0570(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarDistanceMeshExtent;                                   // 0x0578(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O75X[0x4];                                   // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RTWorldLocation;                                         // 0x0580(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RTWorldSizeVector;                                       // 0x0598(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileSize;                                                // 0x05B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FIntPoint                                           ExtentInTiles;                                           // 0x05B4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2M81[0x9C];                                  // 0x05BC(0x009C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UsedMaterials[0x50];                                     // 0x0658(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_Q4YO[0x10];                                  // 0x06A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TessellationFactor;                                      // 0x06B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LODScale;                                                // 0x06BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterRuntimeSettings
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UWaterRuntimeSettings : public UDeveloperSettings
	{
	public:
		ECollisionChannel                                          CollisionChannelForWaterTraces;                          // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECN4[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MaterialParameterCollection[0x28];                       // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      WaterBodyIconWorldSize;                                  // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterBodyIconWorldZOffset;                               // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultWaterCollisionProfileName;                        // 0x0070(0x0008) Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              WaterBodyRiverComponentClass;                            // 0x0078(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              WaterBodyLakeComponentClass;                             // 0x0080(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              WaterBodyOceanComponentClass;                            // 0x0088(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              WaterBodyCustomComponentClass;                           // 0x0090(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterSplineComponent
	 * Size -> 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
	 */
	class UWaterSplineComponent : public USplineComponent
	{
	public:
		struct FWaterSplineCurveDefaults                           WaterSplineDefaults;                                     // 0x0640(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FWaterSplineCurveDefaults                           PreviousWaterSplineDefaults;                             // 0x0650(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterSplineMetadata
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UWaterSplineMetadata : public USplineMetadata
	{
	public:
		struct FInterpCurveFloat                                   Depth;                                                   // 0x0028(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveFloat                                   WaterVelocityScalar;                                     // 0x0040(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveFloat                                   RiverWidth;                                              // 0x0058(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveFloat                                   AudioIntensity;                                          // 0x0070(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveVector                                  WaterVelocity;                                           // 0x0088(0x0018) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterSubsystem
	 * Size -> 0x00C8 (FullSize[0x0108] - InheritedSize[0x0040])
	 */
	class UWaterSubsystem : public UTickableWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_OQMA[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuoyancyManager*                                    BuoyancyManager;                                         // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraUnderwaterStateChanged;                          // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWaterScalabilityChanged;                               // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UStaticMesh*                                         DefaultRiverMesh;                                        // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         DefaultLakeMesh;                                         // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AWaterZone*                                          WaterZoneActor;                                          // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ONOQ[0x28];                                  // 0x00B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialParameterCollection*                        MaterialParameterCollection;                             // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CWSI[0x20];                                  // 0x00E8(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetOceanFloodHeight(float InFloodHeight);
		void PrintToWaterLog(const class FString& Message, bool bWarning);
		bool IsWaterRenderingEnabled();
		bool IsUnderwaterPostProcessEnabled();
		bool IsShallowWaterSimulationEnabled();
		float GetWaterTimeSeconds();
		float GetSmoothedWorldTimeSeconds();
		int32_t STATIC_GetShallowWaterSimulationRenderTargetSize();
		int32_t STATIC_GetShallowWaterMaxImpulseForces();
		int32_t STATIC_GetShallowWaterMaxDynamicForces();
		float GetOceanTotalHeight();
		float GetOceanFloodHeight();
		float GetOceanBaseHeight();
		float GetCameraUnderwaterDepth();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterWavesAsset
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UWaterWavesAsset : public UObject
	{
	public:
		class UWaterWaves*                                         WaterWaves;                                              // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterWavesAssetReference
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UWaterWavesAssetReference : public UWaterWavesBase
	{
	public:
		class UWaterWavesAsset*                                    WaterWavesAsset;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterZone
	 * Size -> 0x0018 (FullSize[0x0290] - InheritedSize[0x0278])
	 */
	class AWaterZone : public AActor
	{
	public:
		class UTexture2D*                                          WaterVelocityTexture;                                    // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       BoundsComponent;                                         // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWaterMeshComponent*                                 WaterMesh;                                               // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
