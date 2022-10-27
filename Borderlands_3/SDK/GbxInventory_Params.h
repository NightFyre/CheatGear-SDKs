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
	 * Function GbxInventory.InventoryAspectData.K2_OnBeginPlay
	 */
	struct UInventoryAspectData_K2_OnBeginPlay_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryAspectData.K2_OnApplyAspect
	 */
	struct UInventoryAspectData_K2_OnApplyAspect_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryAspectData.K2_GetFriendlyDescription
	 */
	struct UInventoryAspectData_K2_GetFriendlyDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryAspectData.K2_CloneAppearance
	 */
	struct UInventoryAspectData_K2_CloneAppearance_Params
	{
	public:
		class AActor*                                              CloneActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InventoryActor;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryData.EnumeratePickupFlyToTargets
	 */
	struct UInventoryData_EnumeratePickupFlyToTargets_Params
	{
	public:
		TArray<class FName>                                        Targets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.SizeInInventory
	 */
	struct UInventoryListComponent_SizeInInventory_Params
	{
	public:
		class AInventoryItemPickup*                                PickupToTest;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.ServerTransferItem
	 */
	struct UInventoryListComponent_ServerTransferItem_Params
	{
	public:
		struct FInventoryListEntryHandle                           InventoryItemHandle;                                     // 0x0000(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E53W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DestinationActor;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.ServerSetItemUIFlags
	 */
	struct UInventoryListComponent_ServerSetItemUIFlags_Params
	{
	public:
		struct FInventoryListEntryHandle                           Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Flags;                                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              FlagsMask;                                               // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.ServerSetItemsUIFlags
	 */
	struct UInventoryListComponent_ServerSetItemsUIFlags_Params
	{
	public:
		class UInventoryCategoryData*                              Category;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Flags;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              FlagsMask;                                               // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.ServerRemoveItem
	 */
	struct UInventoryListComponent_ServerRemoveItem_Params
	{
	public:
		struct FInventoryListEntryHandle                           InventoryItemHandle;                                     // 0x0000(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.ServerRemoveCustomizationPartFromInventoryActor
	 */
	struct UInventoryListComponent_ServerRemoveCustomizationPartFromInventoryActor_Params
	{
	public:
		struct FInventoryListEntryHandle                           InventoryItemHandle;                                     // 0x0000(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6ZQD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryCustomizationPartData*                     Part;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.ServerDropItem
	 */
	struct UInventoryListComponent_ServerDropItem_Params
	{
	public:
		struct FInventoryListEntryHandle                           InventoryItemHandle;                                     // 0x0000(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InitialLocation;                                         // 0x0004(0x000C)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InitialRotation;                                         // 0x0010(0x000C)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.ServerConsumeItem
	 */
	struct UInventoryListComponent_ServerConsumeItem_Params
	{
	public:
		struct FInventoryListEntryHandle                           InventoryItemHandle;                                     // 0x0000(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.ServerAddCustomizationPartToInventoryActor
	 */
	struct UInventoryListComponent_ServerAddCustomizationPartToInventoryActor_Params
	{
	public:
		struct FInventoryListEntryHandle                           InventoryItemHandle;                                     // 0x0000(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PNU6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryCustomizationPartData*                     Part;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.IsInventoryFull
	 */
	struct UInventoryListComponent_IsInventoryFull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.HasActorInList
	 */
	struct UInventoryListComponent_HasActorInList_Params
	{
	public:
		class AActor*                                              ItemActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetStoredInventoryActor
	 */
	struct UInventoryListComponent_GetStoredInventoryActor_Params
	{
	public:
		struct FInventoryListEntryHandle                           InventoryItemHandle;                                     // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HBE8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetSelectedItemQuantity
	 */
	struct UInventoryListComponent_GetSelectedItemQuantity_Params
	{
	public:
		class UInventoryCategoryData*                              ChildTypeToGet;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxQuantity;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetMaxInventoryItems
	 */
	struct UInventoryListComponent_GetMaxInventoryItems_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetItem
	 */
	struct UInventoryListComponent_GetItem_Params
	{
	public:
		struct FInventoryListEntryHandle                           InventoryItemHandle;                                     // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_26RA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryListEntry                                 ListEntry;                                               // 0x0008(0x0040)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayName
	 */
	struct UInventoryListComponent_GetInventoryListEntryDisplayName_Params
	{
	public:
		struct FInventoryListEntry                                 ListEntry;                                               // 0x0000(0x0040)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0040(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayDescription
	 */
	struct UInventoryListComponent_GetInventoryListEntryDisplayDescription_Params
	{
	public:
		struct FInventoryListEntry                                 ListEntry;                                               // 0x0000(0x0040)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0040(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetInventoryItemCount
	 */
	struct UInventoryListComponent_GetInventoryItemCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetInventoryHandlesOfType
	 */
	struct UInventoryListComponent_GetInventoryHandlesOfType_Params
	{
	public:
		class UInventoryCategoryData*                              ChildTypeToGet;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FInventoryListEntryHandle>                   ItemHandleList;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetInventoryDisplayName
	 */
	struct UInventoryListComponent_GetInventoryDisplayName_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetInventoryDisplayDescription
	 */
	struct UInventoryListComponent_GetInventoryDisplayDescription_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetCategoryOnlyInventoryHandles
	 */
	struct UInventoryListComponent_GetCategoryOnlyInventoryHandles_Params
	{
	public:
		class UInventoryCategoryData*                              ChildTypeToGet;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FInventoryListEntryHandle>                   ItemHandleList;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetCategoryItemQuantity
	 */
	struct UInventoryListComponent_GetCategoryItemQuantity_Params
	{
	public:
		class UInventoryCategoryData*                              ItemCategory;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetAndConsumeSelected
	 */
	struct UInventoryListComponent_GetAndConsumeSelected_Params
	{
	public:
		class UInventoryCategoryData*                              TypeToConsume;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2DN3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.GetAndConsumeItem
	 */
	struct UInventoryListComponent_GetAndConsumeItem_Params
	{
	public:
		struct FInventoryListEntryHandle                           InventoryItemHandle;                                     // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.ClearInventory
	 */
	struct UInventoryListComponent_ClearInventory_Params
	{
	public:
		bool                                                       DestroyInventory;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.CanUseSelected
	 */
	struct UInventoryListComponent_CanUseSelected_Params
	{
	public:
		class UInventoryCategoryData*                              ChildTypeToUse;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.CanSwapItemForPickup
	 */
	struct UInventoryListComponent_CanSwapItemForPickup_Params
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInventoryItemPickup*                                Pickup;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.AddOrUpdateCategoryOnly
	 */
	struct UInventoryListComponent_AddOrUpdateCategoryOnly_Params
	{
	public:
		class UInventoryCategoryData*                              ItemCategory;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.AddItemFromPickup
	 */
	struct UInventoryListComponent_AddItemFromPickup_Params
	{
	public:
		class AInventoryItemPickup*                                PickupActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryListEntryHandle                           ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.AddExternalItemEx
	 */
	struct UInventoryListComponent_AddExternalItemEx_Params
	{
	public:
		class UInventoryCategoryData*                              ItemCategory;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorToAdd;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Flags;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bConditionalDestroyActor;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y927[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DesiredSlot;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBypassInventoryFull;                                    // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9027[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryListEntryHandle                           ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.AddExternalItem
	 */
	struct UInventoryListComponent_AddExternalItem_Params
	{
	public:
		class UInventoryCategoryData*                              ItemCategory;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorToAdd;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AddedByPickup;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoEquip;                                              // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bConditionalDestroyActor;                                // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3TKV[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DesiredSlot;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBypassInventoryFull;                                    // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SQ11[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryListEntryHandle                           ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryListComponent.AddCategory
	 */
	struct UInventoryListComponent_AddCategory_Params
	{
	public:
		class UInventoryCategoryData*                              ItemCategory;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TrackQuantity;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.PostBeginPlay
	 */
	struct UInventoryBalanceStateComponent_PostBeginPlay_Params
	{	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.OnRep_ReplicatedUIStats
	 */
	struct UInventoryBalanceStateComponent_OnRep_ReplicatedUIStats_Params
	{	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.NotifyUnequipped
	 */
	struct UInventoryBalanceStateComponent_NotifyUnequipped_Params
	{
	public:
		class APawn*                                               OldInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.NotifyEquipped
	 */
	struct UInventoryBalanceStateComponent_NotifyEquipped_Params
	{
	public:
		class APawn*                                               NewInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.NotifyAttached
	 */
	struct UInventoryBalanceStateComponent_NotifyAttached_Params
	{
	public:
		class APawn*                                               Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.K2_GetDamageType
	 */
	struct UInventoryBalanceStateComponent_K2_GetDamageType_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.IsManufactureredBy
	 */
	struct UInventoryBalanceStateComponent_IsManufactureredBy_Params
	{
	public:
		class UManufacturerData*                                   Manufacturer;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetReRollCount
	 */
	struct UInventoryBalanceStateComponent_GetReRollCount_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetPartList
	 */
	struct UInventoryBalanceStateComponent_GetPartList_Params
	{
	public:
		TArray<class UInventoryPartData*>                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetMonetaryValue
	 */
	struct UInventoryBalanceStateComponent_GetMonetaryValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetManufacturer
	 */
	struct UInventoryBalanceStateComponent_GetManufacturer_Params
	{
	public:
		class UManufacturerData*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryScoreValue
	 */
	struct UInventoryBalanceStateComponent_GetInventoryScoreValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamOverride
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityLootBeamOverride_Params
	{
	public:
		class UParticleSystem*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamHeight
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityLootBeamHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootAudioStinger
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityLootAudioStinger_Params
	{
	public:
		class UWwiseEvent*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpanType
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityLifeSpanType_Params
	{
	public:
		EDropLifeSpanType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpan
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityLifeSpan_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityFrameName
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityFrameName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityDisplayName
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityData
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityData_Params
	{
	public:
		class UInventoryRarityData*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorOutline
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityColorOutline_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorFX
	 */
	struct UInventoryBalanceStateComponent_GetInventoryRarityColorFX_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryDisplayRarityOutline
	 */
	struct UInventoryBalanceStateComponent_GetInventoryDisplayRarityOutline_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryData
	 */
	struct UInventoryBalanceStateComponent_GetInventoryData_Params
	{
	public:
		class UInventoryData*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetInventoryBalanceData
	 */
	struct UInventoryBalanceStateComponent_GetInventoryBalanceData_Params
	{
	public:
		class UInventoryBalanceData*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetGenericPartList
	 */
	struct UInventoryBalanceStateComponent_GetGenericPartList_Params
	{
	public:
		TArray<class UInventoryGenericPartData*>                   ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetDisplayName
	 */
	struct UInventoryBalanceStateComponent_GetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetDamageType
	 */
	struct UInventoryBalanceStateComponent_GetDamageType_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.GetCustomizationPartList
	 */
	struct UInventoryBalanceStateComponent_GetCustomizationPartList_Params
	{
	public:
		TArray<class UInventoryCustomizationPartData*>             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBalanceStateComponent.CloneAppearance
	 */
	struct UInventoryBalanceStateComponent_CloneAppearance_Params
	{
	public:
		class AActor*                                              DestActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ParentComp;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAbsoluteScale;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.WaitForBalanceState
	 */
	struct AInventoryItemPickup_WaitForBalanceState_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.SetCanOnlyBePickedUpByOwner
	 */
	struct AInventoryItemPickup_SetCanOnlyBePickedUpByOwner_Params
	{
	public:
		bool                                                       bNewCanOnlyBePickedUpByOwnerController;                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3VKK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         OwnerController;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.ResetBumpOnPickupFail
	 */
	struct AInventoryItemPickup_ResetBumpOnPickupFail_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnUsedBy
	 */
	struct AInventoryItemPickup_OnUsedBy_Params
	{
	public:
		struct FUseEvent                                           UseEvent;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnRespawnEvent
	 */
	struct AInventoryItemPickup_OnRespawnEvent_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnRep_RepLootSpawnAction
	 */
	struct AInventoryItemPickup_OnRep_RepLootSpawnAction_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnRep_PickupActorClientSpawnData
	 */
	struct AInventoryItemPickup_OnRep_PickupActorClientSpawnData_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnRep_PickupActor
	 */
	struct AInventoryItemPickup_OnRep_PickupActor_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnRep_PickedUpBy
	 */
	struct AInventoryItemPickup_OnRep_PickedUpBy_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnRep_IsActive
	 */
	struct AInventoryItemPickup_OnRep_IsActive_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnRep_BumpAngularDir
	 */
	struct AInventoryItemPickup_OnRep_BumpAngularDir_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnPickedUpEvent
	 */
	struct AInventoryItemPickup_OnPickedUpEvent_Params
	{
	public:
		class AActor*                                              WasPickedUpBy;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.OnLookedAtByPlayer
	 */
	struct AInventoryItemPickup_OnLookedAtByPlayer_Params
	{
	public:
		class APlayerController*                                   InstigatingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanInteractWith;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7DMX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewUsableComponentImpactPoint;                           // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewUsableDistanceAway;                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.IsPickupInitialized
	 */
	struct AInventoryItemPickup_IsPickupInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.GiveInventoryToUser
	 */
	struct AInventoryItemPickup_GiveInventoryToUser_Params
	{
	public:
		class AActor*                                              Other;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoEquip;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.GetMeshComponent
	 */
	struct AInventoryItemPickup_GetMeshComponent_Params
	{
	public:
		class UMeshComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootBeamOverride
	 */
	struct AInventoryItemPickup_GetInventoryRarityLootBeamOverride_Params
	{
	public:
		class UParticleSystem*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootAudioStinger
	 */
	struct AInventoryItemPickup_GetInventoryRarityLootAudioStinger_Params
	{
	public:
		class UWwiseEvent*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.GetInventoryRarityLifeSpanType
	 */
	struct AInventoryItemPickup_GetInventoryRarityLifeSpanType_Params
	{
	public:
		EDropLifeSpanType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorOutline
	 */
	struct AInventoryItemPickup_GetInventoryRarityColorOutline_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorFX
	 */
	struct AInventoryItemPickup_GetInventoryRarityColorFX_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.GetInventoryDisplayRarityOutline
	 */
	struct AInventoryItemPickup_GetInventoryDisplayRarityOutline_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.GetInventoryBalanceStateComponent
	 */
	struct AInventoryItemPickup_GetInventoryBalanceStateComponent_Params
	{
	public:
		class UInventoryBalanceStateComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.DeactivatePickup
	 */
	struct AInventoryItemPickup_DeactivatePickup_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.CanBePickedUp
	 */
	struct AInventoryItemPickup_CanBePickedUp_Params
	{
	public:
		class AActor*                                              Other;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       UsedByOther;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseHeld;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForMassPickup;                                          // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000B(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryItemPickup.ActivatePickup
	 */
	struct AInventoryItemPickup_ActivatePickup_Params
	{	};

	/**
	 * Function GbxInventory.InventoryItemPickup.ActivateAfterSpawnDelay
	 */
	struct AInventoryItemPickup_ActivateAfterSpawnDelay_Params
	{	};

	/**
	 * Function GbxInventory.DroppedInventoryItemPickup.OnRep_ShrinkLifeSpan
	 */
	struct ADroppedInventoryItemPickup_OnRep_ShrinkLifeSpan_Params
	{	};

	/**
	 * Function GbxInventory.DroppedInventoryItemPickup.OnRep_InitialMassScale
	 */
	struct ADroppedInventoryItemPickup_OnRep_InitialMassScale_Params
	{	};

	/**
	 * Function GbxInventory.DroppedInventoryItemPickup.OnRep_DroppedQuantity
	 */
	struct ADroppedInventoryItemPickup_OnRep_DroppedQuantity_Params
	{	};

	/**
	 * Function GbxInventory.DroppedInventoryItemPickup.OnPickupHit
	 */
	struct ADroppedInventoryItemPickup_OnPickupHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WIEG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsWake
	 */
	struct ADroppedInventoryItemPickup_OnPhysicsWake_Params
	{
	public:
		class UPrimitiveComponent*                                 WakingComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsSleep
	 */
	struct ADroppedInventoryItemPickup_OnPhysicsSleep_Params
	{
	public:
		class UPrimitiveComponent*                                 WakingComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryPartData.GetMonetaryValueModifier
	 */
	struct UInventoryPartData_GetMonetaryValueModifier_Params
	{
	public:
		struct FAttributeInitializationData                        ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRaritySortValue
	 */
	struct UInventoryRarityData_GetRaritySortValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRarityOutlineDepthStencilValue
	 */
	struct UInventoryRarityData_GetRarityOutlineDepthStencilValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRarityLootBeamOverride
	 */
	struct UInventoryRarityData_GetRarityLootBeamOverride_Params
	{
	public:
		bool                                                       bInventoryHasAFoilPart;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5RTU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRarityLootBeamHeight
	 */
	struct UInventoryRarityData_GetRarityLootBeamHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRarityLootAudioStinger
	 */
	struct UInventoryRarityData_GetRarityLootAudioStinger_Params
	{
	public:
		class UWwiseEvent*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRarityLifeSpanType
	 */
	struct UInventoryRarityData_GetRarityLifeSpanType_Params
	{
	public:
		EDropLifeSpanType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRarityLifeSpan
	 */
	struct UInventoryRarityData_GetRarityLifeSpan_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRarityDisplayName
	 */
	struct UInventoryRarityData_GetRarityDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRarityColorOutline
	 */
	struct UInventoryRarityData_GetRarityColorOutline_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetRarityColorFX
	 */
	struct UInventoryRarityData_GetRarityColorFX_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetItemScoreRarityModifier
	 */
	struct UInventoryRarityData_GetItemScoreRarityModifier_Params
	{
	public:
		struct FAttributeInitializationData                        ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryRarityData.GetDisplayRarityOutline
	 */
	struct UInventoryRarityData_GetDisplayRarityOutline_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.LootableComponent.SpawnAndDropLoot
	 */
	struct ULootableComponent_SpawnAndDropLoot_Params
	{
	public:
		class FName                                                SelectedConfigurationName;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.LootableComponent.SpawnAndAttachLoot
	 */
	struct ULootableComponent_SpawnAndAttachLoot_Params
	{
	public:
		class FName                                                SelectedConfigurationName;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.LootableComponent.SetBalanceContextOverride
	 */
	struct ULootableComponent_SetBalanceContextOverride_Params
	{
	public:
		class AActor*                                              NewOverrideContext;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnlyUseForGameStage;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.LootableComponent.InitializeLootConfigurations
	 */
	struct ULootableComponent_InitializeLootConfigurations_Params
	{
	public:
		class ULootableBalanceData*                                LootableBalanceData;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.LootableComponent.GetAttachedPickups
	 */
	struct ULootableComponent_GetAttachedPickups_Params
	{
	public:
		TArray<class ADroppedInventoryItemPickup*>                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.LootableComponent.ActivateAttachedLoot
	 */
	struct ULootableComponent_ActivateAttachedLoot_Params
	{	};

	/**
	 * Function GbxInventory.InventoryBlueprintLibrary.GetPossibleGenericParts
	 */
	struct UInventoryBlueprintLibrary_GetPossibleGenericParts_Params
	{
	public:
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               Tags;                                                    // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bMustHaveAllTags;                                        // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExcludeCurrentlySelectedParts;                          // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_COH8[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UInventoryGenericPartData*>                   ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBlueprintLibrary.GetInventoryBalanceState
	 */
	struct UInventoryBlueprintLibrary_GetInventoryBalanceState_Params
	{
	public:
		class AActor*                                              Inventory;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryBalanceStateComponent*                     ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBlueprintLibrary.CreateInventory
	 */
	struct UInventoryBlueprintLibrary_CreateInventory_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCreatePickup;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NIJU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SpawnLocation;                                           // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryBalanceStateInitializationData            InitData;                                                // 0x0018(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBlueprintLibrary.CloneInventory
	 */
	struct UInventoryBlueprintLibrary_CloneInventory_Params
	{
	public:
		class AActor*                                              SourceInventory;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryBlueprintLibrary.BuildInventory
	 */
	struct UInventoryBlueprintLibrary_BuildInventory_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCreatePickup;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BW91[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SpawnLocation;                                           // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryBalanceStateInitializationData            InitData;                                                // 0x0018(0x0068)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryGenericPartExpansionData.EnumeratePartListForPartType
	 */
	struct UInventoryGenericPartExpansionData_EnumeratePartListForPartType_Params
	{
	public:
		unsigned char                                              PartType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WNQ3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UActorPartData*>                              OutPartList;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.InventoryOwnerInterface.AttachedItemPickedUp
	 */
	struct UInventoryOwnerInterface_AttachedItemPickedUp_Params
	{
	public:
		class AInventoryItemPickup*                                InventoryItemPickedUp;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              PickedUpBy;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.ItemPoolPartSelectionOverrideData.EnumerateInventoryParts
	 */
	struct UItemPoolPartSelectionOverrideData_EnumerateInventoryParts_Params
	{
	public:
		unsigned char                                              PartType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8HKY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UActorPartData*>                              OutPartList;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInventory.LootFunctionLibrary.SpawnItemsRaw
	 */
	struct ULootFunctionLibrary_SpawnItemsRaw_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UItemPoolListData*>                           ItemPoolLists;                                           // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FItemPoolInfo>                               ExtraItemPools;                                          // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    GameStage;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x002C(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0038(0x000C)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      InitialVelocity;                                         // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
