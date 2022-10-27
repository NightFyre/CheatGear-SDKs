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
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.UserConstructionScript
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.ReceiveBeginPlay
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.SirenDLCActionSkill_OnCausedAnyDamage
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_SirenDLCActionSkill_OnCausedAnyDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6BSK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.FireShotAtEnemy
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_FireShotAtEnemy_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.StartFiringShots
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_StartFiringShots_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NRP8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
