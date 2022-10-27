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
	 * UserDefinedStruct AStruct_Generic_WeaponAnims.AStruct_Generic_WeaponAnims
	 * Size -> 0x0120
	 */
	struct FAStruct_Generic_WeaponAnims
	{
	public:
		struct FAStruct_Generic_WeaponPoses                        Poses_45_60E943BE4D8DA31D2937289B97787A23;               // 0x0000(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FAStruct_Generic_WeaponGrips                        LeftGrips_44_0140AABB4F672565EDC91EA2473DB4A5;           // 0x0060(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FAStruct_Generic_WeaponGrips                        RightGrips_43_957C3C7F4594DE048CE6E4833AB3038B;          // 0x00C0(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
