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
	 * Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer
	 */
	struct UInterface_ActionSkill_Operative_ShoulderCannon_C_StartShoulderCannonMod3Timer_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.GetCannonRef
	 */
	struct UInterface_ActionSkill_Operative_ShoulderCannon_C_GetCannonRef_Params
	{
	public:
		class AActor*                                              Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted
	 */
	struct UInterface_ActionSkill_Operative_ShoulderCannon_C_IsShouldCannonModSlotted_Params
	{
	public:
		EShoulderCannonMods                                        Mod;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
