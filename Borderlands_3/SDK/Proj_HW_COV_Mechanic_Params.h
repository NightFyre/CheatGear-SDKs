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
	 * Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileDisarm
	 */
	struct AProj_HW_COV_Mechanic_C_ProjectileDisarm_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileArm
	 */
	struct AProj_HW_COV_Mechanic_C_ProjectileArm_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileDetonate
	 */
	struct AProj_HW_COV_Mechanic_C_ProjectileDetonate_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.UserConstructionScript
	 */
	struct AProj_HW_COV_Mechanic_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ReceiveBeginPlay
	 */
	struct AProj_HW_COV_Mechanic_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.OnExplode
	 */
	struct AProj_HW_COV_Mechanic_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.OnHitWorld
	 */
	struct AProj_HW_COV_Mechanic_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ExecuteUbergraph_Proj_HW_COV_Mechanic
	 */
	struct AProj_HW_COV_Mechanic_C_ExecuteUbergraph_Proj_HW_COV_Mechanic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
