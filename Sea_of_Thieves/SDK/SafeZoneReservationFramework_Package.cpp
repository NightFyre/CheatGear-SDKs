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
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void USafeZoneComponent::SafeZoneIsEmpty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature");
		
		USafeZoneComponent_SafeZoneIsEmpty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04223750
	 * 		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USafeZoneComponent::OnRep_UpdateCollisionProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile");
		
		USafeZoneComponent_OnRep_UpdateCollisionProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04223730
	 * 		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USafeZoneComponent::OnRep_EmptyStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged");
		
		USafeZoneComponent_OnRep_EmptyStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04223710
	 * 		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void USafeZoneComponent::DeactivateSafeZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone");
		
		USafeZoneComponent_DeactivateSafeZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042236F0
	 * 		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void USafeZoneComponent::DeactivateCollider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider");
		
		USafeZoneComponent_DeactivateCollider_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042236D0
	 * 		Name   -> Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void USafeZoneComponent::ActivateSafeZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone");
		
		USafeZoneComponent_ActivateSafeZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USafeZoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USafeZoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SafeZoneReservationFramework.SafeZoneComponent");
		return ptr;
	}

}


