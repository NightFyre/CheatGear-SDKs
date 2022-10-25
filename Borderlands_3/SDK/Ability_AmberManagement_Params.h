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
	 * Function Ability_AmberManagement.Ability_AmberManagement_C.OnCauseDeath_CE
	 */
	struct UAbility_AmberManagement_C_OnCauseDeath_CE_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_AmberManagement.Ability_AmberManagement_C.OnDeactivated
	 */
	struct UAbility_AmberManagement_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_AmberManagement.Ability_AmberManagement_C.OnUnregistered
	 */
	struct UAbility_AmberManagement_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_AmberManagement.Ability_AmberManagement_C.OnActivated
	 */
	struct UAbility_AmberManagement_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_AmberManagement.Ability_AmberManagement_C.ExecuteUbergraph_Ability_AmberManagement
	 */
	struct UAbility_AmberManagement_C_ExecuteUbergraph_Ability_AmberManagement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FCHD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
