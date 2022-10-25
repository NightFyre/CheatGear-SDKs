#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class DeveloperSettings.DeveloperSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDeveloperSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_Q7D0[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeveloperSettings.DeveloperSettingsBackedByCVars
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeveloperSettings.PlatformSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPlatformSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_9VFQ[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeveloperSettings.PlatformSettingsManager
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UPlatformSettingsManager : public UObject
	{
	public:
		TMap<class UClass*, struct FPlatformSettingsInstances>     SettingsMap;                                             // 0x0028(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PE28[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
