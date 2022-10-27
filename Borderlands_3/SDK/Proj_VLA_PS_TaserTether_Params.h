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
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.TriggerElementalPuddles
	 */
	struct AProj_VLA_PS_TaserTether_C_TriggerElementalPuddles_Params
	{	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.AttachBeam
	 */
	struct AProj_VLA_PS_TaserTether_C_AttachBeam_Params
	{
	public:
		class AActor*                                              BeamTarget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Data;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.StopMovementEnableTrigger
	 */
	struct AProj_VLA_PS_TaserTether_C_StopMovementEnableTrigger_Params
	{	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.UserConstructionScript
	 */
	struct AProj_VLA_PS_TaserTether_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_StartFuse
	 */
	struct AProj_VLA_PS_TaserTether_C_BPI_StartFuse_Params
	{	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_Explode
	 */
	struct AProj_VLA_PS_TaserTether_C_BPI_Explode_Params
	{	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetSimulatePhysics
	 */
	struct AProj_VLA_PS_TaserTether_C_BPI_SetSimulatePhysics_Params
	{
	public:
		bool                                                       PhysicsOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ImpulseThrow
	 */
	struct AProj_VLA_PS_TaserTether_C_BPI_ImpulseThrow_Params
	{
	public:
		struct FVector                                             ThrowVector;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Force;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotatorForSpin;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      FuseSpeedScale;                                          // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AdditiveVector;                                          // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ResetHealth
	 */
	struct AProj_VLA_PS_TaserTether_C_BPI_ResetHealth_Params
	{	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetNavPainterEnabled
	 */
	struct AProj_VLA_PS_TaserTether_C_BPI_SetNavPainterEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveHit
	 */
	struct AProj_VLA_PS_TaserTether_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JDAC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveBeginPlay
	 */
	struct AProj_VLA_PS_TaserTether_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.OnExplode
	 */
	struct AProj_VLA_PS_TaserTether_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether
	 */
	struct AProj_VLA_PS_TaserTether_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PBE3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether
	 */
	struct AProj_VLA_PS_TaserTether_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether_Params
	{
	public:
		class AActor*                                              LeavingActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.Destructible_Fractured
	 */
	struct AProj_VLA_PS_TaserTether_C_Destructible_Fractured_Params
	{
	public:
		struct FVector                                             HitPoint;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitDetection;                                            // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BarrelExplode
	 */
	struct AProj_VLA_PS_TaserTether_C_BarrelExplode_Params
	{	};

	/**
	 * Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ExecuteUbergraph_Proj_VLA_PS_TaserTether
	 */
	struct AProj_VLA_PS_TaserTether_C_ExecuteUbergraph_Proj_VLA_PS_TaserTether_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
