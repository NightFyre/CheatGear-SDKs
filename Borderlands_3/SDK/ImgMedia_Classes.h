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
	 * Class ImgMedia.ImgMediaSource
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UImgMediaSource : public UBaseMediaSource
	{
	public:
		struct FFrameRate                                          FrameRateOverride;                                       // 0x0038(0x0008) Edit, BlueprintVisible, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProxyOverride;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      SequencePath;                                            // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		void SetSequencePath(const class FString& Path);
		class FString GetSequencePath();
		void GetProxies(TArray<class FString>* OutProxies);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
