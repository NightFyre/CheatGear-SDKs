#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Class HDCoreUGC.HDCoreUGCProjectPolicies
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDCoreUGCProjectPolicies : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDCoreUGC.HDCoreDefaultUGCProjectPolicies
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDCoreDefaultUGCProjectPolicies : public UHDCoreUGCProjectPolicies
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDCoreUGC.HDCoreUGCData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHDCoreUGCData : public UPrimaryDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDCoreUGC.HDCoreUGCPluginStateMachine
	 * Size -> 0x01A0 (FullSize[0x01C8] - InheritedSize[0x0028])
	 */
	class UHDCoreUGCPluginStateMachine : public UObject
	{
	public:
		unsigned char                                              UnknownData_ED7W[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHDCoreUGCPluginStateMachineProperties              StateProperties;                                         // 0x0048(0x00A8) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GCDZ[0xD8];                                  // 0x00F0(0x00D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDCoreUGC.HDCoreUGCSubsystem
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	class UHDCoreUGCSubsystem : public UEngineSubsystem
	{
	public:
		TMap<class FString, class UHDCoreUGCPluginStateMachine*>   UGCPluginStateMachines;                                  // 0x0030(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2XI9[0x50];                                  // 0x0080(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDCoreUGCProjectPolicies*                           GameSpecificPolicies;                                    // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WCWV[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDCoreUGC.HDCoreUGCSubsystemSettings
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UHDCoreUGCSubsystemSettings : public UDeveloperSettings
	{
	public:
		struct FSoftClassPath                                      UGCManagerClassName;                                     // 0x0038(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      DisabledPlugins;                                         // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      AdditionalPluginMetadataKeys;                            // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6STT[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
