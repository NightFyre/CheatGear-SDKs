﻿#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Size -> 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
	 */
	class UImgMediaSource : public UBaseMediaSource
	{
	public:
		struct FFrameRate                                          FrameRateOverride;                                       // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProxyOverride;                                           // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      SequencePath;                                            // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

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
