#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BPI_InventorySlotItemEntry.BPI_InventorySlotItemEntry_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_InventorySlotItemEntry_C : public UInterface
	{
	public:
		void EquipInventorySlotItem(bool bMainhand, bool bImmediate);
		void SetInventorySlotItem(class AGBItem* InItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
