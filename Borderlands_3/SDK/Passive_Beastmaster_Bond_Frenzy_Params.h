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
	 * Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.GetManualHUDIconValues
	 */
	struct UPassive_Beastmaster_Bond_Frenzy_C_GetManualHUDIconValues_Params
	{
	public:
		int32_t                                                    outStackCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outDuration;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outTimeRemaining;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4OT9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnActivated
	 */
	struct UPassive_Beastmaster_Bond_Frenzy_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.PetCausedAnyDamage_BondFrenzy
	 */
	struct UPassive_Beastmaster_Bond_Frenzy_C_PetCausedAnyDamage_BondFrenzy_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnAbilityTimerEnded
	 */
	struct UPassive_Beastmaster_Bond_Frenzy_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy
	 */
	struct UPassive_Beastmaster_Bond_Frenzy_C_ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J5CL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
