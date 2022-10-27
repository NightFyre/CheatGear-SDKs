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
	 * UserDefinedStruct Struct_Weapon_BloodyHarvest.Struct_Weapon_BloodyHarvest
	 * Size -> 0x004C
	 */
	struct FStruct_Weapon_BloodyHarvest
	{
	public:
		float                                                      DamageScale_2_6249E51D41B75899C0DEDD8B5EFE89ED;          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinGameStage_5_E58A410440250F1307D8AEA27894B1D9;         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxGameStage_7_A01853C44CC42F80C7935D84CB00521B;         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FO7B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Custom_A_Description_10_D38C112C4FFC8714450955993D007573; // 0x0010(0x0018) Edit, BlueprintVisible
		float                                                      Custom_A_13_96126EEB4B7199E448815B86D27D05D8;            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3FUZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Custom_B_Description_16_8B64CAC74E2CFA864935C98EED24545D; // 0x0030(0x0018) Edit, BlueprintVisible
		float                                                      Custom_B_19_181C776D44CEF963839836922CD17B77;            // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
