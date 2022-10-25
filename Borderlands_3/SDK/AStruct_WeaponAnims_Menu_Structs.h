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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct AStruct_WeaponAnims_Menu.AStruct_WeaponAnims_Menu
	 * Size -> 0x00C0
	 */
	struct FAStruct_WeaponAnims_Menu
	{
	public:
		struct FAStruct_WeaponPoses_Menu                           Poses_40_60E943BE4D8DA31D2937289B97787A23;               // 0x0000(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FAStruct_WeaponGrips_Menu                           Grips_41_0140AABB4F672565EDC91EA2473DB4A5;               // 0x0060(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
