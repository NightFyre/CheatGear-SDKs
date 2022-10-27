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
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoDamageToEnemy
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_DoDamageToEnemy_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.GetFractureDamage
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_GetFractureDamage_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnRep_PhasetranceCombo
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_OnRep_PhasetranceCombo_Params
	{	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.SetupModData
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_SetupModData_Params
	{	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoAreaDamage
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_DoAreaDamage_Params
	{	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.K2_GetOwnedActionAbility
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_K2_GetOwnedActionAbility_Params
	{
	public:
		class UOakActionAbility*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.UserConstructionScript
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveBeginPlay
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnHitEnemy
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_OnHitEnemy_Params
	{
	public:
		class AActor*                                              EnemyActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveEndPlay
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnPerformRadiateDamageTasks
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_OnPerformRadiateDamageTasks_Params
	{	};

	/**
	 * Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ExecuteUbergraph_RadiateDamageActor_Siren_Fracture
	 */
	struct ARadiateDamageActor_Siren_Fracture_C_ExecuteUbergraph_RadiateDamageActor_Siren_Fracture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
