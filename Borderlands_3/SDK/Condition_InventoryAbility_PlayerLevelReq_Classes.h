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
	 * BlueprintGeneratedClass Condition_InventoryAbility_PlayerLevelReq.Condition_InventoryAbility_PlayerLevelReq_C
	 * Size -> 0x0005 (FullSize[0x008D] - InheritedSize[0x0088])
	 */
	class UCondition_InventoryAbility_PlayerLevelReq_C : public UGbxCondition_Blueprint
	{
	public:
		int32_t                                                    Level;                                                   // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECompare                                                   Method;                                                  // 0x008C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
