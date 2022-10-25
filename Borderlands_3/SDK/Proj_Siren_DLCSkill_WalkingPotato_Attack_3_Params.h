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
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.DamageScalar
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_DamageScalar_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.GetOrbAreaDamageType
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_GetOrbAreaDamageType_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.UserConstructionScript
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.OnOrbStateSending
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_OnOrbStateSending_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VIMZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ReceiveBeginPlay
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
