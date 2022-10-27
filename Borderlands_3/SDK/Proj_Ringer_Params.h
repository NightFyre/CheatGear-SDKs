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
	 * Function Proj_Ringer.Proj_Ringer_C.UserConstructionScript
	 */
	struct AProj_Ringer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.InitializeElement
	 */
	struct AProj_Ringer_C_InitializeElement_Params
	{
	public:
		EOakElementalType                                          ElementType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetFuseTimer
	 */
	struct AProj_Ringer_C_TinkSuicideBomb_SetFuseTimer_Params
	{
	public:
		float                                                      NewFuseTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetCurrentHealth
	 */
	struct AProj_Ringer_C_TinkSuicideBomb_SetCurrentHealth_Params
	{
	public:
		float                                                      NewCurrentHealth;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_StartSuicide
	 */
	struct AProj_Ringer_C_TinkSuicideBomb_StartSuicide_Params
	{	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.HNT_Prime
	 */
	struct AProj_Ringer_C_HNT_Prime_Params
	{	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.HNT_Drop
	 */
	struct AProj_Ringer_C_HNT_Drop_Params
	{	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.HNT_Throw
	 */
	struct AProj_Ringer_C_HNT_Throw_Params
	{	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee
	 */
	struct AProj_Ringer_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.OnExplode
	 */
	struct AProj_Ringer_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.ReceiveBeginPlay
	 */
	struct AProj_Ringer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb
	 */
	struct AProj_Ringer_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.OnHitDamagableObject
	 */
	struct AProj_Ringer_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.FuseTimerExpired
	 */
	struct AProj_Ringer_C_FuseTimerExpired_Params
	{	};

	/**
	 * Function Proj_Ringer.Proj_Ringer_C.ExecuteUbergraph_Proj_Ringer
	 */
	struct AProj_Ringer_C_ExecuteUbergraph_Proj_Ringer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
