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
	 * UserDefinedStruct Struct_Weapon_Mod_Data.Struct_Weapon_Mod_Data
	 * Size -> 0x00E0
	 */
	struct FStruct_Weapon_Mod_Data
	{
	public:
		float                                                      Damage_5_4902A95D4D7BD3E9CD0BBCB5EB30E2E9;               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CriticalDamage_34_362BE8384F3A8CC0DC65E383F63EEAE7;      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FireRate_4_463DCC8C4BA89C42904B70BE96263269;             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BurstFireDelay_92_2F8BD8164915DD4D73DED58DB024A4AD;      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ResetFireSequenceTime_98_49E412F24DDFB481F5086FB4AF692481; // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccuracyMax_7_164E3F2840F742D4A4E6A393F1E36FF5;          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccuracyMinSpread_9_6537C4654F0B732B821CA0B9F5CE75B2;    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Shotgun_AccuracyMinSpread_117_AB9A347B4CAA14AA041949BD1D9AE179; // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccuracyImpulse_11_FBFF024A4CFCB5413BE8CB9D2E541BA5;     // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_Height_86_5298BC754429D012E6A76791A8DD5B0D;       // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_Width_87_AF8DD728447C8F73CB1039BA801FB4AA;        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sway_BaseSpeed_196_3D31A71844BCC3EA39D409A391A66CE1;     // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sway_AccuracyScale_73_0D8F522F41DBDDC36CCE8DB0287A8655;  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sway_ZoomAccuracyScale_85_6F6AFE9B42EB17F311774DAC7800EEB4; // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sway_DiscHeight_84_50ADEC024415D52331F6459449FE0C28;     // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sway_DiscWidth_83_720A201C425AA5962AF8D59DB94454A4;      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sway_Speed_193_77966B1F4B3AA7B3314C1B81C05CD950;         // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MagazineSize_32_44DD160947946842DAB6C08C858A37A5;        // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReloadTime_90_BF2CF93B47490EC357D36A9580858EEC;          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TapedReloadTime_89_13774E434A4585BF4BAC1E864A696217;     // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomTime_54_9FFCF54A4B166ADFA1E8C39E137A7AA2;            // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WeaponSwapSpeed_42_17DD7B174538212DDCC5C6BA02859ABA;     // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ModeSwitchTimeScale_53_88F0389B4CCAD011F3E7858308B09625; // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeatPerShot_38_0FDD811942EC98DD59E0ED8AC2F23D2B;         // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeatCooldownRate_51_4AA0012244D5FD176DADA2BFF1119715;    // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Charge_Duration_65_1B3C5012410F27339358278A6C963871;     // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FireRate_AccelDuration_63_89D362EC4DBD31F92FA113BBFE58EF8F; // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FireRate_DecelDuration_64_5C39BCEB48FDD73FD3A1959417326321; // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Elemental_StatusEffectChance_72_D53B4A6D4F07030D50D0AE8284C946C0; // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Elemental_StatusEffectDamage_71_8AB6136942DD1277B6B6758FC0E34CF6; // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AOE_DamageRadius_13_AE647F7144D03ECAFD3484AE886564CE;    // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TED_DamageRadius_184_26163AEE4846F06A28AEE9A9AF335072;   // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectilesPerShot_66_6B453AC14B8631E6E393369A25824B2E;  // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileShotCost_69_3A967AB64D4B3412DA648589253DC7F0;  // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectilesPerShot_ScaleShotgunOnly_18_2FE057F84E52E798B9355DB5D1B6DD00; // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileSpeed_23_220F51CE477F86B15817A6962ED78B8E;     // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Hyperion_ShieldMax_95_421332C64190AEA7B38613B7D57B52CD;  // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeleeStyle_101_B5E327214C437B2F513FD0AF2FBC95E0;         // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeleeDamage_Low_105_BB80771A46B60B50BCDBBE98F5D686C6;    // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeleeDamage_Med_106_61BD38DF4EA1016578EE408A937B37B9;    // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeleeDamage_High_108_7E0FE30D49C5EFEB83E47F8CF58120FB;   // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Zoom_Increase_Normal_113_13E65405449B756055D4059DDF11CF5C; // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Zoom_Increase_Heavy_114_973386E849FD8472874439A250D0BA2A; // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationRecoilScale_Light_123_45A0D1B14A40F2F8FE955FBB1A6E9C6A; // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationRecoilScale_Heavy_125_29FE9F85464EC0F662313A8F1713C2E1; // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TrackerLifetimeScaleAtlasOnly_130_04C7AFC84EC3677BBFE3CEA3C38B41E2; // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_Damage_174_CF96B5564CA5D97FB5EE81B0B86F8FB8;        // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_CritDamage_175_06DFF098480BDEFE777E208B4C7A49A5;    // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_FireRate_176_F9CA4277407380A1BC3ED88CFEAC6A8D;      // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_Handling_154_B1A2F76343ADB4C1C9F211A0671B113D;      // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_Accuracy_149_87F46A044727429B96ABC5B928CAB02A;      // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_ReloadSpeed_177_21A7797649039734D870CBAF484C6757;   // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_ChargeTime_178_5BBAA594429F805354C228914509EC0A;    // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_ProjectileSpeed_179_8A96D6E544798BD6034721A00D8B71CA; // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_AreaDamage_180_D45F42374EC1458B528458908768815B;    // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Name_HeatImpulse_181_67D632B84F321549D1774DB13E63D40C;   // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
