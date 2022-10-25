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
	 * Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.DamageCalc
	 */
	struct UPassive_Beastmaster_DLCSkill_2_C_DamageCalc_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.OnActivated
	 */
	struct UPassive_Beastmaster_DLCSkill_2_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.DLCSkill2_TriggerSkill
	 */
	struct UPassive_Beastmaster_DLCSkill_2_C_DLCSkill2_TriggerSkill_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.OnPetSpawned
	 */
	struct UPassive_Beastmaster_DLCSkill_2_C_OnPetSpawned_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3
	 */
	struct UPassive_Beastmaster_DLCSkill_2_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
