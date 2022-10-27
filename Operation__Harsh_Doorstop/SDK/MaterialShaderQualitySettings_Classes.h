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
	 * Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMaterialShaderQualitySettings : public UObject
	{
	public:
		TMap<class FName, class UShaderPlatformQualitySettings*>   ForwardSettingMap;                                       // 0x0028(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UShaderPlatformQualitySettings : public UObject
	{
	public:
		struct FMaterialQualityOverrides                           QualityOverrides[0x3];                                   // 0x0028(0x001B) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0CQ4[0x15];                                  // 0x0043(0x0015) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
