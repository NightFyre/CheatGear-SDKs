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
	 * Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ApplyBonusDamageToTarget
	 */
	struct UPassive_Gunner_SelflessVengeance_C_ApplyBonusDamageToTarget_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1B3N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageSource*                                       DmgSource;                                               // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Target;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnActivated
	 */
	struct UPassive_Gunner_SelflessVengeance_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ReloadEnded_SelflessVengeance
	 */
	struct UPassive_Gunner_SelflessVengeance_C_ReloadEnded_SelflessVengeance_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnAbilityTimerStarted
	 */
	struct UPassive_Gunner_SelflessVengeance_C_OnAbilityTimerStarted_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnAbilityTimerEnded
	 */
	struct UPassive_Gunner_SelflessVengeance_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ExecuteUbergraph_Passive_Gunner_SelflessVengeance
	 */
	struct UPassive_Gunner_SelflessVengeance_C_ExecuteUbergraph_Passive_Gunner_SelflessVengeance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4Q8M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
