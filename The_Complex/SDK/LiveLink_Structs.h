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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum LiveLink.ELiveLinkAxis
	 */
	enum class ELiveLinkAxis : uint8_t
	{
		X    = 0,
		Y    = 1,
		Z    = 2,
		XNeg = 3,
		YNeg = 4,
		ZNeg = 5,
		MAX  = 6
	};

	/**
	 * Enum LiveLink.ELiveLinkTimecodeProviderEvaluationType
	 */
	enum class ELiveLinkTimecodeProviderEvaluationType : uint8_t
	{
		Lerp    = 0,
		Nearest = 1,
		Latest  = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LiveLink.LiveLinkRoleProjectSetting
	 * Size -> 0x0028
	 */
	struct FLiveLinkRoleProjectSetting
	{
	public:
		class UClass*                                              Role;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SettingClass;                                            // 0x0008(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FrameInterpolationProcessor;                             // 0x0010(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      FramePreProcessors;                                      // 0x0018(0x0010) Edit, ZeroConstructor, Config, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLink.ProviderPollResult
	 * Size -> 0x0040
	 */
	struct FProviderPollResult
	{
	public:
		unsigned char                                              UnknownData_VPZ6[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MachineName;                                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MachineTimeOffset;                                       // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValidProvider;                                        // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OBI[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLink.LiveLinkRetargetAssetReference
	 * Size -> 0x0001
	 */
	struct FLiveLinkRetargetAssetReference
	{
	public:
		unsigned char                                              UnknownData_4BJA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
