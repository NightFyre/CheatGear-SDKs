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
	 * Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.OnActivated
	 */
	struct UPassive_Beastmaster_DLCSkill_13_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.SetPetCDM
	 */
	struct UPassive_Beastmaster_DLCSkill_13_C_SetPetCDM_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.RemovePetCDM
	 */
	struct UPassive_Beastmaster_DLCSkill_13_C_RemovePetCDM_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetSpawned
	 */
	struct UPassive_Beastmaster_DLCSkill_13_C_Beastmaster_DLCSkill13_OnPetSpawned_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetReleased
	 */
	struct UPassive_Beastmaster_DLCSkill_13_C_Beastmaster_DLCSkill13_OnPetReleased_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14
	 */
	struct UPassive_Beastmaster_DLCSkill_13_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z2M5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
