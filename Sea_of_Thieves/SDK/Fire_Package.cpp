/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x036F8380
	 * 		Name   -> Function Fire.FlammableComponent.OnRep_OnFire
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UFlammableComponent::OnRep_OnFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.OnRep_OnFire");
		
		UFlammableComponent_OnRep_OnFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036F8300
	 * 		Name   -> Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Protected, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     InExtinguishLocationWS                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UFlammableComponent::Multicast_NotifyExtinguished_RPC(const struct FVector& InExtinguishLocationWS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC");
		
		UFlammableComponent_Multicast_NotifyExtinguished_RPC_Params params {};
		params.InExtinguishLocationWS = InExtinguishLocationWS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036F82C0
	 * 		Name   -> Function Fire.FlammableComponent.IsOnFire
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFlammableComponent::IsOnFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.IsOnFire");
		
		UFlammableComponent_IsOnFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036F8290
	 * 		Name   -> Function Fire.FlammableComponent.IncrementFireSource
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFlammableComponent::IncrementFireSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.IncrementFireSource");
		
		UFlammableComponent_IncrementFireSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036F8240
	 * 		Name   -> Function Fire.FlammableComponent.DecrementFireSource
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFlammableComponent::DecrementFireSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.DecrementFireSource");
		
		UFlammableComponent_DecrementFireSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlammableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlammableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FlammableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorFlammableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorFlammableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.ActorFlammableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlownByWindStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlownByWindStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.BlownByWindStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtinguishableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtinguishableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.ExtinguishableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireDamagerType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireDamagerType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireDamagerType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireExplosionDamagerType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireExplosionDamagerType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireExplosionDamagerType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036F8270
	 * 		Name   -> Function Fire.FlammableInterface.IncrementFireSource
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFlammableInterface::IncrementFireSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.FlammableInterface.IncrementFireSource");
		
		UFlammableInterface_IncrementFireSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036F8220
	 * 		Name   -> Function Fire.FlammableInterface.DecrementFireSource
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFlammableInterface::DecrementFireSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.FlammableInterface.DecrementFireSource");
		
		UFlammableInterface_DecrementFireSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlammableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlammableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FlammableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlammableWieldableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlammableWieldableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FlammableWieldableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimedFlammableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimedFlammableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.TimedFlammableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIgniteStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIgniteStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.IgniteStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseExtinguish.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseExtinguish::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.StatusResponseExtinguish");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseIgnite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseIgnite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.StatusResponseIgnite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireGridCellSelectionParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireGridCellSelectionParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireGridCellSelectionParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03ABC960
	 * 		Name   -> Function Fire.FirePropagationInterface.SetAllCellsState
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFireCellState                                     State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirePropagationInterface::SetAllCellsState(EFireCellState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.FirePropagationInterface.SetAllCellsState");
		
		UFirePropagationInterface_SetAllCellsState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFirePropagationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirePropagationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FirePropagationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookerIgnitionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookerIgnitionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.CookerIgnitionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireCellStateTimingParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireCellStateTimingParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireCellStateTimingParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireGridAudioManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireGridAudioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireGridAudioManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireGridLocationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireGridLocationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireGridLocationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireGridProxyInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireGridProxyInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireGridProxyInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireGridVFXParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireGridVFXParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireGridVFXParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireGridVFXManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireGridVFXManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FireGridVFXManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFirePropagator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirePropagator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.FirePropagator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMastFlammableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMastFlammableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.MastFlammableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipFireDamageParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipFireDamageParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.ShipFireDamageParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipFireLightParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipFireLightParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.ShipFireLightParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03ABC940
	 * 		Name   -> Function Fire.ShipFirePropagationComponent.OnRep_CellData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UShipFirePropagationComponent::OnRep_CellData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.ShipFirePropagationComponent.OnRep_CellData");
		
		UShipFirePropagationComponent_OnRep_CellData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03ABC920
	 * 		Name   -> Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UShipFirePropagationComponent::OnRep_CellCharringData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData");
		
		UShipFirePropagationComponent_OnRep_CellCharringData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipFirePropagationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipFirePropagationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Fire.ShipFirePropagationComponent");
		return ptr;
	}

}


