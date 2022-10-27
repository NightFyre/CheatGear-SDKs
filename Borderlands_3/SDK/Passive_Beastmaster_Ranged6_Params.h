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
	 * Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.OnCausedDeath_Ranged3
	 */
	struct UPassive_Beastmaster_Ranged6_C_OnCausedDeath_Ranged3_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.ClassModUnique03_KillSkillTrigger
	 */
	struct UPassive_Beastmaster_Ranged6_C_ClassModUnique03_KillSkillTrigger_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.HandleTriggeredAbility
	 */
	struct UPassive_Beastmaster_Ranged6_C_HandleTriggeredAbility_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.OnActivated
	 */
	struct UPassive_Beastmaster_Ranged6_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.ExecuteUbergraph_Passive_Beastmaster_Ranged6
	 */
	struct UPassive_Beastmaster_Ranged6_C_ExecuteUbergraph_Passive_Beastmaster_Ranged6_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
