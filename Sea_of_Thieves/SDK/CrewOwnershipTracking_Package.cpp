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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrewOwnershipTrackingInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrewOwnershipTrackingInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrewSpawnOwnershipTrackingInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrewSpawnOwnershipTrackingInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewSpawnOwnershipTrackingInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomCrewTrackingInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomCrewTrackingInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CrewOwnershipTracking.CustomCrewTrackingInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035405B0
	 * 		Name   -> Function CrewOwnershipTracking.CrewOwnershipTrackingComponent.GetSpawningCrewIdByCopy
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGuid UCrewOwnershipTrackingComponent::GetSpawningCrewIdByCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrewOwnershipTracking.CrewOwnershipTrackingComponent.GetSpawningCrewIdByCopy");
		
		UCrewOwnershipTrackingComponent_GetSpawningCrewIdByCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrewOwnershipTrackingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrewOwnershipTrackingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrewOwnershipTrackingControlInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrewOwnershipTrackingControlInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingControlInterface");
		return ptr;
	}

}


