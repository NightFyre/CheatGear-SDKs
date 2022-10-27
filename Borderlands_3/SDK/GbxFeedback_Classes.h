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
	 * Class GbxFeedback.GbxRumbleRemapping
	 * Size -> 0x0A50 (FullSize[0x0A78] - InheritedSize[0x0028])
	 */
	class UGbxRumbleRemapping : public UObject
	{
	public:
		struct FRemapByConsole                                     WindowsMapping;                                          // 0x0028(0x0210) Edit, Config, NativeAccessSpecifierPublic
		struct FRemapByConsole                                     XBoxOneMapping;                                          // 0x0238(0x0210) Edit, Config, NativeAccessSpecifierPublic
		struct FRemapByConsole                                     PS4Mapping;                                              // 0x0448(0x0210) Edit, Config, NativeAccessSpecifierPublic
		struct FRemapByConsole                                     XBoxSeriesXMapping;                                      // 0x0658(0x0210) Edit, Config, NativeAccessSpecifierPublic
		struct FRemapByConsole                                     PS5Mapping;                                              // 0x0868(0x0210) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
