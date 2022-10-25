#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * UserDefinedStruct FUserMenuData.FUserMenuData
	 * Size -> 0x0048
	 */
	struct FFUserMenuData
	{
	public:
		class FString                                              FileName_17_1C35B40A459EAF953FFBEE9222D0CF03;            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                Title_20_8BAB5DA04FD96C036417A4BF81F1B3DA;               // 0x0010(0x0018) Edit, BlueprintVisible
		TArray<class FText>                                        Entries_15_5E97676645BDBC2F5DA4B4B7C7F5D4ED;             // 0x0028(0x0010) Edit, BlueprintVisible
		TArray<class FString>                                      Commands_14_0CE7A7944881DB7F5A2B04BDFF8BF7A4;            // 0x0038(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
