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
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.UserConstructionScript
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ReceiveBeginPlay
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedAnyDamage
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_SirenDLCActionSkill_OnCausedAnyDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UUX3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.OnOrbStateSending
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_OnOrbStateSending_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y217[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedDeath
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_SirenDLCActionSkill_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FRUP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
