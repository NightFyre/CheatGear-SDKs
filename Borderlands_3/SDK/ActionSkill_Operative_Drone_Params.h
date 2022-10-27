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
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldStopAbilityOnPawnSlotComponentAttach
	 */
	struct UActionSkill_Operative_Drone_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.GetGoodMisfortuneRechargeValue
	 */
	struct UActionSkill_Operative_Drone_C_GetGoodMisfortuneRechargeValue_Params
	{
	public:
		int32_t                                                    TotalKills;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TrySpawnPrimaryDrone
	 */
	struct UActionSkill_Operative_Drone_C_TrySpawnPrimaryDrone_Params
	{
	public:
		class AOakDroneProjectile_GRMLN*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldAbortActivation
	 */
	struct UActionSkill_Operative_Drone_C_ShouldAbortActivation_Params
	{
	public:
		unsigned char                                              OutAbortCode;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TryFindNewDroneTarget
	 */
	struct UActionSkill_Operative_Drone_C_TryFindNewDroneTarget_Params
	{	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartActionAbility
	 */
	struct UActionSkill_Operative_Drone_C_OnStartActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartCalledShot
	 */
	struct UActionSkill_Operative_Drone_C_OnStartCalledShot_Params
	{	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopCalledShot
	 */
	struct UActionSkill_Operative_Drone_C_OnStopCalledShot_Params
	{	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.StopButtonPress
	 */
	struct UActionSkill_Operative_Drone_C_StopButtonPress_Params
	{	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopActionAbility
	 */
	struct UActionSkill_Operative_Drone_C_OnStopActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ExecuteUbergraph_ActionSkill_Operative_Drone
	 */
	struct UActionSkill_Operative_Drone_C_ExecuteUbergraph_ActionSkill_Operative_Drone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O9N0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
