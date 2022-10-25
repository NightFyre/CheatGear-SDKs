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
	 * Class LiveLinkInterface.LiveLinkSourceFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkSourceFactory : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkSourceSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULiveLinkSourceSettings : public UObject
	{
	public:
		struct FLiveLinkInterpolationSettings                      InterpolationSettings;                                   // 0x0028(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
