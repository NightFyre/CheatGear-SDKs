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
	 * UserDefinedStruct Struct_CharacterMass.Struct_CharacterMass
	 * Size -> 0x0010
	 */
	struct FStruct_CharacterMass
	{
	public:
		float                                                      Mass_16_9B13452A4BC14B04099639B3F77A8F79;                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Force_Flinch_20_E9E9C96343C06379371650886C9C0A62;        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Force_Stagger_22_961D35F843AF4BCE39F05B80E3CE276F;       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Force_Launch_24_854A169C40531FEA3F7C8FA3A7F0D0AB;        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
