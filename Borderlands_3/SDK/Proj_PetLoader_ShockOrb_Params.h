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
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.OnRep_OrbState
	 */
	struct AProj_PetLoader_ShockOrb_C_OnRep_OrbState_Params
	{	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.UserConstructionScript
	 */
	struct AProj_PetLoader_ShockOrb_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Spawning
	 */
	struct AProj_PetLoader_ShockOrb_C_Orb_Spawning_Params
	{	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Idle
	 */
	struct AProj_PetLoader_ShockOrb_C_Orb_Idle_Params
	{	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Explode
	 */
	struct AProj_PetLoader_ShockOrb_C_Orb_Explode_Params
	{	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_PetLoader_ShockOrb
	 */
	struct AProj_PetLoader_ShockOrb_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_PetLoader_ShockOrb_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V4DI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_LargeExplode
	 */
	struct AProj_PetLoader_ShockOrb_C_Orb_LargeExplode_Params
	{	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.OnExplode
	 */
	struct AProj_PetLoader_ShockOrb_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ReceiveBeginPlay
	 */
	struct AProj_PetLoader_ShockOrb_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ShockOrb_OnTargetDied
	 */
	struct AProj_PetLoader_ShockOrb_C_ShockOrb_OnTargetDied_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.SetAllowShotTrigger
	 */
	struct AProj_PetLoader_ShockOrb_C_SetAllowShotTrigger_Params
	{	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_PetLoader_ShockOrb
	 */
	struct AProj_PetLoader_ShockOrb_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_PetLoader_ShockOrb_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_90H5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ExecuteUbergraph_Proj_PetLoader_ShockOrb
	 */
	struct AProj_PetLoader_ShockOrb_C_ExecuteUbergraph_Proj_PetLoader_ShockOrb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OWBK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
