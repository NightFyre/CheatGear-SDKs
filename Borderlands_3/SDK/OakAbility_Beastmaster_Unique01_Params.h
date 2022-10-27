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
	 * Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.OnActivated
	 */
	struct UOakAbility_Beastmaster_Unique01_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.CausedDeath_UniqueClassMod01
	 */
	struct UOakAbility_Beastmaster_Unique01_C_CausedDeath_UniqueClassMod01_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.AddPetDamageModifier
	 */
	struct UOakAbility_Beastmaster_Unique01_C_AddPetDamageModifier_Params
	{
	public:
		class AOakCharacter*                                       Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique01
	 */
	struct UOakAbility_Beastmaster_Unique01_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2QHJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
