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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
	 * Size -> 0x0004
	 */
	struct FMaterialQualityOverrides
	{
	public:
		bool                                                       bEnableOverride;                                         // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor
		bool                                                       bForceFullyRough;                                        // 0x0001(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor
		bool                                                       bForceNonMetal;                                          // 0x0002(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor
		bool                                                       bForceDisableLMDirectionality;                           // 0x0003(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct MaterialShaderQualitySettings.ShaderQualityOverridesListItem
	 * Size -> 0x0020
	 */
	struct FShaderQualityOverridesListItem
	{
	public:
		class FString                                              RangeName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class UBoolProperty*                                       QualityProperty;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UShaderPlatformQualitySettings*                      SettingContainer;                                        // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
