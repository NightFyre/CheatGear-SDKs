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
	 * Function IronBearAbility_Eject.IronBearAbility_Eject_C.QuickSelectWeapon
	 */
	struct UIronBearAbility_Eject_C_QuickSelectWeapon_Params
	{
	public:
		class UInventorySlotData*                                  InvSlot;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWeaponSlotData*                                     WeaponSlot;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4
	 */
	struct UIronBearAbility_Eject_C_GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3
	 */
	struct UIronBearAbility_Eject_C_GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IronBearAbility_Eject.IronBearAbility_Eject_C.OnActivated
	 */
	struct UIronBearAbility_Eject_C_OnActivated_Params
	{	};

	/**
	 * Function IronBearAbility_Eject.IronBearAbility_Eject_C.ExecuteUbergraph_IronBearAbility_Eject
	 */
	struct UIronBearAbility_Eject_C_ExecuteUbergraph_IronBearAbility_Eject_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J6A2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
