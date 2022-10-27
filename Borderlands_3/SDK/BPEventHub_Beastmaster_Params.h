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
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_Ended__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_Ended__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Ended__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_Ended__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature_Params
	{
	public:
		class AActor*                                              StoppedHealingTarget;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RiftLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_ActionSkillActivated__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_ActionSkillActivated__DelegateSignature_Params
	{
	public:
		Enum_BeastmasterActionSkill                                ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature_Params
	{
	public:
		class AActor*                                              PlayerHealed;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RiftLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_DealtDamage__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_DealtDamage__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_AttackCommandSelectedTarget__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_AttackCommandSelectedTarget__DelegateSignature_Params
	{
	public:
		EOakActionAbilityPetEvolutionType                          PetEvolution;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakActionAbilityPetType                                   PetType;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_UsedAttackCommand__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_Pet_UsedAttackCommand__DelegateSignature_Params
	{
	public:
		EOakActionAbilityPetEvolutionType                          PetEvolution;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakActionAbilityPetType                                   PetType;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_RevivedPlayer__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_Pet_RevivedPlayer__DelegateSignature_Params
	{
	public:
		class AActor*                                              RevivedBy;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Damage__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_Damage__DelegateSignature_Params
	{
	public:
		class AActor*                                              DamagedEnemy;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_KilledEnemy__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_KilledEnemy__DelegateSignature_Params
	{
	public:
		class AActor*                                              KilledEnemy;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_HealedPlayer__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_Rakks_HealedPlayer__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_DealtDamage__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_Rakks_DealtDamage__DelegateSignature_Params
	{
	public:
		class AActor*                                              DamagedEnemy;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_KilledEnemy__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_Rakks_KilledEnemy__DelegateSignature_Params
	{
	public:
		class AActor*                                              KilledEnemy;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HuntSkillActivated__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_HuntSkillActivated__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_EnemyDominated__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_Beastmaster_EnemyDominated__DelegateSignature_Params
	{
	public:
		class AActor*                                              NewDominated;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ClassModL03_TriggerHuntKillSkill__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_ClassModL03_TriggerHuntKillSkill__DelegateSignature_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetReleased__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_ActivePetReleased__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetSpawned__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_ActivePetSpawned__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetDamage__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_RegisterPetDamage__DelegateSignature_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetKill__DelegateSignature
	 */
	struct UBPEventHub_Beastmaster_C_RegisterPetKill__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
