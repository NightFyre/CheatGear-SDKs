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
	 * 		Name   -> PredefinedFunction USeasonPopupAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonPopupAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonPopupAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeasonPopupListAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonPopupListAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonPopupListAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeasonProgressionUIInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonProgressionUIInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUIInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeasonProgressionUITelemetryInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonProgressionUITelemetryInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUITelemetryInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03E27F70
	 * 		Name   -> Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USeasonProgressionUIComponent::OnHUDDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed");
		
		USeasonProgressionUIComponent_OnHUDDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeasonProgressionUIComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonProgressionUIComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUIComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeasonProgressionUIServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonProgressionUIServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUIServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASeasonProgressionUIService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeasonProgressionUIService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUIService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeasonProgressionUISettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonProgressionUISettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUISettings");
		return ptr;
	}

}


