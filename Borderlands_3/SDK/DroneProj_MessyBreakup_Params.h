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
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.KillVO
	 */
	struct ADroneProj_MessyBreakup_C_KillVO_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.IdleVO
	 */
	struct ADroneProj_MessyBreakup_C_IdleVO_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.DistanceCHeck
	 */
	struct ADroneProj_MessyBreakup_C_DistanceCHeck_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.NoFriends
	 */
	struct ADroneProj_MessyBreakup_C_NoFriends_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.StopFire
	 */
	struct ADroneProj_MessyBreakup_C_StopFire_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.StartFire
	 */
	struct ADroneProj_MessyBreakup_C_StartFire_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.FireWeapon
	 */
	struct ADroneProj_MessyBreakup_C_FireWeapon_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.UserConstructionScript
	 */
	struct ADroneProj_MessyBreakup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.ReceiveBeginPlay
	 */
	struct ADroneProj_MessyBreakup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon
	 */
	struct ADroneProj_MessyBreakup_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params
	{
	public:
		class AOakDroneProjectile*                                 Drone;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.OnBeginExplode
	 */
	struct ADroneProj_MessyBreakup_C_OnBeginExplode_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.ShieldUnequippedEvent
	 */
	struct ADroneProj_MessyBreakup_C_ShieldUnequippedEvent_Params
	{
	public:
		class AOakCharacter*                                       EquipInstigator;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.OnExplode
	 */
	struct ADroneProj_MessyBreakup_C_OnExplode_Params
	{	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.KilledEnemy
	 */
	struct ADroneProj_MessyBreakup_C_KilledEnemy_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.ExecuteUbergraph_DroneProj_MessyBreakup
	 */
	struct ADroneProj_MessyBreakup_C_ExecuteUbergraph_DroneProj_MessyBreakup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VE6J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
