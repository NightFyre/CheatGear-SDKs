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
	 * Function IBPChar_Pet.IBPChar_Pet_C.GetPetJabberIngenuityBarrel
	 */
	struct UIBPChar_Pet_C_GetPetJabberIngenuityBarrel_Params
	{
	public:
		class AActor*                                              Barrel;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetSucceededRevive
	 */
	struct UIBPChar_Pet_C_PetSucceededRevive_Params
	{	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelDrop
	 */
	struct UIBPChar_Pet_C_PetJabbermon_BarrelDrop_Params
	{	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelThrow
	 */
	struct UIBPChar_Pet_C_PetJabbermon_BarrelThrow_Params
	{	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelSet
	 */
	struct UIBPChar_Pet_C_PetJabbermon_BarrelSet_Params
	{
	public:
		class AActor*                                              NewBarrel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelAlign
	 */
	struct UIBPChar_Pet_C_PetJabbermon_BarrelAlign_Params
	{
	public:
		class AActor*                                              NewBarrel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.SetEnraged
	 */
	struct UIBPChar_Pet_C_SetEnraged_Params
	{
	public:
		bool                                                       bIsEnraged;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.GetPetEvolutionType
	 */
	struct UIBPChar_Pet_C_GetPetEvolutionType_Params
	{
	public:
		EOakActionAbilityPetEvolutionType                          EvolutionType;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.DoAttackCommand
	 */
	struct UIBPChar_Pet_C_DoAttackCommand_Params
	{
	public:
		class UObject*                                             EnemyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.BeginAttackCommand
	 */
	struct UIBPChar_Pet_C_BeginAttackCommand_Params
	{	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.GetPetType
	 */
	struct UIBPChar_Pet_C_GetPetType_Params
	{
	public:
		EOakActionAbilityPetType                                   PetType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_FireRocket
	 */
	struct UIBPChar_Pet_C_PetJabbermon_FireRocket_Params
	{	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeLauncherVis
	 */
	struct UIBPChar_Pet_C_PetJabbermon_ChangeLauncherVis_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeGunVis
	 */
	struct UIBPChar_Pet_C_PetJabbermon_ChangeGunVis_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Hide
	 */
	struct UIBPChar_Pet_C_PetJabbermon_Poop_Hide_Params
	{	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Show
	 */
	struct UIBPChar_Pet_C_PetJabbermon_Poop_Show_Params
	{	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeMeleeVis
	 */
	struct UIBPChar_Pet_C_PetJabbermon_ChangeMeleeVis_Params
	{
	public:
		bool                                                       NewWeapVisibility;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.OnPetReleased
	 */
	struct UIBPChar_Pet_C_OnPetReleased_Params
	{
	public:
		bool                                                       bForced;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPetReleaseReason                                          Reason;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.MatchesPetProfile
	 */
	struct UIBPChar_Pet_C_MatchesPetProfile_Params
	{
	public:
		class UOakPlayerCharacterAugmentData_Pet*                  InAugment;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.PetSpawnTrapProjectile
	 */
	struct UIBPChar_Pet_C_PetSpawnTrapProjectile_Params
	{	};

	/**
	 * Function IBPChar_Pet.IBPChar_Pet_C.GetBeastmasterOwner
	 */
	struct UIBPChar_Pet_C_GetBeastmasterOwner_Params
	{
	public:
		class AOakCharacter_Player*                                Beastmaster;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
