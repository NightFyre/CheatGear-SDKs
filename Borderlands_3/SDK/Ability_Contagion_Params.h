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
	 * Function Ability_Contagion.Ability_Contagion_C.OnActivated
	 */
	struct UAbility_Contagion_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Contagion.Ability_Contagion_C.Event_RelaodStarted
	 */
	struct UAbility_Contagion_C_Event_RelaodStarted_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Contagion.Ability_Contagion_C.DotEnd
	 */
	struct UAbility_Contagion_C_DotEnd_Params
	{	};

	/**
	 * Function Ability_Contagion.Ability_Contagion_C.OnDeactivated
	 */
	struct UAbility_Contagion_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Contagion.Ability_Contagion_C.ExecuteUbergraph_Ability_Contagion
	 */
	struct UAbility_Contagion_C_ExecuteUbergraph_Ability_Contagion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CS6V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
