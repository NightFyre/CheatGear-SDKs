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
	 * Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.RemoveShield
	 */
	struct UPassive_Beastmaster_DLCSkill_8_C_RemoveShield_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ConfigureShield
	 */
	struct UPassive_Beastmaster_DLCSkill_8_C_ConfigureShield_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.OnActivated
	 */
	struct UPassive_Beastmaster_DLCSkill_8_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.UpdateShield
	 */
	struct UPassive_Beastmaster_DLCSkill_8_C_UpdateShield_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9
	 */
	struct UPassive_Beastmaster_DLCSkill_8_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5ZQS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
