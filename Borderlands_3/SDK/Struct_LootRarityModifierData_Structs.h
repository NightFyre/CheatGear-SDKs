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
	 * UserDefinedStruct Struct_LootRarityModifierData.Struct_LootRarityModifierData
	 * Size -> 0x0018
	 */
	struct FStruct_LootRarityModifierData
	{
	public:
		float                                                      RarityWeightLevelBias_5_057BA6074423BC84C3853592FAE98B1F; // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CommonWeightModifier_21_3D483428462299E5B6AF02B6CC0F65CC; // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UncommonWeightModifier_12_A1CB19B648A9D93482D9DC83713A2FB5; // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RareWeightModifier_16_F11E138D458B57D473F062A6C52A5F58;  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VeryRareWeightModifier_17_8A0A186D4D4FC53ADDFB71A8A7F589DA; // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LegendaryWeightModifier_18_B98DE11946C28DF64D94E197F7FED9BE; // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
