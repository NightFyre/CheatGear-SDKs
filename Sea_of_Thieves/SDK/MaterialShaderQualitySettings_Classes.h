#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UMaterialShaderQualitySettings : public UObject
	{
	public:
		TMap<class FName, class UShaderPlatformQualitySettings*>   ForwardSettingMap;                                       // 0x0028(0x0050) ZeroConstructor
		unsigned char                                              UnknownData_40HN[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UShaderPlatformQualitySettings : public UObject
	{
	public:
		struct FMaterialQualityOverrides                           QualityOverrides[0x3];                                   // 0x0028(0x000C) ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2IDB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
