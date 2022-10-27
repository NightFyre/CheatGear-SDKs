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
	 * Function BPChar_IronBear.BPChar_IronBear_C.GetIronBearAutoSlideCooldownRefund
	 */
	struct ABPChar_IronBear_C_GetIronBearAutoSlideCooldownRefund_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnRep_bAutoBearStarted
	 */
	struct ABPChar_IronBear_C_OnRep_bAutoBearStarted_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.CalculateAutoBearDuration
	 */
	struct ABPChar_IronBear_C_CalculateAutoBearDuration_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.GetWeaponUserForWeaponSlot
	 */
	struct ABPChar_IronBear_C_GetWeaponUserForWeaponSlot_Params
	{
	public:
		class UWeaponSlotData*                                     SlotData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAIWeaponUserComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.SetScreenLoopEnabled
	 */
	struct ABPChar_IronBear_C_SetScreenLoopEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4SE4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShieldAudioLoop
	 */
	struct ABPChar_IronBear_C_StopBubbleShieldAudioLoop_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.StartBubbleShieldAudioLoop
	 */
	struct ABPChar_IronBear_C_StartBubbleShieldAudioLoop_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.BootGunnersNestOccupant
	 */
	struct ABPChar_IronBear_C_BootGunnersNestOccupant_Params
	{
	public:
		bool                                                       InputPin;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_893J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.SetNewAutoBearRotationRates
	 */
	struct ABPChar_IronBear_C_SetNewAutoBearRotationRates_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.LockGunnerNestUsability
	 */
	struct ABPChar_IronBear_C_LockGunnerNestUsability_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.KickPlayerOutOfGunnersNest
	 */
	struct ABPChar_IronBear_C_KickPlayerOutOfGunnersNest_Params
	{
	public:
		bool                                                       zKilled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T33G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.InitNukeMod
	 */
	struct ABPChar_IronBear_C_InitNukeMod_Params
	{
	public:
		EIronBearHardPointOrientation                              NewOrientation;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.GetSurpriseForYouTarget
	 */
	struct ABPChar_IronBear_C_GetSurpriseForYouTarget_Params
	{
	public:
		class AActor*                                              AsActor;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ExitSurpriseForYouCore
	 */
	struct ABPChar_IronBear_C_ExitSurpriseForYouCore_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.HasBubbleShield
	 */
	struct ABPChar_IronBear_C_HasBubbleShield_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.Init_BubbleShieldCore
	 */
	struct ABPChar_IronBear_C_Init_BubbleShieldCore_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.Init_GunnersNestCore
	 */
	struct ABPChar_IronBear_C_Init_GunnersNestCore_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnRep_GunnersNestOccupied
	 */
	struct ABPChar_IronBear_C_OnRep_GunnersNestOccupied_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnRep_UseModdedBubbleShieldFX
	 */
	struct ABPChar_IronBear_C_OnRep_UseModdedBubbleShieldFX_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ToggleBubbleShieldCollision
	 */
	struct ABPChar_IronBear_C_ToggleBubbleShieldCollision_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenParameter
	 */
	struct ABPChar_IronBear_C_UpdateScreenParameter_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIronBearDamageLevel                                       TriggeredLevel;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenDamage
	 */
	struct ABPChar_IronBear_C_UpdateScreenDamage_Params
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIronBearDamageLevel                                       TriggeredLevel;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIronBearDamageLevel                                       TriggeredSmokeLevel;                                     // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIronBearDamageLevel                                       TriggeredFireLevel;                                      // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenCrack
	 */
	struct ABPChar_IronBear_C_UpdateScreenCrack_Params
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIronBearDamageLevel                                       TriggeredLevel;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.PrepareIronBearForEntry
	 */
	struct ABPChar_IronBear_C_PrepareIronBearForEntry_Params
	{
	public:
		class AOakCharacter*                                       Gunner;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.UserConstructionScript
	 */
	struct ABPChar_IronBear_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__FinishedFunc
	 */
	struct ABPChar_IronBear_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__UpdateFunc
	 */
	struct ABPChar_IronBear_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__FinishedFunc
	 */
	struct ABPChar_IronBear_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__UpdateFunc
	 */
	struct ABPChar_IronBear_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__FinishedFunc
	 */
	struct ABPChar_IronBear_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__UpdateFunc
	 */
	struct ABPChar_IronBear_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_2A9499CC4F6188887CB16E840419821A
	 */
	struct ABPChar_IronBear_C_OnAnimEnd_2A9499CC4F6188887CB16E840419821A_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_2A9499CC4F6188887CB16E840419821A
	 */
	struct ABPChar_IronBear_C_OnEnd_2A9499CC4F6188887CB16E840419821A_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8F0W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2
	 */
	struct ABPChar_IronBear_C_OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2
	 */
	struct ABPChar_IronBear_C_OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_76PD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1
	 */
	struct ABPChar_IronBear_C_OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_A39BE65742340F11ACEF63BD04B6FCB1
	 */
	struct ABPChar_IronBear_C_OnEnd_A39BE65742340F11ACEF63BD04B6FCB1_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JM3L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnExiting
	 */
	struct ABPChar_IronBear_C_OnExiting_Params
	{
	public:
		bool                                                       bInstantExit;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnExited
	 */
	struct ABPChar_IronBear_C_OnExited_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnExitStarted
	 */
	struct ABPChar_IronBear_C_OnExitStarted_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ServerNotifyIBScreenOff
	 */
	struct ABPChar_IronBear_C_ServerNotifyIBScreenOff_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ClientOnExiting
	 */
	struct ABPChar_IronBear_C_ClientOnExiting_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.SetupAutoBearDestroyCleanup
	 */
	struct ABPChar_IronBear_C_SetupAutoBearDestroyCleanup_Params
	{
	public:
		float                                                      RepDelay;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UWVV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnActionSkillActivated_IronBear
	 */
	struct ABPChar_IronBear_C_OnActionSkillActivated_IronBear_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ManualExitCancelled
	 */
	struct ABPChar_IronBear_C_ManualExitCancelled_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear
	 */
	struct ABPChar_IronBear_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnJumped
	 */
	struct ABPChar_IronBear_C_OnJumped_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnLanded
	 */
	struct ABPChar_IronBear_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ActivateGundamCore
	 */
	struct ABPChar_IronBear_C_ActivateGundamCore_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ServerActivateGundamCore
	 */
	struct ABPChar_IronBear_C_ServerActivateGundamCore_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear
	 */
	struct ABPChar_IronBear_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WG8Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOn
	 */
	struct ABPChar_IronBear_C_IBScreenOn_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOff
	 */
	struct ABPChar_IronBear_C_IBScreenOff_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.EnableDamageScreens
	 */
	struct ABPChar_IronBear_C_EnableDamageScreens_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.DisableDamageScreens
	 */
	struct ABPChar_IronBear_C_DisableDamageScreens_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnDamageLevelChanged
	 */
	struct ABPChar_IronBear_C_OnDamageLevelChanged_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ActivateNukeScreenIcons
	 */
	struct ABPChar_IronBear_C_ActivateNukeScreenIcons_Params
	{
	public:
		EIronBearHardPointOrientation                              HardpointOrientation;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnEntered
	 */
	struct ABPChar_IronBear_C_OnEntered_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnEnteredClient
	 */
	struct ABPChar_IronBear_C_OnEnteredClient_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnEntering
	 */
	struct ABPChar_IronBear_C_OnEntering_Params
	{
	public:
		class AOakCharacter_Player*                                InGunner;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ReceiveBeginPlay
	 */
	struct ABPChar_IronBear_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnBubbleShieldEnabledStateChanged
	 */
	struct ABPChar_IronBear_C_OnBubbleShieldEnabledStateChanged_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.SetBubbleShieldFXModOverrideEnabled
	 */
	struct ABPChar_IronBear_C_SetBubbleShieldFXModOverrideEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear
	 */
	struct ABPChar_IronBear_C_BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QIX1[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.OnAttachStateChanged_GunnersNest
	 */
	struct ABPChar_IronBear_C_OnAttachStateChanged_GunnersNest_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.StartDigistructIn
	 */
	struct ABPChar_IronBear_C_StartDigistructIn_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ReceiveEndPlay
	 */
	struct ABPChar_IronBear_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.IronBear_DoMeleeAttack
	 */
	struct ABPChar_IronBear_C_IronBear_DoMeleeAttack_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.UnlockResourceGod
	 */
	struct ABPChar_IronBear_C_UnlockResourceGod_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShield
	 */
	struct ABPChar_IronBear_C_StopBubbleShield_Params
	{	};

	/**
	 * Function BPChar_IronBear.BPChar_IronBear_C.ExecuteUbergraph_BPChar_IronBear
	 */
	struct ABPChar_IronBear_C_ExecuteUbergraph_BPChar_IronBear_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7HZ7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
