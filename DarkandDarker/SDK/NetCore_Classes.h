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
	 * Class NetCore.StatePerObjectConfig
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UStatePerObjectConfig : public UObject
	{
	public:
		unsigned char                                              UnknownData_UQMF[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PerObjectConfigSection;                                  // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnabled;                                                // 0x0060(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N21I[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetCore.EscalationManagerConfig
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	class UEscalationManagerConfig : public UStatePerObjectConfig
	{
	public:
		TArray<class FString>                                      EscalationSeverity;                                      // 0x0068(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EAGY[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetCore.NetAnalyticsAggregatorConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNetAnalyticsAggregatorConfig : public UObject
	{
	public:
		TArray<struct FNetAnalyticsDataConfig>                     NetAnalyticsData;                                        // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
