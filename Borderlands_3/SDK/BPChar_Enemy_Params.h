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
	 * Function BPChar_Enemy.BPChar_Enemy_C.UserConstructionScript
	 */
	struct ABPChar_Enemy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStart
	 */
	struct ABPChar_Enemy_C_Enemy_OnThoughtLockStart_Params
	{	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStop
	 */
	struct ABPChar_Enemy_C_Enemy_OnThoughtLockStop_Params
	{	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.Player_SpawnTransfusionProjectile
	 */
	struct ABPChar_Enemy_C_Player_SpawnTransfusionProjectile_Params
	{
	public:
		class UClass*                                              DataBlueprint_Override;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              DamageType_Override;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SourceActor;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              TargetActor;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_27AU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Causer_Override;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.ReceiveBeginPlay
	 */
	struct ABPChar_Enemy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStop
	 */
	struct ABPChar_Enemy_C_Enemy_OnPhaseLockStop_Params
	{	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy
	 */
	struct ABPChar_Enemy_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy_Params
	{
	public:
		EOakElementalType                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStart
	 */
	struct ABPChar_Enemy_C_Enemy_OnPhaseLockStart_Params
	{	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.Radation_DeathExplosion
	 */
	struct ABPChar_Enemy_C_Radation_DeathExplosion_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.Player_HealthDepleted
	 */
	struct ABPChar_Enemy_C_Player_HealthDepleted_Params
	{
	public:
		class AOakCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Enemy.BPChar_Enemy_C.ExecuteUbergraph_BPChar_Enemy
	 */
	struct ABPChar_Enemy_C_ExecuteUbergraph_BPChar_Enemy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
