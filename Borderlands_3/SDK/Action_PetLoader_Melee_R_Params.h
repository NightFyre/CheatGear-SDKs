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
	 * Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.OnBegin
	 */
	struct UAction_PetLoader_Melee_R_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.Notify_Melee
	 */
	struct UAction_PetLoader_Melee_R_C_Notify_Melee_Params
	{	};

	/**
	 * Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.ExecuteUbergraph_Action_PetLoader_Melee_R
	 */
	struct UAction_PetLoader_Melee_R_C_ExecuteUbergraph_Action_PetLoader_Melee_R_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MY7G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
