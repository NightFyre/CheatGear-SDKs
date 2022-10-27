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
	 * BlueprintGeneratedClass Condition_HasGrenadeModTier.Condition_HasGrenadeModTier_C
	 * Size -> 0x000C (FullSize[0x0094] - InheritedSize[0x0088])
	 */
	class UCondition_HasGrenadeModTier_C : public UGbxCondition_Blueprint
	{
	public:
		class UGbxAttributeData*                                   GrenadeTier;                                             // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Tier;                                                    // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
