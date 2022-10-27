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
	 * UserDefinedStruct Struct_DamageTypes.Struct_DamageTypes
	 * Size -> 0x0048
	 */
	struct FStruct_DamageTypes
	{
	public:
		struct FGbxAttributeFloat                                  Normal_26_00C5C4A64E4D62A6E142168CD3682B53;              // 0x0000(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Fire_27_B86BE45A4D32AF449A502DB4F7C6A5FC;                // 0x000C(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Shock_28_0DEF868B48EFA9D1D7C730956D617AEC;               // 0x0018(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Corrosive_29_09A06D2A411E425283DFF58D532EDEA8;           // 0x0024(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Radiation_32_EF2E31A34911FE1EB2EEC2AFD9A6450C;           // 0x0030(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Cryo_31_B8A29EEC49C43F47944AA3861600D35B;                // 0x003C(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
