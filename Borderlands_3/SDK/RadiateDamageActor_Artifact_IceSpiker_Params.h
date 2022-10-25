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
	 * Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoDamageToEnemy
	 */
	struct ARadiateDamageActor_Artifact_IceSpiker_C_DoDamageToEnemy_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoAreaDamage
	 */
	struct ARadiateDamageActor_Artifact_IceSpiker_C_DoAreaDamage_Params
	{	};

	/**
	 * Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.UserConstructionScript
	 */
	struct ARadiateDamageActor_Artifact_IceSpiker_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveBeginPlay
	 */
	struct ARadiateDamageActor_Artifact_IceSpiker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnHitEnemy
	 */
	struct ARadiateDamageActor_Artifact_IceSpiker_C_OnHitEnemy_Params
	{
	public:
		class AActor*                                              EnemyActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveEndPlay
	 */
	struct ARadiateDamageActor_Artifact_IceSpiker_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnPerformRadiateDamageTasks
	 */
	struct ARadiateDamageActor_Artifact_IceSpiker_C_OnPerformRadiateDamageTasks_Params
	{	};

	/**
	 * Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker
	 */
	struct ARadiateDamageActor_Artifact_IceSpiker_C_ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1BRL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
