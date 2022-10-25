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
	 * Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.UserConstructionScript
	 */
	struct ATEDProjectile_Earthbound_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33
	 */
	struct ATEDProjectile_Earthbound_C_GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceIndex;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ReceiveBeginPlay
	 */
	struct ATEDProjectile_Earthbound_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.OnExplode
	 */
	struct ATEDProjectile_Earthbound_C_OnExplode_Params
	{	};

	/**
	 * Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ExecuteUbergraph_TEDProjectile_Earthbound
	 */
	struct ATEDProjectile_Earthbound_C_ExecuteUbergraph_TEDProjectile_Earthbound_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9O94[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
