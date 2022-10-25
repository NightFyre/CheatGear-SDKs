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
	 * UserDefinedStruct Struct_Weapon_Unique.Struct_Weapon_Unique
	 * Size -> 0x004C
	 */
	struct FStruct_Weapon_Unique
	{
	public:
		float                                                      DamageScale_2_4F6EF14648BA8F2AE9217DAFEA60EE53;          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinGameStage_5_E12DB0C74420238367FBC1A5221AFB84;         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxGameStage_14_CD5B031C48F8AFF772F3878A744812EA;        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UBMG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Custom_A_Description_19_8D03F19B49848DF026B78A8DCDEC0931; // 0x0010(0x0018) Edit, BlueprintVisible
		float                                                      Custom_A_10_6BE78EF448AB3F6F228BC7B266814C86;            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7BFC[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Custom_B_Description_21_B8FD1FD4497D0BDF7839C2B8C9E9F35A; // 0x0030(0x0018) Edit, BlueprintVisible
		float                                                      Custom_B_11_6D4E8C1140CC269ED614BC958ECB0E22;            // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
