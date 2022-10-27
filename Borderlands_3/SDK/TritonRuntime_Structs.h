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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TritonRuntime.TritonProbeSet
	 * Size -> 0x0030
	 */
	struct FTritonProbeSet
	{
	public:
		class FString                                              Label;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATritonProbeLocationProvider*                        ProbeLocationProvider;                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     ProbeLocations;                                          // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLowDetail;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYY6[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TritonRuntime.TritonSimulationParams
	 * Size -> 0x0018
	 */
	struct FTritonSimulationParams
	{
	public:
		float                                                      SimulationFrequency;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulationRadius;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulationDepth;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulationHeight;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdealVoxelmapResolutionInMeters;                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRMSForAveragingLongDistanceVolumes;                  // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseWallinessFactorForLongDistanceVolumes;               // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNK3[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TritonRuntime.TritonLayerFadeParams
	 * Size -> 0x0014
	 */
	struct FTritonLayerFadeParams
	{
	public:
		float                                                      RangeMin;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolMin;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pivot;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolMax;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TritonRuntime.TritonAdvancedParams
	 * Size -> 0x0024
	 */
	struct FTritonAdvancedParams
	{
	public:
		bool                                                       bUseProbeStreaming;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9K0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PreloadDistance;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLoadedProbes;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceFractionForPreload;                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpatialInterpCacheSize;                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VoxelDecompressionCacheSize;                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimCellCacheSize;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowProbeAutoLoad;                                     // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMCD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProbeSearchDistance;                                     // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TritonRuntime.FallbackAcousticData
	 * Size -> 0x0040
	 */
	struct FFallbackAcousticData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWwiseEmitterAcousticData                           AcousticData;                                            // 0x000C(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Outdoorness;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TV8R[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              EarlyReflections;                                        // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TritonRuntime.TritonProbeLayer
	 * Size -> 0x0178
	 */
	struct FTritonProbeLayer
	{
	public:
		TArray<struct FTritonProbeSet>                             ProbeLocationSets;                                       // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FTritonSimulationParams                             SimulationParams;                                        // 0x0010(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FTritonLayerFadeParams                              FadeParams;                                              // 0x0028(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FTritonAdvancedParams                               AdvancedParams;                                          // 0x003C(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      DatasetPathOverride;                                     // 0x0060(0x0010) Edit, NativeAccessSpecifierPublic
		class FString                                              DatasetFile;                                             // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFallbackAcousticData>                       FallbackAcousticData;                                    // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FFallbackAcousticData                               FallbackAcousticDataAggregate;                           // 0x0090(0x0040) Edit, NativeAccessSpecifierPublic
		struct FWwiseAcousticEmulationParameters                   FallbackAcousticEmulationParameters;                     // 0x00D0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasGeneratedEarlyReflections;                           // 0x00E8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1I0T[0x8F];                                  // 0x00E9(0x008F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TritonRuntime.TritonUpdateDesc
	 * Size -> 0x000A
	 */
	struct FTritonUpdateDesc
	{
	public:
		bool                                                       bCleanTempDirectory;                                     // 0x0000(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportVoxelizedRegion;                                  // 0x0001(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateJobConfig;                                        // 0x0002(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateTaskImages;                                       // 0x0003(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunTasks;                                               // 0x0004(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateCompressedVoxMap;                                 // 0x0005(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollateResults;                                         // 0x0006(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateLongDistanceProbes;                             // 0x0007(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixupDirectionalReciprocity;                            // 0x0008(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncorporateNewACE;                                      // 0x0009(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TritonRuntime.CachedPerProbeAcousticData
	 * Size -> 0x000C
	 */
	struct FCachedPerProbeAcousticData
	{
	public:
		float                                                      ERVolume;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LRVolume;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LRDuration;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
