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
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.UserConstructionScript
	 */
	struct AProj_Sidewinder_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.InitializeElement
	 */
	struct AProj_Sidewinder_C_InitializeElement_Params
	{
	public:
		EOakElementalType                                          ElementType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetFuseTimer
	 */
	struct AProj_Sidewinder_C_TinkSuicideBomb_SetFuseTimer_Params
	{
	public:
		float                                                      NewFuseTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetCurrentHealth
	 */
	struct AProj_Sidewinder_C_TinkSuicideBomb_SetCurrentHealth_Params
	{
	public:
		float                                                      NewCurrentHealth;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_StartSuicide
	 */
	struct AProj_Sidewinder_C_TinkSuicideBomb_StartSuicide_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Prime
	 */
	struct AProj_Sidewinder_C_HNT_Prime_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Drop
	 */
	struct AProj_Sidewinder_C_HNT_Drop_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Throw
	 */
	struct AProj_Sidewinder_C_HNT_Throw_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.OnExplode
	 */
	struct AProj_Sidewinder_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveBeginPlay
	 */
	struct AProj_Sidewinder_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.FuseTimerExpired
	 */
	struct AProj_Sidewinder_C_FuseTimerExpired_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveActorBeginOverlap
	 */
	struct AProj_Sidewinder_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.FindHomingTarget
	 */
	struct AProj_Sidewinder_C_FindHomingTarget_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.DeploySticky
	 */
	struct AProj_Sidewinder_C_DeploySticky_Params
	{	};

	/**
	 * Function Proj_Sidewinder.Proj_Sidewinder_C.ExecuteUbergraph_Proj_Sidewinder
	 */
	struct AProj_Sidewinder_C_ExecuteUbergraph_Proj_Sidewinder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9AFV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
