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
	 * Class LogitechARX.LogitechARXConfig
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class ULogitechARXConfig : public UObject
	{
	public:
		class FString                                              BasePathToAssets;                                        // 0x0028(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IndexFile;                                               // 0x0038(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                AppletTitle;                                             // 0x0048(0x0018) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		class FText                                                AppletFriendlyName;                                      // 0x0060(0x0018) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
