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
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutIdle
	 */
	struct ABPChar_TedioreTurret_C_DialogueCalloutIdle_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutSearchingForTarget
	 */
	struct ABPChar_TedioreTurret_C_DialogueCalloutSearchingForTarget_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutTargetAcquired
	 */
	struct ABPChar_TedioreTurret_C_DialogueCalloutTargetAcquired_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutTargetKilled
	 */
	struct ABPChar_TedioreTurret_C_DialogueCalloutTargetKilled_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutReloading
	 */
	struct ABPChar_TedioreTurret_C_DialogueCalloutReloading_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.InitBlackboardKeys
	 */
	struct ABPChar_TedioreTurret_C_InitBlackboardKeys_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.WeaponCreation
	 */
	struct ABPChar_TedioreTurret_C_WeaponCreation_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.InitWeaponData
	 */
	struct ABPChar_TedioreTurret_C_InitWeaponData_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.Detonated
	 */
	struct ABPChar_TedioreTurret_C_Detonated_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.UserConstructionScript
	 */
	struct ABPChar_TedioreTurret_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_TedioreTurret
	 */
	struct ABPChar_TedioreTurret_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_TedioreTurret_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret
	 */
	struct ABPChar_TedioreTurret_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HGPR[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.InitializeWeapon
	 */
	struct ABPChar_TedioreTurret_C_InitializeWeapon_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.OnReaped
	 */
	struct ABPChar_TedioreTurret_C_OnReaped_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.ReceiveDestroyed
	 */
	struct ABPChar_TedioreTurret_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.ReceiveBeginPlay
	 */
	struct ABPChar_TedioreTurret_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.OnProjectileDeath
	 */
	struct ABPChar_TedioreTurret_C_OnProjectileDeath_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.Reload2
	 */
	struct ABPChar_TedioreTurret_C_Reload2_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_TedioreTurret
	 */
	struct ABPChar_TedioreTurret_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_TedioreTurret_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.ExecuteUbergraph_BPChar_TedioreTurret
	 */
	struct ABPChar_TedioreTurret_C_ExecuteUbergraph_BPChar_TedioreTurret_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
