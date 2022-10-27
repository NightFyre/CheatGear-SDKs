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
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.HandleDamageInstanceLogic
	 */
	struct UAbility_GuardianRank_Aftershock_C_HandleDamageInstanceLogic_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.HandleGroundSlamLock
	 */
	struct UAbility_GuardianRank_Aftershock_C_HandleGroundSlamLock_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.DealStoredDamage
	 */
	struct UAbility_GuardianRank_Aftershock_C_DealStoredDamage_Params
	{
	public:
		class AActor*                                              ActorToDamage;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DamageDealt;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WEM9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.StoreDamage
	 */
	struct UAbility_GuardianRank_Aftershock_C_StoreDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.GetTotalInstanceDamageStored
	 */
	struct UAbility_GuardianRank_Aftershock_C_GetTotalInstanceDamageStored_Params
	{
	public:
		float                                                      Total;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.InitAllDamageInstances
	 */
	struct UAbility_GuardianRank_Aftershock_C_InitAllDamageInstances_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.DEBUGPrintAllDamageInstances
	 */
	struct UAbility_GuardianRank_Aftershock_C_DEBUGPrintAllDamageInstances_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.ClearAllDamageInstances
	 */
	struct UAbility_GuardianRank_Aftershock_C_ClearAllDamageInstances_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.OnDeactivated
	 */
	struct UAbility_GuardianRank_Aftershock_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.OnActivated
	 */
	struct UAbility_GuardianRank_Aftershock_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.On Damage Caused
	 */
	struct UAbility_GuardianRank_Aftershock_C_On_Damage_Caused_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0JAX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.ExecuteUbergraph_Ability_GuardianRank_Aftershock
	 */
	struct UAbility_GuardianRank_Aftershock_C_ExecuteUbergraph_Ability_GuardianRank_Aftershock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_41ML[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
