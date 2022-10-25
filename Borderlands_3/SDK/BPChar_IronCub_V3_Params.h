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
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_SpecialistBear
	 */
	struct ABPChar_IronCub_V3_C_Init_SpecialistBear_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_DakkaBearCore
	 */
	struct ABPChar_IronCub_V3_C_Init_DakkaBearCore_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetSurpriseForYouTarget
	 */
	struct ABPChar_IronCub_V3_C_GetSurpriseForYouTarget_Params
	{
	public:
		class AActor*                                              AsActor;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExitSurpriseForYouCore
	 */
	struct ABPChar_IronCub_V3_C_ExitSurpriseForYouCore_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_bAutoBearStarted
	 */
	struct ABPChar_IronCub_V3_C_OnRep_bAutoBearStarted_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.CalculateAutoBearDuration
	 */
	struct ABPChar_IronCub_V3_C_CalculateAutoBearDuration_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetNewAutoBearRotationRates
	 */
	struct ABPChar_IronCub_V3_C_SetNewAutoBearRotationRates_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_UseModdedBubbleShieldFX
	 */
	struct ABPChar_IronCub_V3_C_OnRep_UseModdedBubbleShieldFX_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.PrepareIronBearForEntry
	 */
	struct ABPChar_IronCub_V3_C_PrepareIronBearForEntry_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.HasBubbleShield
	 */
	struct ABPChar_IronCub_V3_C_HasBubbleShield_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_BubbleShieldCore
	 */
	struct ABPChar_IronCub_V3_C_Init_BubbleShieldCore_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ToggleBubbleShieldCollision
	 */
	struct ABPChar_IronCub_V3_C_ToggleBubbleShieldCollision_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StopBubbleShieldAudioLoop
	 */
	struct ABPChar_IronCub_V3_C_StopBubbleShieldAudioLoop_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StartBubbleShieldAudioLoop
	 */
	struct ABPChar_IronCub_V3_C_StartBubbleShieldAudioLoop_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.LockResources
	 */
	struct ABPChar_IronCub_V3_C_LockResources_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestAugment
	 */
	struct ABPChar_IronCub_V3_C_TestAugment_Params
	{
	public:
		class UOakActionAbilityAugmentData*                        Augment;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod4_ReleaseNuke
	 */
	struct ABPChar_IronCub_V3_C_Mod4_ReleaseNuke_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod2_OnCausedElementalEffect
	 */
	struct ABPChar_IronCub_V3_C_Mod2_OnCausedElementalEffect_Params
	{
	public:
		class AActor*                                              Causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatusEffectSpec                                   Spec;                                                    // 0x0008(0x0038)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_Cleanup
	 */
	struct ABPChar_IronCub_V3_C_Mod1_Cleanup_Params
	{
	public:
		class UOakActionAbility*                                   OakActionAbility;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_AddStack
	 */
	struct ABPChar_IronCub_V3_C_Mod1_AddStack_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetWeaponUserForWeaponSlot
	 */
	struct ABPChar_IronCub_V3_C_GetWeaponUserForWeaponSlot_Params
	{
	public:
		class UWeaponSlotData*                                     SlotData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAIWeaponUserComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestHardpoint
	 */
	struct ABPChar_IronCub_V3_C_TestHardpoint_Params
	{
	public:
		class UOakActionAbilityAugmentData*                        Hard_Point;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBlackboard_Aggro
	 */
	struct ABPChar_IronCub_V3_C_SetBlackboard_Aggro_Params
	{
	public:
		bool                                                       Toggle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8V1B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupHardpointBlackboard
	 */
	struct ABPChar_IronCub_V3_C_SetupHardpointBlackboard_Params
	{
	public:
		class UOakActionAbilityAugmentSlotData*                    Hard_Point_Slot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              res;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.UserConstructionScript
	 */
	struct ABPChar_IronCub_V3_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6
	 */
	struct ABPChar_IronCub_V3_C_OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnEnd_97D044764693DA850AC80F83C4B2EAE6
	 */
	struct ABPChar_IronCub_V3_C_OnEnd_97D044764693DA850AC80F83C4B2EAE6_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SS69[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBearDurationDepleted
	 */
	struct ABPChar_IronCub_V3_C_IronBearDurationDepleted_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupAutoBearDestroyCleanup
	 */
	struct ABPChar_IronCub_V3_C_SetupAutoBearDestroyCleanup_Params
	{
	public:
		float                                                      RepDelay;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D1NL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.EndAutoBear
	 */
	struct ABPChar_IronCub_V3_C_EndAutoBear_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.DestroyIronCub
	 */
	struct ABPChar_IronCub_V3_C_DestroyIronCub_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronCub_OnActionSkillCoolingDown
	 */
	struct ABPChar_IronCub_V3_C_IronCub_OnActionSkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2
	 */
	struct ABPChar_IronCub_V3_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ReceiveBeginPlay
	 */
	struct ABPChar_IronCub_V3_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAggro_PlayerPets
	 */
	struct ABPChar_IronCub_V3_C_OnAggro_PlayerPets_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnDeAggro_PlayerPets
	 */
	struct ABPChar_IronCub_V3_C_OnDeAggro_PlayerPets_Params
	{
	public:
		float                                                      AggroDuration;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnExitStarted
	 */
	struct ABPChar_IronCub_V3_C_OnExitStarted_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBear_DoMeleeAttack
	 */
	struct ABPChar_IronCub_V3_C_IronBear_DoMeleeAttack_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ActivateNukeScreenIcons
	 */
	struct ABPChar_IronCub_V3_C_ActivateNukeScreenIcons_Params
	{
	public:
		EIronBearHardPointOrientation                              HardpointOrientation;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBubbleShieldFXModOverrideEnabled
	 */
	struct ABPChar_IronCub_V3_C_SetBubbleShieldFXModOverrideEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnBubbleShieldEnabledStateChanged
	 */
	struct ABPChar_IronCub_V3_C_OnBubbleShieldEnabledStateChanged_Params
	{	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnActionSkillActivated_IronBear
	 */
	struct ABPChar_IronCub_V3_C_OnActionSkillActivated_IronBear_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3
	 */
	struct ABPChar_IronCub_V3_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Player_OnLevelUp
	 */
	struct ABPChar_IronCub_V3_C_Player_OnLevelUp_Params
	{
	public:
		int32_t                                                    OldExperienceLevel;                                      // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewExperienceLevel;                                      // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExecuteUbergraph_BPChar_IronCub_V3
	 */
	struct ABPChar_IronCub_V3_C_ExecuteUbergraph_BPChar_IronCub_V3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QL2F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
