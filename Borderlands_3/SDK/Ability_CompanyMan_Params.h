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
	 * Function Ability_CompanyMan.Ability_CompanyMan_C.OnActivated
	 */
	struct UAbility_CompanyMan_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_CompanyMan.Ability_CompanyMan_C.OnCausedDeath
	 */
	struct UAbility_CompanyMan_C_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_CompanyMan.Ability_CompanyMan_C.OnInventoryItemPickedUp
	 */
	struct UAbility_CompanyMan_C_OnInventoryItemPickedUp_Params
	{
	public:
		class AActor*                                              PickedUpActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_CompanyMan.Ability_CompanyMan_C.OnDeactivated
	 */
	struct UAbility_CompanyMan_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_CompanyMan.Ability_CompanyMan_C.Start Investing
	 */
	struct UAbility_CompanyMan_C_Start_Investing_Params
	{	};

	/**
	 * Function Ability_CompanyMan.Ability_CompanyMan_C.Stop Investing
	 */
	struct UAbility_CompanyMan_C_Stop_Investing_Params
	{	};

	/**
	 * Function Ability_CompanyMan.Ability_CompanyMan_C.ExecuteUbergraph_Ability_CompanyMan
	 */
	struct UAbility_CompanyMan_C_ExecuteUbergraph_Ability_CompanyMan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CXCO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
