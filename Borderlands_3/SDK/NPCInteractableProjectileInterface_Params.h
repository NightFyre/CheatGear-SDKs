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
	 * Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDetonate
	 */
	struct UNPCInteractableProjectileInterface_C_ProjectileDetonate_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileArm
	 */
	struct UNPCInteractableProjectileInterface_C_ProjectileArm_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDisarm
	 */
	struct UNPCInteractableProjectileInterface_C_ProjectileDisarm_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
