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
	 * Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.GenerateEndLocation
	 */
	struct AProj_Weapon_TOR_HW_Swarm_C_GenerateEndLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.UserConstructionScript
	 */
	struct AProj_Weapon_TOR_HW_Swarm_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.ReceiveBeginPlay
	 */
	struct AProj_Weapon_TOR_HW_Swarm_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.FindHomingTarget
	 */
	struct AProj_Weapon_TOR_HW_Swarm_C_FindHomingTarget_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.TargetFound
	 */
	struct AProj_Weapon_TOR_HW_Swarm_C_TargetFound_Params
	{	};

	/**
	 * Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.InitSwarm
	 */
	struct AProj_Weapon_TOR_HW_Swarm_C_InitSwarm_Params
	{	};

	/**
	 * Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_Swarm
	 */
	struct AProj_Weapon_TOR_HW_Swarm_C_ExecuteUbergraph_Proj_Weapon_TOR_HW_Swarm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
