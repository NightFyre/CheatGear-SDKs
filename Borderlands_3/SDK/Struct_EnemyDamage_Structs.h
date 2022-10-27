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
	 * UserDefinedStruct Struct_EnemyDamage.Struct_EnemyDamage
	 * Size -> 0x0210
	 */
	struct FStruct_EnemyDamage
	{
	public:
		struct FGbxParam                                           Multiplier_46_80DB035D40990764A852C490FCE2E692;          // 0x0000(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference
		struct FGbxParam                                           Radius_38_28A9CA704BAF39A99F7404A1C43B8282;              // 0x0080(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference
		struct FGbxParam                                           Angle_39_E43219F94F5760FC493909B1338CEA58;               // 0x0100(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference
		struct FGbxParam                                           HalfHeight_44_562DF27A429800DA2E0D9EAB7746A76F;          // 0x0180(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference
		class FString                                              Comment_40_301AAA14458CCFCF171605A6833B274C;             // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
