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
	 * UserDefinedStruct Struct_Mayhem2CoreModifierSets.Struct_Mayhem2CoreModifierSets
	 * Size -> 0x009C
	 */
	struct FStruct_Mayhem2CoreModifierSets
	{
	public:
		class UStatusEffectData*                                   MayhemStatusEffect_53_7567CFEB4E1077623BE84EBC11D10EB8;  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffectData*                                   PlayerStatusEffect_52_8037BC414105A487E0528192801A716F;  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffectData*                                   CompanionStatusEffect_88_C8BE7FA049759DABE2C43CA62CA09C50; // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffectData*                                   PetStatusEffect_76_31783C474A2F89CE6211BAB1634A735D;     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffectData*                                   EnemyStatusEffect_108_E55F940F4896B8C94715649C6F3CFE56;  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UConditionalDamageModifier*                          VehicleDamageDealtCDM_100_ABFD7E90444FA2584EF61AA4B4335584; // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UConditionalDamageValueModifier*                     VehicleDamageTakenCDM_99_1123B3AB4D4149DF4071D185AEEDF502; // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthSimpleScalar_42_0499AACF43FDF39B7084E2BB63E4BF68;  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmorSimpleScalar_44_BCAAA445479831C25B0D55AF294A15D6;   // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShieldSimpleScalar_43_417C36C54DA2550A4CABC7B26A5E24A8;  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExpGainScalar_39_2159F009466933AA733AE688E55B1B93;       // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CashScalar_22_B7B11DC94BBB45C94A96279146EC193E;          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DropWeightCommonScalar_21_59A2FB124E32B955768A7B9D93C25A99; // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DropWeightUncommonScalar_25_809615334E7F0DB3B8712DAC221015C3; // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DropWeightRareScalar_27_A09CF5314C51796896A83EA0806C7520; // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DropWeightVeryRareScalar_29_F2CA570046CD50A7C514EDB0AE1BE591; // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DropWeightLegendaryScalar_31_D9DA03C54065EA981BE218B11942C24E; // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DropNumberChanceSimpleScalar_40_115637764B3918F01E6FAFADDC005388; // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DropEridiumChanceSimpleScalar_41_E89AD7E9473FDF3CBED395BA6641FA68; // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LootQuality_56_03E220E0495C6B37CD6C7195F5EA289B;         // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageScalarActionSkill_60_39AF483140740A38FC71BA897155CBFF; // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageScalarMelee_67_9948929F4FF34364CED2EAB51A881946;   // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageScalarSlide_68_B48D0E3A4DF57196839BB58D5AE3E638;   // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageScalarSlam_69_15DB6EDC4CCA52620BF25398CFFD9B26;    // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageScalarPet_72_0DD7977D44C4A71D0A6B56B7884E023C;     // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageScalarEnviornmental_111_E2A582AA47FC000789FC68BBD31D2CFC; // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageScalarPassive_115_6A30229E4CC04F751ED01CB64A71880F; // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageDealtScalarVehicles_103_5739171948322B35CDA36487F78AF0CE; // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageTakenScalarVehicles_104_B75AB4EC482624FDEAAF31B0FA369A77; // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageScalarGear_119_9FC89117424C6619F2CA958FA2842FC2;   // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PetHealth_84_E5B903B4452F4310CCD13C931474E12B;           // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CompanionHealth_89_294A6BE7439072AE9F934CAA127D8D83;     // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
