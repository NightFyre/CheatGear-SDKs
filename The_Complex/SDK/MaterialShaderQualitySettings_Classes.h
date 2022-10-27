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
	 * Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMaterialShaderQualitySettings : public UObject
	{
	public:
		TMap<class FName, class UShaderPlatformQualitySettings*>   ForwardSettingMap;                                       // 0x0028(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UShaderPlatformQualitySettings : public UObject
	{
	public:
		struct FMaterialQualityOverrides                           QualityOverrides[0x4];                                   // 0x0028(0x0024) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1KU[0x14];                                  // 0x004C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
