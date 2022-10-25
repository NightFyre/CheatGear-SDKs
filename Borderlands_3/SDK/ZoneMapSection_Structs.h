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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ZoneMapSection.ZoneMapSection
	 * Size -> 0x0040
	 */
	struct FZoneMapSection
	{
	public:
		class FString                                              ZoneMapSectionObjectName_10_C082F2B4425C9366613F7CAC0BD8E849; // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                SectionName_2_E98723774ADDDE6E83961F9EECD809C6;          // 0x0010(0x0018) Edit, BlueprintVisible
		struct FVector                                             Origin_5_1FB5D9BA452E5A248DA43B9249710334;               // 0x0028(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Extents_7_7FEAFE6A483D22A97F2E468A9E00F2AB;              // 0x0034(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
