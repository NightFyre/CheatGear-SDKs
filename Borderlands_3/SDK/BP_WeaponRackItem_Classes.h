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
	 * BlueprintGeneratedClass BP_WeaponRackItem.BP_WeaponRackItem_C
	 * Size -> 0x0010 (FullSize[0x04B0] - InheritedSize[0x04A0])
	 */
	class ABP_WeaponRackItem_C : public AOakInventoryItem
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CanBePickedUp(class AOakCharacter* PickupInstigator, int32_t Quantity, bool UsedByInstigator, class AInventoryItemPickup* WorldPickupActor);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
