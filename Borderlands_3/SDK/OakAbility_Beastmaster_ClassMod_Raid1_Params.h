#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.FireRakk
	 */
	struct UOakAbility_Beastmaster_ClassMod_Raid1_C_FireRakk_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnActivated
	 */
	struct UOakAbility_Beastmaster_ClassMod_Raid1_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.BeastmasterClassModRaid1_OnCausedAnyDamage
	 */
	struct UOakAbility_Beastmaster_ClassMod_Raid1_C_BeastmasterClassModRaid1_OnCausedAnyDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B19K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.BreakLoop
	 */
	struct UOakAbility_Beastmaster_ClassMod_Raid1_C_BreakLoop_Params
	{	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ResetGate
	 */
	struct UOakAbility_Beastmaster_ClassMod_Raid1_C_ResetGate_Params
	{	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnResumed
	 */
	struct UOakAbility_Beastmaster_ClassMod_Raid1_C_OnResumed_Params
	{	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ClassMod_Raid1_OnActionSkillActivated
	 */
	struct UOakAbility_Beastmaster_ClassMod_Raid1_C_ClassMod_Raid1_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnAbilityTimerEnded
	 */
	struct UOakAbility_Beastmaster_ClassMod_Raid1_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1
	 */
	struct UOakAbility_Beastmaster_ClassMod_Raid1_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CLEF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
