#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.SetSmokeSize
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_SetSmokeSize_Params
	{	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_ShipHull
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_DamageEffects_ShipHull_Params
	{
	public:
		float                                                      DamageAmount_Percent;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_HelmGun
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_DamageEffects_HelmGun_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A4PM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_Engine
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_DamageEffects_Engine_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VOAK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_Turret
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_DamageEffects_Turret_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_15KC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.AdjustBoomLength
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_AdjustBoomLength_Params
	{	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.PlayLeftRightThrusterSound
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_PlayLeftRightThrusterSound_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.SetMainThrusterParticle
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_SetMainThrusterParticle_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CXIL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ActivateSubThrusters
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_ActivateSubThrusters_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_932E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.LeftThrusterParticle
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_LeftThrusterParticle_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.RightThrusterParticle
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_RightThrusterParticle_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.InpActEvt_N_K2Node_InputKeyEvent_1
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.OnMoveFinished_0F43DDA04C784407BCB8448352024B77
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_OnMoveFinished_0F43DDA04C784407BCB8448352024B77_Params
	{
	public:
		EPathFollowingResult                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_97WV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.OnRequestFailed_0F43DDA04C784407BCB8448352024B77
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_OnRequestFailed_0F43DDA04C784407BCB8448352024B77_Params
	{	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ReceiveBeginPlay
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ReceiveTick
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.PawnTakenDamage
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_PawnTakenDamage_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C9Y2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ShipHealthCheck
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_ShipHealthCheck_Params
	{	};

	/**
	 * Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ExecuteUbergraph_Ship_Ai_CapitalShipFrigate01
	 */
	struct AShip_Ai_CapitalShipFrigate01_C_ExecuteUbergraph_Ship_Ai_CapitalShipFrigate01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
