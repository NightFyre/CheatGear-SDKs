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
	 * Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.GetManualHUDIconValues
	 */
	struct UPassiveSkill_Operative_ColdBore_C_GetManualHUDIconValues_Params
	{
	public:
		int32_t                                                    outStackCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outDuration;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outTimeRemaining;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.OnActivated
	 */
	struct UPassiveSkill_Operative_ColdBore_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.OnWeaponUsed
	 */
	struct UPassiveSkill_Operative_ColdBore_C_OnWeaponUsed_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.ColdBore_OnWeaponChanged
	 */
	struct UPassiveSkill_Operative_ColdBore_C_ColdBore_OnWeaponChanged_Params
	{
	public:
		class AWeapon*                                             NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AWeapon*                                             LastWeapon;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.ExecuteUbergraph_PassiveSkill_Operative_ColdBore
	 */
	struct UPassiveSkill_Operative_ColdBore_C_ExecuteUbergraph_PassiveSkill_Operative_ColdBore_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQGS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
