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
	 * Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.OnActivated
	 */
	struct UPassive_Beastmaster_HitAndRun11_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.OnActionSkillActivated_HitAndRun11
	 */
	struct UPassive_Beastmaster_HitAndRun11_C_OnActionSkillActivated_HitAndRun11_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun11
	 */
	struct UPassive_Beastmaster_HitAndRun11_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun11_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
