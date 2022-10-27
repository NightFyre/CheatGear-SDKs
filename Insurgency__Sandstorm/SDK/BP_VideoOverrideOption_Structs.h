#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * ScriptStruct BP_VideoOverrideOption.BP_VideoOverrideOption
	 * Size -> 0x0090
	 */
	struct FBP_VideoOverrideOption
	{
	public:
		class FName                                                ConsoleVariable_14_E73CB9AC494F2F65144C31BB909ADBE6;     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayText_5_2E5C11FD477A8E8759C4F2869CE97100;          // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                DisplayDescription_18_555BAEE440060BA641E45B8F86AE1E21;  // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, class FText>                             DisplayOptions_11_8FF1F4F14659796ABFAD74ABA5B949BB;      // 0x0038(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                DefaultValue_24_07FDC116407C16D2286DC6BE5D33A9E7;        // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
