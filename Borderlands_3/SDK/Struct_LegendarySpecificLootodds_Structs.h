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
	 * UserDefinedStruct Struct_LegendarySpecificLootodds.Struct_LegendarySpecificLootodds
	 * Size -> 0x0070
	 */
	struct FStruct_LegendarySpecificLootodds
	{
	public:
		class FText                                                Type_47_91BB9D0B4777B34CD4ADD391DE2CDC22;                // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                Map_52_1EAE6F964F9BFDC0C01536B44AFDBC4A;                 // 0x0018(0x0018) Edit, BlueprintVisible
		class FText                                                Encounter_Type_54_F400945F436645F96EACC0999DE32013;      // 0x0030(0x0018) Edit, BlueprintVisible
		float                                                      LegendaryDropChance_Playthrough1_48_4189D9DA42C2B912FC25209E8C353A26; // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LegendaryDropChance_Mayhem_49_A4643C45437ECBC97BC6629ECC66F6B6; // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LegendaryDropChance_Playthrough2_50_11E6C8E8493E0A73AF9B35891E7CE111; // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_73LO[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Comment_37_54F6EB4941432916E7C7BBACA03F20F8;             // 0x0058(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
