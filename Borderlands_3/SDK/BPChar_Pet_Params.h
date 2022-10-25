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
	 * Function BPChar_Pet.BPChar_Pet_C.GetPetJabberIngenuityBarrel
	 */
	struct ABPChar_Pet_C_GetPetJabberIngenuityBarrel_Params
	{
	public:
		class AActor*                                              Barrel;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.GetPetEvolutionType
	 */
	struct ABPChar_Pet_C_GetPetEvolutionType_Params
	{
	public:
		EOakActionAbilityPetEvolutionType                          EvolutionType;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.GetPetType
	 */
	struct ABPChar_Pet_C_GetPetType_Params
	{
	public:
		EOakActionAbilityPetType                                   PetType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.MatchesPetProfile
	 */
	struct ABPChar_Pet_C_MatchesPetProfile_Params
	{
	public:
		class UOakPlayerCharacterAugmentData_Pet*                  InAugment;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.GetBeastmasterOwner
	 */
	struct ABPChar_Pet_C_GetBeastmasterOwner_Params
	{
	public:
		class AOakCharacter_Player*                                Beastmaster;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.UpdateHealingFX
	 */
	struct ABPChar_Pet_C_UpdateHealingFX_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.RefreshIconDuration
	 */
	struct ABPChar_Pet_C_RefreshIconDuration_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.TogglePetTaunt_CLASSMODONLY
	 */
	struct ABPChar_Pet_C_TogglePetTaunt_CLASSMODONLY_Params
	{
	public:
		bool                                                       IsEnraged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NZ3J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.IncrementKillStat
	 */
	struct ABPChar_Pet_C_IncrementKillStat_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.DoShrinkAudio
	 */
	struct ABPChar_Pet_C_DoShrinkAudio_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnEnrageEnd
	 */
	struct ABPChar_Pet_C_OnEnrageEnd_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnEnrageBegin
	 */
	struct ABPChar_Pet_C_OnEnrageBegin_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnRep_bIsEnraged
	 */
	struct ABPChar_Pet_C_OnRep_bIsEnraged_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.ToggleAttackCommand_BB
	 */
	struct ABPChar_Pet_C_ToggleAttackCommand_BB_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8P6K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.RemoveAttackCommandIcon
	 */
	struct ABPChar_Pet_C_RemoveAttackCommandIcon_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.AddAttackCommandIcon
	 */
	struct ABPChar_Pet_C_AddAttackCommandIcon_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.ToggleAttackCommand_ScriptedTarget
	 */
	struct ABPChar_Pet_C_ToggleAttackCommand_ScriptedTarget_Params
	{
	public:
		bool                                                       Toggle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnRep_ScriptedPetTarget
	 */
	struct ABPChar_Pet_C_OnRep_ScriptedPetTarget_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.DoPetAttackCommand
	 */
	struct ABPChar_Pet_C_DoPetAttackCommand_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.TryRemovePlayerStatusEffect
	 */
	struct ABPChar_Pet_C_TryRemovePlayerStatusEffect_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.TryAddPlayerStatusEffect
	 */
	struct ABPChar_Pet_C_TryAddPlayerStatusEffect_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.SetBlackboard_Aggro
	 */
	struct ABPChar_Pet_C_SetBlackboard_Aggro_Params
	{
	public:
		bool                                                       Toggle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RZY1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.NotifyPetSpawn
	 */
	struct ABPChar_Pet_C_NotifyPetSpawn_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.SecondWindInjuredAllies
	 */
	struct ABPChar_Pet_C_SecondWindInjuredAllies_Params
	{
	public:
		TArray<class AOakCharacter_Player*>                        Allies;                                                  // 0x0000(0x0010)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.SetUltimateBlackboard
	 */
	struct ABPChar_Pet_C_SetUltimateBlackboard_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HUBS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.ComparePetKillerToAllies
	 */
	struct ABPChar_Pet_C_ComparePetKillerToAllies_Params
	{
	public:
		class AActor*                                              Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AssignPetToKiller;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GKQL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PlaySpawnActions
	 */
	struct ABPChar_Pet_C_PlaySpawnActions_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.IsOwnerInFFYL
	 */
	struct ABPChar_Pet_C_IsOwnerInFFYL_Params
	{
	public:
		bool                                                       InFFYL;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_84ZB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.UserConstructionScript
	 */
	struct ABPChar_Pet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.Timeline_0__FinishedFunc
	 */
	struct ABPChar_Pet_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.Timeline_0__UpdateFunc
	 */
	struct ABPChar_Pet_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnAnimEnd_448EE01D4E3F143531F722AF23144929
	 */
	struct ABPChar_Pet_C_OnAnimEnd_448EE01D4E3F143531F722AF23144929_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnEnd_448EE01D4E3F143531F722AF23144929
	 */
	struct ABPChar_Pet_C_OnEnd_448EE01D4E3F143531F722AF23144929_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CKFS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_Poop_Hide
	 */
	struct ABPChar_Pet_C_PetJabbermon_Poop_Hide_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.DoAttackCommandEQS
	 */
	struct ABPChar_Pet_C_DoAttackCommandEQS_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.DoAttackCommandFail
	 */
	struct ABPChar_Pet_C_DoAttackCommandFail_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.DoAttackCommand
	 */
	struct ABPChar_Pet_C_DoAttackCommand_Params
	{
	public:
		class UObject*                                             EnemyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnPetTargetDied
	 */
	struct ABPChar_Pet_C_OnPetTargetDied_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnBeastmasterCausedAnyDamage
	 */
	struct ABPChar_Pet_C_OnBeastmasterCausedAnyDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75QC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_Poop_Show
	 */
	struct ABPChar_Pet_C_PetJabbermon_Poop_Show_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet
	 */
	struct ABPChar_Pet_C_BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet_Params
	{
	public:
		class AController*                                         UserController;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 UsedComponent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BeginAttackCommand
	 */
	struct ABPChar_Pet_C_BeginAttackCommand_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPChar_Pet
	 */
	struct ABPChar_Pet_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPChar_Pet_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Pet
	 */
	struct ABPChar_Pet_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Pet_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TBVL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 */
	struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeMeleeVis
	 */
	struct ABPChar_Pet_C_PetJabbermon_ChangeMeleeVis_Params
	{
	public:
		bool                                                       NewWeapVisibility;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnPetReleased
	 */
	struct ABPChar_Pet_C_OnPetReleased_Params
	{
	public:
		bool                                                       bForced;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPetReleaseReason                                          Reason;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetSpawnTrapProjectile
	 */
	struct ABPChar_Pet_C_PetSpawnTrapProjectile_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnAggro_PlayerPets
	 */
	struct ABPChar_Pet_C_OnAggro_PlayerPets_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnDeAggro_PlayerPets
	 */
	struct ABPChar_Pet_C_OnDeAggro_PlayerPets_Params
	{
	public:
		float                                                      AggroDuration;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 */
	struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 */
	struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet
	 */
	struct ABPChar_Pet_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.ReceiveDestroyed
	 */
	struct ABPChar_Pet_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.SetEnraged
	 */
	struct ABPChar_Pet_C_SetEnraged_Params
	{
	public:
		bool                                                       bIsEnraged;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.ReversePetEnrageScale
	 */
	struct ABPChar_Pet_C_ReversePetEnrageScale_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.CancelPetEnrageScale
	 */
	struct ABPChar_Pet_C_CancelPetEnrageScale_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.Pet_DownStateStart
	 */
	struct ABPChar_Pet_C_Pet_DownStateStart_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 */
	struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnHealingFXChanged
	 */
	struct ABPChar_Pet_C_OnHealingFXChanged_Params
	{
	public:
		float                                                      OldValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.InitializePetSpawned
	 */
	struct ABPChar_Pet_C_InitializePetSpawned_Params
	{
	public:
		class AOakCharacter_Player*                                Beastmaster;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakActionAbilityPetEvolutionType                          EvolutionType;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.ReceiveBeginPlay
	 */
	struct ABPChar_Pet_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetAttackIconFinished
	 */
	struct ABPChar_Pet_C_PetAttackIconFinished_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelDrop
	 */
	struct ABPChar_Pet_C_PetJabbermon_BarrelDrop_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetSucceededRevive
	 */
	struct ABPChar_Pet_C_PetSucceededRevive_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_7_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_Pet
	 */
	struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_7_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_Pet_Params
	{
	public:
		bool                                                       IsSuccessful;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelThrow
	 */
	struct ABPChar_Pet_C_PetJabbermon_BarrelThrow_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnInventoryEquipped
	 */
	struct ABPChar_Pet_C_OnInventoryEquipped_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnInventoryUnequipped
	 */
	struct ABPChar_Pet_C_OnInventoryUnequipped_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnInventoryPickedUp
	 */
	struct ABPChar_Pet_C_OnInventoryPickedUp_Params
	{
	public:
		class AActor*                                              PickedUpActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelSet
	 */
	struct ABPChar_Pet_C_PetJabbermon_BarrelSet_Params
	{
	public:
		class AActor*                                              NewBarrel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelAlign
	 */
	struct ABPChar_Pet_C_PetJabbermon_BarrelAlign_Params
	{
	public:
		class AActor*                                              NewBarrel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_FireRocket
	 */
	struct ABPChar_Pet_C_PetJabbermon_FireRocket_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.Player_OnLevelUp
	 */
	struct ABPChar_Pet_C_Player_OnLevelUp_Params
	{
	public:
		int32_t                                                    OldExperienceLevel;                                      // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewExperienceLevel;                                      // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.OnDeath_FFYLScriptedTarget
	 */
	struct ABPChar_Pet_C_OnDeath_FFYLScriptedTarget_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeLauncherVis
	 */
	struct ABPChar_Pet_C_PetJabbermon_ChangeLauncherVis_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.Beastmaster_FFYLStop
	 */
	struct ABPChar_Pet_C_Beastmaster_FFYLStop_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.Beastmaster_FFYLStart
	 */
	struct ABPChar_Pet_C_Beastmaster_FFYLStart_Params
	{	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeGunVis
	 */
	struct ABPChar_Pet_C_PetJabbermon_ChangeGunVis_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Pet.BPChar_Pet_C.ExecuteUbergraph_BPChar_Pet
	 */
	struct ABPChar_Pet_C_ExecuteUbergraph_BPChar_Pet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8IJJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
