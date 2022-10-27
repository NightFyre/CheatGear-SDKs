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
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateAbilityState
	 */
	struct UPassive_Gunner_MatchedSet_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetGearModifierPerInventorySlot
	 */
	struct UPassive_Gunner_MatchedSet_C_SetGearModifierPerInventorySlot_Params
	{
	public:
		class UInventorySlotData*                                  SlotToUse;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewModifyValue;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_29ZH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateTotalGearModifierBonus
	 */
	struct UPassive_Gunner_MatchedSet_C_CalculateTotalGearModifierBonus_Params
	{	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetIsNewRightHandWeapon?
	 */
	struct UPassive_Gunner_MatchedSet_C_GetIsNewRightHandWeapon_Params
	{
	public:
		class AActor*                                              ModifiedEquipment;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ItIs;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E8U7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CleanupGearBonus
	 */
	struct UPassive_Gunner_MatchedSet_C_CleanupGearBonus_Params
	{	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetRightHandManufacturer
	 */
	struct UPassive_Gunner_MatchedSet_C_SetRightHandManufacturer_Params
	{	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetItemManufacturer
	 */
	struct UPassive_Gunner_MatchedSet_C_GetItemManufacturer_Params
	{
	public:
		class AActor*                                              GearToTest;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UManufacturerData*                                   Manufacturer;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.TryToModifyIndividualGearBonus
	 */
	struct UPassive_Gunner_MatchedSet_C_TryToModifyIndividualGearBonus_Params
	{
	public:
		class UInventorySlotData*                                  NewSlot;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Add;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_EquippedItem
	 */
	struct UPassive_Gunner_MatchedSet_C_MatchedSet_EquippedItem_Params
	{
	public:
		class AActor*                                              EquippedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_UnequippedItem
	 */
	struct UPassive_Gunner_MatchedSet_C_MatchedSet_UnequippedItem_Params
	{
	public:
		class AActor*                                              UnequippedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.DetermineTotalGearBonus
	 */
	struct UPassive_Gunner_MatchedSet_C_DetermineTotalGearBonus_Params
	{	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.HandleNewEquippedItem
	 */
	struct UPassive_Gunner_MatchedSet_C_HandleNewEquippedItem_Params
	{
	public:
		class AActor*                                              NewModifiedActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  NewSlotData;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Add;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnActivated
	 */
	struct UPassive_Gunner_MatchedSet_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnResumed
	 */
	struct UPassive_Gunner_MatchedSet_C_OnResumed_Params
	{	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnPaused
	 */
	struct UPassive_Gunner_MatchedSet_C_OnPaused_Params
	{	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_OnWeaponChanged
	 */
	struct UPassive_Gunner_MatchedSet_C_MatchedSet_OnWeaponChanged_Params
	{
	public:
		class AWeapon*                                             NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AWeapon*                                             LastWeapon;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnForcedRefresh
	 */
	struct UPassive_Gunner_MatchedSet_C_OnForcedRefresh_Params
	{	};

	/**
	 * Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.ExecuteUbergraph_Passive_Gunner_MatchedSet
	 */
	struct UPassive_Gunner_MatchedSet_C_ExecuteUbergraph_Passive_Gunner_MatchedSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J7I5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
