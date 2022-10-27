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
	 * BlueprintGeneratedClass BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C
	 * Size -> 0x0008 (FullSize[0x04B0] - InheritedSize[0x04A8])
	 */
	class ABPAmmoItem_AllAmmo_C : public AOakInventoryAmmoItem
	{
	public:
		class UGbxCondition*                                       AllAmmoFullCondition;                                    // 0x04A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void FillAmmo(class AOakCharacter* PickupInstigator, class UGbxAttributeData* CurrentValue, class UGbxAttributeData* MaxValue);
		void PickedUp(class AOakCharacter* PickupInstigator);
		bool CanBePickedUp(class AOakCharacter* PickupInstigator, int32_t Quantity, bool UsedByInstigator, class AInventoryItemPickup* WorldPickupActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
