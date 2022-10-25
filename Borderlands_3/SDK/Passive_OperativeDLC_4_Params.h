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
	 * Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.CalculateAbilityState
	 */
	struct UPassive_OperativeDLC_3_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.OnActivated
	 */
	struct UPassive_OperativeDLC_3_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_OnActionSkillActivated
	 */
	struct UPassive_OperativeDLC_3_C_DLCSkill3_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_OnWeaponUsed
	 */
	struct UPassive_OperativeDLC_3_C_DLCSkill3_OnWeaponUsed_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_UsedBarrier
	 */
	struct UPassive_OperativeDLC_3_C_DLCSkill3_UsedBarrier_Params
	{
	public:
		bool                                                       PickedUp;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_SwappedPlaces
	 */
	struct UPassive_OperativeDLC_3_C_DLCSkill3_SwappedPlaces_Params
	{	};

	/**
	 * Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_SEtDroneTarget
	 */
	struct UPassive_OperativeDLC_3_C_DLCSkill3_SEtDroneTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.ExecuteUbergraph_Passive_OperativeDLC_4
	 */
	struct UPassive_OperativeDLC_3_C_ExecuteUbergraph_Passive_OperativeDLC_4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P7SI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
