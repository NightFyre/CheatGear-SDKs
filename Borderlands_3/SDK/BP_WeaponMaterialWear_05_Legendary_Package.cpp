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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_WeaponMaterialWear_05_Legendary.BP_WeaponMaterialWear_05_Legendary_C.OnInitializeBalanceState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponMaterialWear_05_Legendary_C::OnInitializeBalanceState(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_05_Legendary.BP_WeaponMaterialWear_05_Legendary_C.OnInitializeBalanceState");
		
		UBP_WeaponMaterialWear_05_Legendary_C_OnInitializeBalanceState_Params params {};
		params.InventoryActor = InventoryActor;
		params.InventoryBalanceState = InventoryBalanceState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_WeaponMaterialWear_05_Legendary.BP_WeaponMaterialWear_05_Legendary_C.OnInitializeComponent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponMaterialWear_05_Legendary_C::OnInitializeComponent(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_05_Legendary.BP_WeaponMaterialWear_05_Legendary_C.OnInitializeComponent");
		
		UBP_WeaponMaterialWear_05_Legendary_C_OnInitializeComponent_Params params {};
		params.InventoryActor = InventoryActor;
		params.InventoryBalanceState = InventoryBalanceState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_WeaponMaterialWear_05_Legendary.BP_WeaponMaterialWear_05_Legendary_C.OnBeginPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryBalanceStateComponent*             InventoryBalanceState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponMaterialWear_05_Legendary_C::OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_05_Legendary.BP_WeaponMaterialWear_05_Legendary_C.OnBeginPlay");
		
		UBP_WeaponMaterialWear_05_Legendary_C_OnBeginPlay_Params params {};
		params.InventoryActor = InventoryActor;
		params.InventoryBalanceState = InventoryBalanceState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_WeaponMaterialWear_05_Legendary.BP_WeaponMaterialWear_05_Legendary_C.ExecuteUbergraph_BP_WeaponMaterialWear_05_Legendary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponMaterialWear_05_Legendary_C::ExecuteUbergraph_BP_WeaponMaterialWear_05_Legendary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_05_Legendary.BP_WeaponMaterialWear_05_Legendary_C.ExecuteUbergraph_BP_WeaponMaterialWear_05_Legendary");
		
		UBP_WeaponMaterialWear_05_Legendary_C_ExecuteUbergraph_BP_WeaponMaterialWear_05_Legendary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WeaponMaterialWear_05_Legendary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WeaponMaterialWear_05_Legendary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponMaterialWear_05_Legendary.BP_WeaponMaterialWear_05_Legendary_C");
		return ptr;
	}

}


