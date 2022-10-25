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
	 * BlueprintGeneratedClass BP_OakInventoryItemPickup.BP_OakInventoryItemPickup_C
	 * Size -> 0x0008 (FullSize[0x0730] - InheritedSize[0x0728])
	 */
	class ABP_OakInventoryItemPickup_C : public AOakInventoryItemPickup
	{
	public:
		class UBP_PickupUsableComponent_C*                         BP_PickupUsableComponent;                                // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
