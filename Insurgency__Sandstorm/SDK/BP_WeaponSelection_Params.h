#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.PlayFadeOut
	 */
	struct UBP_WeaponSelection_C_PlayFadeOut_Params
	{	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.UpdateSelectedWeapon
	 */
	struct UBP_WeaponSelection_C_UpdateSelectedWeapon_Params
	{	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.RebuildItemList
	 */
	struct UBP_WeaponSelection_C_RebuildItemList_Params
	{	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.BumpFadeTimer
	 */
	struct UBP_WeaponSelection_C_BumpFadeTimer_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.CreateRowForItem
	 */
	struct UBP_WeaponSelection_C_CreateRowForItem_Params
	{
	public:
		class AItemEquipable*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PWVH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.Construct
	 */
	struct UBP_WeaponSelection_C_Construct_Params
	{	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.OnWeaponChanged
	 */
	struct UBP_WeaponSelection_C_OnWeaponChanged_Params
	{
	public:
		class AItemEquipable*                                      NewItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AItemEquipable*                                      PreviousItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.InventoryHasBeenChanged
	 */
	struct UBP_WeaponSelection_C_InventoryHasBeenChanged_Params
	{
	public:
		class AINSSoldier*                                         Soldier;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AItemBase*                                           Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.BindInventoryEvents
	 */
	struct UBP_WeaponSelection_C_BindInventoryEvents_Params
	{	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.InventoryChanged
	 */
	struct UBP_WeaponSelection_C_InventoryChanged_Params
	{	};

	/**
	 * Function BP_WeaponSelection.BP_WeaponSelection_C.ExecuteUbergraph_BP_WeaponSelection
	 */
	struct UBP_WeaponSelection_C_ExecuteUbergraph_BP_WeaponSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
