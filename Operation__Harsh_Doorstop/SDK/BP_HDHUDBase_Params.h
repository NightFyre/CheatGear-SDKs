#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.IsTextChatHistoryVisible
	 */
	struct ABP_HDHUDBase_C_IsTextChatHistoryVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.SetTextChatHistoryVisibility
	 */
	struct ABP_HDHUDBase_C_SetTextChatHistoryVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.SetMedicHealingEffectVisibility
	 */
	struct ABP_HDHUDBase_C_SetMedicHealingEffectVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.SetAmmoResupplyEffectVisibility
	 */
	struct ABP_HDHUDBase_C_SetAmmoResupplyEffectVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ResetPlayerStatusEffectsUI
	 */
	struct ABP_HDHUDBase_C_ResetPlayerStatusEffectsUI_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ClearOwningPawnReferences
	 */
	struct ABP_HDHUDBase_C_ClearOwningPawnReferences_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ForceUpdateOwningPawnReferences
	 */
	struct ABP_HDHUDBase_C_ForceUpdateOwningPawnReferences_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ClearAllOwningPlayerReferences
	 */
	struct ABP_HDHUDBase_C_ClearAllOwningPlayerReferences_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ForceUpdateAllOwningPlayerReferences
	 */
	struct ABP_HDHUDBase_C_ForceUpdateAllOwningPlayerReferences_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.CleanupDelegatesForHDPawn
	 */
	struct ABP_HDHUDBase_C_CleanupDelegatesForHDPawn_Params
	{
	public:
		class ABP_HDPlayerCharacterBase_C*                         PlayerChar;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.InitOwningHDPawnDelegates
	 */
	struct ABP_HDHUDBase_C_InitOwningHDPawnDelegates_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.CleanupOwningHDPCDelegates
	 */
	struct ABP_HDHUDBase_C_CleanupOwningHDPCDelegates_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.InitOwningHDPCDelegates
	 */
	struct ABP_HDHUDBase_C_InitOwningHDPCDelegates_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.UpdateHUDVisibility
	 */
	struct ABP_HDHUDBase_C_UpdateHUDVisibility_Params
	{
	public:
		bool                                                       bDestroyOnHide;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YSBT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.HideHUDWidget
	 */
	struct ABP_HDHUDBase_C_HideHUDWidget_Params
	{
	public:
		bool                                                       bDestroyWidgetOnHide;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ShowHUDWidget
	 */
	struct ABP_HDHUDBase_C_ShowHUDWidget_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectEquippedItem
	 */
	struct ABP_HDHUDBase_C_EquipmentSelectEquippedItem_Params
	{
	public:
		class UHDKit*                                              CurrentLoadout;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDBaseWeapon*                                       EquippedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectItemBySlotNum
	 */
	struct ABP_HDHUDBase_C_EquipmentSelectItemBySlotNum_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOutNewSelection;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentGetSelectedItemSlotNum
	 */
	struct ABP_HDHUDBase_C_EquipmentGetSelectedItemSlotNum_Params
	{
	public:
		int32_t                                                    OutSlotNum;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFoundItem;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E9UI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentGetSelectedItem
	 */
	struct ABP_HDHUDBase_C_EquipmentGetSelectedItem_Params
	{
	public:
		class AHDBaseWeapon*                                       OutItemToEquip;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFoundItem;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1BLU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentAddItemsFromLoadout
	 */
	struct ABP_HDHUDBase_C_EquipmentAddItemsFromLoadout_Params
	{
	public:
		class UHDKit*                                              NewLoadout;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDFInventoryComponent*                               PlayerInventory;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseWeapon*                                       EquippedItem;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectItem
	 */
	struct ABP_HDHUDBase_C_EquipmentSelectItem_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectPrevItem
	 */
	struct ABP_HDHUDBase_C_EquipmentSelectPrevItem_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectNextItem
	 */
	struct ABP_HDHUDBase_C_EquipmentSelectNextItem_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ToggleWeaponStatusUI
	 */
	struct ABP_HDHUDBase_C_ToggleWeaponStatusUI_Params
	{
	public:
		bool                                                       bShown;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ToggleEquipmentUI
	 */
	struct ABP_HDHUDBase_C_ToggleEquipmentUI_Params
	{
	public:
		bool                                                       bShown;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M477[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveDrawHUD
	 */
	struct ABP_HDHUDBase_C_ReceiveDrawHUD_Params
	{
	public:
		int32_t                                                    SizeX;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SizeY;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveBeginPlay
	 */
	struct ABP_HDHUDBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveEndPlay
	 */
	struct ABP_HDHUDBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveTick
	 */
	struct ABP_HDHUDBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPawnUpdated
	 */
	struct ABP_HDHUDBase_C_OwningPawnUpdated_Params
	{
	public:
		class APawn*                                               NewOwningPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               PrevOwningPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPawnEquipmentItemChanged
	 */
	struct ABP_HDHUDBase_C_OwningPawnEquipmentItemChanged_Params
	{
	public:
		class ADFBaseCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseItem*                                         NewEquippedItem;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseItem*                                         PrevEquippedItem;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPlayerPossessPawn
	 */
	struct ABP_HDHUDBase_C_OwningPlayerPossessPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPlayerUnpossessPawn
	 */
	struct ABP_HDHUDBase_C_OwningPlayerUnpossessPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDHUDBase.BP_HDHUDBase_C.ExecuteUbergraph_BP_HDHUDBase
	 */
	struct ABP_HDHUDBase_C_ExecuteUbergraph_BP_HDHUDBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
