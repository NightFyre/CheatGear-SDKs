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
	 * Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.OnActivated
	 */
	struct UOakAbility_Beastmaster_Unique04_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.PetSpawned_ClassModUnique04
	 */
	struct UOakAbility_Beastmaster_Unique04_C_PetSpawned_ClassModUnique04_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ApplyPetConditionalModifier
	 */
	struct UOakAbility_Beastmaster_Unique04_C_ApplyPetConditionalModifier_Params
	{
	public:
		class AOakCharacter*                                       NewPet;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.RemovePetModifier
	 */
	struct UOakAbility_Beastmaster_Unique04_C_RemovePetModifier_Params
	{
	public:
		class AOakCharacter*                                       NewPet;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique04
	 */
	struct UOakAbility_Beastmaster_Unique04_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique04_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XW4C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
