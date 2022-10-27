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
	 * Class NetworkRegions.NetworkRegionServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetworkRegionServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkRegions.NetworkRegionService
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UNetworkRegionService : public UObject
	{
	public:
		unsigned char                                              UnknownData_6ZEF[0x90];                                  // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APlayerController*>                           PlayersThatNeedToBeTicked;                               // 0x00B8(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkRegions.RegionAssetCacheActor
	 * Size -> 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
	 */
	class ARegionAssetCacheActor : public AActor
	{
	public:
		TArray<struct FRegionAssetsList>                           RegionData;                                              // 0x03C8(0x0010) Edit, ZeroConstructor, Config
		TArray<class UObject*>                                     LoadedAssets;                                            // 0x03D8(0x0010) ZeroConstructor, Transient
		unsigned char                                              UnknownData_GXHF[0x20];                                  // 0x03E8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
