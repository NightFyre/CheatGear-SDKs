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
	 * Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.UserConstructionScript
	 */
	struct AProj_ATL_OPQ_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.GbxAsyncRequest_Spawned_9C35FAAF46B286381928AF9A06BE659F
	 */
	struct AProj_ATL_OPQ_C_GbxAsyncRequest_Spawned_9C35FAAF46B286381928AF9A06BE659F_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceIndex;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.ReceiveBeginPlay
	 */
	struct AProj_ATL_OPQ_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.OnHitWorld
	 */
	struct AProj_ATL_OPQ_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.OnExplode
	 */
	struct AProj_ATL_OPQ_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.ExecuteUbergraph_Proj_ATL_OPQ
	 */
	struct AProj_ATL_OPQ_C_ExecuteUbergraph_Proj_ATL_OPQ_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XIQ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
