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
	 * 		RVA    -> 0x0429D070
	 * 		Name   -> Function Damagers.RadialDamagerComponent.SetDamageRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialDamagerComponent::SetDamageRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.RadialDamagerComponent.SetDamageRadius");
		
		URadialDamagerComponent_SetDamageRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429CEE0
	 * 		Name   -> Function Damagers.RadialDamagerComponent.EndDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URadialDamagerComponent::EndDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.RadialDamagerComponent.EndDamage");
		
		URadialDamagerComponent_EndDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429CEC0
	 * 		Name   -> Function Damagers.RadialDamagerComponent.BeginDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URadialDamagerComponent::BeginDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.RadialDamagerComponent.BeginDamage");
		
		URadialDamagerComponent_BeginDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialDamagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialDamagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Damagers.RadialDamagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D110
	 * 		Name   -> Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UShockwaveDamagerInterface::StartShockwaveAtLocation(const struct FVector& StartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation");
		
		UShockwaveDamagerInterface_StartShockwaveAtLocation_Params params {};
		params.StartLocation = StartLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D0F0
	 * 		Name   -> Function Damagers.ShockwaveDamagerInterface.StartShockwave
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UShockwaveDamagerInterface::StartShockwave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.StartShockwave");
		
		UShockwaveDamagerInterface_StartShockwave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429CF60
	 * 		Name   -> Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AAggressiveGhostShip*                        Ship                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShockwaveDamagerInterface::IgnoreGhostShip(class AAggressiveGhostShip* Ship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip");
		
		UShockwaveDamagerInterface_IgnoreGhostShip_Params params {};
		params.Ship = Ship;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429CF30
	 * 		Name   -> Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	float UShockwaveDamagerInterface::GetShockwaveRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius");
		
		UShockwaveDamagerInterface_GetShockwaveRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429CF00
	 * 		Name   -> Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	float UShockwaveDamagerInterface::GetShockwaveDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration");
		
		UShockwaveDamagerInterface_GetShockwaveDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShockwaveDamagerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShockwaveDamagerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Damagers.ShockwaveDamagerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429CFF0
	 * 		Name   -> Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     InStartLocation                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UShockwaveDamagerComponent::Multi_StartShockwave(const struct FVector& InStartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave");
		
		UShockwaveDamagerComponent_Multi_StartShockwave_Params params {};
		params.InStartLocation = InStartLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShockwaveDamagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShockwaveDamagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Damagers.ShockwaveDamagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04461210
	 * 		Name   -> Function Damagers.ShipDamagerComponent.SetShape
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InShape                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShipDamagerComponent::SetShape(class UPrimitiveComponent* InShape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.ShipDamagerComponent.SetShape");
		
		UShipDamagerComponent_SetShape_Params params {};
		params.InShape = InShape;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04460F30
	 * 		Name   -> Function Damagers.ShipDamagerComponent.EndDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UShipDamagerComponent::EndDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.ShipDamagerComponent.EndDamage");
		
		UShipDamagerComponent_EndDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04460F10
	 * 		Name   -> Function Damagers.ShipDamagerComponent.BeginDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UShipDamagerComponent::BeginDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Damagers.ShipDamagerComponent.BeginDamage");
		
		UShipDamagerComponent_BeginDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipDamagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipDamagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Damagers.ShipDamagerComponent");
		return ptr;
	}

}


