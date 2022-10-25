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
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.IsHoldingBarrier
	 */
	struct UInterface_Operative_DeployBarrier_C_IsHoldingBarrier_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.RefillBarrierHealth
	 */
	struct UInterface_Operative_DeployBarrier_C_RefillBarrierHealth_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GiveBarrierHealth
	 */
	struct UInterface_Operative_DeployBarrier_C_GiveBarrierHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      New_Health;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierReference
	 */
	struct UInterface_Operative_DeployBarrier_C_GetBarrierReference_Params
	{
	public:
		class AActor*                                              Barrier;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry
	 */
	struct UInterface_Operative_DeployBarrier_C_ActivateHighlyUnstableFromCarry_Params
	{	};

	/**
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstable
	 */
	struct UInterface_Operative_DeployBarrier_C_ActivateHighlyUnstable_Params
	{	};

	/**
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierHealthPercent
	 */
	struct UInterface_Operative_DeployBarrier_C_GetBarrierHealthPercent_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.StartHoldingBarrier
	 */
	struct UInterface_Operative_DeployBarrier_C_StartHoldingBarrier_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierInHand
	 */
	struct UInterface_Operative_DeployBarrier_C_DeployNewBarrierInHand_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer
	 */
	struct UInterface_Operative_DeployBarrier_C_DeployNewBarrierAroundPlayer_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
