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
	 * Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.OnActivated
	 */
	struct UPassive_Gunner_ExperimentalMunitions_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.ExperimentalMunitions_IronBearReady
	 */
	struct UPassive_Gunner_ExperimentalMunitions_C_ExperimentalMunitions_IronBearReady_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.ExecuteUbergraph_Passive_Gunner_ExperimentalMunitions
	 */
	struct UPassive_Gunner_ExperimentalMunitions_C_ExecuteUbergraph_Passive_Gunner_ExperimentalMunitions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H1AB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
