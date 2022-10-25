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
	 * 		Name   -> PredefinedFunction UStatusResponseApplyOneShotStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseApplyOneShotStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaStatusResponse.StatusResponseApplyOneShotStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseApplyPersistentStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseApplyPersistentStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaStatusResponse.StatusResponseApplyPersistentStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseCancelStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseCancelStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaStatusResponse.StatusResponseCancelStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseCook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseCook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaStatusResponse.StatusResponseCook");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseHealthRegenerationPoolChange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseHealthRegenerationPoolChange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaStatusResponse.StatusResponseHealthRegenerationPoolChange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseReportNoiseEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseReportNoiseEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaStatusResponse.StatusResponseReportNoiseEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseSetScalarParamOnCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseSetScalarParamOnCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaStatusResponse.StatusResponseSetScalarParamOnCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseSuspendStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseSuspendStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaStatusResponse.StatusResponseSuspendStatus");
		return ptr;
	}

}


