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
	 * Function Ability_Anarchy.Ability_Anarchy_C.OnRegistered
	 */
	struct UAbility_Anarchy_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_Anarchy.Ability_Anarchy_C.OnUnregistered
	 */
	struct UAbility_Anarchy_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_Anarchy.Ability_Anarchy_C.OnCauseDeath_CE
	 */
	struct UAbility_Anarchy_C_OnCauseDeath_CE_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Anarchy.Ability_Anarchy_C.Reload Started
	 */
	struct UAbility_Anarchy_C_Reload_Started_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Anarchy.Ability_Anarchy_C.ExecuteUbergraph_Ability_Anarchy
	 */
	struct UAbility_Anarchy_C_ExecuteUbergraph_Ability_Anarchy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3PR2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
