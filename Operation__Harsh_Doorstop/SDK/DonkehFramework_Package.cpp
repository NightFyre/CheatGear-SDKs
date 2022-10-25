/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFAssetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFAssetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFAssetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B06C0
	 * 		Name   -> Function DonkehFramework.DFBaseAIController.CanRestartPlayer
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool ADFBaseAIController::CanRestartPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAIController.CanRestartPlayer");
		
		ADFBaseAIController_CanRestartPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF5D0
	 * 		Name   -> Function DonkehFramework.DFBaseItem.StopFire
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseItem::StopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.StopFire");
		
		ADFBaseItem_StopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00643760
	 * 		Name   -> Function DonkehFramework.DFBaseItem.StartFire
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseItem::StartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.StartFire");
		
		ADFBaseItem_StartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF540
	 * 		Name   -> Function DonkehFramework.DFBaseItem.SetOwningPawn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            NewOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::SetOwningPawn(class ADFBaseCharacter* NewOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.SetOwningPawn");
		
		ADFBaseItem_SetOwningPawn_Params params {};
		params.NewOwner = NewOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF420
	 * 		Name   -> Function DonkehFramework.DFBaseItem.SetMeshVisibility
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFirstPerson                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::SetMeshVisibility(bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.SetMeshVisibility");
		
		ADFBaseItem_SetMeshVisibility_Params params {};
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF2C0
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ServerStopFire
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ADFBaseItem::ServerStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ServerStopFire");
		
		ADFBaseItem_ServerStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF270
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ServerStartFire
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ADFBaseItem::ServerStartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ServerStartFire");
		
		ADFBaseItem_ServerStartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.RemoveLegacyLocomotionAnims
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFPP                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseItem::RemoveLegacyLocomotionAnims(bool bFPP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.RemoveLegacyLocomotionAnims");
		
		ADFBaseItem_RemoveLegacyLocomotionAnims_Params params {};
		params.bFPP = bFPP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveVisibilityChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFirstPerson                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::ReceiveVisibilityChanged(bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveVisibilityChanged");
		
		ADFBaseItem_ReceiveVisibilityChanged_Params params {};
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveStopFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseItem::ReceiveStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveStopFire");
		
		ADFBaseItem_ReceiveStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveStartFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseItem::ReceiveStartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveStartFire");
		
		ADFBaseItem_ReceiveStartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveOnUnEquipFinished
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLeavingPawnInventory                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::ReceiveOnUnEquipFinished(bool bLeavingPawnInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveOnUnEquipFinished");
		
		ADFBaseItem_ReceiveOnUnEquipFinished_Params params {};
		params.bLeavingPawnInventory = bLeavingPawnInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveOnUnEquip
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPlayAnimAndWait                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLeavingPawnInventory                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::ReceiveOnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveOnUnEquip");
		
		ADFBaseItem_ReceiveOnUnEquip_Params params {};
		params.bPlayAnimAndWait = bPlayAnimAndWait;
		params.bLeavingPawnInventory = bLeavingPawnInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveOnTurnOff
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseItem::ReceiveOnTurnOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveOnTurnOff");
		
		ADFBaseItem_ReceiveOnTurnOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveOnLeaveInventory
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            LastOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::ReceiveOnLeaveInventory(class ADFBaseCharacter* LastOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveOnLeaveInventory");
		
		ADFBaseItem_ReceiveOnLeaveInventory_Params params {};
		params.LastOwner = LastOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveOnEquipFinished
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseItem::ReceiveOnEquipFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveOnEquipFinished");
		
		ADFBaseItem_ReceiveOnEquipFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveOnEquip
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseItem*                                 LastItem                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::ReceiveOnEquip(class ADFBaseItem* LastItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveOnEquip");
		
		ADFBaseItem_ReceiveOnEquip_Params params {};
		params.LastItem = LastItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.ReceiveOnEnterInventory
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            NewOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseCharacter*                            LastOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::ReceiveOnEnterInventory(class ADFBaseCharacter* NewOwner, class ADFBaseCharacter* LastOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.ReceiveOnEnterInventory");
		
		ADFBaseItem_ReceiveOnEnterInventory_Params params {};
		params.NewOwner = NewOwner;
		params.LastOwner = LastOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEE50
	 * 		Name   -> Function DonkehFramework.DFBaseItem.OwnerIsSprinting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseItem::OwnerIsSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.OwnerIsSprinting");
		
		ADFBaseItem_OwnerIsSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEE20
	 * 		Name   -> Function DonkehFramework.DFBaseItem.OwnerIsAiming
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseItem::OwnerIsAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.OwnerIsAiming");
		
		ADFBaseItem_OwnerIsAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BED50
	 * 		Name   -> Function DonkehFramework.DFBaseItem.OnUnEquip
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bPlayAnimAndWait                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLeavingPawnInventory                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::OnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.OnUnEquip");
		
		ADFBaseItem_OnUnEquip_Params params {};
		params.bPlayAnimAndWait = bPlayAnimAndWait;
		params.bLeavingPawnInventory = bLeavingPawnInventory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BED30
	 * 		Name   -> Function DonkehFramework.DFBaseItem.OnTurnOff
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseItem::OnTurnOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.OnTurnOff");
		
		ADFBaseItem_OnTurnOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEC00
	 * 		Name   -> Function DonkehFramework.DFBaseItem.OnRep_PawnOwner
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            LastOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::OnRep_PawnOwner(class ADFBaseCharacter* LastOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.OnRep_PawnOwner");
		
		ADFBaseItem_OnRep_PawnOwner_Params params {};
		params.LastOwner = LastOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEB30
	 * 		Name   -> Function DonkehFramework.DFBaseItem.OnLeaveInventory
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            LastOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::OnLeaveInventory(class ADFBaseCharacter* LastOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.OnLeaveInventory");
		
		ADFBaseItem_OnLeaveInventory_Params params {};
		params.LastOwner = LastOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEA20
	 * 		Name   -> Function DonkehFramework.DFBaseItem.OnEquip
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseItem*                                 LastItem                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::OnEquip(class ADFBaseItem* LastItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.OnEquip");
		
		ADFBaseItem_OnEquip_Params params {};
		params.LastItem = LastItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE950
	 * 		Name   -> Function DonkehFramework.DFBaseItem.OnEnterInventory
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            NewOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseCharacter*                            LastOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseItem::OnEnterInventory(class ADFBaseCharacter* NewOwner, class ADFBaseCharacter* LastOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.OnEnterInventory");
		
		ADFBaseItem_OnEnterInventory_Params params {};
		params.NewOwner = NewOwner;
		params.LastOwner = LastOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE6F0
	 * 		Name   -> Function DonkehFramework.DFBaseItem.IsUnEquipping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseItem::IsUnEquipping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.IsUnEquipping");
		
		ADFBaseItem_IsUnEquipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE5C0
	 * 		Name   -> Function DonkehFramework.DFBaseItem.IsEquipping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseItem::IsEquipping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.IsEquipping");
		
		ADFBaseItem_IsEquipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE590
	 * 		Name   -> Function DonkehFramework.DFBaseItem.IsEquipped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseItem::IsEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.IsEquipped");
		
		ADFBaseItem_IsEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE560
	 * 		Name   -> Function DonkehFramework.DFBaseItem.IsClientSimulated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseItem::IsClientSimulated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.IsClientSimulated");
		
		ADFBaseItem_IsClientSimulated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE490
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetPawnOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseCharacter* ADFBaseItem::GetPawnOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetPawnOwner");
		
		ADFBaseItem_GetPawnOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE460
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetPawnInventory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDFInventoryComponent* ADFBaseItem::GetPawnInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetPawnInventory");
		
		ADFBaseItem_GetPawnInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE3E0
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetOwnerViewRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FRotator ADFBaseItem::GetOwnerViewRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetOwnerViewRotation");
		
		ADFBaseItem_GetOwnerViewRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE2E0
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetOwnerViewPoint
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     OutViewLoc                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutViewRot                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseItem::GetOwnerViewPoint(struct FVector* OutViewLoc, struct FRotator* OutViewRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetOwnerViewPoint");
		
		ADFBaseItem_GetOwnerViewPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewLoc != nullptr)
			*OutViewLoc = params.OutViewLoc;
		if (OutViewRot != nullptr)
			*OutViewRot = params.OutViewRot;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE260
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetOwnerViewLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ADFBaseItem::GetOwnerViewLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetOwnerViewLocation");
		
		ADFBaseItem_GetOwnerViewLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetLegacyLocomotionAnims
	 * 		Flags  -> (Event, Protected, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bFPP                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FName, class UAnimSequenceBase*> ADFBaseItem::GetLegacyLocomotionAnims(bool bFPP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetLegacyLocomotionAnims");
		
		ADFBaseItem_GetLegacyLocomotionAnims_Params params {};
		params.bFPP = bFPP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE220
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetItemType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EItemType ADFBaseItem::GetItemType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetItemType");
		
		ADFBaseItem_GetItemType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE180
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetItemMeshToUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIgnoreLocalControlOnServer                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UStaticMeshComponent* ADFBaseItem::GetItemMeshToUse(bool bIgnoreLocalControlOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetItemMeshToUse");
		
		ADFBaseItem_GetItemMeshToUse_Params params {};
		params.bIgnoreLocalControlOnServer = bIgnoreLocalControlOnServer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE140
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetItemMesh1P
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UStaticMeshComponent* ADFBaseItem::GetItemMesh1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetItemMesh1P");
		
		ADFBaseItem_GetItemMesh1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE160
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetItemMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UStaticMeshComponent* ADFBaseItem::GetItemMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetItemMesh");
		
		ADFBaseItem_GetItemMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE050
	 * 		Name   -> Function DonkehFramework.DFBaseItem.GetAdjustedAimDirection
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FVector ADFBaseItem::GetAdjustedAimDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.GetAdjustedAimDirection");
		
		ADFBaseItem_GetAdjustedAimDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE020
	 * 		Name   -> Function DonkehFramework.DFBaseItem.CanSprintWhileEquipped
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseItem::CanSprintWhileEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.CanSprintWhileEquipped");
		
		ADFBaseItem_CanSprintWhileEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BDFF0
	 * 		Name   -> Function DonkehFramework.DFBaseItem.CanFire
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ADFBaseItem::CanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.CanFire");
		
		ADFBaseItem_CanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BDFC0
	 * 		Name   -> Function DonkehFramework.DFBaseItem.CanEquip
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseItem::CanEquip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.CanEquip");
		
		ADFBaseItem_CanEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BDEF0
	 * 		Name   -> Function DonkehFramework.DFBaseItem.CanAimWhileEquipped
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseItem::CanAimWhileEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseItem.CanAimWhileEquipped");
		
		ADFBaseItem_CanAimWhileEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3890
	 * 		Name   -> Function DonkehFramework.DFBaseAmmoClip.StoreAmmoInInventory
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDFInventoryComponent*                       AmmoStore                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AmmoAmt                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      AmmoType                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ADFBaseAmmoClip::STATIC_StoreAmmoInInventory(class UDFInventoryComponent* AmmoStore, int32_t AmmoAmt, class UClass* AmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAmmoClip.StoreAmmoInInventory");
		
		ADFBaseAmmoClip_StoreAmmoInInventory_Params params {};
		params.AmmoStore = AmmoStore;
		params.AmmoAmt = AmmoAmt;
		params.AmmoType = AmmoType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3800
	 * 		Name   -> Function DonkehFramework.DFBaseAmmoClip.StoreAmmo
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AmmoToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseAmmoClip::StoreAmmo(int32_t AmmoToStore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAmmoClip.StoreAmmo");
		
		ADFBaseAmmoClip_StoreAmmo_Params params {};
		params.AmmoToStore = AmmoToStore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B34A0
	 * 		Name   -> Function DonkehFramework.DFBaseAmmoClip.SetOwningGun
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseGun*                                  NewOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseAmmoClip::SetOwningGun(class ADFBaseGun* NewOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAmmoClip.SetOwningGun");
		
		ADFBaseAmmoClip_SetOwningGun_Params params {};
		params.NewOwner = NewOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2090
	 * 		Name   -> Function DonkehFramework.DFBaseAmmoClip.IsLoaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseAmmoClip::IsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAmmoClip.IsLoaded");
		
		ADFBaseAmmoClip_IsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1DF0
	 * 		Name   -> Function DonkehFramework.DFBaseAmmoClip.GetStartingClipAmmo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ADFBaseAmmoClip::GetStartingClipAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAmmoClip.GetStartingClipAmmo");
		
		ADFBaseAmmoClip_GetStartingClipAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1CF0
	 * 		Name   -> Function DonkehFramework.DFBaseAmmoClip.GetMaxClipAmmo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ADFBaseAmmoClip::GetMaxClipAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAmmoClip.GetMaxClipAmmo");
		
		ADFBaseAmmoClip_GetMaxClipAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1C70
	 * 		Name   -> Function DonkehFramework.DFBaseAmmoClip.GetGunOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseGun* ADFBaseAmmoClip::GetGunOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAmmoClip.GetGunOwner");
		
		ADFBaseAmmoClip_GetGunOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1B40
	 * 		Name   -> Function DonkehFramework.DFBaseAmmoClip.GetCurrentClipAmmo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ADFBaseAmmoClip::GetCurrentClipAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAmmoClip.GetCurrentClipAmmo");
		
		ADFBaseAmmoClip_GetCurrentClipAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B14E0
	 * 		Name   -> Function DonkehFramework.DFBaseAmmoClip.ConsumeAmmo
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AmmoToConsume                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseAmmoClip::ConsumeAmmo(int32_t AmmoToConsume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseAmmoClip.ConsumeAmmo");
		
		ADFBaseAmmoClip_ConsumeAmmo_Params params {};
		params.AmmoToConsume = AmmoToConsume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseAmmoClip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseAmmoClip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseAmmoClip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3B10
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.UnSprint
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::UnSprint(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.UnSprint");
		
		ADFBaseCharacter_UnSprint_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3A40
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.UnLean
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ELeanDirection                                     UnDesiredLeanDir                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::UnLean(ELeanDirection UnDesiredLeanDir, bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.UnLean");
		
		ADFBaseCharacter_UnLean_Params params {};
		params.UnDesiredLeanDir = UnDesiredLeanDir;
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B39B0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.UnAim
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::UnAim(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.UnAim");
		
		ADFBaseCharacter_UnAim_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3990
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.Suicide
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::Suicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.Suicide");
		
		ADFBaseCharacter_Suicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B37E0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.StopFire
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::StopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.StopFire");
		
		ADFBaseCharacter_StopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3740
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.StopCharacterPerspectiveAnimation
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            CharAnim                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::StopCharacterPerspectiveAnimation(const struct FPerspectiveAnim& CharAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.StopCharacterPerspectiveAnimation");
		
		ADFBaseCharacter_StopCharacterPerspectiveAnimation_Params params {};
		params.CharAnim = CharAnim;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B36B0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.StopCharacterMontage
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                CharMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::StopCharacterMontage(class UAnimMontage* CharMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.StopCharacterMontage");
		
		ADFBaseCharacter_StopCharacterMontage_Params params {};
		params.CharMontage = CharMontage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3620
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.StopAllAnimMontages
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bPerspectiveMeshOnly                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::StopAllAnimMontages(bool bPerspectiveMeshOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.StopAllAnimMontages");
		
		ADFBaseCharacter_StopAllAnimMontages_Params params {};
		params.bPerspectiveMeshOnly = bPerspectiveMeshOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3600
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.StartFire
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::StartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.StartFire");
		
		ADFBaseCharacter_StartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B35E0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.SprintToggle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::SprintToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.SprintToggle");
		
		ADFBaseCharacter_SprintToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3550
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.Sprint
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::Sprint(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.Sprint");
		
		ADFBaseCharacter_Sprint_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3530
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.SetRagdollPhysics
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void ADFBaseCharacter::SetRagdollPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.SetRagdollPhysics");
		
		ADFBaseCharacter_SetRagdollPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3420
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.SetItemEnabledMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EDFItemEnabledMode                                 ItemMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::SetItemEnabledMode(EDFItemEnabledMode ItemMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.SetItemEnabledMode");
		
		ADFBaseCharacter_SetItemEnabledMode_Params params {};
		params.ItemMode = ItemMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B33A0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.SetHealth
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InHealth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::SetHealth(float InHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.SetHealth");
		
		ADFBaseCharacter_SetHealth_Params params {};
		params.InHealth = InHealth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3350
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ServerSuicide
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ADFBaseCharacter::ServerSuicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ServerSuicide");
		
		ADFBaseCharacter_ServerSuicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3290
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ServerEquipItem
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class ADFBaseItem*                                 ItemToEquip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ServerEquipItem(class ADFBaseItem* ItemToEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ServerEquipItem");
		
		ADFBaseCharacter_ServerEquipItem_Params params {};
		params.ItemToEquip = ItemToEquip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3270
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.Reload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.Reload");
		
		ADFBaseCharacter_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveRestart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseCharacter::ReceiveRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveRestart");
		
		ADFBaseCharacter_ReceiveRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceivePlayHit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ReceivePlayHit(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceivePlayHit");
		
		ADFBaseCharacter_ReceivePlayHit_Params params {};
		params.DamageTaken = DamageTaken;
		params.DamageEvent = DamageEvent;
		params.PawnInstigator = PawnInstigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceivePawnTeamStateUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFTeamState*                                TeamStateBeforeUpdate                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFTeamState*                                NewTeamState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewTeamStateInit                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ReceivePawnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate, class ADFTeamState* NewTeamState, bool bNewTeamStateInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceivePawnTeamStateUpdated");
		
		ADFBaseCharacter_ReceivePawnTeamStateUpdated_Params params {};
		params.TeamStateBeforeUpdate = TeamStateBeforeUpdate;
		params.NewTeamState = NewTeamState;
		params.bNewTeamStateInit = bNewTeamStateInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceivePawnTeamNumUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      LastTeamNum                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewTeamNum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ReceivePawnTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceivePawnTeamNumUpdated");
		
		ADFBaseCharacter_ReceivePawnTeamNumUpdated_Params params {};
		params.LastTeamNum = LastTeamNum;
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveOnStartSprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseCharacter::ReceiveOnStartSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveOnStartSprint");
		
		ADFBaseCharacter_ReceiveOnStartSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveOnStartProne
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScaledHalfHeightAdjust                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ReceiveOnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveOnStartProne");
		
		ADFBaseCharacter_ReceiveOnStartProne_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveOnStartLean
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseCharacter::ReceiveOnStartLean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveOnStartLean");
		
		ADFBaseCharacter_ReceiveOnStartLean_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveOnStartAim
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseCharacter::ReceiveOnStartAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveOnStartAim");
		
		ADFBaseCharacter_ReceiveOnStartAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveOnRepPlayerState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseCharacter::ReceiveOnRepPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveOnRepPlayerState");
		
		ADFBaseCharacter_ReceiveOnRepPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveOnEndSprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseCharacter::ReceiveOnEndSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveOnEndSprint");
		
		ADFBaseCharacter_ReceiveOnEndSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveOnEndProne
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScaledHalfHeightAdjust                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ReceiveOnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveOnEndProne");
		
		ADFBaseCharacter_ReceiveOnEndProne_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveOnEndLean
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseCharacter::ReceiveOnEndLean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveOnEndLean");
		
		ADFBaseCharacter_ReceiveOnEndLean_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveOnEndAim
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseCharacter::ReceiveOnEndAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveOnEndAim");
		
		ADFBaseCharacter_ReceiveOnEndAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveHealthChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHealthTotal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PrevHealthTotal                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ReceiveHealthChanged(float NewHealthTotal, float PrevHealthTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveHealthChanged");
		
		ADFBaseCharacter_ReceiveHealthChanged_Params params {};
		params.NewHealthTotal = NewHealthTotal;
		params.PrevHealthTotal = PrevHealthTotal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ReceiveEquippedItemChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseItem*                                 NewEquippedItem                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseItem*                                 PrevEquippedItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ReceiveEquippedItemChanged(class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ReceiveEquippedItemChanged");
		
		ADFBaseCharacter_ReceiveEquippedItemChanged_Params params {};
		params.NewEquippedItem = NewEquippedItem;
		params.PrevEquippedItem = PrevEquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3250
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ProneToggle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::ProneToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ProneToggle");
		
		ADFBaseCharacter_ProneToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B31B0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterUnEquipMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                UnEquipMontageToPlay                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterUnEquipMontage(class UAnimMontage* UnEquipMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterUnEquipMontage");
		
		ADFBaseCharacter_PlayCharacterUnEquipMontage_Params params {};
		params.UnEquipMontageToPlay = UnEquipMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3110
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterThrowUnderhandMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                ThrowUnderhandMontageToPlay                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterThrowUnderhandMontage(class UAnimMontage* ThrowUnderhandMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterThrowUnderhandMontage");
		
		ADFBaseCharacter_PlayCharacterThrowUnderhandMontage_Params params {};
		params.ThrowUnderhandMontageToPlay = ThrowUnderhandMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B3070
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterThrowOverhandMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                ThrowOverhandMontageToPlay                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterThrowOverhandMontage(class UAnimMontage* ThrowOverhandMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterThrowOverhandMontage");
		
		ADFBaseCharacter_PlayCharacterThrowOverhandMontage_Params params {};
		params.ThrowOverhandMontageToPlay = ThrowOverhandMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2FA0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterStartReloadMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                StartReloadMontageToPlay                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDryReload                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterStartReloadMontage(class UAnimMontage* StartReloadMontageToPlay, bool bDryReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterStartReloadMontage");
		
		ADFBaseCharacter_PlayCharacterStartReloadMontage_Params params {};
		params.StartReloadMontageToPlay = StartReloadMontageToPlay;
		params.bDryReload = bDryReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2EF0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterSound
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPerspectiveSound                           Sound                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAudioComponent* ADFBaseCharacter::PlayCharacterSound(const struct FPerspectiveSound& Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterSound");
		
		ADFBaseCharacter_PlayCharacterSound_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2E50
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterReloadMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDryReload                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterReloadMontage(bool bDryReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterReloadMontage");
		
		ADFBaseCharacter_PlayCharacterReloadMontage_Params params {};
		params.bDryReload = bDryReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2D60
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterPerspectiveAnimation
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            CharAnim                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceDisableAutoBlendOut                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterPerspectiveAnimation(const struct FPerspectiveAnim& CharAnim, bool bForceDisableAutoBlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterPerspectiveAnimation");
		
		ADFBaseCharacter_PlayCharacterPerspectiveAnimation_Params params {};
		params.CharAnim = CharAnim;
		params.bForceDisableAutoBlendOut = bForceDisableAutoBlendOut;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2C90
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                CharMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceDisableAutoBlendOut                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterMontage(class UAnimMontage* CharMontage, bool bForceDisableAutoBlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterMontage");
		
		ADFBaseCharacter_PlayCharacterMontage_Params params {};
		params.CharMontage = CharMontage;
		params.bForceDisableAutoBlendOut = bForceDisableAutoBlendOut;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2B80
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterFireMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                FireMontageToPlay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireLast                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireADS                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterFireMontage(class UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterFireMontage");
		
		ADFBaseCharacter_PlayCharacterFireMontage_Params params {};
		params.FireMontageToPlay = FireMontageToPlay;
		params.bFireLast = bFireLast;
		params.bFireADS = bFireADS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2AE0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterEquipMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDontPlayAndReturnDominantPlayLengthOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterEquipMontage(bool bDontPlayAndReturnDominantPlayLengthOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterEquipMontage");
		
		ADFBaseCharacter_PlayCharacterEquipMontage_Params params {};
		params.bDontPlayAndReturnDominantPlayLengthOnly = bDontPlayAndReturnDominantPlayLengthOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2A10
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterEndReloadMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                EndReloadMontageToPlay                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDryReload                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterEndReloadMontage(class UAnimMontage* EndReloadMontageToPlay, bool bDryReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterEndReloadMontage");
		
		ADFBaseCharacter_PlayCharacterEndReloadMontage_Params params {};
		params.EndReloadMontageToPlay = EndReloadMontageToPlay;
		params.bDryReload = bDryReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2970
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterDeathMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDontPlayAndReturnDominantPlayLengthOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterDeathMontage(bool bDontPlayAndReturnDominantPlayLengthOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterDeathMontage");
		
		ADFBaseCharacter_PlayCharacterDeathMontage_Params params {};
		params.bDontPlayAndReturnDominantPlayLengthOnly = bDontPlayAndReturnDominantPlayLengthOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B28D0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterCockMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                CockMontageToPlay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterCockMontage(class UAnimMontage* CockMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterCockMontage");
		
		ADFBaseCharacter_PlayCharacterCockMontage_Params params {};
		params.CockMontageToPlay = CockMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2830
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.PlayCharacterActionMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                ActionMontageToPlay                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseCharacter::PlayCharacterActionMontage(class UAnimMontage* ActionMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.PlayCharacterActionMontage");
		
		ADFBaseCharacter_PlayCharacterActionMontage_Params params {};
		params.ActionMontageToPlay = ActionMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2770
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_TeamState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADFTeamState*                                TeamStateBeforeUpdate                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::OnRep_TeamState(class ADFTeamState* TeamStateBeforeUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_TeamState");
		
		ADFBaseCharacter_OnRep_TeamState_Params params {};
		params.TeamStateBeforeUpdate = TeamStateBeforeUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B26F0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_TeamNum
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		unsigned char                                      LastTeamNum                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::OnRep_TeamNum(unsigned char LastTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_TeamNum");
		
		ADFBaseCharacter_OnRep_TeamNum_Params params {};
		params.LastTeamNum = LastTeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B26D0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_ReplicatedStance
	 * 		Flags  -> (Native, Protected)
	 */
	void ADFBaseCharacter::OnRep_ReplicatedStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_ReplicatedStance");
		
		ADFBaseCharacter_OnRep_ReplicatedStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2650
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_ReplicatedLeanAmount
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		float                                              LastReplicatedLeanAmount                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::OnRep_ReplicatedLeanAmount(float LastReplicatedLeanAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_ReplicatedLeanAmount");
		
		ADFBaseCharacter_OnRep_ReplicatedLeanAmount_Params params {};
		params.LastReplicatedLeanAmount = LastReplicatedLeanAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2630
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_LastTakeHitInfo
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ADFBaseCharacter::OnRep_LastTakeHitInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_LastTakeHitInfo");
		
		ADFBaseCharacter_OnRep_LastTakeHitInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B25B0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_ItemEnabledMode
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		EDFItemEnabledMode                                 PreviousItemEnabledMode                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::OnRep_ItemEnabledMode(EDFItemEnabledMode PreviousItemEnabledMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_ItemEnabledMode");
		
		ADFBaseCharacter_OnRep_ItemEnabledMode_Params params {};
		params.PreviousItemEnabledMode = PreviousItemEnabledMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2590
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_IsProne
	 * 		Flags  -> (Native, Protected)
	 */
	void ADFBaseCharacter::OnRep_IsProne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_IsProne");
		
		ADFBaseCharacter_OnRep_IsProne_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2510
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_Health
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              PreviousValue                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::OnRep_Health(float PreviousValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_Health");
		
		ADFBaseCharacter_OnRep_Health_Params params {};
		params.PreviousValue = PreviousValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2490
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_EquippedItem
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ADFBaseItem*                                 LastItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::OnRep_EquippedItem(class ADFBaseItem* LastItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_EquippedItem");
		
		ADFBaseCharacter_OnRep_EquippedItem_Params params {};
		params.LastItem = LastItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2810
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_bSprinting
	 * 		Flags  -> (Native, Protected)
	 */
	void ADFBaseCharacter::OnRep_bSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_bSprinting");
		
		ADFBaseCharacter_OnRep_bSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B27F0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnRep_bAiming
	 * 		Flags  -> (Native, Protected)
	 */
	void ADFBaseCharacter::OnRep_bAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnRep_bAiming");
		
		ADFBaseCharacter_OnRep_bAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2320
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.OnDeath
	 * 		Flags  -> (Native, Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.OnDeath");
		
		ADFBaseCharacter_OnDeath_Params params {};
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2290
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.LeaveProne
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::LeaveProne(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.LeaveProne");
		
		ADFBaseCharacter_LeaveProne_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B21C0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.Lean
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ELeanDirection                                     DesiredLeanDir                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::Lean(ELeanDirection DesiredLeanDir, bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.Lean");
		
		ADFBaseCharacter_Lean_Params params {};
		params.DesiredLeanDir = DesiredLeanDir;
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ItemEnabledModeChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EDFItemEnabledMode                                 PreviousItemEnabledMode                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ItemEnabledModeChanged(EDFItemEnabledMode PreviousItemEnabledMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ItemEnabledModeChanged");
		
		ADFBaseCharacter_ItemEnabledModeChanged_Params params {};
		params.PreviousItemEnabledMode = PreviousItemEnabledMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2190
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.IsPrefiring
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseCharacter::IsPrefiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.IsPrefiring");
		
		ADFBaseCharacter_IsPrefiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2160
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.IsPlayer
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseCharacter::IsPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.IsPlayer");
		
		ADFBaseCharacter_IsPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B20C0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.IsPerspectiveMesh
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshCompToCheck                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseCharacter::IsPerspectiveMesh(class USkeletalMeshComponent* MeshCompToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.IsPerspectiveMesh");
		
		ADFBaseCharacter_IsPerspectiveMesh_Params params {};
		params.MeshCompToCheck = MeshCompToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2060
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.IsLeaning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseCharacter::IsLeaning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.IsLeaning");
		
		ADFBaseCharacter_IsLeaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B2030
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.IsFiring
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseCharacter::IsFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.IsFiring");
		
		ADFBaseCharacter_IsFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1FB0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.IsEquipped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseCharacter::IsEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.IsEquipped");
		
		ADFBaseCharacter_IsEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1F70
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.IsAlive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseCharacter::IsAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.IsAlive");
		
		ADFBaseCharacter_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1EE0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GoProne
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::GoProne(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GoProne");
		
		ADFBaseCharacter_GoProne_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1E10
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GiveLoadout
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFLoadout*                                  Loadout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEquipFirstItem                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::GiveLoadout(class UDFLoadout* Loadout, bool bEquipFirstItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GiveLoadout");
		
		ADFBaseCharacter_GiveLoadout_Params params {};
		params.Loadout = Loadout;
		params.bEquipFirstItem = bEquipFirstItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1DC0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetRelevantEquippedItem
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseItem* ADFBaseCharacter::GetRelevantEquippedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetRelevantEquippedItem");
		
		ADFBaseCharacter_GetRelevantEquippedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1D10
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetMontageToUseFromPerspectiveAnimPair
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            AnimationPair                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimMontage* ADFBaseCharacter::GetMontageToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetMontageToUseFromPerspectiveAnimPair");
		
		ADFBaseCharacter_GetMontageToUseFromPerspectiveAnimPair_Params params {};
		params.AnimationPair = AnimationPair;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1CD0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetItemEnabledMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EDFItemEnabledMode ADFBaseCharacter::GetItemEnabledMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetItemEnabledMode");
		
		ADFBaseCharacter_GetItemEnabledMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1CB0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetItemAttachPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName ADFBaseCharacter::GetItemAttachPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetItemAttachPoint");
		
		ADFBaseCharacter_GetItemAttachPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1C90
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetInventory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDFInventoryComponent* ADFBaseCharacter::GetInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetInventory");
		
		ADFBaseCharacter_GetInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1C50
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetEquippedItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseItem* ADFBaseCharacter::GetEquippedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetEquippedItem");
		
		ADFBaseCharacter_GetEquippedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1B60
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetDamageMultiplierByBoneName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DamageMultiplier                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseCharacter::GetDamageMultiplierByBoneName(const class FName& BoneName, float* DamageMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetDamageMultiplierByBoneName");
		
		ADFBaseCharacter_GetDamageMultiplierByBoneName_Params params {};
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageMultiplier != nullptr)
			*DamageMultiplier = params.DamageMultiplier;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1AA0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetCharacterMeshToUse
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIgnoreLocalControlOnServer                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* ADFBaseCharacter::GetCharacterMeshToUse(bool bIgnoreLocalControlOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetCharacterMeshToUse");
		
		ADFBaseCharacter_GetCharacterMeshToUse_Params params {};
		params.bIgnoreLocalControlOnServer = bIgnoreLocalControlOnServer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B19F0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetCharacterDeathMontageToUse
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UAnimMontage*                                OutCharDeathMontage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseCharacter::GetCharacterDeathMontageToUse(class UAnimMontage** OutCharDeathMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetCharacterDeathMontageToUse");
		
		ADFBaseCharacter_GetCharacterDeathMontageToUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCharDeathMontage != nullptr)
			*OutCharDeathMontage = params.OutCharDeathMontage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1950
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetCharacterAnimTickOptionToUse
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bVisibleMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EVisibilityBasedAnimTickOption ADFBaseCharacter::GetCharacterAnimTickOptionToUse(bool bVisibleMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetCharacterAnimTickOptionToUse");
		
		ADFBaseCharacter_GetCharacterAnimTickOptionToUse_Params params {};
		params.bVisibleMesh = bVisibleMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B18A0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetAnimToUseFromPerspectiveAnimPair
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            AnimationPair                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimSequenceBase* ADFBaseCharacter::GetAnimToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetAnimToUseFromPerspectiveAnimPair");
		
		ADFBaseCharacter_GetAnimToUseFromPerspectiveAnimPair_Params params {};
		params.AnimationPair = AnimationPair;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1860
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.GetAimOffsets
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FRotator ADFBaseCharacter::GetAimOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.GetAimOffsets");
		
		ADFBaseCharacter_GetAimOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1840
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.EquipPreviousItem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::EquipPreviousItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.EquipPreviousItem");
		
		ADFBaseCharacter_EquipPreviousItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B17C0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.EquipNextItemByType
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EItemType                                          ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::EquipNextItemByType(EItemType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.EquipNextItemByType");
		
		ADFBaseCharacter_EquipNextItemByType_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B17A0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.EquipNextItem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::EquipNextItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.EquipNextItem");
		
		ADFBaseCharacter_EquipNextItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1710
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.EquipItem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseItem*                                 ItemToEquip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::EquipItem(class ADFBaseItem* ItemToEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.EquipItem");
		
		ADFBaseCharacter_EquipItem_Params params {};
		params.ItemToEquip = ItemToEquip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1590
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.Die
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseCharacter::Die(float KillingDamage, const struct FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.Die");
		
		ADFBaseCharacter_Die_Params params {};
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1570
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.CrouchToggle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::CrouchToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.CrouchToggle");
		
		ADFBaseCharacter_CrouchToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1280
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ClientVeryShortAdjustPosition_CustomStamina
	 * 		Flags  -> (Net, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         NewBase                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewBaseBoneName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasBase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBaseRelativePosition                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ServerMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ServerSprintStamina                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ClientVeryShortAdjustPosition_CustomStamina(float Timestamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ClientVeryShortAdjustPosition_CustomStamina");
		
		ADFBaseCharacter_ClientVeryShortAdjustPosition_CustomStamina_Params params {};
		params.Timestamp = Timestamp;
		params.NewLoc = NewLoc;
		params.NewBase = NewBase;
		params.NewBaseBoneName = NewBaseBoneName;
		params.bHasBase = bHasBase;
		params.bBaseRelativePosition = bBaseRelativePosition;
		params.ServerMovementMode = ServerMovementMode;
		params.ServerSprintStamina = ServerSprintStamina;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B0D90
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ClientAdjustRootMotionSourcePosition_CustomStamina
	 * 		Flags  -> (Net, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRootMotionSourceGroup                      ServerRootMotion                                           (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAnimRootMotion                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ServerMontageTrackPosition                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ServerLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ServerRotation                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ServerVelZ                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ServerBase                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ServerBoneName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasBase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBaseRelativePosition                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ServerMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ServerSprintStamina                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ClientAdjustRootMotionSourcePosition_CustomStamina(float Timestamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const class FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ClientAdjustRootMotionSourcePosition_CustomStamina");
		
		ADFBaseCharacter_ClientAdjustRootMotionSourcePosition_CustomStamina_Params params {};
		params.Timestamp = Timestamp;
		params.ServerRootMotion = ServerRootMotion;
		params.bHasAnimRootMotion = bHasAnimRootMotion;
		params.ServerMontageTrackPosition = ServerMontageTrackPosition;
		params.ServerLoc = ServerLoc;
		params.ServerRotation = ServerRotation;
		params.ServerVelZ = ServerVelZ;
		params.ServerBase = ServerBase;
		params.ServerBoneName = ServerBoneName;
		params.bHasBase = bHasBase;
		params.bBaseRelativePosition = bBaseRelativePosition;
		params.ServerMovementMode = ServerMovementMode;
		params.ServerSprintStamina = ServerSprintStamina;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B0A60
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ClientAdjustRootMotionPosition_CustomStamina
	 * 		Flags  -> (Net, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ServerMontageTrackPosition                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ServerLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ServerRotation                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ServerVelZ                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ServerBase                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ServerBoneName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasBase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBaseRelativePosition                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ServerMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ServerSprintStamina                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ClientAdjustRootMotionPosition_CustomStamina(float Timestamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const class FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ClientAdjustRootMotionPosition_CustomStamina");
		
		ADFBaseCharacter_ClientAdjustRootMotionPosition_CustomStamina_Params params {};
		params.Timestamp = Timestamp;
		params.ServerMontageTrackPosition = ServerMontageTrackPosition;
		params.ServerLoc = ServerLoc;
		params.ServerRotation = ServerRotation;
		params.ServerVelZ = ServerVelZ;
		params.ServerBase = ServerBase;
		params.ServerBoneName = ServerBoneName;
		params.bHasBase = bHasBase;
		params.bBaseRelativePosition = bBaseRelativePosition;
		params.ServerMovementMode = ServerMovementMode;
		params.ServerSprintStamina = ServerSprintStamina;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B07B0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ClientAdjustPosition_CustomStamina
	 * 		Flags  -> (Net, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewVel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         NewBase                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewBaseBoneName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasBase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBaseRelativePosition                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ServerMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ServerSprintStamina                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ClientAdjustPosition_CustomStamina(float Timestamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ClientAdjustPosition_CustomStamina");
		
		ADFBaseCharacter_ClientAdjustPosition_CustomStamina_Params params {};
		params.Timestamp = Timestamp;
		params.NewLoc = NewLoc;
		params.NewVel = NewVel;
		params.NewBase = NewBase;
		params.NewBaseBoneName = NewBaseBoneName;
		params.bHasBase = bHasBase;
		params.bBaseRelativePosition = bBaseRelativePosition;
		params.ServerMovementMode = ServerMovementMode;
		params.ServerSprintStamina = ServerSprintStamina;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B0720
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.ClearCharacterAnimInstances
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bPerspectiveMeshOnly                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::ClearCharacterAnimInstances(bool bPerspectiveMeshOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.ClearCharacterAnimInstances");
		
		ADFBaseCharacter_ClearCharacterAnimInstances_Params params {};
		params.bPerspectiveMeshOnly = bPerspectiveMeshOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B06F0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.CanSprint
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseCharacter::CanSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.CanSprint");
		
		ADFBaseCharacter_CanSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B0630
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.CanLean
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ELeanDirection                                     DesiredLeanDir                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseCharacter::CanLean(ELeanDirection DesiredLeanDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.CanLean");
		
		ADFBaseCharacter_CanLean_Params params {};
		params.DesiredLeanDir = DesiredLeanDir;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B0600
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.CanGoProne
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseCharacter::CanGoProne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.CanGoProne");
		
		ADFBaseCharacter_CanGoProne_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B0480
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.CanDie
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseCharacter::CanDie(float KillingDamage, const struct FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.CanDie");
		
		ADFBaseCharacter_CanDie_Params params {};
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B0450
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.CanAim
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseCharacter::CanAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.CanAim");
		
		ADFBaseCharacter_CanAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B0430
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.AimToggle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseCharacter::AimToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.AimToggle");
		
		ADFBaseCharacter_AimToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B03A0
	 * 		Name   -> Function DonkehFramework.DFBaseCharacter.Aim
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseCharacter::Aim(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseCharacter.Aim");
		
		ADFBaseCharacter_Aim_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8B10
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.UpdatePlayerGameplayMuteStates
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBasePlayerController*                     ForPlayerController                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::UpdatePlayerGameplayMuteStates(class ADFBasePlayerController* ForPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.UpdatePlayerGameplayMuteStates");
		
		ADFBaseGameMode_UpdatePlayerGameplayMuteStates_Params params {};
		params.ForPlayerController = ForPlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8A90
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.UnregisterSignificantActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToRemove                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::UnregisterSignificantActor(class AActor* ActorToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.UnregisterSignificantActor");
		
		ADFBaseGameMode_UnregisterSignificantActor_Params params {};
		params.ActorToRemove = ActorToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B27F0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.SwitchToNextMap
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseGameMode::SwitchToNextMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.SwitchToNextMap");
		
		ADFBaseGameMode_SwitchToNextMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B89D0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.SignificantActorEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      RemovedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::SignificantActorEndPlay(class AActor* RemovedActor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.SignificantActorEndPlay");
		
		ADFBaseGameMode_SignificantActorEndPlay_Params params {};
		params.RemovedActor = RemovedActor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B89A0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ShouldHibernate
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGameMode::ShouldHibernate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ShouldHibernate");
		
		ADFBaseGameMode_ShouldHibernate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B88D0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ShouldGameplayMuteRemotePlayer
	 * 		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADFBasePlayerController*                     ForPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBasePlayerController*                     PlayerToCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::ShouldGameplayMuteRemotePlayer(class ADFBasePlayerController* ForPlayer, class ADFBasePlayerController* PlayerToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ShouldGameplayMuteRemotePlayer");
		
		ADFBaseGameMode_ShouldGameplayMuteRemotePlayer_Params params {};
		params.ForPlayer = ForPlayer;
		params.PlayerToCheck = PlayerToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B88A0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ShouldBotAutofill
	 * 		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGameMode::ShouldBotAutofill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ShouldBotAutofill");
		
		ADFBaseGameMode_ShouldBotAutofill_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8660
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.RemovePlayerByAge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewest                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExcludeBots                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExcludeHumans                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::RemovePlayerByAge(bool bNewest, bool bExcludeBots, bool bExcludeHumans)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.RemovePlayerByAge");
		
		ADFBaseGameMode_RemovePlayerByAge_Params params {};
		params.bNewest = bNewest;
		params.bExcludeBots = bExcludeBots;
		params.bExcludeHumans = bExcludeHumans;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8630
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.RemoveOldestPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseGameMode::RemoveOldestPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.RemoveOldestPlayer");
		
		ADFBaseGameMode_RemoveOldestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8600
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.RemoveOldestBot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseGameMode::RemoveOldestBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.RemoveOldestBot");
		
		ADFBaseGameMode_RemoveOldestBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B85D0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.RemoveNewestPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseGameMode::RemoveNewestPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.RemoveNewestPlayer");
		
		ADFBaseGameMode_RemoveNewestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B85A0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.RemoveNewestBot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADFBaseGameMode::RemoveNewestBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.RemoveNewestBot");
		
		ADFBaseGameMode_RemoveNewestBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B84F0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.RemoveBotByName
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::RemoveBotByName(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.RemoveBotByName");
		
		ADFBaseGameMode_RemoveBotByName_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8450
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.RemoveBot
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerState*                                BotPS                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::RemoveBot(class APlayerState* BotPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.RemoveBot");
		
		ADFBaseGameMode_RemoveBot_Params params {};
		params.BotPS = BotPS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8430
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.RemoveAllBots
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 */
	void ADFBaseGameMode::RemoveAllBots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.RemoveAllBots");
		
		ADFBaseGameMode_RemoveAllBots_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B83B0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.RegisterSignificantActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::RegisterSignificantActor(class AActor* ActorToRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.RegisterSignificantActor");
		
		ADFBaseGameMode_RegisterSignificantActor_Params params {};
		params.ActorToRegister = ActorToRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ReceiveOnSwapAIControllers
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OldAIC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AAIController*                               NewAIC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::ReceiveOnSwapAIControllers(class AAIController* OldAIC, class AAIController* NewAIC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ReceiveOnSwapAIControllers");
		
		ADFBaseGameMode_ReceiveOnSwapAIControllers_Params params {};
		params.OldAIC = OldAIC;
		params.NewAIC = NewAIC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchIsWaitingToStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseGameMode::ReceiveOnMatchIsWaitingToStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchIsWaitingToStart");
		
		ADFBaseGameMode_ReceiveOnMatchIsWaitingToStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchHasStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseGameMode::ReceiveOnMatchHasStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchHasStarted");
		
		ADFBaseGameMode_ReceiveOnMatchHasStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchHasEnded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseGameMode::ReceiveOnMatchHasEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchHasEnded");
		
		ADFBaseGameMode_ReceiveOnMatchHasEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchAborted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseGameMode::ReceiveOnMatchAborted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchAborted");
		
		ADFBaseGameMode_ReceiveOnMatchAborted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ReceiveOnLeavingMap
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseGameMode::ReceiveOnLeavingMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ReceiveOnLeavingMap");
		
		ADFBaseGameMode_ReceiveOnLeavingMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B82F0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.PlayerCanRestartGeneric
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::PlayerCanRestartGeneric(class AController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.PlayerCanRestartGeneric");
		
		ADFBaseGameMode_PlayerCanRestartGeneric_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8250
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.PlayerBotCanRestart
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::PlayerBotCanRestart(class AAIController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.PlayerBotCanRestart");
		
		ADFBaseGameMode_PlayerBotCanRestart_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7E80
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.NextMap
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void ADFBaseGameMode::NextMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.NextMap");
		
		ADFBaseGameMode_NextMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7CB0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ModifyDamage
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseGameMode::ModifyDamage(float Damage, class AActor* DamagedActor, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ModifyDamage");
		
		ADFBaseGameMode_ModifyDamage_Params params {};
		params.Damage = Damage;
		params.DamagedActor = DamagedActor;
		params.DamageEvent = DamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7B70
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.KickPlayerByName
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      KickedPlayerName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        KickReason                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::KickPlayerByName(const class FString& KickedPlayerName, const class FText& KickReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.KickPlayerByName");
		
		ADFBaseGameMode_KickPlayerByName_Params params {};
		params.KickedPlayerName = KickedPlayerName;
		params.KickReason = KickReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7A50
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.KickPlayerById
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            KickedPlayerId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        KickReason                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::KickPlayerById(int32_t KickedPlayerId, const class FText& KickReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.KickPlayerById");
		
		ADFBaseGameMode_KickPlayerById_Params params {};
		params.KickedPlayerId = KickedPlayerId;
		params.KickReason = KickReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7800
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.IsValidTeamId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::IsValidTeamId(unsigned char TeamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.IsValidTeamId");
		
		ADFBaseGameMode_IsValidTeamId_Params params {};
		params.TeamId = TeamId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7760
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.IsMatchWinner
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ADFBasePlayerState*                          PlayerStateToCheck                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::IsMatchWinner(class ADFBasePlayerState* PlayerStateToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.IsMatchWinner");
		
		ADFBaseGameMode_IsMatchWinner_Params params {};
		params.PlayerStateToCheck = PlayerStateToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7710
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.IsHibernating
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGameMode::IsHibernating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.IsHibernating");
		
		ADFBaseGameMode_IsHibernating_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B76E0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.IsFriendlyFireEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGameMode::IsFriendlyFireEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.IsFriendlyFireEnabled");
		
		ADFBaseGameMode_IsFriendlyFireEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7440
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.GetTotalNumPlayers
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIncludeTravellingPlayers                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ADFBaseGameMode::GetTotalNumPlayers(bool bIncludeTravellingPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.GetTotalNumPlayers");
		
		ADFBaseGameMode_GetTotalNumPlayers_Params params {};
		params.bIncludeTravellingPlayers = bIncludeTravellingPlayers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7330
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.GetNextMapName
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ADFBaseGameMode::GetNextMapName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.GetNextMapName");
		
		ADFBaseGameMode_GetNextMapName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B72B0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.GetNextGameName
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ADFBaseGameMode::GetNextGameName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.GetNextGameName");
		
		ADFBaseGameMode_GetNextGameName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B71C0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ForceTeamId
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SwitchedPlayerId                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      TeamIdToAssign                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::ForceTeamId(int32_t SwitchedPlayerId, unsigned char TeamIdToAssign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ForceTeamId");
		
		ADFBaseGameMode_ForceTeamId_Params params {};
		params.SwitchedPlayerId = SwitchedPlayerId;
		params.TeamIdToAssign = TeamIdToAssign;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B70D0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ForceTeam
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SwitchedPlayerName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      TeamIdToAssign                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::ForceTeam(const class FString& SwitchedPlayerName, unsigned char TeamIdToAssign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ForceTeam");
		
		ADFBaseGameMode_ForceTeam_Params params {};
		params.SwitchedPlayerName = SwitchedPlayerName;
		params.TeamIdToAssign = TeamIdToAssign;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6F50
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.FindPlayerStartTransform
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  OutFoundSpawnTransform                                     (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      IncomingName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::FindPlayerStartTransform(class AController* Player, struct FTransform* OutFoundSpawnTransform, const class FString& IncomingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.FindPlayerStartTransform");
		
		ADFBaseGameMode_FindPlayerStartTransform_Params params {};
		params.Player = Player;
		params.IncomingName = IncomingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFoundSpawnTransform != nullptr)
			*OutFoundSpawnTransform = params.OutFoundSpawnTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6E90
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.DumpActiveRulesets
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void ADFBaseGameMode::DumpActiveRulesets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.DumpActiveRulesets");
		
		ADFBaseGameMode_DumpActiveRulesets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6E70
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.DetermineMatchWinner
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void ADFBaseGameMode::DetermineMatchWinner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.DetermineMatchWinner");
		
		ADFBaseGameMode_DetermineMatchWinner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6DB0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.CreateTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFTeamDefinition*                           NewTeamDef                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewTeamIdToUse                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ADFTeamState* ADFBaseGameMode::CreateTeam(class UDFTeamDefinition* NewTeamDef, unsigned char NewTeamIdToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.CreateTeam");
		
		ADFBaseGameMode_CreateTeam_Params params {};
		params.NewTeamDef = NewTeamDef;
		params.NewTeamIdToUse = NewTeamIdToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6CF0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ChooseTeam
	 * 		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADFBasePlayerState*                          ForPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char ADFBaseGameMode::ChooseTeam(class ADFBasePlayerState* ForPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ChooseTeam");
		
		ADFBaseGameMode_ChooseTeam_Params params {};
		params.ForPlayerState = ForPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6B50
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.ChooseSpawnPointFromPlayerStart
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      StartSpot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnPointDef                              OutChosenSpawnPoint                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESpawnActorCollisionHandlingMethod                 OutCollisionHandlingMethod                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::ChooseSpawnPointFromPlayerStart(class AController* Player, class AActor* StartSpot, struct FSpawnPointDef* OutChosenSpawnPoint, ESpawnActorCollisionHandlingMethod* OutCollisionHandlingMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.ChooseSpawnPointFromPlayerStart");
		
		ADFBaseGameMode_ChooseSpawnPointFromPlayerStart_Params params {};
		params.Player = Player;
		params.StartSpot = StartSpot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutChosenSpawnPoint != nullptr)
			*OutChosenSpawnPoint = params.OutChosenSpawnPoint;
		if (OutCollisionHandlingMethod != nullptr)
			*OutCollisionHandlingMethod = params.OutCollisionHandlingMethod;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6B20
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.CheckWinConditions
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	bool ADFBaseGameMode::CheckWinConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.CheckWinConditions");
		
		ADFBaseGameMode_CheckWinConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6AF0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.CheckRulesetWinConditions
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	bool ADFBaseGameMode::CheckRulesetWinConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.CheckRulesetWinConditions");
		
		ADFBaseGameMode_CheckRulesetWinConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B69F0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.CanRegisterSignificantActor
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      ActorToRegister                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ActorDenialReason                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::CanRegisterSignificantActor(class AActor* ActorToRegister, class FString* ActorDenialReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.CanRegisterSignificantActor");
		
		ADFBaseGameMode_CanRegisterSignificantActor_Params params {};
		params.ActorToRegister = ActorToRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorDenialReason != nullptr)
			*ActorDenialReason = params.ActorDenialReason;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6920
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.CanDealDamage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADFBasePlayerState*                          DamageInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBasePlayerState*                          DamagedPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::CanDealDamage(class ADFBasePlayerState* DamageInstigator, class ADFBasePlayerState* DamagedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.CanDealDamage");
		
		ADFBaseGameMode_CanDealDamage_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.DamagedPlayer = DamagedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6810
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.CanAddRuleset
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UClass*                                      RulesetClassToAdd                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RulesetDenialReason                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::CanAddRuleset(class UClass** RulesetClassToAdd, class FString* RulesetDenialReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.CanAddRuleset");
		
		ADFBaseGameMode_CanAddRuleset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RulesetClassToAdd != nullptr)
			*RulesetClassToAdd = params.RulesetClassToAdd;
		if (RulesetDenialReason != nullptr)
			*RulesetDenialReason = params.RulesetDenialReason;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6690
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.BanPlayerByName
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      BannedPlayerName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        BanReason                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              BanDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::BanPlayerByName(const class FString& BannedPlayerName, const class FText& BanReason, float BanDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.BanPlayerByName");
		
		ADFBaseGameMode_BanPlayerByName_Params params {};
		params.BannedPlayerName = BannedPlayerName;
		params.BanReason = BanReason;
		params.BanDuration = BanDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6520
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.BanPlayerById
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BannedPlayerId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        BanReason                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              BanDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameMode::BanPlayerById(int32_t BannedPlayerId, const class FText& BanReason, float BanDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.BanPlayerById");
		
		ADFBaseGameMode_BanPlayerById_Params params {};
		params.BannedPlayerId = BannedPlayerId;
		params.BanReason = BanReason;
		params.BanDuration = BanDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6500
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.AutofillWithBots
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseGameMode::AutofillWithBots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.AutofillWithBots");
		
		ADFBaseGameMode_AutofillWithBots_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6430
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.AssignTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AController*                                 ForController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      AssignedTeam                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::AssignTeam(class AController* ForController, unsigned char AssignedTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.AssignTeam");
		
		ADFBaseGameMode_AssignTeam_Params params {};
		params.ForController = ForController;
		params.AssignedTeam = AssignedTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6360
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.AddTeamBots
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::AddTeamBots(unsigned char TeamId, int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.AddTeamBots");
		
		ADFBaseGameMode_AddTeamBots_Params params {};
		params.TeamId = TeamId;
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B62C0
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.AddNamedBot
	 * 		Flags  -> (Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      BotName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::AddNamedBot(const class FString& BotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.AddNamedBot");
		
		ADFBaseGameMode_AddNamedBot_Params params {};
		params.BotName = BotName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6230
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.AddBots
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameMode::AddBots(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.AddBots");
		
		ADFBaseGameMode_AddBots_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6100
	 * 		Name   -> Function DonkehFramework.DFBaseGameMode.AddBot
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      PlayerTeamID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerState* ADFBaseGameMode::AddBot(unsigned char PlayerTeamID, const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameMode.AddBot");
		
		ADFBaseGameMode_AddBot_Params params {};
		params.PlayerTeamID = PlayerTeamID;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseGame_DeathMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseGame_DeathMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseGame_DeathMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseGame_TeamDeathMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseGame_TeamDeathMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseGame_TeamDeathMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8390
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.ProjectVersion
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 */
	void UDFBaseGameInstance::ProjectVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.ProjectVersion");
		
		UDFBaseGameInstance_ProjectVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8130
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.OnTravelFailure
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETravelFailure                                     FailureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBaseGameInstance::OnTravelFailure(class UWorld* World, ETravelFailure FailureType, const class FString& ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.OnTravelFailure");
		
		UDFBaseGameInstance_OnTravelFailure_Params params {};
		params.World = World;
		params.FailureType = FailureType;
		params.ErrorString = ErrorString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7FF0
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.OnNetworkLagStateChanged
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNetDriver*                                  NetDriver                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENetworkLagState                                   LagType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBaseGameInstance::OnNetworkLagStateChanged(class UWorld* World, class UNetDriver* NetDriver, ENetworkLagState LagType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.OnNetworkLagStateChanged");
		
		UDFBaseGameInstance_OnNetworkLagStateChanged_Params params {};
		params.World = World;
		params.NetDriver = NetDriver;
		params.LagType = LagType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7EA0
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.OnNetworkFailure
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNetDriver*                                  NetDriver                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENetworkFailure                                    FailureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBaseGameInstance::OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, ENetworkFailure FailureType, const class FString& ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.OnNetworkFailure");
		
		UDFBaseGameInstance_OnNetworkFailure_Params params {};
		params.World = World;
		params.NetDriver = NetDriver;
		params.FailureType = FailureType;
		params.ErrorString = ErrorString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B79B0
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.JoinGameByIP
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IPAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBaseGameInstance::JoinGameByIP(const class FString& IPAddress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.JoinGameByIP");
		
		UDFBaseGameInstance_JoinGameByIP_Params params {};
		params.IPAddress = IPAddress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7920
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.JoinGame
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SearchResultIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBaseGameInstance::JoinGame(int32_t SearchResultIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.JoinGame");
		
		UDFBaseGameInstance_JoinGame_Params params {};
		params.SearchResultIndex = SearchResultIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7740
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.IsHibernating
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFBaseGameInstance::IsHibernating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.IsHibernating");
		
		UDFBaseGameInstance_IsHibernating_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B74E0
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.HostGame
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      TravelURL                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLANGame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      HostName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBaseGameInstance::HostGame(const class FString& TravelURL, bool bLANGame, int32_t MaxPlayers, const class FString& HostName, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.HostGame");
		
		UDFBaseGameInstance_HostGame_Params params {};
		params.TravelURL = TravelURL;
		params.bLANGame = bLANGame;
		params.MaxPlayers = MaxPlayers;
		params.HostName = HostName;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7290
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.ForceUpdateSession
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UDFBaseGameInstance::ForceUpdateSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.ForceUpdateSession");
		
		UDFBaseGameInstance_ForceUpdateSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6ED0
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.FindGames
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESessionSearchPresenceType                         SearchPresenceType                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBaseGameInstance::FindGames(ESessionSearchPresenceType SearchPresenceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.FindGames");
		
		UDFBaseGameInstance_FindGames_Params params {};
		params.SearchPresenceType = SearchPresenceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6EB0
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.DumpOnlineSessionState
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UDFBaseGameInstance::DumpOnlineSessionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.DumpOnlineSessionState");
		
		UDFBaseGameInstance_DumpOnlineSessionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6D90
	 * 		Name   -> Function DonkehFramework.DFBaseGameInstance.CleanupGame
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UDFBaseGameInstance::CleanupGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameInstance.CleanupGame");
		
		UDFBaseGameInstance_CleanupGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFBaseGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFBaseGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8810
	 * 		Name   -> Function DonkehFramework.DFBaseGameState.SetTimerPauseState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewPauseState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameState::SetTimerPauseState(bool bNewPauseState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameState.SetTimerPauseState");
		
		ADFBaseGameState_SetTimerPauseState_Params params {};
		params.bNewPauseState = bNewPauseState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8780
	 * 		Name   -> Function DonkehFramework.DFBaseGameState.SetRemainingTime
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewRemainingTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGameState::SetRemainingTime(int32_t NewRemainingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameState.SetRemainingTime");
		
		ADFBaseGameState_SetRemainingTime_Params params {};
		params.NewRemainingTime = NewRemainingTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B8110
	 * 		Name   -> Function DonkehFramework.DFBaseGameState.OnRep_ReplicatedRemainingTime
	 * 		Flags  -> (Native, Protected)
	 */
	void ADFBaseGameState::OnRep_ReplicatedRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameState.OnRep_ReplicatedRemainingTime");
		
		ADFBaseGameState_OnRep_ReplicatedRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B80F0
	 * 		Name   -> Function DonkehFramework.DFBaseGameState.OnRep_NumTeams
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ADFBaseGameState::OnRep_NumTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameState.OnRep_NumTeams");
		
		ADFBaseGameState_OnRep_NumTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B7890
	 * 		Name   -> Function DonkehFramework.DFBaseGameState.IsValidTeamId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGameState::IsValidTeamId(unsigned char TeamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameState.IsValidTeamId");
		
		ADFBaseGameState_IsValidTeamId_Params params {};
		params.TeamId = TeamId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B73B0
	 * 		Name   -> Function DonkehFramework.DFBaseGameState.GetTeamStateById
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		unsigned char                                      TeamIdNum                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ADFTeamState* ADFBaseGameState::GetTeamStateById(unsigned char TeamIdNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGameState.GetTeamStateById");
		
		ADFBaseGameState_GetTeamStateById_Params params {};
		params.TeamIdNum = TeamIdNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3FD0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.StopWeaponPerspectiveAnimation
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            WeapAnim                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseWeapon::StopWeaponPerspectiveAnimation(const struct FPerspectiveAnim& WeapAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.StopWeaponPerspectiveAnimation");
		
		ADFBaseWeapon_StopWeaponPerspectiveAnimation_Params params {};
		params.WeapAnim = WeapAnim;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3F50
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.StopWeaponMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                WeapMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseWeapon::StopWeaponMontage(class UAnimMontage* WeapMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.StopWeaponMontage");
		
		ADFBaseWeapon_StopWeaponMontage_Params params {};
		params.WeapMontage = WeapMontage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3F30
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.StopSimulatingWeaponFire
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBaseWeapon::StopSimulatingWeaponFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.StopSimulatingWeaponFire");
		
		ADFBaseWeapon_StopSimulatingWeaponFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3E50
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.SpawnImpactFX
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseWeapon::SpawnImpactFX(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.SpawnImpactFX");
		
		ADFBaseWeapon_SpawnImpactFX_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3C70
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.SimulateWeaponFire
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBaseWeapon::SimulateWeaponFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.SimulateWeaponFire");
		
		ADFBaseWeapon_SimulateWeaponFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3C40
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.ShouldSimulateWeaponFire
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseWeapon::ShouldSimulateWeaponFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.ShouldSimulateWeaponFire");
		
		ADFBaseWeapon_ShouldSimulateWeaponFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.ReceiveStopSimulatingWeaponFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseWeapon::ReceiveStopSimulatingWeaponFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.ReceiveStopSimulatingWeaponFire");
		
		ADFBaseWeapon_ReceiveStopSimulatingWeaponFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.ReceiveSimulateWeaponFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseWeapon::ReceiveSimulateWeaponFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.ReceiveSimulateWeaponFire");
		
		ADFBaseWeapon_ReceiveSimulateWeaponFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.ReceiveOnStopFiring
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseWeapon::ReceiveOnStopFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.ReceiveOnStopFiring");
		
		ADFBaseWeapon_ReceiveOnStopFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.ReceiveOnStartFiring
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseWeapon::ReceiveOnStartFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.ReceiveOnStartFiring");
		
		ADFBaseWeapon_ReceiveOnStartFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.ReceiveFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseWeapon::ReceiveFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.ReceiveFire");
		
		ADFBaseWeapon_ReceiveFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C32C0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PrefireDelayElapsed
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseWeapon::PrefireDelayElapsed(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PrefireDelayElapsed");
		
		ADFBaseWeapon_PrefireDelayElapsed_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3220
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponUnEquipMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                UnEquipMontageToPlay                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayWeaponUnEquipMontage(class UAnimMontage* UnEquipMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponUnEquipMontage");
		
		ADFBaseWeapon_PlayWeaponUnEquipMontage_Params params {};
		params.UnEquipMontageToPlay = UnEquipMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3180
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponThrowUnderhandMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                ThrowUnderhandMontageToPlay                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayWeaponThrowUnderhandMontage(class UAnimMontage* ThrowUnderhandMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponThrowUnderhandMontage");
		
		ADFBaseWeapon_PlayWeaponThrowUnderhandMontage_Params params {};
		params.ThrowUnderhandMontageToPlay = ThrowUnderhandMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C30E0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponThrowOverhandMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                ThrowOverhandMontageToPlay                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayWeaponThrowOverhandMontage(class UAnimMontage* ThrowOverhandMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponThrowOverhandMontage");
		
		ADFBaseWeapon_PlayWeaponThrowOverhandMontage_Params params {};
		params.ThrowOverhandMontageToPlay = ThrowOverhandMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3030
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponSound
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPerspectiveSound                           Sound                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAudioComponent* ADFBaseWeapon::PlayWeaponSound(const struct FPerspectiveSound& Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponSound");
		
		ADFBaseWeapon_PlayWeaponSound_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2F80
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponPerspectiveAnimation
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            WeapAnim                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayWeaponPerspectiveAnimation(const struct FPerspectiveAnim& WeapAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponPerspectiveAnimation");
		
		ADFBaseWeapon_PlayWeaponPerspectiveAnimation_Params params {};
		params.WeapAnim = WeapAnim;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2EB0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                WeapMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceDisableAutoBlendOut                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayWeaponMontage(class UAnimMontage* WeapMontage, bool bForceDisableAutoBlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponMontage");
		
		ADFBaseWeapon_PlayWeaponMontage_Params params {};
		params.WeapMontage = WeapMontage;
		params.bForceDisableAutoBlendOut = bForceDisableAutoBlendOut;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2DA0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponFireMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                FireMontageToPlay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireLast                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireADS                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayWeaponFireMontage(class UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponFireMontage");
		
		ADFBaseWeapon_PlayWeaponFireMontage_Params params {};
		params.FireMontageToPlay = FireMontageToPlay;
		params.bFireLast = bFireLast;
		params.bFireADS = bFireADS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2D00
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponEquipMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                EquipMontageToPlay                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayWeaponEquipMontage(class UAnimMontage* EquipMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponEquipMontage");
		
		ADFBaseWeapon_PlayWeaponEquipMontage_Params params {};
		params.EquipMontageToPlay = EquipMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2C60
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponCockMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                CockMontageToPlay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayWeaponCockMontage(class UAnimMontage* CockMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponCockMontage");
		
		ADFBaseWeapon_PlayWeaponCockMontage_Params params {};
		params.CockMontageToPlay = CockMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2BC0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayWeaponActionMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                ActionMontageToPlay                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayWeaponActionMontage(class UAnimMontage* ActionMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayWeaponActionMontage");
		
		ADFBaseWeapon_PlayWeaponActionMontage_Params params {};
		params.ActionMontageToPlay = ActionMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2AE0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayThrowAnimations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOverhandThrow                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDontPlayAndReturnDominantPlayLengthOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayThrowAnimations(bool bOverhandThrow, bool bDontPlayAndReturnDominantPlayLengthOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayThrowAnimations");
		
		ADFBaseWeapon_PlayThrowAnimations_Params params {};
		params.bOverhandThrow = bOverhandThrow;
		params.bDontPlayAndReturnDominantPlayLengthOnly = bDontPlayAndReturnDominantPlayLengthOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2A40
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayCockAnimations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDontPlayAndReturnDominantPlayLengthOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::PlayCockAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayCockAnimations");
		
		ADFBaseWeapon_PlayCockAnimations_Params params {};
		params.bDontPlayAndReturnDominantPlayLengthOnly = bDontPlayAndReturnDominantPlayLengthOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C29B0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.PlayActionAnimations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDontPlayAndReturnDominantPlayLengthOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseWeapon::PlayActionAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.PlayActionAnimations");
		
		ADFBaseWeapon_PlayActionAnimations_Params params {};
		params.bDontPlayAndReturnDominantPlayLengthOnly = bDontPlayAndReturnDominantPlayLengthOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2880
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.OnStopFiring
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBaseWeapon::OnStopFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.OnStopFiring");
		
		ADFBaseWeapon_OnStopFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2860
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.OnStartFiring
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBaseWeapon::OnStartFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.OnStartFiring");
		
		ADFBaseWeapon_OnStartFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2430
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.OnRep_FireCounter
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FRepShotInfo                                PreviousValue                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ADFBaseWeapon::OnRep_FireCounter(const struct FRepShotInfo& PreviousValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.OnRep_FireCounter");
		
		ADFBaseWeapon_OnRep_FireCounter_Params params {};
		params.PreviousValue = PreviousValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2840
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.OnRep_bPrefiring
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ADFBaseWeapon::OnRep_bPrefiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.OnRep_bPrefiring");
		
		ADFBaseWeapon_OnRep_bPrefiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2400
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.IsFiring
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseWeapon::IsFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.IsFiring");
		
		ADFBaseWeapon_IsFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2360
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.HandleFire
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBaseWeapon::HandleFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.HandleFire");
		
		ADFBaseWeapon_HandleFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C22C0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.GetWeaponMeshToUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIgnoreLocalControlOnServer                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* ADFBaseWeapon::GetWeaponMeshToUse(bool bIgnoreLocalControlOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.GetWeaponMeshToUse");
		
		ADFBaseWeapon_GetWeaponMeshToUse_Params params {};
		params.bIgnoreLocalControlOnServer = bIgnoreLocalControlOnServer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2280
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.GetWeaponMesh1P
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USkeletalMeshComponent* ADFBaseWeapon::GetWeaponMesh1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.GetWeaponMesh1P");
		
		ADFBaseWeapon_GetWeaponMesh1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C22A0
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.GetWeaponMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USkeletalMeshComponent* ADFBaseWeapon::GetWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.GetWeaponMesh");
		
		ADFBaseWeapon_GetWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2100
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.GetMontageToUseFromPerspectiveAnimPair
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            AnimationPair                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimMontage* ADFBaseWeapon::GetMontageToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.GetMontageToUseFromPerspectiveAnimPair");
		
		ADFBaseWeapon_GetMontageToUseFromPerspectiveAnimPair_Params params {};
		params.AnimationPair = AnimationPair;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2050
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.GetMontagePlayLengthToUseFromPerspectiveAnimPair
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            AnimationPair                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::GetMontagePlayLengthToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.GetMontagePlayLengthToUseFromPerspectiveAnimPair");
		
		ADFBaseWeapon_GetMontagePlayLengthToUseFromPerspectiveAnimPair_Params params {};
		params.AnimationPair = AnimationPair;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C1F00
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.GetAnimToUseFromPerspectiveAnimPair
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            AnimationPair                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimSequenceBase* ADFBaseWeapon::GetAnimToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.GetAnimToUseFromPerspectiveAnimPair");
		
		ADFBaseWeapon_GetAnimToUseFromPerspectiveAnimPair_Params params {};
		params.AnimationPair = AnimationPair;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C1E50
	 * 		Name   -> Function DonkehFramework.DFBaseWeapon.GetAnimPlayLengthToUseFromPerspectiveAnimPair
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            AnimationPair                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseWeapon::GetAnimPlayLengthToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseWeapon.GetAnimPlayLengthToUseFromPerspectiveAnimPair");
		
		ADFBaseWeapon_GetAnimPlayLengthToUseFromPerspectiveAnimPair_Params params {};
		params.AnimationPair = AnimationPair;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB740
	 * 		Name   -> Function DonkehFramework.DFBaseGun.UnloadCurrentAmmoClip
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void ADFBaseGun::UnloadCurrentAmmoClip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.UnloadCurrentAmmoClip");
		
		ADFBaseGun_UnloadCurrentAmmoClip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB720
	 * 		Name   -> Function DonkehFramework.DFBaseGun.StopSimulatingGunReload
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseGun::StopSimulatingGunReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.StopSimulatingGunReload");
		
		ADFBaseGun_StopSimulatingGunReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB690
	 * 		Name   -> Function DonkehFramework.DFBaseGun.StartReload
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::StartReload(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.StartReload");
		
		ADFBaseGun_StartReload_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB670
	 * 		Name   -> Function DonkehFramework.DFBaseGun.SimulateGunReload
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseGun::SimulateGunReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.SimulateGunReload");
		
		ADFBaseGun_SimulateGunReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB640
	 * 		Name   -> Function DonkehFramework.DFBaseGun.ShouldUseRecoil
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGun::ShouldUseRecoil()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.ShouldUseRecoil");
		
		ADFBaseGun_ShouldUseRecoil_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB610
	 * 		Name   -> Function DonkehFramework.DFBaseGun.ShouldSimulateGunReload
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGun::ShouldSimulateGunReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.ShouldSimulateGunReload");
		
		ADFBaseGun_ShouldSimulateGunReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB590
	 * 		Name   -> Function DonkehFramework.DFBaseGun.SetReloadState
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EGunReloadState                                    NewReloadState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::SetReloadState(EGunReloadState NewReloadState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.SetReloadState");
		
		ADFBaseGun_SetReloadState_Params params {};
		params.NewReloadState = NewReloadState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB510
	 * 		Name   -> Function DonkehFramework.DFBaseGun.SetFireModeBP
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		EFireMode                                          NewFireMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::SetFireModeBP(EFireMode NewFireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.SetFireModeBP");
		
		ADFBaseGun_SetFireModeBP_Params params {};
		params.NewFireMode = NewFireMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB400
	 * 		Name   -> Function DonkehFramework.DFBaseGun.SetFireMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EFireMode                                          NewFireMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromPlayerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseGun::SetFireMode(EFireMode NewFireMode, bool bFromPlayerInput, bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.SetFireMode");
		
		ADFBaseGun_SetFireMode_Params params {};
		params.NewFireMode = NewFireMode;
		params.bFromPlayerInput = bFromPlayerInput;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB3B0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.ServerStartReload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void ADFBaseGun::ServerStartReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.ServerStartReload");
		
		ADFBaseGun_ServerStartReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB300
	 * 		Name   -> Function DonkehFramework.DFBaseGun.ServerSetFireMode
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		EFireMode                                          NewFireMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::ServerSetFireMode(EFireMode NewFireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.ServerSetFireMode");
		
		ADFBaseGun_ServerSetFireMode_Params params {};
		params.NewFireMode = NewFireMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseGun.ReceiveFireModeChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EFireMode                                          NewFireMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFireMode                                          PrevFireMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromPlayerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::ReceiveFireModeChanged(EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.ReceiveFireModeChanged");
		
		ADFBaseGun_ReceiveFireModeChanged_Params params {};
		params.NewFireMode = NewFireMode;
		params.PrevFireMode = PrevFireMode;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseGun.ReceiveAmmoExhausted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseGun::ReceiveAmmoExhausted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.ReceiveAmmoExhausted");
		
		ADFBaseGun_ReceiveAmmoExhausted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BAF80
	 * 		Name   -> Function DonkehFramework.DFBaseGun.PlayWeaponStartReloadMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                StartReloadMontageToPlay                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDryReload                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseGun::PlayWeaponStartReloadMontage(class UAnimMontage* StartReloadMontageToPlay, bool bDryReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.PlayWeaponStartReloadMontage");
		
		ADFBaseGun_PlayWeaponStartReloadMontage_Params params {};
		params.StartReloadMontageToPlay = StartReloadMontageToPlay;
		params.bDryReload = bDryReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BAEE0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.PlayWeaponReloadMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDryReload                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseGun::PlayWeaponReloadMontage(bool bDryReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.PlayWeaponReloadMontage");
		
		ADFBaseGun_PlayWeaponReloadMontage_Params params {};
		params.bDryReload = bDryReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BAE10
	 * 		Name   -> Function DonkehFramework.DFBaseGun.PlayWeaponEndReloadMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                EndReloadMontageToPlay                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDryReload                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseGun::PlayWeaponEndReloadMontage(class UAnimMontage* EndReloadMontageToPlay, bool bDryReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.PlayWeaponEndReloadMontage");
		
		ADFBaseGun_PlayWeaponEndReloadMontage_Params params {};
		params.EndReloadMontageToPlay = EndReloadMontageToPlay;
		params.bDryReload = bDryReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BAD30
	 * 		Name   -> Function DonkehFramework.DFBaseGun.PlayReloadTransitionAnimations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bStartReload                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDontPlayAndReturnDominantPlayLengthOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseGun::PlayReloadTransitionAnimations(bool bStartReload, bool bDontPlayAndReturnDominantPlayLengthOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.PlayReloadTransitionAnimations");
		
		ADFBaseGun_PlayReloadTransitionAnimations_Params params {};
		params.bStartReload = bStartReload;
		params.bDontPlayAndReturnDominantPlayLengthOnly = bDontPlayAndReturnDominantPlayLengthOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BAC50
	 * 		Name   -> Function DonkehFramework.DFBaseGun.PlayReloadAnimations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDryReload                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDontPlayAndReturnDominantPlayLengthOnly                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADFBaseGun::PlayReloadAnimations(bool bDryReload, bool bDontPlayAndReturnDominantPlayLengthOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.PlayReloadAnimations");
		
		ADFBaseGun_PlayReloadAnimations_Params params {};
		params.bDryReload = bDryReload;
		params.bDontPlayAndReturnDominantPlayLengthOnly = bDontPlayAndReturnDominantPlayLengthOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BABD0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.OnRep_SelectedFireMode
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		EFireMode                                          PrevSelectedFireMode                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::OnRep_SelectedFireMode(EFireMode PrevSelectedFireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.OnRep_SelectedFireMode");
		
		ADFBaseGun_OnRep_SelectedFireMode_Params params {};
		params.PrevSelectedFireMode = PrevSelectedFireMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BAB50
	 * 		Name   -> Function DonkehFramework.DFBaseGun.OnRep_PendingReloadState
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		EGunReloadState                                    PrevReloadState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::OnRep_PendingReloadState(EGunReloadState PrevReloadState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.OnRep_PendingReloadState");
		
		ADFBaseGun_OnRep_PendingReloadState_Params params {};
		params.PrevReloadState = PrevReloadState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BAAC0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.OnRep_CurrentAmmoClip
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class ADFBaseAmmoClip*                             PrevAmmoClip                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::OnRep_CurrentAmmoClip(class ADFBaseAmmoClip* PrevAmmoClip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.OnRep_CurrentAmmoClip");
		
		ADFBaseGun_OnRep_CurrentAmmoClip_Params params {};
		params.PrevAmmoClip = PrevAmmoClip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BAA30
	 * 		Name   -> Function DonkehFramework.DFBaseGun.OnReload
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::OnReload(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.OnReload");
		
		ADFBaseGun_OnReload_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BAA10
	 * 		Name   -> Function DonkehFramework.DFBaseGun.LoadPreviousAmmoClip
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void ADFBaseGun::LoadPreviousAmmoClip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.LoadPreviousAmmoClip");
		
		ADFBaseGun_LoadPreviousAmmoClip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA9F0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.LoadNextAmmoClip
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void ADFBaseGun::LoadNextAmmoClip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.LoadNextAmmoClip");
		
		ADFBaseGun_LoadNextAmmoClip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA960
	 * 		Name   -> Function DonkehFramework.DFBaseGun.LoadAmmoClip
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseAmmoClip*                             ClipToLoad                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun::LoadAmmoClip(class ADFBaseAmmoClip* ClipToLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.LoadAmmoClip");
		
		ADFBaseGun_LoadAmmoClip_Params params {};
		params.ClipToLoad = ClipToLoad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA930
	 * 		Name   -> Function DonkehFramework.DFBaseGun.IsReloading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGun::IsReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.IsReloading");
		
		ADFBaseGun_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA8F0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.IsDryReloading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGun::IsDryReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.IsDryReloading");
		
		ADFBaseGun_IsDryReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA8C0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.HasExhaustedAllAmmo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGun::HasExhaustedAllAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.HasExhaustedAllAmmo");
		
		ADFBaseGun_HasExhaustedAllAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA890
	 * 		Name   -> Function DonkehFramework.DFBaseGun.HasAmmoClip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGun::HasAmmoClip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.HasAmmoClip");
		
		ADFBaseGun_HasAmmoClip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA800
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetTotalAmmo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeLoadedMags                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ADFBaseGun::GetTotalAmmo(bool bIncludeLoadedMags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetTotalAmmo");
		
		ADFBaseGun_GetTotalAmmo_Params params {};
		params.bIncludeLoadedMags = bIncludeLoadedMags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA7E0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetSupportedFireModes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char ADFBaseGun::GetSupportedFireModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetSupportedFireModes");
		
		ADFBaseGun_GetSupportedFireModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA7C0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetShellEjectAttachPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName ADFBaseGun::GetShellEjectAttachPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetShellEjectAttachPoint");
		
		ADFBaseGun_GetShellEjectAttachPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA7A0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetSelectedFireMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EFireMode ADFBaseGun::GetSelectedFireMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetSelectedFireMode");
		
		ADFBaseGun_GetSelectedFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA780
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetReloadState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGunReloadState ADFBaseGun::GetReloadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetReloadState");
		
		ADFBaseGun_GetReloadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA760
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetPreviousReloadState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGunReloadState ADFBaseGun::GetPreviousReloadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetPreviousReloadState");
		
		ADFBaseGun_GetPreviousReloadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA680
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetNumFreeAmmoClips
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeEmptyMags                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeCurrentMag                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ADFBaseGun::GetNumFreeAmmoClips(bool bIncludeEmptyMags, bool bIncludeCurrentMag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetNumFreeAmmoClips");
		
		ADFBaseGun_GetNumFreeAmmoClips_Params params {};
		params.bIncludeEmptyMags = bIncludeEmptyMags;
		params.bIncludeCurrentMag = bIncludeCurrentMag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA5D0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetMuzzleLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIgnoreLocalControlOnServer                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ADFBaseGun::GetMuzzleLocation(bool bIgnoreLocalControlOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetMuzzleLocation");
		
		ADFBaseGun_GetMuzzleLocation_Params params {};
		params.bIgnoreLocalControlOnServer = bIgnoreLocalControlOnServer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA520
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetMuzzleDirection
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIgnoreLocalControlOnServer                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ADFBaseGun::GetMuzzleDirection(bool bIgnoreLocalControlOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetMuzzleDirection");
		
		ADFBaseGun_GetMuzzleDirection_Params params {};
		params.bIgnoreLocalControlOnServer = bIgnoreLocalControlOnServer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA500
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetMuzzleAttachPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName ADFBaseGun::GetMuzzleAttachPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetMuzzleAttachPoint");
		
		ADFBaseGun_GetMuzzleAttachPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA460
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetMuzzleAttachComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIgnoreLocalControlOnServer                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USceneComponent* ADFBaseGun::GetMuzzleAttachComponent(bool bIgnoreLocalControlOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetMuzzleAttachComponent");
		
		ADFBaseGun_GetMuzzleAttachComponent_Params params {};
		params.bIgnoreLocalControlOnServer = bIgnoreLocalControlOnServer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA310
	 * 		Name   -> Function DonkehFramework.DFBaseGun.GetClipAmmo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ADFBaseGun::GetClipAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.GetClipAmmo");
		
		ADFBaseGun_GetClipAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B9FB0
	 * 		Name   -> Function DonkehFramework.DFBaseGun.CanReload
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseGun::CanReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun.CanReload");
		
		ADFBaseGun_CanReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseGun.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseGun::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseGun");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB240
	 * 		Name   -> Function DonkehFramework.DFBaseGun_Projectile.ServerNotifyCSHitPredicted
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FCSHitInfo                                  HitInfo                                                    (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun_Projectile::ServerNotifyCSHitPredicted(const struct FCSHitInfo& HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun_Projectile.ServerNotifyCSHitPredicted");
		
		ADFBaseGun_Projectile_ServerNotifyCSHitPredicted_Params params {};
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB140
	 * 		Name   -> Function DonkehFramework.DFBaseGun_Projectile.ServerNotifyCSHit
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           HitProj                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCSHitInfo                                  HitInfo                                                    (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun_Projectile::ServerNotifyCSHit(class ADFBaseProjectile* HitProj, const struct FCSHitInfo& HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun_Projectile.ServerNotifyCSHit");
		
		ADFBaseGun_Projectile_ServerNotifyCSHit_Params params {};
		params.HitProj = HitProj;
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BB050
	 * 		Name   -> Function DonkehFramework.DFBaseGun_Projectile.ServerFireProjectile
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun_Projectile::ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun_Projectile.ServerFireProjectile");
		
		ADFBaseGun_Projectile_ServerFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA190
	 * 		Name   -> Function DonkehFramework.DFBaseGun_Projectile.ClientProjDebugInfo
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           Proj                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewProjLoc                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LastProjLoc                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewProjRot                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewProjVel                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun_Projectile::ClientProjDebugInfo(class ADFBaseProjectile* Proj, const struct FVector& NewProjLoc, const struct FVector& LastProjLoc, const struct FRotator& NewProjRot, const struct FVector& NewProjVel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun_Projectile.ClientProjDebugInfo");
		
		ADFBaseGun_Projectile_ClientProjDebugInfo_Params params {};
		params.Proj = Proj;
		params.NewProjLoc = NewProjLoc;
		params.LastProjLoc = LastProjLoc;
		params.NewProjRot = NewProjRot;
		params.NewProjVel = NewProjVel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA090
	 * 		Name   -> Function DonkehFramework.DFBaseGun_Projectile.ClientProjDebugImpactInfo
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           Proj                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactLoc                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ImpactNorm                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun_Projectile::ClientProjDebugImpactInfo(class ADFBaseProjectile* Proj, const struct FVector& ImpactLoc, const struct FVector_NetQuantizeNormal& ImpactNorm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun_Projectile.ClientProjDebugImpactInfo");
		
		ADFBaseGun_Projectile_ClientProjDebugImpactInfo_Params params {};
		params.Proj = Proj;
		params.ImpactLoc = ImpactLoc;
		params.ImpactNorm = ImpactNorm;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B9FE0
	 * 		Name   -> Function DonkehFramework.DFBaseGun_Projectile.ClientDrawDebugFireCone
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		struct FVector                                     ConeOrig                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ConeDir                                                    (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseGun_Projectile::ClientDrawDebugFireCone(const struct FVector& ConeOrig, const struct FVector_NetQuantizeNormal& ConeDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseGun_Projectile.ClientDrawDebugFireCone");
		
		ADFBaseGun_Projectile_ClientDrawDebugFireCone_Params params {};
		params.ConeOrig = ConeOrig;
		params.ConeDir = ConeDir;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseGun_Projectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseGun_Projectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseGun_Projectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA3D0
	 * 		Name   -> Function DonkehFramework.DFBaseImpactEffect.GetImpactSound
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EPhysicalSurface                                   SurfaceType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundCue* ADFBaseImpactEffect::GetImpactSound(EPhysicalSurface SurfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseImpactEffect.GetImpactSound");
		
		ADFBaseImpactEffect_GetImpactSound_Params params {};
		params.SurfaceType = SurfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BA340
	 * 		Name   -> Function DonkehFramework.DFBaseImpactEffect.GetImpactFX
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EPhysicalSurface                                   SurfaceType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UParticleSystem* ADFBaseImpactEffect::GetImpactFX(EPhysicalSurface SurfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseImpactEffect.GetImpactFX");
		
		ADFBaseImpactEffect_GetImpactFX_Params params {};
		params.SurfaceType = SurfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseImpactEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseImpactEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseImpactEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF730
	 * 		Name   -> Function DonkehFramework.DFBasePickup.UpdatePickupState
	 * 		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePickup::UpdatePickupState(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePickup.UpdatePickupState");
		
		ADFBasePickup_UpdatePickupState_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEE80
	 * 		Name   -> Function DonkehFramework.DFBasePickup.RespawnPickup
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBasePickup::RespawnPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePickup.RespawnPickup");
		
		ADFBasePickup_RespawnPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEC80
	 * 		Name   -> Function DonkehFramework.DFBasePickup.OnRespawn
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void ADFBasePickup::OnRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePickup.OnRespawn");
		
		ADFBasePickup_OnRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEBE0
	 * 		Name   -> Function DonkehFramework.DFBasePickup.OnRep_Active
	 * 		Flags  -> (Native, Protected)
	 */
	void ADFBasePickup::OnRep_Active()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePickup.OnRep_Active");
		
		ADFBasePickup_OnRep_Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEBC0
	 * 		Name   -> Function DonkehFramework.DFBasePickup.OnPickup
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void ADFBasePickup::OnPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePickup.OnPickup");
		
		ADFBasePickup_OnPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00643620
	 * 		Name   -> Function DonkehFramework.DFBasePickup.InitializePickup
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void ADFBasePickup::InitializePickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePickup.InitializePickup");
		
		ADFBasePickup_InitializePickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE4D0
	 * 		Name   -> Function DonkehFramework.DFBasePickup.GivePickupTo
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            PickupOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePickup::GivePickupTo(class ADFBaseCharacter* PickupOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePickup.GivePickupTo");
		
		ADFBasePickup_GivePickupTo_Params params {};
		params.PickupOwner = PickupOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BDF20
	 * 		Name   -> Function DonkehFramework.DFBasePickup.CanBePickedUp
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Invoker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADFBasePickup::CanBePickedUp(class ADFBaseCharacter* Invoker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePickup.CanBePickedUp");
		
		ADFBasePickup_CanBePickedUp_Params params {};
		params.Invoker = Invoker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBasePickup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBasePickup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBasePickup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBasePickup_Health.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBasePickup_Health::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBasePickup_Health");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBasePickup_Item.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBasePickup_Item::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBasePickup_Item");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF7C0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.Use
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBasePlayerCharacter::Use()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.Use");
		
		ADFBasePlayerCharacter_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF6B0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.TurnAtRate
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerCharacter::TurnAtRate(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.TurnAtRate");
		
		ADFBasePlayerCharacter_TurnAtRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF5F0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.SwitchFireMode
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBasePlayerCharacter::SwitchFireMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.SwitchFireMode");
		
		ADFBasePlayerCharacter_SwitchFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF4B0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.SetMeshVisibility
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFirstPersonVisibility                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerCharacter::SetMeshVisibility(bool bFirstPersonVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.SetMeshVisibility");
		
		ADFBasePlayerCharacter_SetMeshVisibility_Params params {};
		params.bFirstPersonVisibility = bFirstPersonVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF3D0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.ServerUse
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ADFBasePlayerCharacter::ServerUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.ServerUse");
		
		ADFBasePlayerCharacter_ServerUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF0F0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.ServerOnToggleFirstPerson
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewFirstPerson                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerCharacter::ServerOnToggleFirstPerson(bool bNewFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.ServerOnToggleFirstPerson");
		
		ADFBasePlayerCharacter_ServerOnToggleFirstPerson_Params params {};
		params.bNewFirstPerson = bNewFirstPerson;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.ReceiveGetDefaultPawnMesh1P
	 * 		Flags  -> (Event, Protected, BlueprintEvent, Const)
	 */
	class USkeletalMesh* ADFBasePlayerCharacter::ReceiveGetDefaultPawnMesh1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.ReceiveGetDefaultPawnMesh1P");
		
		ADFBasePlayerCharacter_ReceiveGetDefaultPawnMesh1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BECA0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.OnToggleFirstPerson
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bNewFirstPerson                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerCharacter::OnToggleFirstPerson(bool bNewFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.OnToggleFirstPerson");
		
		ADFBasePlayerCharacter_OnToggleFirstPerson_Params params {};
		params.bNewFirstPerson = bNewFirstPerson;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEAF0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.OnFireReleased
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBasePlayerCharacter::OnFireReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.OnFireReleased");
		
		ADFBasePlayerCharacter_OnFireReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEAB0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.OnFirePressed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBasePlayerCharacter::OnFirePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.OnFirePressed");
		
		ADFBasePlayerCharacter_OnFirePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE8D0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.MoveUp
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerCharacter::MoveUp(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.MoveUp");
		
		ADFBasePlayerCharacter_MoveUp_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE850
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.MoveRight
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerCharacter::MoveRight(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.MoveRight");
		
		ADFBasePlayerCharacter_MoveRight_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE7D0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.MoveForward
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerCharacter::MoveForward(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.MoveForward");
		
		ADFBasePlayerCharacter_MoveForward_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE750
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.LookUpAtRate
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerCharacter::LookUpAtRate(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.LookUpAtRate");
		
		ADFBasePlayerCharacter_LookUpAtRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE720
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.IsUsingFirstPersonMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBasePlayerCharacter::IsUsingFirstPersonMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.IsUsingFirstPersonMesh");
		
		ADFBasePlayerCharacter_IsUsingFirstPersonMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE6C0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.IsTrueFirstPerson
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBasePlayerCharacter::IsTrueFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.IsTrueFirstPerson");
		
		ADFBasePlayerCharacter_IsTrueFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE650
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.IsLocalFirstPerson
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBasePlayerCharacter::IsLocalFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.IsLocalFirstPerson");
		
		ADFBasePlayerCharacter_IsLocalFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE5F0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.IsFirstPerson
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBasePlayerCharacter::IsFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.IsFirstPerson");
		
		ADFBasePlayerCharacter_IsFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE240
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.GetMesh1P
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USkeletalMeshComponent* ADFBasePlayerCharacter::GetMesh1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.GetMesh1P");
		
		ADFBasePlayerCharacter_GetMesh1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.GetItemAttachPoint1P
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName ADFBasePlayerCharacter::GetItemAttachPoint1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.GetItemAttachPoint1P");
		
		ADFBasePlayerCharacter_GetItemAttachPoint1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE0F0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.GetDefaultPawnMesh1P
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USkeletalMesh* ADFBasePlayerCharacter::GetDefaultPawnMesh1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.GetDefaultPawnMesh1P");
		
		ADFBasePlayerCharacter_GetDefaultPawnMesh1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE0D0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.GetCameraBoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpringArmComponent* ADFBasePlayerCharacter::GetCameraBoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.GetCameraBoom");
		
		ADFBasePlayerCharacter_GetCameraBoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE090
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.GetCamera1P
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCameraComponent* ADFBasePlayerCharacter::GetCamera1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.GetCamera1P");
		
		ADFBasePlayerCharacter_GetCamera1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE0B0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerCharacter.GetCamera
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCameraComponent* ADFBasePlayerCharacter::GetCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerCharacter.GetCamera");
		
		ADFBasePlayerCharacter_GetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBasePlayerCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBasePlayerCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBasePlayerCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF610
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.TeamSay
	 * 		Flags  -> (Final, Exec, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::TeamSay(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.TeamSay");
		
		ADFBasePlayerController_TeamSay_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF310
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ServerTeamSay
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ServerTeamSay(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ServerTeamSay");
		
		ADFBasePlayerController_ServerTeamSay_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BF1B0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ServerSay
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ServerSay(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ServerSay");
		
		ADFBasePlayerController_ServerSay_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEF90
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ServerNotifyProjCSHit
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           HitProj                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       HitProjDamageInstigator                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCSHitInfo                                  HitInfo                                                    (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ServerNotifyProjCSHit(class ADFBaseProjectile* HitProj, class APawn* HitProjDamageInstigator, const struct FCSHitInfo& HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ServerNotifyProjCSHit");
		
		ADFBasePlayerController_ServerNotifyProjCSHit_Params params {};
		params.HitProj = HitProj;
		params.HitProjDamageInstigator = HitProjDamageInstigator;
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEF40
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ServerEnableCheats
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ADFBasePlayerController::ServerEnableCheats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ServerEnableCheats");
		
		ADFBasePlayerController_ServerEnableCheats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEEA0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.Say
	 * 		Flags  -> (Final, Exec, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::Say(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.Say");
		
		ADFBasePlayerController_Say_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ReceiveUnpossessPawn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ReceiveUnpossessPawn(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ReceiveUnpossessPawn");
		
		ADFBasePlayerController_ReceiveUnpossessPawn_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ReceivePreClientTravel
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PendingURL                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSeamlessTravelWithRelativeTravelType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ReceivePreClientTravel(const class FString& PendingURL, bool bIsSeamlessTravelWithRelativeTravelType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ReceivePreClientTravel");
		
		ADFBasePlayerController_ReceivePreClientTravel_Params params {};
		params.PendingURL = PendingURL;
		params.bIsSeamlessTravelWithRelativeTravelType = bIsSeamlessTravelWithRelativeTravelType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ReceivePossessPawn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ReceivePossessPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ReceivePossessPawn");
		
		ADFBasePlayerController_ReceivePossessPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ReceivePlayerTeamStateUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFTeamState*                                LastTeamState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFTeamState*                                NewTeamState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewTeamStateInit                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ReceivePlayerTeamStateUpdated(class ADFTeamState* LastTeamState, class ADFTeamState* NewTeamState, bool bNewTeamStateInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ReceivePlayerTeamStateUpdated");
		
		ADFBasePlayerController_ReceivePlayerTeamStateUpdated_Params params {};
		params.LastTeamState = LastTeamState;
		params.NewTeamState = NewTeamState;
		params.bNewTeamStateInit = bNewTeamStateInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ReceivePlayerTeamNumUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      LastTeamNum                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewTeamNum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ReceivePlayerTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ReceivePlayerTeamNumUpdated");
		
		ADFBasePlayerController_ReceivePlayerTeamNumUpdated_Params params {};
		params.LastTeamNum = LastTeamNum;
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ReceiveOnRepPlayerState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBasePlayerController::ReceiveOnRepPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ReceiveOnRepPlayerState");
		
		ADFBasePlayerController_ReceiveOnRepPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ReceiveNewChatMsg
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerChatMsg                              ChatMsg                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ReceiveNewChatMsg(const struct FPlayerChatMsg& ChatMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ReceiveNewChatMsg");
		
		ADFBasePlayerController_ReceiveNewChatMsg_Params params {};
		params.ChatMsg = ChatMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.ReceiveGameHasEnded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EndGameFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsWinner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerController::ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.ReceiveGameHasEnded");
		
		ADFBasePlayerController_ReceiveGameHasEnded_Params params {};
		params.EndGameFocus = EndGameFocus;
		params.bIsWinner = bIsWinner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEB10
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.OnFireReleased
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBasePlayerController::OnFireReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.OnFireReleased");
		
		ADFBasePlayerController_OnFireReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEAD0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.OnFirePressed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBasePlayerController::OnFirePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.OnFirePressed");
		
		ADFBasePlayerController_OnFirePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE620
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.IsGameInputAllowed
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ADFBasePlayerController::IsGameInputAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.IsGameInputAllowed");
		
		ADFBasePlayerController_IsGameInputAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE4B0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerController.GetUnFreezeTimerHandle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimerHandle ADFBasePlayerController::GetUnFreezeTimerHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerController.GetUnFreezeTimerHandle");
		
		ADFBasePlayerController_GetUnFreezeTimerHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBasePlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBasePlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBasePlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3B70
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.SetTeam
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      NewTeamNum                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCopyToInactivePlayerState                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::SetTeam(unsigned char NewTeamNum, bool bCopyToInactivePlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.SetTeam");
		
		ADFBasePlayerState_SetTeam_Params params {};
		params.NewTeamNum = NewTeamNum;
		params.bCopyToInactivePlayerState = bCopyToInactivePlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C32C0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.SetAdminStatus
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewAdminStatus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::SetAdminStatus(bool bNewAdminStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.SetAdminStatus");
		
		ADFBasePlayerState_SetAdminStatus_Params params {};
		params.bNewAdminStatus = bNewAdminStatus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3A10
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.ScorePoints
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Points                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceNetUpdate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::ScorePoints(float Points, bool bForceNetUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.ScorePoints");
		
		ADFBasePlayerState_ScorePoints_Params params {};
		params.Points = Points;
		params.bForceNetUpdate = bForceNetUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3940
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.ScoreKillPlayer
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBasePlayerState*                          Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Points                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::ScoreKillPlayer(class ADFBasePlayerState* Victim, float Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.ScoreKillPlayer");
		
		ADFBasePlayerState_ScoreKillPlayer_Params params {};
		params.Victim = Victim;
		params.Points = Points;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3870
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.ScoreDeath
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBasePlayerState*                          KilledBy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Points                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::ScoreDeath(class ADFBasePlayerState* KilledBy, float Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.ScoreDeath");
		
		ADFBasePlayerState_ScoreDeath_Params params {};
		params.KilledBy = KilledBy;
		params.Points = Points;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3770
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.ScoreAssistPlayer
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBasePlayerState*                          Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBasePlayerState*                          Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Points                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::ScoreAssistPlayer(class ADFBasePlayerState* Killer, class ADFBasePlayerState* Victim, float Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.ScoreAssistPlayer");
		
		ADFBasePlayerState_ScoreAssistPlayer_Params params {};
		params.Killer = Killer;
		params.Victim = Victim;
		params.Points = Points;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.ReceiveOnRepPlayerName
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBasePlayerState::ReceiveOnRepPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.ReceiveOnRepPlayerName");
		
		ADFBasePlayerState_ReceiveOnRepPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2920
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.OnTeamStateUpdated
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFTeamState*                                TeamStateBeforeUpdate                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::OnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.OnTeamStateUpdated");
		
		ADFBasePlayerState_OnTeamStateUpdated_Params params {};
		params.TeamStateBeforeUpdate = TeamStateBeforeUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C28A0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.OnTeamNumUpdated
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      TeamNumBeforeUpdate                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::OnTeamNumUpdated(unsigned char TeamNumBeforeUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.OnTeamNumUpdated");
		
		ADFBasePlayerState_OnTeamNumUpdated_Params params {};
		params.TeamNumBeforeUpdate = TeamNumBeforeUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2700
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.OnRep_TeamState
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class ADFTeamState*                                TeamStateBeforeUpdate                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::OnRep_TeamState(class ADFTeamState* TeamStateBeforeUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.OnRep_TeamState");
		
		ADFBasePlayerState_OnRep_TeamState_Params params {};
		params.TeamStateBeforeUpdate = TeamStateBeforeUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2680
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.OnRep_TeamNum
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		unsigned char                                      TeamNumBeforeUpdate                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::OnRep_TeamNum(unsigned char TeamNumBeforeUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.OnRep_TeamNum");
		
		ADFBasePlayerState_OnRep_TeamNum_Params params {};
		params.TeamNumBeforeUpdate = TeamNumBeforeUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C25F0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.OnRep_NumKills
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		int32_t                                            PrevNumKills                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::OnRep_NumKills(int32_t PrevNumKills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.OnRep_NumKills");
		
		ADFBasePlayerState_OnRep_NumKills_Params params {};
		params.PrevNumKills = PrevNumKills;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2560
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.OnRep_NumDeaths
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		int32_t                                            PrevNumDeaths                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::OnRep_NumDeaths(int32_t PrevNumDeaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.OnRep_NumDeaths");
		
		ADFBasePlayerState_OnRep_NumDeaths_Params params {};
		params.PrevNumDeaths = PrevNumDeaths;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C24D0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.OnRep_NumAssists
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		int32_t                                            PrevNumAssists                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::OnRep_NumAssists(int32_t PrevNumAssists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.OnRep_NumAssists");
		
		ADFBasePlayerState_OnRep_NumAssists_Params params {};
		params.PrevNumAssists = PrevNumAssists;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2790
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.OnRep_bAdmin
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		bool                                               bAdminStatusBeforeUpdate                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBasePlayerState::OnRep_bAdmin(bool bAdminStatusBeforeUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.OnRep_bAdmin");
		
		ADFBasePlayerState_OnRep_bAdmin_Params params {};
		params.bAdminStatusBeforeUpdate = bAdminStatusBeforeUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2260
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.GetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char ADFBasePlayerState::GetTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.GetTeam");
		
		ADFBasePlayerState_GetTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C21E0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.GetPreviousTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char ADFBasePlayerState::GetPreviousTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.GetPreviousTeam");
		
		ADFBasePlayerState_GetPreviousTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2030
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.GetKills
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ADFBasePlayerState::GetKills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.GetKills");
		
		ADFBasePlayerState_GetKills_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C1FD0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.GetDeaths
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ADFBasePlayerState::GetDeaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.GetDeaths");
		
		ADFBasePlayerState_GetDeaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C1FB0
	 * 		Name   -> Function DonkehFramework.DFBasePlayerState.GetAssists
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ADFBasePlayerState::GetAssists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBasePlayerState.GetAssists");
		
		ADFBasePlayerState_GetAssists_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBasePlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBasePlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBasePlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C4070
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.TriggerPayload
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHitResult                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromTearOff                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectile::TriggerPayload(const struct FHitResult& ImpactHitResult, bool bFromTearOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.TriggerPayload");
		
		ADFBaseProjectile_TriggerPayload_Params params {};
		params.ImpactHitResult = ImpactHitResult;
		params.bFromTearOff = bFromTearOff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3C90
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.SpawnImpactFX
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectile::SpawnImpactFX(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.SpawnImpactFX");
		
		ADFBaseProjectile_SpawnImpactFX_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3AE0
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.SetProjectileUpdatedComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             NewProjectileUpdatedComponent                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectile::SetProjectileUpdatedComponent(class USceneComponent* NewProjectileUpdatedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.SetProjectileUpdatedComponent");
		
		ADFBaseProjectile_SetProjectileUpdatedComponent_Params params {};
		params.NewProjectileUpdatedComponent = NewProjectileUpdatedComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.ReceivePayloadActivated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHitResult                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectile::ReceivePayloadActivated(const struct FHitResult& ImpactHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.ReceivePayloadActivated");
		
		ADFBaseProjectile_ReceivePayloadActivated_Params params {};
		params.ImpactHitResult = ImpactHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C35B0
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.ProjectileStop
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectile::ProjectileStop(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.ProjectileStop");
		
		ADFBaseProjectile_ProjectileStop_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3350
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.ProjectileBounce
	 * 		Flags  -> (Native, Protected, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectile::ProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.ProjectileBounce");
		
		ADFBaseProjectile_ProjectileBounce_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.K2_ShouldIgnoreHit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool ADFBaseProjectile::K2_ShouldIgnoreHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.K2_ShouldIgnoreHit");
		
		ADFBaseProjectile_K2_ShouldIgnoreHit_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.K2_PostProcessValidHit
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitNormal                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromCSHitNotify                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectile::K2_PostProcessValidHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FHitResult& HitResult, bool bFromCSHitNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.K2_PostProcessValidHit");
		
		ADFBaseProjectile_K2_PostProcessValidHit_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.HitResult = HitResult;
		params.bFromCSHitNotify = bFromCSHitNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2380
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.HasValidPredictedClientProjectile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFBaseProjectile::HasValidPredictedClientProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.HasValidPredictedClientProjectile");
		
		ADFBaseProjectile_HasValidPredictedClientProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2230
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.GetProjectileUpdatedPrimitive
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPrimitiveComponent* ADFBaseProjectile::GetProjectileUpdatedPrimitive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.GetProjectileUpdatedPrimitive");
		
		ADFBaseProjectile_GetProjectileUpdatedPrimitive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2200
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.GetProjectileUpdatedComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USceneComponent* ADFBaseProjectile::GetProjectileUpdatedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.GetProjectileUpdatedComponent");
		
		ADFBaseProjectile_GetProjectileUpdatedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C21B0
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.GetOwningWeapon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseWeapon* ADFBaseProjectile::GetOwningWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.GetOwningWeapon");
		
		ADFBaseProjectile_GetOwningWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C1FF0
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.GetImpactFXClass
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* ADFBaseProjectile::GetImpactFXClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.GetImpactFXClass");
		
		ADFBaseProjectile_GetImpactFXClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C1D60
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.GetAdjustedDamageParams
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDFDamageParams ADFBaseProjectile::GetAdjustedDamageParams(class AActor* OtherActor, const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.GetAdjustedDamageParams");
		
		ADFBaseProjectile_GetAdjustedDamageParams_Params params {};
		params.OtherActor = OtherActor;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEBE0
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.DisableAndDeferDestroy
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADFBaseProjectile::DisableAndDeferDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.DisableAndDeferDestroy");
		
		ADFBaseProjectile_DisableAndDeferDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C1B60
	 * 		Name   -> Function DonkehFramework.DFBaseProjectile.ApplyDamageToImpactedActor
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitNormal                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	float ADFBaseProjectile::ApplyDamageToImpactedActor(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectile.ApplyDamageToImpactedActor");
		
		ADFBaseProjectile_ApplyDamageToImpactedActor_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C41A0
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.TriggerPayload
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHitResult                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectileLegacy::TriggerPayload(const struct FHitResult& ImpactHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.TriggerPayload");
		
		ADFBaseProjectileLegacy_TriggerPayload_Params params {};
		params.ImpactHitResult = ImpactHitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BED30
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.StopSimulatingPayloadActivation
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBaseProjectileLegacy::StopSimulatingPayloadActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.StopSimulatingPayloadActivation");
		
		ADFBaseProjectileLegacy_StopSimulatingPayloadActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3D70
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.SpawnImpactFX
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectileLegacy::SpawnImpactFX(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.SpawnImpactFX");
		
		ADFBaseProjectileLegacy_SpawnImpactFX_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEBE0
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.SimulatePayloadActivation
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ADFBaseProjectileLegacy::SimulatePayloadActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.SimulatePayloadActivation");
		
		ADFBaseProjectileLegacy_SimulatePayloadActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.ReceiveStopSimulatingPayloadActivation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseProjectileLegacy::ReceiveStopSimulatingPayloadActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.ReceiveStopSimulatingPayloadActivation");
		
		ADFBaseProjectileLegacy_ReceiveStopSimulatingPayloadActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.ReceiveSimulatePayloadActivation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFBaseProjectileLegacy::ReceiveSimulatePayloadActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.ReceiveSimulatePayloadActivation");
		
		ADFBaseProjectileLegacy_ReceiveSimulatePayloadActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.ReceivePayloadActivated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHitResult                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectileLegacy::ReceivePayloadActivated(const struct FHitResult& ImpactHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.ReceivePayloadActivated");
		
		ADFBaseProjectileLegacy_ReceivePayloadActivated_Params params {};
		params.ImpactHitResult = ImpactHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3690
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.ProjectileStop
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectileLegacy::ProjectileStop(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.ProjectileStop");
		
		ADFBaseProjectileLegacy_ProjectileStop_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C3480
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.ProjectileBounce
	 * 		Flags  -> (Native, Protected, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFBaseProjectileLegacy::ProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.ProjectileBounce");
		
		ADFBaseProjectileLegacy_ProjectileBounce_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00643640
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.PayloadDelayElapsed
	 * 		Flags  -> (Native, Protected)
	 */
	void ADFBaseProjectileLegacy::PayloadDelayElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.PayloadDelayElapsed");
		
		ADFBaseProjectileLegacy_PayloadDelayElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C2820
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.OnRep_bPayloadTriggered
	 * 		Flags  -> (Native, Protected)
	 */
	void ADFBaseProjectileLegacy::OnRep_bPayloadTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.OnRep_bPayloadTriggered");
		
		ADFBaseProjectileLegacy_OnRep_bPayloadTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C21B0
	 * 		Name   -> Function DonkehFramework.DFBaseProjectileLegacy.GetOwningWeapon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseWeapon* ADFBaseProjectileLegacy::GetOwningWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBaseProjectileLegacy.GetOwningWeapon");
		
		ADFBaseProjectileLegacy_GetOwningWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFBaseProjectileLegacy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFBaseProjectileLegacy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBaseProjectileLegacy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CA5B0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.WasShotFired
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRepShotInfo                                Counter                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRepShotInfo                                OtherCounter                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_WasShotFired(const struct FRepShotInfo& Counter, const struct FRepShotInfo& OtherCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.WasShotFired");
		
		UDFBlueprintFunctions_WasShotFired_Params params {};
		params.Counter = Counter;
		params.OtherCounter = OtherCounter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CA4E0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.TextIsEmptyOrWhitespace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_TextIsEmptyOrWhitespace(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.TextIsEmptyOrWhitespace");
		
		UDFBlueprintFunctions_TextIsEmptyOrWhitespace_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CA430
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.SetTeamNum
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewTeamNum                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_SetTeamNum(class AActor* Target, unsigned char NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.SetTeamNum");
		
		UDFBlueprintFunctions_SetTeamNum_Params params {};
		params.Target = Target;
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CA380
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.SetStartSpot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      NewStartSpot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_SetStartSpot(class AController* Controller, class AActor* NewStartSpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.SetStartSpot");
		
		UDFBlueprintFunctions_SetStartSpot_Params params {};
		params.Controller = Controller;
		params.NewStartSpot = NewStartSpot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CA310
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.SetNetAddressable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             ActorComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_SetNetAddressable(class UActorComponent* ActorComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.SetNetAddressable");
		
		UDFBlueprintFunctions_SetNetAddressable_Params params {};
		params.ActorComp = ActorComp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CA2A0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.ResetPlayerVoiceTalker
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerState*                                InPlayerState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_ResetPlayerVoiceTalker(class APlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.ResetPlayerVoiceTalker");
		
		UDFBlueprintFunctions_ResetPlayerVoiceTalker_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CA280
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.ResetAllPlayerVoiceTalkers
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UDFBlueprintFunctions::STATIC_ResetAllPlayerVoiceTalkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.ResetAllPlayerVoiceTalkers");
		
		UDFBlueprintFunctions_ResetAllPlayerVoiceTalkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006CA0E0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.PrintTextToLog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        InText                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		ELogVerbosityBP                                    InLogVerbosity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintStackTrace                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_PrintTextToLog(class UObject* WorldContextObject, const class FText& InText, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.PrintTextToLog");
		
		UDFBlueprintFunctions_PrintTextToLog_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InText = InText;
		params.InLogVerbosity = InLogVerbosity;
		params.bPrintStackTrace = bPrintStackTrace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9F90
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.PrintStringToLog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELogVerbosityBP                                    InLogVerbosity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintStackTrace                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_PrintStringToLog(class UObject* WorldContextObject, const class FString& inString, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.PrintStringToLog");
		
		UDFBlueprintFunctions_PrintStringToLog_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.inString = inString;
		params.InLogVerbosity = InLogVerbosity;
		params.bPrintStackTrace = bPrintStackTrace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9E30
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.IsVOIPTalkerStillAlive
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVOIPTalker*                                 InTalker                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_IsVOIPTalkerStillAlive(class UVOIPTalker* InTalker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.IsVOIPTalkerStillAlive");
		
		UDFBlueprintFunctions_IsVOIPTalkerStillAlive_Params params {};
		params.InTalker = InTalker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9EB0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.IsValidActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_IsValidActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.IsValidActor");
		
		UDFBlueprintFunctions_IsValidActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9C70
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.IsPlayInEditor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_IsPlayInEditor(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.IsPlayInEditor");
		
		UDFBlueprintFunctions_IsPlayInEditor_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9DB0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.IsPlayerTalking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerPS                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_IsPlayerTalking(class APlayerState* PlayerPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.IsPlayerTalking");
		
		UDFBlueprintFunctions_IsPlayerTalking_Params params {};
		params.PlayerPS = PlayerPS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9CF0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.IsPlayerMuted
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerState*                                PSToCheck                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_IsPlayerMuted(class APlayerController* PC, class APlayerState* PSToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.IsPlayerMuted");
		
		UDFBlueprintFunctions_IsPlayerMuted_Params params {};
		params.PC = PC;
		params.PSToCheck = PSToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9B90
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.IsPendingKillPending
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_IsPendingKillPending(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.IsPendingKillPending");
		
		UDFBlueprintFunctions_IsPendingKillPending_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9B10
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.IsLocallyPlayerControlled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_IsLocallyPlayerControlled(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.IsLocallyPlayerControlled");
		
		UDFBlueprintFunctions_IsLocallyPlayerControlled_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9A70
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.IsEmptyOrWhitespace
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_IsEmptyOrWhitespace(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.IsEmptyOrWhitespace");
		
		UDFBlueprintFunctions_IsEmptyOrWhitespace_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C99D0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.HasFiringStopped
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRepShotInfo                                Counter                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_HasFiringStopped(const struct FRepShotInfo& Counter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.HasFiringStopped");
		
		UDFBlueprintFunctions_HasFiringStopped_Params params {};
		params.Counter = Counter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9950
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetWorldSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AWorldSettings* UDFBlueprintFunctions::STATIC_GetWorldSettings(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetWorldSettings");
		
		UDFBlueprintFunctions_GetWorldSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9850
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetVOIPTalkerForPlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerState*                                InPlayerState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVOIPTalker* UDFBlueprintFunctions::STATIC_GetVOIPTalkerForPlayer(class APlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetVOIPTalkerForPlayer");
		
		UDFBlueprintFunctions_GetVOIPTalkerForPlayer_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C98D0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetVisibilityDefault
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESlateVisibility UDFBlueprintFunctions::STATIC_GetVisibilityDefault(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetVisibilityDefault");
		
		UDFBlueprintFunctions_GetVisibilityDefault_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9790
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetTeamStateFromTeamId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      TeamIdNum                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ADFTeamState* UDFBlueprintFunctions::STATIC_GetTeamStateFromTeamId(class UObject* WorldContextObject, unsigned char TeamIdNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetTeamStateFromTeamId");
		
		UDFBlueprintFunctions_GetTeamStateFromTeamId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TeamIdNum = TeamIdNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9710
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetTeamNum
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char UDFBlueprintFunctions::STATIC_GetTeamNum(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetTeamNum");
		
		UDFBlueprintFunctions_GetTeamNum_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9610
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetTargetLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      RequestedBy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UDFBlueprintFunctions::STATIC_GetTargetLocation(class AActor* Actor, class AActor* RequestedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetTargetLocation");
		
		UDFBlueprintFunctions_GetTargetLocation_Params params {};
		params.Actor = Actor;
		params.RequestedBy = RequestedBy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9590
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetSurfaceName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EPhysicalSurface                                   SurfaceType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UDFBlueprintFunctions::STATIC_GetSurfaceName(EPhysicalSurface SurfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetSurfaceName");
		
		UDFBlueprintFunctions_GetSurfaceName_Params params {};
		params.SurfaceType = SurfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9510
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetStartSpot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UDFBlueprintFunctions::STATIC_GetStartSpot(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetStartSpot");
		
		UDFBlueprintFunctions_GetStartSpot_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9480
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetShotCounterBPCompat
	 * 		Flags  -> (Final, Native, Static, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRepShotInfo                                Counter                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UDFBlueprintFunctions::STATIC_GetShotCounterBPCompat(const struct FRepShotInfo& Counter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetShotCounterBPCompat");
		
		UDFBlueprintFunctions_GetShotCounterBPCompat_Params params {};
		params.Counter = Counter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C93A0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetPluginFriendlyName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      PluginName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDFBlueprintFunctions::STATIC_GetPluginFriendlyName(const class FString& PluginName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetPluginFriendlyName");
		
		UDFBlueprintFunctions_GetPluginFriendlyName_Params params {};
		params.PluginName = PluginName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C9280
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetNumShotsFiredBPCompat
	 * 		Flags  -> (Final, Native, Static, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRepShotInfo                                Counter                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRepShotInfo                                PreviousCounter                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UDFBlueprintFunctions::STATIC_GetNumShotsFiredBPCompat(const struct FRepShotInfo& Counter, const struct FRepShotInfo& PreviousCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetNumShotsFiredBPCompat");
		
		UDFBlueprintFunctions_GetNumShotsFiredBPCompat_Params params {};
		params.Counter = Counter;
		params.PreviousCounter = PreviousCounter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C91A0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapNameForDisplay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UDFBlueprintFunctions::STATIC_GetMapNameForDisplay(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapNameForDisplay");
		
		UDFBlueprintFunctions_GetMapNameForDisplay_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C90D0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDFBlueprintFunctions::STATIC_GetMapName(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapName");
		
		UDFBlueprintFunctions_GetMapName_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C8FD0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetVisibleInMapSelectUI
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             WorldAssetId                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutVisibleInMapSelectUI                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetVisibleInMapSelectUI(const struct FPrimaryAssetId& WorldAssetId, bool* bOutVisibleInMapSelectUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetVisibleInMapSelectUI");
		
		UDFBlueprintFunctions_GetMapAssetVisibleInMapSelectUI_Params params {};
		params.WorldAssetId = WorldAssetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutVisibleInMapSelectUI != nullptr)
			*bOutVisibleInMapSelectUI = params.bOutVisibleInMapSelectUI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C8E70
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetSupportedGameModes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             WorldAssetId                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetSupportedGameModes(const struct FPrimaryAssetId& WorldAssetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetSupportedGameModes");
		
		UDFBlueprintFunctions_GetMapAssetSupportedGameModes_Params params {};
		params.WorldAssetId = WorldAssetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C8D50
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetPreviewImg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             WorldAssetId                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetPreviewImg(const struct FPrimaryAssetId& WorldAssetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetPreviewImg");
		
		UDFBlueprintFunctions_GetMapAssetPreviewImg_Params params {};
		params.WorldAssetId = WorldAssetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C8C30
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetPreviewBannerImg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             WorldAssetId                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetPreviewBannerImg(const struct FPrimaryAssetId& WorldAssetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetPreviewBannerImg");
		
		UDFBlueprintFunctions_GetMapAssetPreviewBannerImg_Params params {};
		params.WorldAssetId = WorldAssetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C8B40
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetNameForDisplay
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             WorldAssetId                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UDFBlueprintFunctions::STATIC_GetMapAssetNameForDisplay(const struct FPrimaryAssetId& WorldAssetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetNameForDisplay");
		
		UDFBlueprintFunctions_GetMapAssetNameForDisplay_Params params {};
		params.WorldAssetId = WorldAssetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C89E0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetGameRulesetClasses
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             WorldAssetId                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetGameRulesetClasses(const struct FPrimaryAssetId& WorldAssetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetGameRulesetClasses");
		
		UDFBlueprintFunctions_GetMapAssetGameRulesetClasses_Params params {};
		params.WorldAssetId = WorldAssetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C88D0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             WorldAssetId                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutMapDescription                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetDescription(const struct FPrimaryAssetId& WorldAssetId, class FString* OutMapDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDescription");
		
		UDFBlueprintFunctions_GetMapAssetDescription_Params params {};
		params.WorldAssetId = WorldAssetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapDescription != nullptr)
			*OutMapDescription = params.OutMapDescription;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C87B0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDefaultGameMode
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             WorldAssetId                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetDefaultGameMode(const struct FPrimaryAssetId& WorldAssetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDefaultGameMode");
		
		UDFBlueprintFunctions_GetMapAssetDefaultGameMode_Params params {};
		params.WorldAssetId = WorldAssetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C8410
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataSupportedGameModes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetData                                  WorldAsset                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetDataSupportedGameModes(const struct FAssetData& WorldAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataSupportedGameModes");
		
		UDFBlueprintFunctions_GetMapAssetDataSupportedGameModes_Params params {};
		params.WorldAsset = WorldAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C8140
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataPreviewImg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetData                                  WorldAsset                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetDataPreviewImg(const struct FAssetData& WorldAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataPreviewImg");
		
		UDFBlueprintFunctions_GetMapAssetDataPreviewImg_Params params {};
		params.WorldAsset = WorldAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C7E70
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataPreviewBannerImg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetData                                  WorldAsset                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetDataPreviewBannerImg(const struct FAssetData& WorldAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataPreviewBannerImg");
		
		UDFBlueprintFunctions_GetMapAssetDataPreviewBannerImg_Params params {};
		params.WorldAsset = WorldAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C7C80
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataNameForDisplay
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetData                                  WorldAsset                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UDFBlueprintFunctions::STATIC_GetMapAssetDataNameForDisplay(const struct FAssetData& WorldAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataNameForDisplay");
		
		UDFBlueprintFunctions_GetMapAssetDataNameForDisplay_Params params {};
		params.WorldAsset = WorldAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C78E0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataGameRulesetClasses
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetData                                  WorldAsset                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetDataGameRulesetClasses(const struct FAssetData& WorldAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataGameRulesetClasses");
		
		UDFBlueprintFunctions_GetMapAssetDataGameRulesetClasses_Params params {};
		params.WorldAsset = WorldAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C7740
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetData                                  WorldAsset                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        OutMapDisplayName                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetDataDisplayName(const struct FAssetData& WorldAsset, class FText* OutMapDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataDisplayName");
		
		UDFBlueprintFunctions_GetMapAssetDataDisplayName_Params params {};
		params.WorldAsset = WorldAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapDisplayName != nullptr)
			*OutMapDisplayName = params.OutMapDisplayName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C75D0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetData                                  WorldAsset                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutMapDescription                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetDataDescription(const struct FAssetData& WorldAsset, class FString* OutMapDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataDescription");
		
		UDFBlueprintFunctions_GetMapAssetDataDescription_Params params {};
		params.WorldAsset = WorldAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapDescription != nullptr)
			*OutMapDescription = params.OutMapDescription;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C7340
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataDefaultGameMode
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetData                                  WorldAsset                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_GetMapAssetDataDefaultGameMode(const struct FAssetData& WorldAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataDefaultGameMode");
		
		UDFBlueprintFunctions_GetMapAssetDataDefaultGameMode_Params params {};
		params.WorldAsset = WorldAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C72C0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetGlobalDefaultGameMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UDFBlueprintFunctions::STATIC_GetGlobalDefaultGameMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetGlobalDefaultGameMode");
		
		UDFBlueprintFunctions_GetGlobalDefaultGameMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C7240
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetGameVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UDFBlueprintFunctions::STATIC_GetGameVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetGameVersion");
		
		UDFBlueprintFunctions_GetGameVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C7160
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetGameNameForDisplay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UDFBlueprintFunctions::STATIC_GetGameNameForDisplay(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetGameNameForDisplay");
		
		UDFBlueprintFunctions_GetGameNameForDisplay_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C7080
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetGameModeForName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      GameModeName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDFBlueprintFunctions::STATIC_GetGameModeForName(const class FString& GameModeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetGameModeForName");
		
		UDFBlueprintFunctions_GetGameModeForName_Params params {};
		params.GameModeName = GameModeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6FA0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetGameModeForMapName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDFBlueprintFunctions::STATIC_GetGameModeForMapName(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetGameModeForMapName");
		
		UDFBlueprintFunctions_GetGameModeForMapName_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6F20
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetGameDefaultMap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UDFBlueprintFunctions::STATIC_GetGameDefaultMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetGameDefaultMap");
		
		UDFBlueprintFunctions_GetGameDefaultMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6E60
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetFocalPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UDFBlueprintFunctions::STATIC_GetFocalPoint(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetFocalPoint");
		
		UDFBlueprintFunctions_GetFocalPoint_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6D40
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetDefaultBoundingCylinder
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CylinderRadius                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CylinderHalfHeight                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_GetDefaultBoundingCylinder(class AActor* Actor, float* CylinderRadius, float* CylinderHalfHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetDefaultBoundingCylinder");
		
		UDFBlueprintFunctions_GetDefaultBoundingCylinder_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CylinderRadius != nullptr)
			*CylinderRadius = params.CylinderRadius;
		if (CylinderHalfHeight != nullptr)
			*CylinderHalfHeight = params.CylinderHalfHeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6CC0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetCopyrightNotice
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UDFBlueprintFunctions::STATIC_GetCopyrightNotice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetCopyrightNotice");
		
		UDFBlueprintFunctions_GetCopyrightNotice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C69D0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GetAllMapNames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<class FString> UDFBlueprintFunctions::STATIC_GetAllMapNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GetAllMapNames");
		
		UDFBlueprintFunctions_GetAllMapNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C68D0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.GameHasEnded
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      EndGameFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsWinner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_GameHasEnded(class AController* Controller, class AActor* EndGameFocus, bool bIsWinner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.GameHasEnded");
		
		UDFBlueprintFunctions_GameHasEnded_Params params {};
		params.Controller = Controller;
		params.EndGameFocus = EndGameFocus;
		params.bIsWinner = bIsWinner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6860
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.FlushPressedKeys
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_FlushPressedKeys(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.FlushPressedKeys");
		
		UDFBlueprintFunctions_FlushPressedKeys_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6630
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponSoundCollection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeaponSoundCollection                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FWeaponSoundCollection                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_WeaponSoundCollection(const struct FWeaponSoundCollection& A, const struct FWeaponSoundCollection& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponSoundCollection");
		
		UDFBlueprintFunctions_EqualEqual_WeaponSoundCollection_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6380
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnimSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeaponAnimSequence                         A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWeaponAnimSequence                         B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_WeaponAnimSequence(const struct FWeaponAnimSequence& A, const struct FWeaponAnimSequence& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnimSequence");
		
		UDFBlueprintFunctions_EqualEqual_WeaponAnimSequence_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6380
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnimMontage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeaponAnimMontage                          A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWeaponAnimMontage                          B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_WeaponAnimMontage(const struct FWeaponAnimMontage& A, const struct FWeaponAnimMontage& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnimMontage");
		
		UDFBlueprintFunctions_EqualEqual_WeaponAnimMontage_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6490
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnimCollection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeaponAnimCollection                       A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FWeaponAnimCollection                       B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_WeaponAnimCollection(const struct FWeaponAnimCollection& A, const struct FWeaponAnimCollection& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnimCollection");
		
		UDFBlueprintFunctions_EqualEqual_WeaponAnimCollection_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6380
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnim
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeaponAnim                                 A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWeaponAnim                                 B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_WeaponAnim(const struct FWeaponAnim& A, const struct FWeaponAnim& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnim");
		
		UDFBlueprintFunctions_EqualEqual_WeaponAnim_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6380
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_PerspectiveSound
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPerspectiveSound                           A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPerspectiveSound                           B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_PerspectiveSound(const struct FPerspectiveSound& A, const struct FPerspectiveSound& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_PerspectiveSound");
		
		UDFBlueprintFunctions_EqualEqual_PerspectiveSound_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6380
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_PerspectiveAnimSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPerspectiveAnimSequence                    A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPerspectiveAnimSequence                    B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_PerspectiveAnimSequence(const struct FPerspectiveAnimSequence& A, const struct FPerspectiveAnimSequence& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_PerspectiveAnimSequence");
		
		UDFBlueprintFunctions_EqualEqual_PerspectiveAnimSequence_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6380
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_PerspectiveAnim
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPerspectiveAnim                            A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPerspectiveAnim                            B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_PerspectiveAnim(const struct FPerspectiveAnim& A, const struct FPerspectiveAnim& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_PerspectiveAnim");
		
		UDFBlueprintFunctions_EqualEqual_PerspectiveAnim_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6380
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_CharacterSoundCollection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FCharacterSoundCollection                   A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCharacterSoundCollection                   B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_CharacterSoundCollection(const struct FCharacterSoundCollection& A, const struct FCharacterSoundCollection& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_CharacterSoundCollection");
		
		UDFBlueprintFunctions_EqualEqual_CharacterSoundCollection_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6180
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.EqualEqual_CharacterAnimCollection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FCharacterAnimCollection                    A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCharacterAnimCollection                    B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_EqualEqual_CharacterAnimCollection(const struct FCharacterAnimCollection& A, const struct FCharacterAnimCollection& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.EqualEqual_CharacterAnimCollection");
		
		UDFBlueprintFunctions_EqualEqual_CharacterAnimCollection_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C6090
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.DoesMapIDSupportGMDefinition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             MapID                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFGameModeDefinition*                       GMDef                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_DoesMapIDSupportGMDefinition(const struct FPrimaryAssetId& MapID, class UDFGameModeDefinition* GMDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.DoesMapIDSupportGMDefinition");
		
		UDFBlueprintFunctions_DoesMapIDSupportGMDefinition_Params params {};
		params.MapID = MapID;
		params.GMDef = GMDef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C5FA0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.CharacterVariationIsValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDFCharacterVariationDataHandle             VariationData                                              (Parm, NativeAccessSpecifierPublic)
	 */
	bool UDFBlueprintFunctions::STATIC_CharacterVariationIsValid(const struct FDFCharacterVariationDataHandle& VariationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.CharacterVariationIsValid");
		
		UDFBlueprintFunctions_CharacterVariationIsValid_Params params {};
		params.VariationData = VariationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C5E20
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.CharacterVariationGetData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDFCharacterVariationDataHandle             VariationData                                              (Parm, NativeAccessSpecifierPublic)
	 */
	struct FDFCharacterVariationData UDFBlueprintFunctions::STATIC_CharacterVariationGetData(const struct FDFCharacterVariationDataHandle& VariationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.CharacterVariationGetData");
		
		UDFBlueprintFunctions_CharacterVariationGetData_Params params {};
		params.VariationData = VariationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C5CC0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.CharacterVariationDataFromTableRow
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FDFCharacterVariationDataHandle UDFBlueprintFunctions::STATIC_CharacterVariationDataFromTableRow(class UObject* WorldContextObject, const struct FDataTableRowHandle& RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.CharacterVariationDataFromTableRow");
		
		UDFBlueprintFunctions_CharacterVariationDataFromTableRow_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RowHandle = RowHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C5BD0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.Array_UInt8Sort
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ArrayToSort                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDescending                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_Array_UInt8Sort(TArray<unsigned char>* ArrayToSort, bool bDescending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.Array_UInt8Sort");
		
		UDFBlueprintFunctions_Array_UInt8Sort_Params params {};
		params.bDescending = bDescending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C5A90
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.Array_TextSort
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FText>                                ArrayToSort                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDescending                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_Array_TextSort(TArray<class FText>* ArrayToSort, bool bDescending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.Array_TextSort");
		
		UDFBlueprintFunctions_Array_TextSort_Params params {};
		params.bDescending = bDescending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C5980
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.Array_StringSort
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              ArrayToSort                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDescending                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_Array_StringSort(TArray<class FString>* ArrayToSort, bool bDescending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.Array_StringSort");
		
		UDFBlueprintFunctions_Array_StringSort_Params params {};
		params.bDescending = bDescending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C58E0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.Array_Reverse
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    TargetArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_Array_Reverse(TArray<int32_t> TargetArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.Array_Reverse");
		
		UDFBlueprintFunctions_Array_Reverse_Params params {};
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C57F0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.Array_NameSort
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FName>                                ArrayToSort                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDescending                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_Array_NameSort(TArray<class FName>* ArrayToSort, bool bDescending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.Array_NameSort");
		
		UDFBlueprintFunctions_Array_NameSort_Params params {};
		params.bDescending = bDescending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C5700
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.Array_Int64Sort
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int64_t>                                    ArrayToSort                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDescending                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_Array_Int64Sort(TArray<int64_t>* ArrayToSort, bool bDescending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.Array_Int64Sort");
		
		UDFBlueprintFunctions_Array_Int64Sort_Params params {};
		params.bDescending = bDescending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C5610
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.Array_Int32Sort
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    ArrayToSort                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDescending                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_Array_Int32Sort(TArray<int32_t>* ArrayToSort, bool bDescending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.Array_Int32Sort");
		
		UDFBlueprintFunctions_Array_Int32Sort_Params params {};
		params.bDescending = bDescending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C5520
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.Array_FloatSort
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      ArrayToSort                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDescending                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_Array_FloatSort(TArray<float>* ArrayToSort, bool bDescending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.Array_FloatSort");
		
		UDFBlueprintFunctions_Array_FloatSort_Params params {};
		params.bDescending = bDescending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C53A0
	 * 		Name   -> Function DonkehFramework.DFBlueprintFunctions.Array_AssetDescriptorSort
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAssetDescriptor>                    ArrayToSort                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDescending                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompareDisplayText                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFBlueprintFunctions::STATIC_Array_AssetDescriptorSort(TArray<struct FAssetDescriptor>* ArrayToSort, bool bDescending, bool bCompareDisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFBlueprintFunctions.Array_AssetDescriptorSort");
		
		UDFBlueprintFunctions_Array_AssetDescriptorSort_Params params {};
		params.bDescending = bDescending;
		params.bCompareDisplayText = bCompareDisplayText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFBlueprintFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFBlueprintFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFBlueprintFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D63C0
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.UpdateLeanDirection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ELeanDirection                                     NewLeanDir                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCharacterLeanHandler::UpdateLeanDirection(ELeanDirection NewLeanDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.UpdateLeanDirection");
		
		UDFCharacterLeanHandler_UpdateLeanDirection_Params params {};
		params.NewLeanDir = NewLeanDir;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCharacterLeanHandler::ReceiveTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.ReceiveTick");
		
		UDFCharacterLeanHandler_ReceiveTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.ReceiveReset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFCharacterLeanHandler::ReceiveReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.ReceiveReset");
		
		UDFCharacterLeanHandler_ReceiveReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5820
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.IsMoving
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterLeanHandler::IsMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.IsMoving");
		
		UDFCharacterLeanHandler_IsMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D57C0
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.IsLeaning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterLeanHandler::IsLeaning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.IsLeaning");
		
		UDFCharacterLeanHandler_IsLeaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5660
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.GetStance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECharacterStance UDFCharacterLeanHandler::GetStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.GetStance");
		
		UDFCharacterLeanHandler_GetStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D55F0
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.GetPreviousStance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECharacterStance UDFCharacterLeanHandler::GetPreviousStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.GetPreviousStance");
		
		UDFCharacterLeanHandler_GetPreviousStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5590
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.GetOwningCharacterMovement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDFCharacterMovementComponent* UDFCharacterLeanHandler::GetOwningCharacterMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.GetOwningCharacterMovement");
		
		UDFCharacterLeanHandler_GetOwningCharacterMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5560
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.GetOwningCharacter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseCharacter* UDFCharacterLeanHandler::GetOwningCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.GetOwningCharacter");
		
		UDFCharacterLeanHandler_GetOwningCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5450
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.GetMaxLeanXOffset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ELeanDirection                                     NewLeanDir                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECharacterStance                                   LeanStance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMoving                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFCharacterLeanHandler::GetMaxLeanXOffset(ELeanDirection NewLeanDir, ECharacterStance LeanStance, bool bMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.GetMaxLeanXOffset");
		
		UDFCharacterLeanHandler_GetMaxLeanXOffset_Params params {};
		params.NewLeanDir = NewLeanDir;
		params.LeanStance = LeanStance;
		params.bMoving = bMoving;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D53C0
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.GetLeanYOffset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              DesiredLeanAmt                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFCharacterLeanHandler::GetLeanYOffset(float DesiredLeanAmt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.GetLeanYOffset");
		
		UDFCharacterLeanHandler_GetLeanYOffset_Params params {};
		params.DesiredLeanAmt = DesiredLeanAmt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5330
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.GetLeanXOffset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              DesiredLeanAmt                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFCharacterLeanHandler::GetLeanXOffset(float DesiredLeanAmt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.GetLeanXOffset");
		
		UDFCharacterLeanHandler_GetLeanXOffset_Params params {};
		params.DesiredLeanAmt = DesiredLeanAmt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D52A0
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.GetLeanRollRot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              DesiredLeanAmt                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFCharacterLeanHandler::GetLeanRollRot(float DesiredLeanAmt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.GetLeanRollRot");
		
		UDFCharacterLeanHandler_GetLeanRollRot_Params params {};
		params.DesiredLeanAmt = DesiredLeanAmt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D50C0
	 * 		Name   -> Function DonkehFramework.DFCharacterLeanHandler.DetermineLeanTargetAmount
	 * 		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ELeanDirection                                     DesiredLeanDir                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMoving                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFCharacterLeanHandler::DetermineLeanTargetAmount(ELeanDirection DesiredLeanDir, bool bMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterLeanHandler.DetermineLeanTargetAmount");
		
		UDFCharacterLeanHandler_DetermineLeanTargetAmount_Params params {};
		params.DesiredLeanDir = DesiredLeanDir;
		params.bMoving = bMoving;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCharacterLeanHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCharacterLeanHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFCharacterLeanHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D59E0
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsStrafing
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Threshold                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCharacterMovementComponent::IsStrafing(float Threshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsStrafing");
		
		UDFCharacterMovementComponent_IsStrafing_Params params {};
		params.Threshold = Threshold;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D59B0
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsStanding
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterMovementComponent::IsStanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsStanding");
		
		UDFCharacterMovementComponent_IsStanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5980
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsSprinting
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterMovementComponent::IsSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsSprinting");
		
		UDFCharacterMovementComponent_IsSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5950
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsReloading
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterMovementComponent::IsReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsReloading");
		
		UDFCharacterMovementComponent_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5920
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsProne
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterMovementComponent::IsProne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsProne");
		
		UDFCharacterMovementComponent_IsProne_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D58F0
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsMovingForward
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterMovementComponent::IsMovingForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsMovingForward");
		
		UDFCharacterMovementComponent_IsMovingForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5850
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsMoving
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIgnoreZVel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCharacterMovementComponent::IsMoving(bool bIgnoreZVel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsMoving");
		
		UDFCharacterMovementComponent_IsMoving_Params params {};
		params.bIgnoreZVel = bIgnoreZVel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D57F0
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsLeaning
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterMovementComponent::IsLeaning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsLeaning");
		
		UDFCharacterMovementComponent_IsLeaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5760
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsCrawling
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterMovementComponent::IsCrawling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsCrawling");
		
		UDFCharacterMovementComponent_IsCrawling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5730
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsAlive
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterMovementComponent::IsAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsAlive");
		
		UDFCharacterMovementComponent_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5700
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.IsAiming
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCharacterMovementComponent::IsAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.IsAiming");
		
		UDFCharacterMovementComponent_IsAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5690
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.GetStance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECharacterStance UDFCharacterMovementComponent::GetStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.GetStance");
		
		UDFCharacterMovementComponent_GetStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5620
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.GetPreviousStance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECharacterStance UDFCharacterMovementComponent::GetPreviousStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.GetPreviousStance");
		
		UDFCharacterMovementComponent_GetPreviousStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5270
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.GetLeanDirection
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ELeanDirection UDFCharacterMovementComponent::GetLeanDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.GetLeanDirection");
		
		UDFCharacterMovementComponent_GetLeanDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5230
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.GetLeanAmount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDFCharacterMovementComponent::GetLeanAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.GetLeanAmount");
		
		UDFCharacterMovementComponent_GetLeanAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B1C50
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.GetDFCharacterOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseCharacter* UDFCharacterMovementComponent::GetDFCharacterOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.GetDFCharacterOwner");
		
		UDFCharacterMovementComponent_GetDFCharacterOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D4FC0
	 * 		Name   -> Function DonkehFramework.DFCharacterMovementComponent.ClampSpeedMultiplier
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              MultValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFCharacterMovementComponent::ClampSpeedMultiplier(float MultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCharacterMovementComponent.ClampSpeedMultiplier");
		
		UDFCharacterMovementComponent_ClampSpeedMultiplier_Params params {};
		params.MultValue = MultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D63A0
	 * 		Name   -> Function DonkehFramework.DFCheatManager.ToggleItemDebug
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 */
	void UDFCheatManager::ToggleItemDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCheatManager.ToggleItemDebug");
		
		UDFCheatManager_ToggleItemDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D6380
	 * 		Name   -> Function DonkehFramework.DFCheatManager.ToggleGunRecoil
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 */
	void UDFCheatManager::ToggleGunRecoil()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCheatManager.ToggleGunRecoil");
		
		UDFCheatManager_ToggleGunRecoil_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D6360
	 * 		Name   -> Function DonkehFramework.DFCheatManager.ToggleGunInfiniteClipAmmo
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 */
	void UDFCheatManager::ToggleGunInfiniteClipAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCheatManager.ToggleGunInfiniteClipAmmo");
		
		UDFCheatManager_ToggleGunInfiniteClipAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D6340
	 * 		Name   -> Function DonkehFramework.DFCheatManager.ToggleGunInfiniteAmmo
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 */
	void UDFCheatManager::ToggleGunInfiniteAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFCheatManager.ToggleGunInfiniteAmmo");
		
		UDFCheatManager_ToggleGunInfiniteAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFPrimaryDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFPrimaryDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFPrimaryDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFFactionInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFFactionInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFFactionInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D6240
	 * 		Name   -> Function DonkehFramework.DFFunctionLibrary.SetEnableAutoBlendOutForActiveMontage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      AnimSourceMesh                                             (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewEnableAutoBlendOut                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFFunctionLibrary::STATIC_SetEnableAutoBlendOutForActiveMontage(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* AnimSourceMesh, bool bNewEnableAutoBlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFFunctionLibrary.SetEnableAutoBlendOutForActiveMontage");
		
		UDFFunctionLibrary_SetEnableAutoBlendOutForActiveMontage_Params params {};
		params.AnimMontage = AnimMontage;
		params.AnimSourceMesh = AnimSourceMesh;
		params.bNewEnableAutoBlendOut = bNewEnableAutoBlendOut;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5050
	 * 		Name   -> Function DonkehFramework.DFFunctionLibrary.ClearMeshAnimInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshToClear                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFFunctionLibrary::STATIC_ClearMeshAnimInstance(class USkeletalMeshComponent* MeshToClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFFunctionLibrary.ClearMeshAnimInstance");
		
		UDFFunctionLibrary_ClearMeshAnimInstance_Params params {};
		params.MeshToClear = MeshToClear;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFGameModeDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFGameModeDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFGameModeDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.UnregisterActor
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      UnregisteredActor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::UnregisterActor(class AActor* UnregisteredActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.UnregisterActor");
		
		UDFGameRulesetBase_UnregisterActor_Params params {};
		params.UnregisteredActor = UnregisteredActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.RegisterActor
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RegisteredActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::RegisterActor(class AActor* RegisteredActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.RegisterActor");
		
		UDFGameRulesetBase_RegisterActor_Params params {};
		params.RegisteredActor = RegisteredActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::ReceiveTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.ReceiveTick");
		
		UDFGameRulesetBase_ReceiveTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D60B0
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.PlayerWounded
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::PlayerWounded(class AController* Victim, float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.PlayerWounded");
		
		UDFGameRulesetBase_PlayerWounded_Params params {};
		params.Victim = Victim;
		params.DamageAmount = DamageAmount;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D6020
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.PlayerSuicide
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::PlayerSuicide(class AController* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.PlayerSuicide");
		
		UDFGameRulesetBase_PlayerSuicide_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5F50
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.PlayerSpawn
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       NewPlayerPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::PlayerSpawn(class AController* Player, class APawn* NewPlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.PlayerSpawn");
		
		UDFGameRulesetBase_PlayerSpawn_Params params {};
		params.Player = Player;
		params.NewPlayerPawn = NewPlayerPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5EC0
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.PlayerPostLogout
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 ExitingPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::PlayerPostLogout(class AController* ExitingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.PlayerPostLogout");
		
		UDFGameRulesetBase_PlayerPostLogout_Params params {};
		params.ExitingPlayer = ExitingPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5E30
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.PlayerPostLogin
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::PlayerPostLogin(class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.PlayerPostLogin");
		
		UDFGameRulesetBase_PlayerPostLogin_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5D60
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.PlayerKilled
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::PlayerKilled(class AController* Killer, class AController* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.PlayerKilled");
		
		UDFGameRulesetBase_PlayerKilled_Params params {};
		params.Killer = Killer;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5C90
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.PlayerJoinedTeam
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 JoiningPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::PlayerJoinedTeam(class AController* JoiningPlayer, unsigned char TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.PlayerJoinedTeam");
		
		UDFGameRulesetBase_PlayerJoinedTeam_Params params {};
		params.JoiningPlayer = JoiningPlayer;
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5C00
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.PlayerJoined
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::PlayerJoined(class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.PlayerJoined");
		
		UDFGameRulesetBase_PlayerJoined_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5B70
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.PlayerDied
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGameRulesetBase::PlayerDied(class AController* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.PlayerDied");
		
		UDFGameRulesetBase_PlayerDied_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5A70
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.MatchHasEnded
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UDFGameRulesetBase::MatchHasEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.MatchHasEnded");
		
		UDFGameRulesetBase_MatchHasEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.Init
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFGameRulesetBase::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.Init");
		
		UDFGameRulesetBase_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5200
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.GetGameState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseGameState* UDFGameRulesetBase::GetGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.GetGameState");
		
		UDFGameRulesetBase_GetGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D51D0
	 * 		Name   -> Function DonkehFramework.DFGameRulesetBase.GetGameMode
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseGameMode* UDFGameRulesetBase::GetGameMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGameRulesetBase.GetGameMode");
		
		UDFGameRulesetBase_GetGameMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFGameRulesetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFGameRulesetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFGameRulesetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFGameSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFGameSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5B50
	 * 		Name   -> Function DonkehFramework.DFGunRecoilHandler.OnWeaponStopFire
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UDFGunRecoilHandler::OnWeaponStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGunRecoilHandler.OnWeaponStopFire");
		
		UDFGunRecoilHandler_OnWeaponStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5B30
	 * 		Name   -> Function DonkehFramework.DFGunRecoilHandler.OnWeaponStartFire
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UDFGunRecoilHandler::OnWeaponStartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGunRecoilHandler.OnWeaponStartFire");
		
		UDFGunRecoilHandler_OnWeaponStartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5B10
	 * 		Name   -> Function DonkehFramework.DFGunRecoilHandler.OnWeaponFire
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UDFGunRecoilHandler::OnWeaponFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGunRecoilHandler.OnWeaponFire");
		
		UDFGunRecoilHandler_OnWeaponFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5A90
	 * 		Name   -> Function DonkehFramework.DFGunRecoilHandler.OnTick
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFGunRecoilHandler::OnTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGunRecoilHandler.OnTick");
		
		UDFGunRecoilHandler_OnTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5790
	 * 		Name   -> Function DonkehFramework.DFGunRecoilHandler.IsFiring
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFGunRecoilHandler::IsFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGunRecoilHandler.IsFiring");
		
		UDFGunRecoilHandler_IsFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D55C0
	 * 		Name   -> Function DonkehFramework.DFGunRecoilHandler.GetOwningPawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class APawn* UDFGunRecoilHandler::GetOwningPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGunRecoilHandler.GetOwningPawn");
		
		UDFGunRecoilHandler_GetOwningPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5560
	 * 		Name   -> Function DonkehFramework.DFGunRecoilHandler.GetOwningGun
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseGun* UDFGunRecoilHandler::GetOwningGun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGunRecoilHandler.GetOwningGun");
		
		UDFGunRecoilHandler_GetOwningGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D5190
	 * 		Name   -> Function DonkehFramework.DFGunRecoilHandler.GetConeOfFireOffset
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintEvent)
	 */
	struct FVector UDFGunRecoilHandler::GetConeOfFireOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFGunRecoilHandler.GetConeOfFireOffset");
		
		UDFGunRecoilHandler_GetConeOfFireOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFGunRecoilHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFGunRecoilHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFGunRecoilHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFHandlerInterface.EventUpdate
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMakeDecision                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFHandlerInterface::EventUpdate(float DeltaTime, bool bMakeDecision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFHandlerInterface.EventUpdate");
		
		UDFHandlerInterface_EventUpdate_Params params {};
		params.DeltaTime = DeltaTime;
		params.bMakeDecision = bMakeDecision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFHandlerInterface.EventShouldUpdateThisFrame
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bActiveAndSpawnedInWorld                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFHandlerInterface::EventShouldUpdateThisFrame(float DeltaTime, bool bActiveAndSpawnedInWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFHandlerInterface.EventShouldUpdateThisFrame");
		
		UDFHandlerInterface_EventShouldUpdateThisFrame_Params params {};
		params.DeltaTime = DeltaTime;
		params.bActiveAndSpawnedInWorld = bActiveAndSpawnedInWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFHandlerInterface.EventReset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFHandlerInterface::EventReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFHandlerInterface.EventReset");
		
		UDFHandlerInterface_EventReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFHandlerInterface.EventInit
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFHandlerInterface::EventInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFHandlerInterface.EventInit");
		
		UDFHandlerInterface_EventInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFHandlerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFHandlerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFHandlerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC7E0
	 * 		Name   -> Function DonkehFramework.DFIntrinsicCharAnimInstInterface.PlayDeathMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFIntrinsicCharAnimInstInterface::PlayDeathMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFIntrinsicCharAnimInstInterface.PlayDeathMontage");
		
		UDFIntrinsicCharAnimInstInterface_PlayDeathMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFIntrinsicCharAnimInstInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFIntrinsicCharAnimInstInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFIntrinsicCharAnimInstInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC880
	 * 		Name   -> Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayUnEquipMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFIntrinsicWeapAnimInstInterface::PlayUnEquipMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayUnEquipMontage");
		
		UDFIntrinsicWeapAnimInstInterface_PlayUnEquipMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC920
	 * 		Name   -> Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayReloadMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFullReload                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFIntrinsicWeapAnimInstInterface::PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayReloadMontage");
		
		UDFIntrinsicWeapAnimInstInterface_PlayReloadMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bFullReload = bFullReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DCA90
	 * 		Name   -> Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayFireMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireLast                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAiming                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFIntrinsicWeapAnimInstInterface::PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayFireMontage");
		
		UDFIntrinsicWeapAnimInstInterface_PlayFireMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bFireLast = bFireLast;
		params.bAiming = bAiming;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC9F0
	 * 		Name   -> Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayEquipMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFIntrinsicWeapAnimInstInterface::PlayEquipMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayEquipMontage");
		
		UDFIntrinsicWeapAnimInstInterface_PlayEquipMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFIntrinsicWeapAnimInstInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFIntrinsicWeapAnimInstInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFIntrinsicWeapAnimInstInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DCF00
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.Size
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UDFInventoryComponent::Size()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.Size");
		
		UDFInventoryComponent_Size_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DCDE0
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.RemoveItemAt
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseItem*                                 OutRemovedItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDestroyItem                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFInventoryComponent::RemoveItemAt(int32_t Index, class ADFBaseItem** OutRemovedItem, bool bDestroyItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.RemoveItemAt");
		
		UDFInventoryComponent_RemoveItemAt_Params params {};
		params.Index = Index;
		params.bDestroyItem = bDestroyItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRemovedItem != nullptr)
			*OutRemovedItem = params.OutRemovedItem;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DCD10
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.Remove
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseItem*                                 Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDestroyItem                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFInventoryComponent::Remove(class ADFBaseItem* Item, bool bDestroyItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.Remove");
		
		UDFInventoryComponent_Remove_Params params {};
		params.Item = Item;
		params.bDestroyItem = bDestroyItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC740
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.IsValidIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFInventoryComponent::IsValidIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.IsValidIndex");
		
		UDFInventoryComponent_IsValidIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC4B0
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.GetItem
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseItem*                                 OutItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFInventoryComponent::GetItem(int32_t Index, class ADFBaseItem** OutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.GetItem");
		
		UDFInventoryComponent_GetItem_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC380
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.FindItemByClass
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseItem*                                 OutItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFInventoryComponent::FindItemByClass(class UClass* ItemClass, class ADFBaseItem** OutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.FindItemByClass");
		
		UDFInventoryComponent_FindItemByClass_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC2A0
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.Find
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADFBaseItem*                                 ItemToCompare                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFInventoryComponent::Find(class ADFBaseItem* ItemToCompare, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.Find");
		
		UDFInventoryComponent_Find_Params params {};
		params.ItemToCompare = ItemToCompare;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC210
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.Clear
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDestroyItems                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFInventoryComponent::Clear(bool bDestroyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.Clear");
		
		UDFInventoryComponent_Clear_Params params {};
		params.bDestroyItems = bDestroyItems;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D6380
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.AddDefaultInventoryItems
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UDFInventoryComponent::AddDefaultInventoryItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.AddDefaultInventoryItems");
		
		UDFInventoryComponent_AddDefaultInventoryItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC140
	 * 		Name   -> Function DonkehFramework.DFInventoryComponent.Add
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADFBaseItem*                                 Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFInventoryComponent::Add(class ADFBaseItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFInventoryComponent.Add");
		
		UDFInventoryComponent_Add_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFInventoryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFInventoryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFInventoryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFLevelScriptActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFLevelScriptActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFLevelScriptActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFLoadout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFLoadout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFLoadout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFPhysicalMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFPhysicalMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFPhysicalMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFPhysicsCollisionHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFPhysicsCollisionHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFPhysicsCollisionHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFPlayerCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFPlayerCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFPlayerCameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006D6360
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.RestartPlayer
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UDFPlayerComponent::RestartPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.RestartPlayer");
		
		UDFPlayerComponent_RestartPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.ReceiveSeamlessTravelToCommon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFPlayerComponent*                          NewCPlayerComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerComponent::ReceiveSeamlessTravelToCommon(class AController* NewC, class UDFPlayerComponent* NewCPlayerComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.ReceiveSeamlessTravelToCommon");
		
		UDFPlayerComponent_ReceiveSeamlessTravelToCommon_Params params {};
		params.NewC = NewC;
		params.NewCPlayerComp = NewCPlayerComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.ReceiveSeamlessTravelFromCommon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFPlayerComponent*                          OldCPlayerComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerComponent::ReceiveSeamlessTravelFromCommon(class AController* OldC, class UDFPlayerComponent* OldCPlayerComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.ReceiveSeamlessTravelFromCommon");
		
		UDFPlayerComponent_ReceiveSeamlessTravelFromCommon_Params params {};
		params.OldC = OldC;
		params.OldCPlayerComp = OldCPlayerComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.ReceivePawnLeavingGame
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFPlayerComponent::ReceivePawnLeavingGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.ReceivePawnLeavingGame");
		
		UDFPlayerComponent_ReceivePawnLeavingGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.ReceiveGameHasEnded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EndGameFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsWinner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerComponent::ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.ReceiveGameHasEnded");
		
		UDFPlayerComponent_ReceiveGameHasEnded_Params params {};
		params.EndGameFocus = EndGameFocus;
		params.bIsWinner = bIsWinner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC680
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.IsPendingRestart
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFPlayerComponent::IsPendingRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.IsPendingRestart");
		
		UDFPlayerComponent_IsPendingRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC650
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.GetTeamState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFTeamState* UDFPlayerComponent::GetTeamState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.GetTeamState");
		
		UDFPlayerComponent_GetTeamState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC610
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.GetPlayerState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class APlayerState* UDFPlayerComponent::GetPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.GetPlayerState");
		
		UDFPlayerComponent_GetPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC5D0
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.GetPawnOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class APawn* UDFPlayerComponent::GetPawnOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.GetPawnOwner");
		
		UDFPlayerComponent_GetPawnOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC590
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.GetMinRestartDelay
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDFPlayerComponent::GetMinRestartDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.GetMinRestartDelay");
		
		UDFPlayerComponent_GetMinRestartDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC1E0
	 * 		Name   -> Function DonkehFramework.DFPlayerComponent.CanRestartPlayer
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UDFPlayerComponent::CanRestartPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFPlayerComponent.CanRestartPlayer");
		
		UDFPlayerComponent_CanRestartPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFPlayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFProjectileGISubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFProjectileGISubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFProjectileGISubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFReplInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFReplInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFReplInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC7E0
	 * 		Name   -> Function DonkehFramework.DFSingleActionWeapAnimInstInterface.PlayActionMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFSingleActionWeapAnimInstInterface::PlayActionMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFSingleActionWeapAnimInstInterface.PlayActionMontage");
		
		UDFSingleActionWeapAnimInstInterface_PlayActionMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFSingleActionWeapAnimInstInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFSingleActionWeapAnimInstInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFSingleActionWeapAnimInstInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DCBA0
	 * 		Name   -> Function DonkehFramework.DFSingleLoadWeapAnimInstInterface.PlayStartReloadMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFullReload                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFSingleLoadWeapAnimInstInterface::PlayStartReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFSingleLoadWeapAnimInstInterface.PlayStartReloadMontage");
		
		UDFSingleLoadWeapAnimInstInterface_PlayStartReloadMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bFullReload = bFullReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC920
	 * 		Name   -> Function DonkehFramework.DFSingleLoadWeapAnimInstInterface.PlayEndReloadMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFullReload                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFSingleLoadWeapAnimInstInterface::PlayEndReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFSingleLoadWeapAnimInstInterface.PlayEndReloadMontage");
		
		UDFSingleLoadWeapAnimInstInterface_PlayEndReloadMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bFullReload = bFullReload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFSingleLoadWeapAnimInstInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFSingleLoadWeapAnimInstInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFSingleLoadWeapAnimInstInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFTeamAgentInterface.EventSetTeamNum
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      NewTeamNum                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFTeamAgentInterface::EventSetTeamNum(unsigned char NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFTeamAgentInterface.EventSetTeamNum");
		
		UDFTeamAgentInterface_EventSetTeamNum_Params params {};
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFTeamAgentInterface.EventGetTeamNum
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	unsigned char UDFTeamAgentInterface::EventGetTeamNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFTeamAgentInterface.EventGetTeamNum");
		
		UDFTeamAgentInterface_EventGetTeamNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFTeamAgentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFTeamAgentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFTeamAgentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFTeamDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFTeamDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFTeamDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFTeamState.ReceivePostInitTeam
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADFTeamState::ReceivePostInitTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFTeamState.ReceivePostInitTeam");
		
		ADFTeamState_ReceivePostInitTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFTeamState.ReceiveInitTeam
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFTeamDefinition*                           InTeamDef                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADFTeamState::ReceiveInitTeam(class UDFTeamDefinition* InTeamDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFTeamState.ReceiveInitTeam");
		
		ADFTeamState_ReceiveInitTeam_Params params {};
		params.InTeamDef = InTeamDef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC6B0
	 * 		Name   -> Function DonkehFramework.DFTeamState.IsReadyToInitialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADFTeamState::IsReadyToInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFTeamState.IsReadyToInitialize");
		
		ADFTeamState_IsReadyToInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.DFTeamState.IsPendingSetupBP
	 * 		Flags  -> (Event, Protected, BlueprintEvent, Const)
	 */
	bool ADFTeamState::IsPendingSetupBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFTeamState.IsPendingSetupBP");
		
		ADFTeamState_IsPendingSetupBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC480
	 * 		Name   -> Function DonkehFramework.DFTeamState.GetFactionInfo
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDFFactionInfo* ADFTeamState::GetFactionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFTeamState.GetFactionInfo");
		
		ADFTeamState_GetFactionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFTeamState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFTeamState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFTeamState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC7E0
	 * 		Name   -> Function DonkehFramework.DFThrowableWeapAnimInstInterface.PlayThrowUnderhandMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFThrowableWeapAnimInstInterface::PlayThrowUnderhandMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFThrowableWeapAnimInstInterface.PlayThrowUnderhandMontage");
		
		UDFThrowableWeapAnimInstInterface_PlayThrowUnderhandMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DCC70
	 * 		Name   -> Function DonkehFramework.DFThrowableWeapAnimInstInterface.PlayThrowOverhandMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFThrowableWeapAnimInstInterface::PlayThrowOverhandMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFThrowableWeapAnimInstInterface.PlayThrowOverhandMontage");
		
		UDFThrowableWeapAnimInstInterface_PlayThrowOverhandMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DC880
	 * 		Name   -> Function DonkehFramework.DFThrowableWeapAnimInstInterface.PlayCockMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFThrowableWeapAnimInstInterface::PlayCockMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.DFThrowableWeapAnimInstInterface.PlayCockMontage");
		
		UDFThrowableWeapAnimInstInterface_PlayCockMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFThrowableWeapAnimInstInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFThrowableWeapAnimInstInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFThrowableWeapAnimInstInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFWorldSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFWorldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.DFWorldSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE810
	 * 		Name   -> Function DonkehFramework.GameSessionBlueprintLibrary.GetMinPlayers
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObj                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGameSessionBlueprintLibrary::STATIC_GetMinPlayers(class UObject* WorldContextObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.GameSessionBlueprintLibrary.GetMinPlayers");
		
		UGameSessionBlueprintLibrary_GetMinPlayers_Params params {};
		params.WorldContextObj = WorldContextObj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE790
	 * 		Name   -> Function DonkehFramework.GameSessionBlueprintLibrary.GetMaxSpectators
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObj                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGameSessionBlueprintLibrary::STATIC_GetMaxSpectators(class UObject* WorldContextObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.GameSessionBlueprintLibrary.GetMaxSpectators");
		
		UGameSessionBlueprintLibrary_GetMaxSpectators_Params params {};
		params.WorldContextObj = WorldContextObj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE710
	 * 		Name   -> Function DonkehFramework.GameSessionBlueprintLibrary.GetMaxPlayers
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObj                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGameSessionBlueprintLibrary::STATIC_GetMaxPlayers(class UObject* WorldContextObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.GameSessionBlueprintLibrary.GetMaxPlayers");
		
		UGameSessionBlueprintLibrary_GetMaxPlayers_Params params {};
		params.WorldContextObj = WorldContextObj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameSessionBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameSessionBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.GameSessionBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.SpawnPointProviderInterface.GetSpawnPointCollisionHandlingOverrideBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESpawnActorCollisionHandlingMethod                 OutSpawnCollisionMethod                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointProviderInterface::GetSpawnPointCollisionHandlingOverrideBP(const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointProviderInterface.GetSpawnPointCollisionHandlingOverrideBP");
		
		USpawnPointProviderInterface_GetSpawnPointCollisionHandlingOverrideBP_Params params {};
		params.SpawnPoint = SpawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSpawnCollisionMethod != nullptr)
			*OutSpawnCollisionMethod = params.OutSpawnCollisionMethod;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.SpawnPointProviderInterface.GetAllSpawnPointsBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<struct FSpawnPointDef>                      SpawnPoints                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USpawnPointProviderInterface::GetAllSpawnPointsBP(TArray<struct FSpawnPointDef>* SpawnPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointProviderInterface.GetAllSpawnPointsBP");
		
		USpawnPointProviderInterface_GetAllSpawnPointsBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnPoints != nullptr)
			*SpawnPoints = params.SpawnPoints;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.SpawnPointProviderInterface.FindSpawnPointBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		int32_t                                            SpawnPointID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnPointDef                              FoundSpawnPoint                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointProviderInterface::FindSpawnPointBP(int32_t SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointProviderInterface.FindSpawnPointBP");
		
		USpawnPointProviderInterface_FindSpawnPointBP_Params params {};
		params.SpawnPointID = SpawnPointID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundSpawnPoint != nullptr)
			*FoundSpawnPoint = params.FoundSpawnPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.SpawnPointProviderInterface.CanSpawnActorFromSpawnPointBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SpawnActorClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointProviderInterface::CanSpawnActorFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class UClass* SpawnActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointProviderInterface.CanSpawnActorFromSpawnPointBP");
		
		USpawnPointProviderInterface_CanSpawnActorFromSpawnPointBP_Params params {};
		params.SpawnPoint = SpawnPoint;
		params.SpawnActorClass = SpawnActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.SpawnPointProviderInterface.CanRestartPlayerFromSpawnPointBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      PlayerPawnClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointProviderInterface::CanRestartPlayerFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class AController* Player, class UClass* PlayerPawnClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointProviderInterface.CanRestartPlayerFromSpawnPointBP");
		
		USpawnPointProviderInterface_CanRestartPlayerFromSpawnPointBP_Params params {};
		params.SpawnPoint = SpawnPoint;
		params.Player = Player;
		params.PlayerPawnClass = PlayerPawnClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPointProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPointProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.SpawnPointProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE9E0
	 * 		Name   -> Function DonkehFramework.SpawnPointStatics.SpawnPointExists
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SpawnPointID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointStatics::STATIC_SpawnPointExists(class UObject* Target, int32_t SpawnPointID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointStatics.SpawnPointExists");
		
		USpawnPointStatics_SpawnPointExists_Params params {};
		params.Target = Target;
		params.SpawnPointID = SpawnPointID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE890
	 * 		Name   -> Function DonkehFramework.SpawnPointStatics.GetSpawnPointCollisionHandlingOverride
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESpawnActorCollisionHandlingMethod                 OutSpawnCollisionMethod                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointStatics::STATIC_GetSpawnPointCollisionHandlingOverride(class UObject* Target, const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointStatics.GetSpawnPointCollisionHandlingOverride");
		
		USpawnPointStatics_GetSpawnPointCollisionHandlingOverride_Params params {};
		params.Target = Target;
		params.SpawnPoint = SpawnPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSpawnCollisionMethod != nullptr)
			*OutSpawnCollisionMethod = params.OutSpawnCollisionMethod;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE530
	 * 		Name   -> Function DonkehFramework.SpawnPointStatics.GetAllSpawnPointTransforms
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          SpawnPointTransforms                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USpawnPointStatics::STATIC_GetAllSpawnPointTransforms(class UObject* Target, TArray<struct FTransform>* SpawnPointTransforms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointStatics.GetAllSpawnPointTransforms");
		
		USpawnPointStatics_GetAllSpawnPointTransforms_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnPointTransforms != nullptr)
			*SpawnPointTransforms = params.SpawnPointTransforms;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE620
	 * 		Name   -> Function DonkehFramework.SpawnPointStatics.GetAllSpawnPoints
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSpawnPointDef>                      SpawnPoints                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USpawnPointStatics::STATIC_GetAllSpawnPoints(class UObject* Target, TArray<struct FSpawnPointDef>* SpawnPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointStatics.GetAllSpawnPoints");
		
		USpawnPointStatics_GetAllSpawnPoints_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnPoints != nullptr)
			*SpawnPoints = params.SpawnPoints;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE3F0
	 * 		Name   -> Function DonkehFramework.SpawnPointStatics.FindSpawnPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SpawnPointID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnPointDef                              FoundSpawnPoint                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointStatics::STATIC_FindSpawnPoint(class UObject* Target, int32_t SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointStatics.FindSpawnPoint");
		
		USpawnPointStatics_FindSpawnPoint_Params params {};
		params.Target = Target;
		params.SpawnPointID = SpawnPointID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundSpawnPoint != nullptr)
			*FoundSpawnPoint = params.FoundSpawnPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE2A0
	 * 		Name   -> Function DonkehFramework.SpawnPointStatics.CanSpawnActorFromSpawnPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SpawnActorClass                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointStatics::STATIC_CanSpawnActorFromSpawnPoint(class UObject* Target, const struct FSpawnPointDef& SpawnPoint, class UClass* SpawnActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointStatics.CanSpawnActorFromSpawnPoint");
		
		USpawnPointStatics_CanSpawnActorFromSpawnPoint_Params params {};
		params.Target = Target;
		params.SpawnPoint = SpawnPoint;
		params.SpawnActorClass = SpawnActorClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE1D0
	 * 		Name   -> Function DonkehFramework.SpawnPointStatics.CanSpawnActorFromAnySpawnPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SpawnActorClass                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointStatics::STATIC_CanSpawnActorFromAnySpawnPoint(class UObject* Target, class UClass* SpawnActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointStatics.CanSpawnActorFromAnySpawnPoint");
		
		USpawnPointStatics_CanSpawnActorFromAnySpawnPoint_Params params {};
		params.Target = Target;
		params.SpawnActorClass = SpawnActorClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DE040
	 * 		Name   -> Function DonkehFramework.SpawnPointStatics.CanRestartPlayerFromSpawnPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      PlayerPawnClass                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointStatics::STATIC_CanRestartPlayerFromSpawnPoint(class UObject* Target, const struct FSpawnPointDef& SpawnPoint, class AController* Player, class UClass* PlayerPawnClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointStatics.CanRestartPlayerFromSpawnPoint");
		
		USpawnPointStatics_CanRestartPlayerFromSpawnPoint_Params params {};
		params.Target = Target;
		params.SpawnPoint = SpawnPoint;
		params.Player = Player;
		params.PlayerPawnClass = PlayerPawnClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DDF40
	 * 		Name   -> Function DonkehFramework.SpawnPointStatics.CanRestartPlayerFromAnySpawnPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      PlayerPawnClass                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnPointStatics::STATIC_CanRestartPlayerFromAnySpawnPoint(class UObject* Target, class AController* Player, class UClass* PlayerPawnClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.SpawnPointStatics.CanRestartPlayerFromAnySpawnPoint");
		
		USpawnPointStatics_CanRestartPlayerFromAnySpawnPoint_Params params {};
		params.Target = Target;
		params.Player = Player;
		params.PlayerPawnClass = PlayerPawnClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPointStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPointStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.SpawnPointStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006DEAA0
	 * 		Name   -> Function DonkehFramework.UseableInterface.Used
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Invoker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUseableInterface::Used(class AActor* Invoker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.UseableInterface.Used");
		
		UUseableInterface_Used_Params params {};
		params.Invoker = Invoker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUseableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUseableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.UseableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFramework.VisibilityInterface.EventGetFocalPoint
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent, Const)
	 */
	struct FVector UVisibilityInterface::EventGetFocalPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFramework.VisibilityInterface.EventGetFocalPoint");
		
		UVisibilityInterface_EventGetFocalPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisibilityInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisibilityInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFramework.VisibilityInterface");
		return ptr;
	}

}


