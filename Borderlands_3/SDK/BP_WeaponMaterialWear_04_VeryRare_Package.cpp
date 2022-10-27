﻿/**
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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C.OnInitializeBalanceState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponMaterialWear_04_VeryRare_C::OnInitializeBalanceState(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C.OnInitializeBalanceState");
		
		UBP_WeaponMaterialWear_04_VeryRare_C_OnInitializeBalanceState_Params params {};
		params.InventoryActor = InventoryActor;
		params.InventoryBalanceState = InventoryBalanceState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C.OnInitializeComponent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponMaterialWear_04_VeryRare_C::OnInitializeComponent(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C.OnInitializeComponent");
		
		UBP_WeaponMaterialWear_04_VeryRare_C_OnInitializeComponent_Params params {};
		params.InventoryActor = InventoryActor;
		params.InventoryBalanceState = InventoryBalanceState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C.OnBeginPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponMaterialWear_04_VeryRare_C::OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C.OnBeginPlay");
		
		UBP_WeaponMaterialWear_04_VeryRare_C_OnBeginPlay_Params params {};
		params.InventoryActor = InventoryActor;
		params.InventoryBalanceState = InventoryBalanceState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C.ExecuteUbergraph_BP_WeaponMaterialWear_04_VeryRare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponMaterialWear_04_VeryRare_C::ExecuteUbergraph_BP_WeaponMaterialWear_04_VeryRare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C.ExecuteUbergraph_BP_WeaponMaterialWear_04_VeryRare");
		
		UBP_WeaponMaterialWear_04_VeryRare_C_ExecuteUbergraph_BP_WeaponMaterialWear_04_VeryRare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WeaponMaterialWear_04_VeryRare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WeaponMaterialWear_04_VeryRare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C");
		return ptr;
	}

}


