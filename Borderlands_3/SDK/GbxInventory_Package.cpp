/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0301C640
	 * 		Name   -> Function GbxInventory.InventoryAspectData.K2_OnBeginPlay
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryAspectData::K2_OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryAspectData.K2_OnBeginPlay");
		
		UInventoryAspectData_K2_OnBeginPlay_Params params {};
		params.InventoryActor = InventoryActor;
		params.InventoryBalanceState = InventoryBalanceState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C570
	 * 		Name   -> Function GbxInventory.InventoryAspectData.K2_OnApplyAspect
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryAspectData::K2_OnApplyAspect(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryAspectData.K2_OnApplyAspect");
		
		UInventoryAspectData_K2_OnApplyAspect_Params params {};
		params.InventoryActor = InventoryActor;
		params.InventoryBalanceState = InventoryBalanceState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C4F0
	 * 		Name   -> Function GbxInventory.InventoryAspectData.K2_GetFriendlyDescription
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class FString UInventoryAspectData::K2_GetFriendlyDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryAspectData.K2_GetFriendlyDescription");
		
		UInventoryAspectData_K2_GetFriendlyDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C3B0
	 * 		Name   -> Function GbxInventory.InventoryAspectData.K2_CloneAppearance
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      CloneActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InventoryActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryAspectData::K2_CloneAppearance(class AActor* CloneActor, class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryAspectData.K2_CloneAppearance");
		
		UInventoryAspectData_K2_CloneAppearance_Params params {};
		params.CloneActor = CloneActor;
		params.InventoryActor = InventoryActor;
		params.InventoryBalanceState = InventoryBalanceState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryAspectData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryAspectData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryAspectData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryBalanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryBalanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryBalanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030220F0
	 * 		Name   -> Function GbxInventory.InventoryData.EnumeratePickupFlyToTargets
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class FName>                                Targets                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryData::EnumeratePickupFlyToTargets(TArray<class FName>* Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryData.EnumeratePickupFlyToTargets");
		
		UInventoryData_EnumeratePickupFlyToTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Targets != nullptr)
			*Targets = params.Targets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryData_Simple.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryData_Simple::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryData_Simple");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03023AF0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.SizeInInventory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AInventoryItemPickup*                        PickupToTest                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryListComponent::SizeInInventory(class AInventoryItemPickup* PickupToTest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.SizeInInventory");
		
		UInventoryListComponent_SizeInInventory_Params params {};
		params.PickupToTest = PickupToTest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03023900
	 * 		Name   -> Function GbxInventory.InventoryListComponent.ServerTransferItem
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   InventoryItemHandle                                        (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DestinationActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::ServerTransferItem(const struct FInventoryListEntryHandle& InventoryItemHandle, class AActor* DestinationActor, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerTransferItem");
		
		UInventoryListComponent_ServerTransferItem_Params params {};
		params.InventoryItemHandle = InventoryItemHandle;
		params.DestinationActor = DestinationActor;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03023690
	 * 		Name   -> Function GbxInventory.InventoryListComponent.ServerSetItemUIFlags
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   Handle                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      FlagsMask                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::ServerSetItemUIFlags(const struct FInventoryListEntryHandle& Handle, unsigned char Flags, unsigned char FlagsMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerSetItemUIFlags");
		
		UInventoryListComponent_ServerSetItemUIFlags_Params params {};
		params.Handle = Handle;
		params.Flags = Flags;
		params.FlagsMask = FlagsMask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030237D0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.ServerSetItemsUIFlags
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      FlagsMask                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::ServerSetItemsUIFlags(class UInventoryCategoryData* Category, unsigned char Flags, unsigned char FlagsMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerSetItemsUIFlags");
		
		UInventoryListComponent_ServerSetItemsUIFlags_Params params {};
		params.Category = Category;
		params.Flags = Flags;
		params.FlagsMask = FlagsMask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030235E0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.ServerRemoveItem
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   InventoryItemHandle                                        (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::ServerRemoveItem(const struct FInventoryListEntryHandle& InventoryItemHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerRemoveItem");
		
		UInventoryListComponent_ServerRemoveItem_Params params {};
		params.InventoryItemHandle = InventoryItemHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030234E0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.ServerRemoveCustomizationPartFromInventoryActor
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   InventoryItemHandle                                        (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryCustomizationPartData*             Part                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::ServerRemoveCustomizationPartFromInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerRemoveCustomizationPartFromInventoryActor");
		
		UInventoryListComponent_ServerRemoveCustomizationPartFromInventoryActor_Params params {};
		params.InventoryItemHandle = InventoryItemHandle;
		params.Part = Part;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030233B0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.ServerDropItem
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   InventoryItemHandle                                        (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InitialLocation                                            (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InitialRotation                                            (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::ServerDropItem(const struct FInventoryListEntryHandle& InventoryItemHandle, const struct FVector& InitialLocation, const struct FRotator& InitialRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerDropItem");
		
		UInventoryListComponent_ServerDropItem_Params params {};
		params.InventoryItemHandle = InventoryItemHandle;
		params.InitialLocation = InitialLocation;
		params.InitialRotation = InitialRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030232B0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.ServerConsumeItem
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   InventoryItemHandle                                        (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::ServerConsumeItem(const struct FInventoryListEntryHandle& InventoryItemHandle, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerConsumeItem");
		
		UInventoryListComponent_ServerConsumeItem_Params params {};
		params.InventoryItemHandle = InventoryItemHandle;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030231B0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.ServerAddCustomizationPartToInventoryActor
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   InventoryItemHandle                                        (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryCustomizationPartData*             Part                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::ServerAddCustomizationPartToInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerAddCustomizationPartToInventoryActor");
		
		UInventoryListComponent_ServerAddCustomizationPartToInventoryActor_Params params {};
		params.InventoryItemHandle = InventoryItemHandle;
		params.Part = Part;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022F60
	 * 		Name   -> Function GbxInventory.InventoryListComponent.IsInventoryFull
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UInventoryListComponent::IsInventoryFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.IsInventoryFull");
		
		UInventoryListComponent_IsInventoryFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022ED0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.HasActorInList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ItemActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryListComponent::HasActorInList(class AActor* ItemActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.HasActorInList");
		
		UInventoryListComponent_HasActorInList_Params params {};
		params.ItemActor = ItemActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022D50
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetStoredInventoryActor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   InventoryItemHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UInventoryListComponent::GetStoredInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetStoredInventoryActor");
		
		UInventoryListComponent_GetStoredInventoryActor_Params params {};
		params.InventoryItemHandle = InventoryItemHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022C30
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetSelectedItemQuantity
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      ChildTypeToGet                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxQuantity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::GetSelectedItemQuantity(class UInventoryCategoryData* ChildTypeToGet, int32_t* Quantity, int32_t* MaxQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetSelectedItemQuantity");
		
		UInventoryListComponent_GetSelectedItemQuantity_Params params {};
		params.ChildTypeToGet = ChildTypeToGet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Quantity != nullptr)
			*Quantity = params.Quantity;
		if (MaxQuantity != nullptr)
			*MaxQuantity = params.MaxQuantity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022BD0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetMaxInventoryItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UInventoryListComponent::GetMaxInventoryItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetMaxInventoryItems");
		
		UInventoryListComponent_GetMaxInventoryItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022AD0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetItem
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   InventoryItemHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryListEntry                         ListEntry                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UInventoryListComponent::GetItem(const struct FInventoryListEntryHandle& InventoryItemHandle, struct FInventoryListEntry* ListEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetItem");
		
		UInventoryListComponent_GetItem_Params params {};
		params.InventoryItemHandle = InventoryItemHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ListEntry != nullptr)
			*ListEntry = params.ListEntry;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030228D0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInventoryListEntry                         ListEntry                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FText UInventoryListComponent::STATIC_GetInventoryListEntryDisplayName(struct FInventoryListEntry* ListEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayName");
		
		UInventoryListComponent_GetInventoryListEntryDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ListEntry != nullptr)
			*ListEntry = params.ListEntry;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030227E0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInventoryListEntry                         ListEntry                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FText UInventoryListComponent::STATIC_GetInventoryListEntryDisplayDescription(struct FInventoryListEntry* ListEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayDescription");
		
		UInventoryListComponent_GetInventoryListEntryDisplayDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ListEntry != nullptr)
			*ListEntry = params.ListEntry;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030227B0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetInventoryItemCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UInventoryListComponent::GetInventoryItemCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryItemCount");
		
		UInventoryListComponent_GetInventoryItemCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030226C0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetInventoryHandlesOfType
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      ChildTypeToGet                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInventoryListEntryHandle>           ItemHandleList                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::GetInventoryHandlesOfType(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryHandlesOfType");
		
		UInventoryListComponent_GetInventoryHandlesOfType_Params params {};
		params.ChildTypeToGet = ChildTypeToGet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemHandleList != nullptr)
			*ItemHandleList = params.ItemHandleList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030225C0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetInventoryDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UInventoryListComponent::STATIC_GetInventoryDisplayName(class AActor* InventoryActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryDisplayName");
		
		UInventoryListComponent_GetInventoryDisplayName_Params params {};
		params.InventoryActor = InventoryActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030224F0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetInventoryDisplayDescription
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UInventoryListComponent::STATIC_GetInventoryDisplayDescription(class AActor* InventoryActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryDisplayDescription");
		
		UInventoryListComponent_GetInventoryDisplayDescription_Params params {};
		params.InventoryActor = InventoryActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030223D0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetCategoryOnlyInventoryHandles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      ChildTypeToGet                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInventoryListEntryHandle>           ItemHandleList                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::GetCategoryOnlyInventoryHandles(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetCategoryOnlyInventoryHandles");
		
		UInventoryListComponent_GetCategoryOnlyInventoryHandles_Params params {};
		params.ChildTypeToGet = ChildTypeToGet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemHandleList != nullptr)
			*ItemHandleList = params.ItemHandleList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022340
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetCategoryItemQuantity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      ItemCategory                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryListComponent::GetCategoryItemQuantity(class UInventoryCategoryData* ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetCategoryItemQuantity");
		
		UInventoryListComponent_GetCategoryItemQuantity_Params params {};
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022280
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetAndConsumeSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      TypeToConsume                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UInventoryListComponent::GetAndConsumeSelected(class UInventoryCategoryData* TypeToConsume, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetAndConsumeSelected");
		
		UInventoryListComponent_GetAndConsumeSelected_Params params {};
		params.TypeToConsume = TypeToConsume;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030221A0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.GetAndConsumeItem
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInventoryListEntryHandle                   InventoryItemHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UInventoryListComponent::GetAndConsumeItem(const struct FInventoryListEntryHandle& InventoryItemHandle, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetAndConsumeItem");
		
		UInventoryListComponent_GetAndConsumeItem_Params params {};
		params.InventoryItemHandle = InventoryItemHandle;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03021F50
	 * 		Name   -> Function GbxInventory.InventoryListComponent.ClearInventory
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               DestroyInventory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::ClearInventory(bool DestroyInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ClearInventory");
		
		UInventoryListComponent_ClearInventory_Params params {};
		params.DestroyInventory = DestroyInventory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03021E90
	 * 		Name   -> Function GbxInventory.InventoryListComponent.CanUseSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      ChildTypeToUse                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryListComponent::CanUseSelected(class UInventoryCategoryData* ChildTypeToUse, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.CanUseSelected");
		
		UInventoryListComponent_CanUseSelected_Params params {};
		params.ChildTypeToUse = ChildTypeToUse;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03021DC0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.CanSwapItemForPickup
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInventoryItemPickup*                        Pickup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryListComponent::CanSwapItemForPickup(class AActor* Item, class AInventoryItemPickup* Pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.CanSwapItemForPickup");
		
		UInventoryListComponent_CanSwapItemForPickup_Params params {};
		params.Item = Item;
		params.Pickup = Pickup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03021B90
	 * 		Name   -> Function GbxInventory.InventoryListComponent.AddOrUpdateCategoryOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      ItemCategory                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryListComponent::AddOrUpdateCategoryOnly(class UInventoryCategoryData* ItemCategory, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddOrUpdateCategoryOnly");
		
		UInventoryListComponent_AddOrUpdateCategoryOnly_Params params {};
		params.ItemCategory = ItemCategory;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03021B00
	 * 		Name   -> Function GbxInventory.InventoryListComponent.AddItemFromPickup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AInventoryItemPickup*                        PickupActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInventoryListEntryHandle UInventoryListComponent::AddItemFromPickup(class AInventoryItemPickup* PickupActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddItemFromPickup");
		
		UInventoryListComponent_AddItemFromPickup_Params params {};
		params.PickupActor = PickupActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030218F0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.AddExternalItemEx
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      ItemCategory                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorToAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConditionalDestroyActor                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DesiredSlot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBypassInventoryFull                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInventoryListEntryHandle UInventoryListComponent::AddExternalItemEx(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int32_t Quantity, int32_t Flags, bool bConditionalDestroyActor, int32_t DesiredSlot, bool bBypassInventoryFull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddExternalItemEx");
		
		UInventoryListComponent_AddExternalItemEx_Params params {};
		params.ItemCategory = ItemCategory;
		params.ActorToAdd = ActorToAdd;
		params.Quantity = Quantity;
		params.Flags = Flags;
		params.bConditionalDestroyActor = bConditionalDestroyActor;
		params.DesiredSlot = DesiredSlot;
		params.bBypassInventoryFull = bBypassInventoryFull;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03021690
	 * 		Name   -> Function GbxInventory.InventoryListComponent.AddExternalItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      ItemCategory                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorToAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AddedByPickup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoEquip                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConditionalDestroyActor                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DesiredSlot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBypassInventoryFull                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInventoryListEntryHandle UInventoryListComponent::AddExternalItem(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int32_t Quantity, bool AddedByPickup, bool bAutoEquip, bool bConditionalDestroyActor, int32_t DesiredSlot, bool bBypassInventoryFull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddExternalItem");
		
		UInventoryListComponent_AddExternalItem_Params params {};
		params.ItemCategory = ItemCategory;
		params.ActorToAdd = ActorToAdd;
		params.Quantity = Quantity;
		params.AddedByPickup = AddedByPickup;
		params.bAutoEquip = bAutoEquip;
		params.bConditionalDestroyActor = bConditionalDestroyActor;
		params.DesiredSlot = DesiredSlot;
		params.bBypassInventoryFull = bBypassInventoryFull;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030215D0
	 * 		Name   -> Function GbxInventory.InventoryListComponent.AddCategory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInventoryCategoryData*                      ItemCategory                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TrackQuantity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryListComponent::AddCategory(class UInventoryCategoryData* ItemCategory, bool TrackQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddCategory");
		
		UInventoryListComponent_AddCategory_Params params {};
		params.ItemCategory = ItemCategory;
		params.TrackQuantity = TrackQuantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryListComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryListComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryListComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301CC70
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.PostBeginPlay
	 * 		Flags  -> (Native, Protected)
	 */
	void UInventoryBalanceStateComponent::PostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.PostBeginPlay");
		
		UInventoryBalanceStateComponent_PostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301CC30
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.OnRep_ReplicatedUIStats
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UInventoryBalanceStateComponent::OnRep_ReplicatedUIStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.OnRep_ReplicatedUIStats");
		
		UInventoryBalanceStateComponent_OnRep_ReplicatedUIStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C830
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.NotifyUnequipped
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       OldInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryBalanceStateComponent::NotifyUnequipped(class APawn* OldInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.NotifyUnequipped");
		
		UInventoryBalanceStateComponent_NotifyUnequipped_Params params {};
		params.OldInstigator = OldInstigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C7A0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.NotifyEquipped
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       NewInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryBalanceStateComponent::NotifyEquipped(class APawn* NewInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.NotifyEquipped");
		
		UInventoryBalanceStateComponent_NotifyEquipped_Params params {};
		params.NewInstigator = NewInstigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C710
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.NotifyAttached
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryBalanceStateComponent::NotifyAttached(class APawn* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.NotifyAttached");
		
		UInventoryBalanceStateComponent_NotifyAttached_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C4B0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.K2_GetDamageType
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class UClass* UInventoryBalanceStateComponent::K2_GetDamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.K2_GetDamageType");
		
		UInventoryBalanceStateComponent_K2_GetDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C310
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.IsManufactureredBy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UManufacturerData*                           Manufacturer                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryBalanceStateComponent::IsManufactureredBy(class UManufacturerData* Manufacturer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.IsManufactureredBy");
		
		UInventoryBalanceStateComponent_IsManufactureredBy_Params params {};
		params.Manufacturer = Manufacturer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C2F0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetReRollCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char UInventoryBalanceStateComponent::GetReRollCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetReRollCount");
		
		UInventoryBalanceStateComponent_GetReRollCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C100
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetPartList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UInventoryPartData*> UInventoryBalanceStateComponent::GetPartList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetPartList");
		
		UInventoryBalanceStateComponent_GetPartList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C0E0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetMonetaryValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UInventoryBalanceStateComponent::GetMonetaryValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetMonetaryValue");
		
		UInventoryBalanceStateComponent_GetMonetaryValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C0C0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetManufacturer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UManufacturerData* UInventoryBalanceStateComponent::GetManufacturer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetManufacturer");
		
		UInventoryBalanceStateComponent_GetManufacturer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C090
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryScoreValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UInventoryBalanceStateComponent::GetInventoryScoreValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryScoreValue");
		
		UInventoryBalanceStateComponent_GetInventoryScoreValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C030
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UParticleSystem* UInventoryBalanceStateComponent::GetInventoryRarityLootBeamOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamOverride");
		
		UInventoryBalanceStateComponent_GetInventoryRarityLootBeamOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BFE0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UInventoryBalanceStateComponent::GetInventoryRarityLootBeamHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamHeight");
		
		UInventoryBalanceStateComponent_GetInventoryRarityLootBeamHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BFA0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootAudioStinger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWwiseEvent* UInventoryBalanceStateComponent::GetInventoryRarityLootAudioStinger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootAudioStinger");
		
		UInventoryBalanceStateComponent_GetInventoryRarityLootAudioStinger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BF60
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpanType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EDropLifeSpanType UInventoryBalanceStateComponent::GetInventoryRarityLifeSpanType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpanType");
		
		UInventoryBalanceStateComponent_GetInventoryRarityLifeSpanType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BF00
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UInventoryBalanceStateComponent::GetInventoryRarityLifeSpan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpan");
		
		UInventoryBalanceStateComponent_GetInventoryRarityLifeSpan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BE00
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityFrameName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UInventoryBalanceStateComponent::GetInventoryRarityFrameName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityFrameName");
		
		UInventoryBalanceStateComponent_GetInventoryRarityFrameName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BD30
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UInventoryBalanceStateComponent::GetInventoryRarityDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityDisplayName");
		
		UInventoryBalanceStateComponent_GetInventoryRarityDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BCF0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UInventoryRarityData* UInventoryBalanceStateComponent::GetInventoryRarityData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityData");
		
		UInventoryBalanceStateComponent_GetInventoryRarityData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BC80
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorOutline
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor UInventoryBalanceStateComponent::GetInventoryRarityColorOutline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorOutline");
		
		UInventoryBalanceStateComponent_GetInventoryRarityColorOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BC10
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorFX
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor UInventoryBalanceStateComponent::GetInventoryRarityColorFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorFX");
		
		UInventoryBalanceStateComponent_GetInventoryRarityColorFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BBD0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryDisplayRarityOutline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UInventoryBalanceStateComponent::GetInventoryDisplayRarityOutline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryDisplayRarityOutline");
		
		UInventoryBalanceStateComponent_GetInventoryDisplayRarityOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BBB0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UInventoryData* UInventoryBalanceStateComponent::GetInventoryData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryData");
		
		UInventoryBalanceStateComponent_GetInventoryData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BB10
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetInventoryBalanceData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UInventoryBalanceData* UInventoryBalanceStateComponent::GetInventoryBalanceData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryBalanceData");
		
		UInventoryBalanceStateComponent_GetInventoryBalanceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BAE0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetGenericPartList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UInventoryGenericPartData*> UInventoryBalanceStateComponent::GetGenericPartList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetGenericPartList");
		
		UInventoryBalanceStateComponent_GetGenericPartList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BA50
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UInventoryBalanceStateComponent::GetDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetDisplayName");
		
		UInventoryBalanceStateComponent_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BA10
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetDamageType
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* UInventoryBalanceStateComponent::GetDamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetDamageType");
		
		UInventoryBalanceStateComponent_GetDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301B9E0
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.GetCustomizationPartList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UInventoryCustomizationPartData*> UInventoryBalanceStateComponent::GetCustomizationPartList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetCustomizationPartList");
		
		UInventoryBalanceStateComponent_GetCustomizationPartList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301B680
	 * 		Name   -> Function GbxInventory.InventoryBalanceStateComponent.CloneAppearance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class AActor*                                      DestActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ParentComp                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAbsoluteScale                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryBalanceStateComponent::CloneAppearance(class AActor* DestActor, class USceneComponent* ParentComp, bool bAbsoluteScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.CloneAppearance");
		
		UInventoryBalanceStateComponent_CloneAppearance_Params params {};
		params.DestActor = DestActor;
		params.ParentComp = ParentComp;
		params.bAbsoluteScale = bAbsoluteScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryBalanceStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryBalanceStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryBalanceStateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03023B80
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.WaitForBalanceState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AInventoryItemPickup::WaitForBalanceState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.WaitForBalanceState");
		
		AInventoryItemPickup_WaitForBalanceState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03023A30
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.SetCanOnlyBePickedUpByOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewCanOnlyBePickedUpByOwnerController                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInventoryItemPickup::SetCanOnlyBePickedUpByOwner(bool bNewCanOnlyBePickedUpByOwnerController, class AController* OwnerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.SetCanOnlyBePickedUpByOwner");
		
		AInventoryItemPickup_SetCanOnlyBePickedUpByOwner_Params params {};
		params.bNewCanOnlyBePickedUpByOwnerController = bNewCanOnlyBePickedUpByOwnerController;
		params.OwnerController = OwnerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03023190
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.ResetBumpOnPickupFail
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AInventoryItemPickup::ResetBumpOnPickupFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.ResetBumpOnPickupFail");
		
		AInventoryItemPickup_ResetBumpOnPickupFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012D66E0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnUsedBy
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FUseEvent                                   UseEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AInventoryItemPickup::OnUsedBy(const struct FUseEvent& UseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnUsedBy");
		
		AInventoryItemPickup_OnUsedBy_Params params {};
		params.UseEvent = UseEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnRespawnEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AInventoryItemPickup::OnRespawnEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRespawnEvent");
		
		AInventoryItemPickup_OnRespawnEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03023170
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnRep_RepLootSpawnAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AInventoryItemPickup::OnRep_RepLootSpawnAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_RepLootSpawnAction");
		
		AInventoryItemPickup_OnRep_RepLootSpawnAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012D6A80
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnRep_PickupActorClientSpawnData
	 * 		Flags  -> (Native, Public)
	 */
	void AInventoryItemPickup::OnRep_PickupActorClientSpawnData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_PickupActorClientSpawnData");
		
		AInventoryItemPickup_OnRep_PickupActorClientSpawnData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03023150
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnRep_PickupActor
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AInventoryItemPickup::OnRep_PickupActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_PickupActor");
		
		AInventoryItemPickup_OnRep_PickupActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012F64A0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnRep_PickedUpBy
	 * 		Flags  -> (Native, Public)
	 */
	void AInventoryItemPickup::OnRep_PickedUpBy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_PickedUpBy");
		
		AInventoryItemPickup_OnRep_PickedUpBy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012F6440
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnRep_IsActive
	 * 		Flags  -> (Native, Public)
	 */
	void AInventoryItemPickup::OnRep_IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_IsActive");
		
		AInventoryItemPickup_OnRep_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03023130
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnRep_BumpAngularDir
	 * 		Flags  -> (Native, Protected)
	 */
	void AInventoryItemPickup::OnRep_BumpAngularDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_BumpAngularDir");
		
		AInventoryItemPickup_OnRep_BumpAngularDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnPickedUpEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      WasPickedUpBy                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInventoryItemPickup::OnPickedUpEvent(class AActor* WasPickedUpBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnPickedUpEvent");
		
		AInventoryItemPickup_OnPickedUpEvent_Params params {};
		params.WasPickedUpBy = WasPickedUpBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022FC0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.OnLookedAtByPlayer
	 * 		Flags  -> (Native, Public, HasDefaults)
	 * Parameters:
	 * 		class APlayerController*                           InstigatingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanInteractWith                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewUsableComponentImpactPoint                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewUsableDistanceAway                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInventoryItemPickup::OnLookedAtByPlayer(class APlayerController* InstigatingPlayer, bool bCanInteractWith, const struct FVector& NewUsableComponentImpactPoint, float NewUsableDistanceAway)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnLookedAtByPlayer");
		
		AInventoryItemPickup_OnLookedAtByPlayer_Params params {};
		params.InstigatingPlayer = InstigatingPlayer;
		params.bCanInteractWith = bCanInteractWith;
		params.NewUsableComponentImpactPoint = NewUsableComponentImpactPoint;
		params.NewUsableDistanceAway = NewUsableDistanceAway;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022F90
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.IsPickupInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AInventoryItemPickup::IsPickupInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.IsPickupInitialized");
		
		AInventoryItemPickup_IsPickupInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022E00
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.GiveInventoryToUser
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoEquip                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInventoryItemPickup::GiveInventoryToUser(class AActor* Other, bool bAutoEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GiveInventoryToUser");
		
		AInventoryItemPickup_GiveInventoryToUser_Params params {};
		params.Other = Other;
		params.bAutoEquip = bAutoEquip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022C00
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.GetMeshComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMeshComponent* AInventoryItemPickup::GetMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetMeshComponent");
		
		AInventoryItemPickup_GetMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022AA0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootBeamOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UParticleSystem* AInventoryItemPickup::GetInventoryRarityLootBeamOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootBeamOverride");
		
		AInventoryItemPickup_GetInventoryRarityLootBeamOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022A70
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootAudioStinger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWwiseEvent* AInventoryItemPickup::GetInventoryRarityLootAudioStinger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootAudioStinger");
		
		AInventoryItemPickup_GetInventoryRarityLootAudioStinger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022A40
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.GetInventoryRarityLifeSpanType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EDropLifeSpanType AInventoryItemPickup::GetInventoryRarityLifeSpanType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityLifeSpanType");
		
		AInventoryItemPickup_GetInventoryRarityLifeSpanType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022A00
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorOutline
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor AInventoryItemPickup::GetInventoryRarityColorOutline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorOutline");
		
		AInventoryItemPickup_GetInventoryRarityColorOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030229C0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorFX
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor AInventoryItemPickup::GetInventoryRarityColorFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorFX");
		
		AInventoryItemPickup_GetInventoryRarityColorFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022690
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.GetInventoryDisplayRarityOutline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AInventoryItemPickup::GetInventoryDisplayRarityOutline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryDisplayRarityOutline");
		
		AInventoryItemPickup_GetInventoryDisplayRarityOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030224C0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.GetInventoryBalanceStateComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UInventoryBalanceStateComponent* AInventoryItemPickup::GetInventoryBalanceStateComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryBalanceStateComponent");
		
		AInventoryItemPickup_GetInventoryBalanceStateComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03021FE0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.DeactivatePickup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AInventoryItemPickup::DeactivatePickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.DeactivatePickup");
		
		AInventoryItemPickup_DeactivatePickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03021C50
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.CanBePickedUp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               UsedByOther                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseHeld                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForMassPickup                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AInventoryItemPickup::CanBePickedUp(class AActor* Other, bool UsedByOther, bool bUseHeld, bool bForMassPickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.CanBePickedUp");
		
		AInventoryItemPickup_CanBePickedUp_Params params {};
		params.Other = Other;
		params.UsedByOther = UsedByOther;
		params.bUseHeld = bUseHeld;
		params.bForMassPickup = bForMassPickup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030215B0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.ActivatePickup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AInventoryItemPickup::ActivatePickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.ActivatePickup");
		
		AInventoryItemPickup_ActivatePickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0291E3E0
	 * 		Name   -> Function GbxInventory.InventoryItemPickup.ActivateAfterSpawnDelay
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AInventoryItemPickup::ActivateAfterSpawnDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.ActivateAfterSpawnDelay");
		
		AInventoryItemPickup_ActivateAfterSpawnDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInventoryItemPickup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInventoryItemPickup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryItemPickup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301CC50
	 * 		Name   -> Function GbxInventory.DroppedInventoryItemPickup.OnRep_ShrinkLifeSpan
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ADroppedInventoryItemPickup::OnRep_ShrinkLifeSpan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnRep_ShrinkLifeSpan");
		
		ADroppedInventoryItemPickup_OnRep_ShrinkLifeSpan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301CC10
	 * 		Name   -> Function GbxInventory.DroppedInventoryItemPickup.OnRep_InitialMassScale
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ADroppedInventoryItemPickup::OnRep_InitialMassScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnRep_InitialMassScale");
		
		ADroppedInventoryItemPickup_OnRep_InitialMassScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301CBF0
	 * 		Name   -> Function GbxInventory.DroppedInventoryItemPickup.OnRep_DroppedQuantity
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ADroppedInventoryItemPickup::OnRep_DroppedQuantity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnRep_DroppedQuantity");
		
		ADroppedInventoryItemPickup_OnRep_DroppedQuantity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301CA40
	 * 		Name   -> Function GbxInventory.DroppedInventoryItemPickup.OnPickupHit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADroppedInventoryItemPickup::OnPickupHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnPickupHit");
		
		ADroppedInventoryItemPickup_OnPickupHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C980
	 * 		Name   -> Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsWake
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         WakingComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADroppedInventoryItemPickup::OnPhysicsWake(class UPrimitiveComponent* WakingComponent, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsWake");
		
		ADroppedInventoryItemPickup_OnPhysicsWake_Params params {};
		params.WakingComponent = WakingComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C8C0
	 * 		Name   -> Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsSleep
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         WakingComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADroppedInventoryItemPickup::OnPhysicsSleep(class UPrimitiveComponent* WakingComponent, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsSleep");
		
		ADroppedInventoryItemPickup_OnPhysicsSleep_Params params {};
		params.WakingComponent = WakingComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedInventoryItemPickup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedInventoryItemPickup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.DroppedInventoryItemPickup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloadableInventorySetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadableInventorySetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.DownloadableInventorySetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryCustomizationPartData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryCustomizationPartData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryCustomizationPartData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027AB0
	 * 		Name   -> Function GbxInventory.InventoryPartData.GetMonetaryValueModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FAttributeInitializationData UInventoryPartData::GetMonetaryValueModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryPartData.GetMonetaryValueModifier");
		
		UInventoryPartData_GetMonetaryValueModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryPartData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryPartData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryPartData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryGenericPartData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryGenericPartData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryGenericPartData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryNamingStrategyData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryNamingStrategyData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryNamingStrategyData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027CC0
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRaritySortValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UInventoryRarityData::GetRaritySortValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRaritySortValue");
		
		UInventoryRarityData_GetRaritySortValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027CA0
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRarityOutlineDepthStencilValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UInventoryRarityData::GetRarityOutlineDepthStencilValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityOutlineDepthStencilValue");
		
		UInventoryRarityData_GetRarityOutlineDepthStencilValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027C00
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRarityLootBeamOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bInventoryHasAFoilPart                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UParticleSystem* UInventoryRarityData::GetRarityLootBeamOverride(bool bInventoryHasAFoilPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLootBeamOverride");
		
		UInventoryRarityData_GetRarityLootBeamOverride_Params params {};
		params.bInventoryHasAFoilPart = bInventoryHasAFoilPart;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027BE0
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRarityLootBeamHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UInventoryRarityData::GetRarityLootBeamHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLootBeamHeight");
		
		UInventoryRarityData_GetRarityLootBeamHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027BC0
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRarityLootAudioStinger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWwiseEvent* UInventoryRarityData::GetRarityLootAudioStinger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLootAudioStinger");
		
		UInventoryRarityData_GetRarityLootAudioStinger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027BA0
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRarityLifeSpanType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EDropLifeSpanType UInventoryRarityData::GetRarityLifeSpanType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLifeSpanType");
		
		UInventoryRarityData_GetRarityLifeSpanType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027B70
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRarityLifeSpan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UInventoryRarityData::GetRarityLifeSpan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLifeSpan");
		
		UInventoryRarityData_GetRarityLifeSpan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027B40
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRarityDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UInventoryRarityData::GetRarityDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityDisplayName");
		
		UInventoryRarityData_GetRarityDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027B20
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRarityColorOutline
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor UInventoryRarityData::GetRarityColorOutline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityColorOutline");
		
		UInventoryRarityData_GetRarityColorOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027B00
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetRarityColorFX
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor UInventoryRarityData::GetRarityColorFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityColorFX");
		
		UInventoryRarityData_GetRarityColorFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027A60
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetItemScoreRarityModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FAttributeInitializationData UInventoryRarityData::GetItemScoreRarityModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetItemScoreRarityModifier");
		
		UInventoryRarityData_GetItemScoreRarityModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027A40
	 * 		Name   -> Function GbxInventory.InventoryRarityData.GetDisplayRarityOutline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UInventoryRarityData::GetDisplayRarityOutline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetDisplayRarityOutline");
		
		UInventoryRarityData_GetDisplayRarityOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryRarityData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryRarityData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryRarityData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03028C00
	 * 		Name   -> Function GbxInventory.LootableComponent.SpawnAndDropLoot
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SelectedConfigurationName                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULootableComponent::SpawnAndDropLoot(class FName* SelectedConfigurationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.SpawnAndDropLoot");
		
		ULootableComponent_SpawnAndDropLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedConfigurationName != nullptr)
			*SelectedConfigurationName = params.SelectedConfigurationName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03028B70
	 * 		Name   -> Function GbxInventory.LootableComponent.SpawnAndAttachLoot
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SelectedConfigurationName                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULootableComponent::SpawnAndAttachLoot(class FName* SelectedConfigurationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.SpawnAndAttachLoot");
		
		ULootableComponent_SpawnAndAttachLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedConfigurationName != nullptr)
			*SelectedConfigurationName = params.SelectedConfigurationName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03028AA0
	 * 		Name   -> Function GbxInventory.LootableComponent.SetBalanceContextOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      NewOverrideContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyUseForGameStage                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULootableComponent::SetBalanceContextOverride(class AActor* NewOverrideContext, bool bOnlyUseForGameStage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.SetBalanceContextOverride");
		
		ULootableComponent_SetBalanceContextOverride_Params params {};
		params.NewOverrideContext = NewOverrideContext;
		params.bOnlyUseForGameStage = bOnlyUseForGameStage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03028A20
	 * 		Name   -> Function GbxInventory.LootableComponent.InitializeLootConfigurations
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULootableBalanceData*                        LootableBalanceData                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULootableComponent::InitializeLootConfigurations(class ULootableBalanceData* LootableBalanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.InitializeLootConfigurations");
		
		ULootableComponent_InitializeLootConfigurations_Params params {};
		params.LootableBalanceData = LootableBalanceData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03028960
	 * 		Name   -> Function GbxInventory.LootableComponent.GetAttachedPickups
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class ADroppedInventoryItemPickup*> ULootableComponent::GetAttachedPickups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.GetAttachedPickups");
		
		ULootableComponent_GetAttachedPickups_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012EA950
	 * 		Name   -> Function GbxInventory.LootableComponent.ActivateAttachedLoot
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void ULootableComponent::ActivateAttachedLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.ActivateAttachedLoot");
		
		ULootableComponent_ActivateAttachedLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.LootableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UManufacturerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UManufacturerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.ManufacturerData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemPoolListInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemPoolListInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.ItemPoolListInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemPoolData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemPoolData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.ItemPoolData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryMaterialAspectData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryMaterialAspectData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryMaterialAspectData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryPartSetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryPartSetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryPartSetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryAttributeEffectsAspectData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryAttributeEffectsAspectData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryAttributeEffectsAspectData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_InventoryRarityComparison.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_InventoryRarityComparison::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.GbxCondition_InventoryRarityComparison");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGearBuilderCategoryData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGearBuilderCategoryData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.GearBuilderCategoryData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGearBuilderWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGearBuilderWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.GearBuilderWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGearBuilderDebugMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGearBuilderDebugMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.GearBuilderDebugMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryBalanceCollectionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryBalanceCollectionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryBalanceCollectionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryBalanceData_Generated.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryBalanceData_Generated::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryBalanceData_Generated");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301C130
	 * 		Name   -> Function GbxInventory.InventoryBlueprintLibrary.GetPossibleGenericParts
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       Tags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bMustHaveAllTags                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExcludeCurrentlySelectedParts                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UInventoryGenericPartData*> UInventoryBlueprintLibrary::STATIC_GetPossibleGenericParts(class UInventoryBalanceStateComponent* InventoryBalanceState, const struct FGameplayTagContainer& Tags, bool bMustHaveAllTags, bool bExcludeCurrentlySelectedParts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.GetPossibleGenericParts");
		
		UInventoryBlueprintLibrary_GetPossibleGenericParts_Params params {};
		params.InventoryBalanceState = InventoryBalanceState;
		params.Tags = Tags;
		params.bMustHaveAllTags = bMustHaveAllTags;
		params.bExcludeCurrentlySelectedParts = bExcludeCurrentlySelectedParts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301BB30
	 * 		Name   -> Function GbxInventory.InventoryBlueprintLibrary.GetInventoryBalanceState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Inventory                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInventoryBalanceStateComponent* UInventoryBlueprintLibrary::STATIC_GetInventoryBalanceState(class AActor* Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.GetInventoryBalanceState");
		
		UInventoryBlueprintLibrary_GetInventoryBalanceState_Params params {};
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301B810
	 * 		Name   -> Function GbxInventory.InventoryBlueprintLibrary.CreateInventory
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreatePickup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SpawnLocation                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryBalanceStateInitializationData    InitData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class AActor* UInventoryBlueprintLibrary::STATIC_CreateInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.CreateInventory");
		
		UInventoryBlueprintLibrary_CreateInventory_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bCreatePickup = bCreatePickup;
		params.SpawnLocation = SpawnLocation;
		params.InitData = InitData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301B790
	 * 		Name   -> Function GbxInventory.InventoryBlueprintLibrary.CloneInventory
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      SourceInventory                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UInventoryBlueprintLibrary::STATIC_CloneInventory(class AActor* SourceInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.CloneInventory");
		
		UInventoryBlueprintLibrary_CloneInventory_Params params {};
		params.SourceInventory = SourceInventory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0301B4D0
	 * 		Name   -> Function GbxInventory.InventoryBlueprintLibrary.BuildInventory
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreatePickup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SpawnLocation                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryBalanceStateInitializationData    InitData                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	class AActor* UInventoryBlueprintLibrary::STATIC_BuildInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.BuildInventory");
		
		UInventoryBlueprintLibrary_BuildInventory_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bCreatePickup = bCreatePickup;
		params.SpawnLocation = SpawnLocation;
		params.InitData = InitData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryCategoryData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryCategoryData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryCategoryData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryConditionalDamageAspectData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryConditionalDamageAspectData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryConditionalDamageAspectData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022000
	 * 		Name   -> Function GbxInventory.InventoryGenericPartExpansionData.EnumeratePartListForPartType
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		unsigned char                                      PartType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UActorPartData*>                      OutPartList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryGenericPartExpansionData::EnumeratePartListForPartType(unsigned char PartType, TArray<class UActorPartData*>* OutPartList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryGenericPartExpansionData.EnumeratePartListForPartType");
		
		UInventoryGenericPartExpansionData_EnumeratePartListForPartType_Params params {};
		params.PartType = PartType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPartList != nullptr)
			*OutPartList = params.OutPartList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryGenericPartExpansionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryGenericPartExpansionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryGenericPartExpansionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryMaterialAspectTextureAssetStreamer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryMaterialAspectTextureAssetStreamer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryMaterialAspectTextureAssetStreamer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryModuleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryModuleSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryModuleSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryNamePartData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryNamePartData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryNamePartData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03027980
	 * 		Name   -> Function GbxInventory.InventoryOwnerInterface.AttachedItemPickedUp
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItemPickup*                        InventoryItemPickedUp                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      PickedUpBy                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryOwnerInterface::AttachedItemPickedUp(class AInventoryItemPickup* InventoryItemPickedUp, class AActor* PickedUpBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryOwnerInterface.AttachedItemPickedUp");
		
		UInventoryOwnerInterface_AttachedItemPickedUp_Params params {};
		params.InventoryItemPickedUp = InventoryItemPickedUp;
		params.PickedUpBy = PickedUpBy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryOwnerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryOwnerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryOwnerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryParticleAspectData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryParticleAspectData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventoryParticleAspectData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventorySerialNumberAssetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventorySerialNumberAssetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventorySerialNumberAssetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventorySerialNumberDatabase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventorySerialNumberDatabase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.InventorySerialNumberDatabase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemPoolExpansionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemPoolExpansionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.ItemPoolExpansionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemPoolListData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemPoolListData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.ItemPoolListData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03022000
	 * 		Name   -> Function GbxInventory.ItemPoolPartSelectionOverrideData.EnumerateInventoryParts
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		unsigned char                                      PartType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UActorPartData*>                      OutPartList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UItemPoolPartSelectionOverrideData::EnumerateInventoryParts(unsigned char PartType, TArray<class UActorPartData*>* OutPartList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.ItemPoolPartSelectionOverrideData.EnumerateInventoryParts");
		
		UItemPoolPartSelectionOverrideData_EnumerateInventoryParts_Params params {};
		params.PartType = PartType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPartList != nullptr)
			*OutPartList = params.OutPartList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemPoolPartSelectionOverrideData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemPoolPartSelectionOverrideData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.ItemPoolPartSelectionOverrideData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootableBalanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootableBalanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.LootableBalanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03028C90
	 * 		Name   -> Function GbxInventory.LootFunctionLibrary.SpawnItemsRaw
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UItemPoolListData*>                   ItemPoolLists                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FItemPoolInfo>                       ExtraItemPools                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameStage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              InitialVelocity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULootFunctionLibrary::STATIC_SpawnItemsRaw(class UObject* WorldContextObject, TArray<class UItemPoolListData*> ItemPoolLists, TArray<struct FItemPoolInfo> ExtraItemPools, int32_t GameStage, const struct FVector& Location, const struct FRotator& Rotation, float InitialVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInventory.LootFunctionLibrary.SpawnItemsRaw");
		
		ULootFunctionLibrary_SpawnItemsRaw_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ItemPoolLists = ItemPoolLists;
		params.ExtraItemPools = ExtraItemPools;
		params.GameStage = GameStage;
		params.Location = Location;
		params.Rotation = Rotation;
		params.InitialVelocity = InitialVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.LootFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootListData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootListData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.LootListData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APickupableMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APickupableMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.PickupableMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPickupFlyToAbleInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPickupFlyToAbleInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.PickupFlyToAbleInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPickupFlyToData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPickupFlyToData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.PickupFlyToData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPickupFlyToTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPickupFlyToTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInventory.PickupFlyToTargetInterface");
		return ptr;
	}

}


