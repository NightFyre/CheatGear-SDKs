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
	 * 		RVA    -> 0x04461290
	 * 		Name   -> Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageableActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDamageablePartsInterface::UnregisterDamageablePart(class AActor* DamageableActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart");
		
		UDamageablePartsInterface_UnregisterDamageablePart_Params params {};
		params.DamageableActor = DamageableActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04461180
	 * 		Name   -> Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageableActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDamageablePartsInterface::RegisterDamageablePart(class AActor* DamageableActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart");
		
		UDamageablePartsInterface_RegisterDamageablePart_Params params {};
		params.DamageableActor = DamageableActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04460F50
	 * 		Name   -> Function ShipDamage.DamageablePartsInterface.GetDamageableParts
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class AActor*> UDamageablePartsInterface::GetDamageableParts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShipDamage.DamageablePartsInterface.GetDamageableParts");
		
		UDamageablePartsInterface_GetDamageableParts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamageablePartsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageablePartsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShipDamage.DamageablePartsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHullDamageInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHullDamageInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShipDamage.HullDamageInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHullDamageProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHullDamageProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShipDamage.HullDamageProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeDamagerType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeDamagerType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShipDamage.LandscapeDamagerType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipDamagerType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipDamagerType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShipDamage.ShipDamagerType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipPartsDamageTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipPartsDamageTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShipDamage.ShipPartsDamageTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipRestorationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipRestorationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShipDamage.ShipRestorationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStrainDamagerType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStrainDamagerType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShipDamage.StrainDamagerType");
		return ptr;
	}

}


