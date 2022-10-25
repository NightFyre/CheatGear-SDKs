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
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.GetNumberOfBonuses
	 */
	struct UPassive_Gunner_DLCSkill_5_C_GetNumberOfBonuses_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.CleanupVariables
	 */
	struct UPassive_Gunner_DLCSkill_5_C_CleanupVariables_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.GetItemDamageType
	 */
	struct UPassive_Gunner_DLCSkill_5_C_GetItemDamageType_Params
	{
	public:
		class AActor*                                              InvSlot;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.OnActivated
	 */
	struct UPassive_Gunner_DLCSkill_5_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.OnResumed
	 */
	struct UPassive_Gunner_DLCSkill_5_C_OnResumed_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DetermineTotalMatchingElements
	 */
	struct UPassive_Gunner_DLCSkill_5_C_DetermineTotalMatchingElements_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.ApplyBonuses
	 */
	struct UPassive_Gunner_DLCSkill_5_C_ApplyBonuses_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.RemoveBonuses
	 */
	struct UPassive_Gunner_DLCSkill_5_C_RemoveBonuses_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.OpenGate
	 */
	struct UPassive_Gunner_DLCSkill_5_C_OpenGate_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_OnWeaponChanged
	 */
	struct UPassive_Gunner_DLCSkill_5_C_DLCSkill5_OnWeaponChanged_Params
	{
	public:
		class AWeapon*                                             NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AWeapon*                                             LastWeapon;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.AddBonusStack
	 */
	struct UPassive_Gunner_DLCSkill_5_C_AddBonusStack_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_UpdateMatchingElements
	 */
	struct UPassive_Gunner_DLCSkill_5_C_DLCSkill5_UpdateMatchingElements_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLC5_OnGrenadeSlotChanged
	 */
	struct UPassive_Gunner_DLCSkill_5_C_DLC5_OnGrenadeSlotChanged_Params
	{
	public:
		class AActor*                                              EquippedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_IronBearExitedAndPlayerReady
	 */
	struct UPassive_Gunner_DLCSkill_5_C_DLCSkill5_IronBearExitedAndPlayerReady_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_OnDownStateStart
	 */
	struct UPassive_Gunner_DLCSkill_5_C_DLCSkill5_OnDownStateStart_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_6
	 */
	struct UPassive_Gunner_DLCSkill_5_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_6_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
