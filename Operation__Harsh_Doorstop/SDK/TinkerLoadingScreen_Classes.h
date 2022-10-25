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
	 * Class TinkerLoadingScreen.LoadingScreenSettings
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class ULoadingScreenSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              bUseStartupScreen : 1;                                   // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2L7H[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLoadingScreenDescription                           StartupScreen;                                           // 0x0040(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic
		struct FLoadingScreenDescription                           DefaultScreen;                                           // 0x0078(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TinkerLoadingScreen.LoadingScreenWidgetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULoadingScreenWidgetInterface : public UInterface
	{
	public:
		void SetLoadingScreenDescription(const struct FLoadingScreenDescription& Description);
		void SetLevelLoadData(const struct FLoadScreenLevelData& LevelData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
