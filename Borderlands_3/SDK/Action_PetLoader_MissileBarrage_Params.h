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
	 * Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireLeftShot
	 */
	struct UAction_PetLoader_MissileBarrage_C_AN_FireLeftShot_Params
	{	};

	/**
	 * Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireRightShot
	 */
	struct UAction_PetLoader_MissileBarrage_C_AN_FireRightShot_Params
	{	};

	/**
	 * Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.OnServerBegin
	 */
	struct UAction_PetLoader_MissileBarrage_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.ExecuteUbergraph_Action_PetLoader_MissileBarrage
	 */
	struct UAction_PetLoader_MissileBarrage_C_ExecuteUbergraph_Action_PetLoader_MissileBarrage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
