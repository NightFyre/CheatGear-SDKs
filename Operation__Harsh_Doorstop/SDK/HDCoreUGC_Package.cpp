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
	 * 		Name   -> PredefinedFunction UHDCoreUGCProjectPolicies.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDCoreUGCProjectPolicies::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDCoreUGC.HDCoreUGCProjectPolicies");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDCoreDefaultUGCProjectPolicies.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDCoreDefaultUGCProjectPolicies::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDCoreUGC.HDCoreDefaultUGCProjectPolicies");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDCoreUGCData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDCoreUGCData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDCoreUGC.HDCoreUGCData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDCoreUGCPluginStateMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDCoreUGCPluginStateMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDCoreUGC.HDCoreUGCPluginStateMachine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDCoreUGCSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDCoreUGCSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDCoreUGC.HDCoreUGCSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHDCoreUGCSubsystemSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHDCoreUGCSubsystemSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HDCoreUGC.HDCoreUGCSubsystemSettings");
		return ptr;
	}

}


