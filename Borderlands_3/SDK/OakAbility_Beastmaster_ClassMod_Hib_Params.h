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
	 * Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.EndDomination
	 */
	struct UOakAbility_Beastmaster_ClassMod_Hib_C_EndDomination_Params
	{	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnDeath_DominateTarget_HitRun9
	 */
	struct UOakAbility_Beastmaster_ClassMod_Hib_C_OnDeath_DominateTarget_HitRun9_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnAbilityTimerEnded
	 */
	struct UOakAbility_Beastmaster_ClassMod_Hib_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnAbilityTimerStarted
	 */
	struct UOakAbility_Beastmaster_ClassMod_Hib_C_OnAbilityTimerStarted_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnActivated
	 */
	struct UOakAbility_Beastmaster_ClassMod_Hib_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.CustomEvent_2
	 */
	struct UOakAbility_Beastmaster_ClassMod_Hib_C_CustomEvent_2_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QL3Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Hib
	 */
	struct UOakAbility_Beastmaster_ClassMod_Hib_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Hib_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7GT2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
