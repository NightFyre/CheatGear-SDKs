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
	 * BlueprintGeneratedClass Condition_IsInventorySlotEquipped.Condition_IsInventorySlotEquipped_C
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UCondition_IsInventorySlotEquipped_C : public UGbxCondition_Blueprint
	{
	public:
		class UWeaponSlotData*                                     SlotToTest;                                              // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
