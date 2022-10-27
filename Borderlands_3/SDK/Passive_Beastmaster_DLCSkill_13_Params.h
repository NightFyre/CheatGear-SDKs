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
	 * Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.OnActivated
	 */
	struct UPassive_Beastmaster_DLCSkill_12_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill11_OnBeastmasterPetSpawned
	 */
	struct UPassive_Beastmaster_DLCSkill_12_C_DLCSkill11_OnBeastmasterPetSpawned_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill11_OnBeastmasterPetReleased
	 */
	struct UPassive_Beastmaster_DLCSkill_12_C_DLCSkill11_OnBeastmasterPetReleased_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.SetupPetEvents
	 */
	struct UPassive_Beastmaster_DLCSkill_12_C_SetupPetEvents_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.CleanupPetEvents
	 */
	struct UPassive_Beastmaster_DLCSkill_12_C_CleanupPetEvents_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill12_OnCausedAnyDamage
	 */
	struct UPassive_Beastmaster_DLCSkill_12_C_DLCSkill12_OnCausedAnyDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BDJP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.OpenGate
	 */
	struct UPassive_Beastmaster_DLCSkill_12_C_OpenGate_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_13
	 */
	struct UPassive_Beastmaster_DLCSkill_12_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_13_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZTX5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
