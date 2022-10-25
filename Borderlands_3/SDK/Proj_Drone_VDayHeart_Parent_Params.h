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
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnRep_OwnerDeathType
	 */
	struct AProj_Drone_VDayHeart_Parent_C_OnRep_OwnerDeathType_Params
	{	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHealthDepletedHeart
	 */
	struct AProj_Drone_VDayHeart_Parent_C_OnHealthDepletedHeart_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.SetHeartVelocity
	 */
	struct AProj_Drone_VDayHeart_Parent_C_SetHeartVelocity_Params
	{	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.HandleStatIncrementDialog
	 */
	struct AProj_Drone_VDayHeart_Parent_C_HandleStatIncrementDialog_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.UserConstructionScript
	 */
	struct AProj_Drone_VDayHeart_Parent_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ReceiveBeginPlay
	 */
	struct AProj_Drone_VDayHeart_Parent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test
	 */
	struct AProj_Drone_VDayHeart_Parent_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnDeath_HeartOwner
	 */
	struct AProj_Drone_VDayHeart_Parent_C_OnDeath_HeartOwner_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitWorld
	 */
	struct AProj_Drone_VDayHeart_Parent_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BeginCleanup
	 */
	struct AProj_Drone_VDayHeart_Parent_C_BeginCleanup_Params
	{	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.Destroyed_HeartOwner
	 */
	struct AProj_Drone_VDayHeart_Parent_C_Destroyed_HeartOwner_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OwnerDiedByHostile
	 */
	struct AProj_Drone_VDayHeart_Parent_C_OwnerDiedByHostile_Params
	{	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitDamagableObject
	 */
	struct AProj_Drone_VDayHeart_Parent_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Parent
	 */
	struct AProj_Drone_VDayHeart_Parent_C_ExecuteUbergraph_Proj_Drone_VDayHeart_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
