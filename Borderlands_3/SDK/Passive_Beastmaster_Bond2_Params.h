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
	 * Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.TryRefillAttackCommandPool
	 */
	struct UPassive_Beastmaster_Bond2_C_TryRefillAttackCommandPool_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.RandomChanceByGrade
	 */
	struct UPassive_Beastmaster_Bond2_C_RandomChanceByGrade_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IYJR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnKilledEnemy_Bond2
	 */
	struct UPassive_Beastmaster_Bond2_C_OnKilledEnemy_Bond2_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnActivated
	 */
	struct UPassive_Beastmaster_Bond2_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.DoCooldownReduction_Bond2
	 */
	struct UPassive_Beastmaster_Bond2_C_DoCooldownReduction_Bond2_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.ExecuteUbergraph_Passive_Beastmaster_Bond2
	 */
	struct UPassive_Beastmaster_Bond2_C_ExecuteUbergraph_Passive_Beastmaster_Bond2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
