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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBeaconChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeaconChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.BeaconChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloadableContentData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadableContentData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.DownloadableContentData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloadableContentLicenseData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadableContentLicenseData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.DownloadableContentLicenseData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloadablePackageData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadablePackageData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.DownloadablePackageData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloadablePackageLicenseItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadablePackageLicenseItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.DownloadablePackageLicenseItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIpNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIpNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIpBeaconNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIpBeaconNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpBeaconNetDriver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIpConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIpConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBeacon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBeacon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBeaconClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBeaconHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineEngineInterfaceImpl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineEngineInterfaceImpl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlinePIESettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlinePIESettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineSessionClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineSessionClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004E81D0
	 * 		Name   -> Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UVoipListenerSynthComponent::IsIdling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling");
		
		UVoipListenerSynthComponent_IsIdling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoipListenerSynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoipListenerSynthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		return ptr;
	}

}


