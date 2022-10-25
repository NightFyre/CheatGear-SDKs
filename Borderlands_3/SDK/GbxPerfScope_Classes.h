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
	 * Class GbxPerfScope.GbxPerfScopeOptions
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGbxPerfScopeOptions : public UObject
	{
	public:
		class FString                                              AnalyticsURL;                                            // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxPerfScope.GbxPerfScopePerfSampleData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGbxPerfScopePerfSampleData : public UObject
	{
	public:
		TArray<struct FPerfSample>                                 Samples;                                                 // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void GetMapGPUHotspots(class UObject* WorldContext, int32_t NumSamples, const struct FLatentActionInfo& LatentInfo);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
