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
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.DistanceCHeck
	 */
	struct ADroneProj_TED_Earthbound_C_DistanceCHeck_Params
	{	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.NoFriends
	 */
	struct ADroneProj_TED_Earthbound_C_NoFriends_Params
	{	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.StopFire
	 */
	struct ADroneProj_TED_Earthbound_C_StopFire_Params
	{	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.FireWeapon
	 */
	struct ADroneProj_TED_Earthbound_C_FireWeapon_Params
	{	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.UserConstructionScript
	 */
	struct ADroneProj_TED_Earthbound_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.ReceiveBeginPlay
	 */
	struct ADroneProj_TED_Earthbound_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.PutDownNotify
	 */
	struct ADroneProj_TED_Earthbound_C_PutDownNotify_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.OnBeginExplode
	 */
	struct ADroneProj_TED_Earthbound_C_OnBeginExplode_Params
	{	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon
	 */
	struct ADroneProj_TED_Earthbound_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params
	{
	public:
		class AOakDroneProjectile*                                 Drone;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.OnHitEnemy
	 */
	struct ADroneProj_TED_Earthbound_C_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.RebindMoveTarget
	 */
	struct ADroneProj_TED_Earthbound_C_RebindMoveTarget_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.CheckForTargets
	 */
	struct ADroneProj_TED_Earthbound_C_CheckForTargets_Params
	{	};

	/**
	 * Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.ExecuteUbergraph_DroneProj_TED_Earthbound
	 */
	struct ADroneProj_TED_Earthbound_C_ExecuteUbergraph_DroneProj_TED_Earthbound_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
