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
	 * UserDefinedStruct Struct_RandomLootTable.Struct_RandomLootTable
	 * Size -> 0x0030
	 */
	struct FStruct_RandomLootTable
	{
	public:
		int32_t                                                    Default_14_4189D9DA42C2B912FC25209E8C353A26;             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_27PC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStruct_RandomLootOdds>                      DropCount_15_A4643C45437ECBC97BC6629ECC66F6B6;           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FText                                                Comment_13_11E6C8E8493E0A73AF9B35891E7CE111;             // 0x0018(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
