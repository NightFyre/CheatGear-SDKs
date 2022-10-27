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
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.DistanceCHeck
	 */
	struct ADroneProj_ATL_OPQ_C_DistanceCHeck_Params
	{	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.NoFriends
	 */
	struct ADroneProj_ATL_OPQ_C_NoFriends_Params
	{	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.StopFire
	 */
	struct ADroneProj_ATL_OPQ_C_StopFire_Params
	{	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.StartFire
	 */
	struct ADroneProj_ATL_OPQ_C_StartFire_Params
	{	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.FireWeapon
	 */
	struct ADroneProj_ATL_OPQ_C_FireWeapon_Params
	{	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.UserConstructionScript
	 */
	struct ADroneProj_ATL_OPQ_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.ReceiveBeginPlay
	 */
	struct ADroneProj_ATL_OPQ_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon
	 */
	struct ADroneProj_ATL_OPQ_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params
	{
	public:
		class AOakDroneProjectile*                                 Drone;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.PutDownNotify
	 */
	struct ADroneProj_ATL_OPQ_C_PutDownNotify_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.OnBeginExplode
	 */
	struct ADroneProj_ATL_OPQ_C_OnBeginExplode_Params
	{	};

	/**
	 * Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.ExecuteUbergraph_DroneProj_ATL_OPQ
	 */
	struct ADroneProj_ATL_OPQ_C_ExecuteUbergraph_DroneProj_ATL_OPQ_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DGSY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
