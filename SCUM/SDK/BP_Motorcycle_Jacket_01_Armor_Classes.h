#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_Motorcycle_Jacket_01_Armor.BP_Motorcycle_Jacket_01_Armor_C
	 * Size -> 0x0008 (FullSize[0x0A20] - InheritedSize[0x0A18])
	 */
	class ABP_Motorcycle_Jacket_01_Armor_C : public AClothesItem
	{
	public:
		unsigned char                                              UnknownData_6BMK[0x8];                                   // 0x0A18(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
