#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass BP_Gear_BASE_Armour.BP_Gear_BASE_Armour_C
	 * Size -> 0x0000 (FullSize[0x0DB0] - InheritedSize[0x0DB0])
	 */
	class ABP_Gear_BASE_Armour_C : public AItemArmor
	{
	public:
		void UpdateCarrierArmourLevel();
		void BlueprintOnPickedUp();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
