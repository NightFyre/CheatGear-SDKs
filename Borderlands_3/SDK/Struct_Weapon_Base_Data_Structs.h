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
	 * UserDefinedStruct Struct_Weapon_Base_Data.Struct_Weapon_Base_Data
	 * Size -> 0x0060
	 */
	struct FStruct_Weapon_Base_Data
	{
	public:
		float                                                      DamageScale_36_150C89A04BB4FCF0061CAC86E39E1A39;         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CritDamageScale_61_5876F7BA4086CE2615C39F84E7409B3C;     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FirerateScale_29_F95FBBA045F4F1899B3F7AB7A2CF0F22;       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Spread_23_03553D4547FA30186E792BA391B2FFDE;              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxAccuracy_13_DBDCED3C4D3A2AAE4157EEA39EAB81DB;         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinAccuracy_22_177AD05C46493B9713642FA9EEDB6DDC;         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccuracyImpulse_12_A2A97C764F97EC46B630BB9F944FE44E;     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OnIdleRegenerationScale_37_E15777FD4DDECFBFBB456B95714655CD; // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecoilHeightScale_34_5BC534A04CD28A2CC42C52A4990EB588;   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecoilWidthScale_35_BDD410724B43608670E3D1BB331D6488;    // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomTimeScale_51_AFCCE491453F50E193F0B6935706EEF2;       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReloadTimeScale_62_E2E0A3154B4CD841A6ABE3A5A7DCFDB7;     // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EquipTime_47_391D5B8C4D0759E7FA619A8947BE0458;           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PutDownTime_48_AA52E4FF4CF2E2BF8CEAC2B9E54CB3DA;         // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FForceSelection                                     WeaponHitForce_64_25A700B84BD1212FECA774B48D24FF76;      // 0x0038(0x0020) Edit, BlueprintVisible, NoDestructor
		float                                                      ElementalChance_68_946EB9244DC0A165542AD9A147B43613;     // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ElementalDamageMultiplier_75_6839E3E84372485107A3168E13CB6B3E; // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
