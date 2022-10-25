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
	 * UserDefinedStruct Struct_MasterMaterial_BaseParams_Layer4.Struct_MasterMaterial_BaseParams_Layer4
	 * Size -> 0x0044
	 */
	struct FStruct_MasterMaterial_BaseParams_Layer4
	{
	public:
		struct FLinearColor                                        L4_BaseColor_Multiply_112_3C6B06D746B9EDBF6CCE07AD005F7AF2; // 0x0000(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        L4_BaseColor_Metal_Multiply_113_26CF590846898356508B92BE96BA789B; // 0x0010(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       L4_BaseColor_Multiply_UseLevelColor_114_290B254F480B007D30DF5DAB6CF512FC; // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       L4_BaseColor_Metal_Multiply_UseLevelColor_115_42FB9CB54D73A8278984C5B903551CEB; // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EColorScheme                                               L4_BaseColor_Multiply_LevelColor_116_796BBE454A04A7AAFDCCC2BF69272359; // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VIRH[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      L4_BaseColor_Desaturate_117_F51638BA49180B6201691B85CF570D03; // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      L4_BaseColor_HueShift_118_7E972FF44C1254963B8A7F9F0E4E0B31; // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      L4_RoughnessMin_119_E02C30D248D2AADF0113B29E893103AF;    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      L4_RoughnessMax_120_1E4904D741D5A2ED7A90DDBC4E531BE3;    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        L4_EmissiveColor_Multiply_121_4234211348BDBB59F88842B3EB65D1B9; // 0x0034(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
