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
	 * UserDefinedStruct Struct_MasterMaterial_Colorize.Struct_MasterMaterial_Colorize
	 * Size -> 0x006C
	 */
	struct FStruct_MasterMaterial_Colorize
	{
	public:
		float                                                      Colorize_HueShift_RandomAmount_96_3C6B06D746B9EDBF6CCE07AD005F7AF2; // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Colorize_HueShift_Amount_97_26CF590846898356508B92BE96BA789B; // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Colorize_Random_On_92_290B254F480B007D30DF5DAB6CF512FC;  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Colorize_UseLevelColorScheme_93_42FB9CB54D73A8278984C5B903551CEB; // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MDKL[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Colorize_Primary_Color1_103_796BBE454A04A7AAFDCCC2BF69272359; // 0x000C(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Colorize_Primary_Color2_104_F51638BA49180B6201691B85CF570D03; // 0x001C(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Colorize_Secondary_Color1_105_7E972FF44C1254963B8A7F9F0E4E0B31; // 0x002C(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Colorize_Secondary_Color2_106_E02C30D248D2AADF0113B29E893103AF; // 0x003C(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Colorize_Tertiary_Color1_107_1E4904D741D5A2ED7A90DDBC4E531BE3; // 0x004C(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Colorize_Tertiary_Color2_108_4234211348BDBB59F88842B3EB65D1B9; // 0x005C(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
