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
	 * Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.GetManualHUDIconValues
	 */
	struct UPassive_Beastmaster_DLCSkill_9_C_GetManualHUDIconValues_Params
	{
	public:
		int32_t                                                    outStackCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outDuration;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outTimeRemaining;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.SetupPetDamageEvent
	 */
	struct UPassive_Beastmaster_DLCSkill_9_C_SetupPetDamageEvent_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.RemovePetDamageEvent
	 */
	struct UPassive_Beastmaster_DLCSkill_9_C_RemovePetDamageEvent_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastPetSpawned
	 */
	struct UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_OnBeastPetSpawned_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastmasterPetReleased
	 */
	struct UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_OnBeastmasterPetReleased_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Pet_OnCausedAnyDamage
	 */
	struct UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_Pet_OnCausedAnyDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_34I6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Player_OnWeaponUsed
	 */
	struct UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_Player_OnWeaponUsed_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.OnActivated
	 */
	struct UPassive_Beastmaster_DLCSkill_9_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10
	 */
	struct UPassive_Beastmaster_DLCSkill_9_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TLRT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
