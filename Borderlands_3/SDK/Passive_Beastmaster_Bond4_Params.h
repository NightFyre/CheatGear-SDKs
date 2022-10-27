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
	 * Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.ApplyFirstHit
	 */
	struct UPassive_Beastmaster_Bond4_C_ApplyFirstHit_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnActivated
	 */
	struct UPassive_Beastmaster_Bond4_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.PetCausedDamage_Bond4
	 */
	struct UPassive_Beastmaster_Bond4_C_PetCausedDamage_Bond4_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.RegisterNewModifier
	 */
	struct UPassive_Beastmaster_Bond4_C_RegisterNewModifier_Params
	{
	public:
		class AOakCharacter*                                       NewPet;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.UnregisterModifier
	 */
	struct UPassive_Beastmaster_Bond4_C_UnregisterModifier_Params
	{
	public:
		class AOakCharacter*                                       NewPet;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnNewPetSpawned_Bond4
	 */
	struct UPassive_Beastmaster_Bond4_C_OnNewPetSpawned_Bond4_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnPetReleased_Bond4
	 */
	struct UPassive_Beastmaster_Bond4_C_OnPetReleased_Bond4_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.ExecuteUbergraph_Passive_Beastmaster_Bond4
	 */
	struct UPassive_Beastmaster_Bond4_C_ExecuteUbergraph_Passive_Beastmaster_Bond4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4AFJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
