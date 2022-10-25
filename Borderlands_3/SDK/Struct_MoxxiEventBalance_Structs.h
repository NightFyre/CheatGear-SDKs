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
	 * UserDefinedStruct Struct_MoxxiEventBalance.Struct_MoxxiEventBalance
	 * Size -> 0x0040
	 */
	struct FStruct_MoxxiEventBalance
	{
	public:
		Enum_MoxxiIngredients                                      IngredientName_39_F10254C04857F708680004B42EE02A05;      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OERK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrimaryScaleValue_14_9F3BDE564A275AD1EC6FBB8343860C58;   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondaryScaleValue_16_B9CCFE2C4746EAAD0C4C53B7FE99E744; // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Tier1Scaling_43_731FAE0045B93ECE9BE45FB9BFB8485A;        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Tier2Scaling_48_39877FEF49B4360E8DEA5E93F073EE71;        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Tier3Scaling_49_D9AC0FEC4DCF7BCF0137A1AEFC17F444;        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Tier4Scaling_50_0A80FFFF4A5D274949D3EDA307A3AAA2;        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Tier5Scaling_51_65B87A9241D497226E9EFCB959FC19DB;        // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DrinkColor_38_EE95252E44C1A9D060F4C2A587AF511A;          // 0x0020(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffectData*                                   PrimaryStatusEffectData_37_6208416143C77C1C4309D7A94AC9200F; // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffectData*                                   SecondaryStatusEffectData_34_D5B438FA43676338C6BACBBCC018FB14; // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
