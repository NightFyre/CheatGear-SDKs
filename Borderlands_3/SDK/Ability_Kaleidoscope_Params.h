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
	 * Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.RefillOtherWeapon
	 */
	struct UAbility_Kaleidoscope_C_RefillOtherWeapon_Params
	{
	public:
		class AOakCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  InventorySlot;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AWeapon*                                             EquippedWeapon;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnActivated
	 */
	struct UAbility_Kaleidoscope_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnDeactivated
	 */
	struct UAbility_Kaleidoscope_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnUnregistered
	 */
	struct UAbility_Kaleidoscope_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnPaused
	 */
	struct UAbility_Kaleidoscope_C_OnPaused_Params
	{	};

	/**
	 * Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedIn_Event
	 */
	struct UAbility_Kaleidoscope_C_NotifyZoomedIn_Event_Params
	{
	public:
		unsigned char                                              Level;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedOut_Event
	 */
	struct UAbility_Kaleidoscope_C_NotifyZoomedOut_Event_Params
	{	};

	/**
	 * Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifySwitchedMode_Event
	 */
	struct UAbility_Kaleidoscope_C_NotifySwitchedMode_Event_Params
	{	};

	/**
	 * Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.ExecuteUbergraph_Ability_Kaleidoscope
	 */
	struct UAbility_Kaleidoscope_C_ExecuteUbergraph_Ability_Kaleidoscope_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
