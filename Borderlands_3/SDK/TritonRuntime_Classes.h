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
	 * Class TritonRuntime.TritonAcousticDataComponent
	 * Size -> 0x0140 (FullSize[0x0410] - InheritedSize[0x02D0])
	 */
	class UTritonAcousticDataComponent : public USceneComponent
	{
	public:
		TArray<struct FTritonProbeLayer>                           ProbeLayers;                                             // 0x02D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SpeedOfSound;                                            // 0x02E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMHG[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         ExtraTritonMaterialEquivalences;                         // 0x02E8(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAudioPrepComponentFilter>                   ExcludeComponentsFilters;                                // 0x0338(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAudioPrepComponentFilter>                   IncludeComponentsFilters;                                // 0x0348(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EOcclusionVoxelThinningAlgorithm>                   ThinningSteps;                                           // 0x0358(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ExtraTerrainThickness;                                   // 0x0368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyGenerateSelected;                                   // 0x036C(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTritonUpdateDesc                                   UpdateSteps;                                             // 0x036D(0x000A) Edit, Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxTriggerProperty                                 TriggerRefreshCachedVoxelData;                           // 0x0377(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxTriggerProperty                                 TriggerVisualizeMaterials;                               // 0x0378(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxTriggerProperty                                 TriggerAuditProbeLocations;                              // 0x0379(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxTriggerProperty                                 TriggerUpdateProbeLocations;                             // 0x037A(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83HW[0x5];                                   // 0x037B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioOcclusionVoxelDataProvider*                    CachedVoxelData;                                         // 0x0380(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAudioOcclusionVoxelDataProvider*                    CachedVoxelDataNoThinning;                               // 0x0388(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAudioOcclusionVoxelDataProvider*                    CachedNavMeshVoxelData;                                  // 0x0390(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxTriggerProperty                                 TriggerBuildFallbackAcousticData;                        // 0x0398(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OB3V[0x77];                                  // 0x0399(0x0077) MISSED OFFSET (PADDING)

	public:
		void VisualizeMaterials();
		void UpdateProbeLocations();
		void RefreshCachedVoxelData();
		void BuildFallbackAcousticData();
		void AuditProbeLocations();
		static UClass* StaticClass();
	};

	/**
	 * Class TritonRuntime.TritonZone
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class ATritonZone : public AActor
	{
	public:
		class UTritonAcousticDataComponent*                        TritonDataComponent;                                     // 0x0458(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TritonRuntime.TritonVoxelOverrideVolume
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class ATritonVoxelOverrideVolume : public AVolume
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TritonRuntime.TritonProbeHelper
	 * Size -> 0x0018 (FullSize[0x0470] - InheritedSize[0x0458])
	 */
	class ATritonProbeHelper : public AActor
	{
	public:
		float                                                      DistanceLimit;                                           // 0x0458(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecording;                                              // 0x045C(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNK4[0x3];                                   // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     RecordedLocations;                                       // 0x0460(0x0010) Edit, ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TritonRuntime.TritonProbeLocationProvider
	 * Size -> 0x0028 (FullSize[0x04B8] - InheritedSize[0x0490])
	 */
	class ATritonProbeLocationProvider : public AVolume
	{
	public:
		float                                                      TargetDistanceAboveGround;                               // 0x0490(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumHorizontalSpacing;                                // 0x0494(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWallDistanceForLowDensityProbes;                      // 0x0498(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpacingFactorForLowDensityProbes;                        // 0x049C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecimationThreshold;                                     // 0x04A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberDecimations;                                    // 0x04A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ATritonProbeLocationProvider*>                SuppressingZones;                                        // 0x04A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void FindProbeLocations(const struct FBoxSphereBounds& WorldBoxSphere, class UAudioOcclusionVoxelDataProvider* GeoVoxels, class UAudioOcclusionVoxelDataProvider* NavVoxels, TArray<struct FVector>* out_ResultProbeLocations);
		static UClass* StaticClass();
	};

	/**
	 * Class TritonRuntime.TritonSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTritonSettings : public UObject
	{
	public:
		struct FDirectoryPath                                      TritonDataPath;                                          // 0x0028(0x0010) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
