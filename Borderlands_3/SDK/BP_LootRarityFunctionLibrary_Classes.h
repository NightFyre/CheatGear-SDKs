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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_LootRarityFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ApplyRarityWeightLevelBias(float LevelToDetermineRarityAt, float GlobalRarityWeightLevelBias, float LocalRarityWeightLevelBias, float RarityWeightLevelBiasMultiplier, class UObject* __WorldContext, float* Biased_Level);
		void STATIC_CalculateRarityWeight(const struct FDataTableRowHandle& RarityTableRowHandle, float LevelToDetermineRarityAt, float GlobalRarityWeightLevelBias, float LocalRarityWeightLevelBias, float GlobalRarityWeightModifier, float LocalRarityWeightModifier, class UObject* __WorldContext, float* Weight);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
