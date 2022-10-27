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
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetRightFireHardPointSlot
	 */
	struct UIronBearAbility_Weapon_C_GetRightFireHardPointSlot_Params
	{
	public:
		class UOakActionAbilityAugmentSlotData*                    res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetLeftFireHardPointSlot
	 */
	struct UIronBearAbility_Weapon_C_GetLeftFireHardPointSlot_Params
	{
	public:
		class UOakActionAbilityAugmentSlotData*                    res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.QuickSelectWeapon
	 */
	struct UIronBearAbility_Weapon_C_QuickSelectWeapon_Params
	{
	public:
		class UInventorySlotData*                                  InvSlot;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWeaponSlotData*                                     WeaponSlot;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10
	 */
	struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9
	 */
	struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8
	 */
	struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7
	 */
	struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6
	 */
	struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnActivated
	 */
	struct UIronBearAbility_Weapon_C_OnActivated_Params
	{	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnPaused
	 */
	struct UIronBearAbility_Weapon_C_OnPaused_Params
	{	};

	/**
	 * Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.ExecuteUbergraph_IronBearAbility_Weapon
	 */
	struct UIronBearAbility_Weapon_C_ExecuteUbergraph_IronBearAbility_Weapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DCXU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
