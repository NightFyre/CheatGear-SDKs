/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05766E80
	 * 		Name   -> Function InsurgencyClient.NvidiaHighlightSubsystem.OpenSummary
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNvidiaHighlightSubsystem::OpenSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsurgencyClient.NvidiaHighlightSubsystem.OpenSummary");
		
		UNvidiaHighlightSubsystem_OpenSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05766E60
	 * 		Name   -> Function InsurgencyClient.NvidiaHighlightSubsystem.OpenGroup
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNvidiaHighlightSubsystem::OpenGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsurgencyClient.NvidiaHighlightSubsystem.OpenGroup");
		
		UNvidiaHighlightSubsystem_OpenGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05766E40
	 * 		Name   -> Function InsurgencyClient.NvidiaHighlightSubsystem.OnNVIDIAHighlightPreferencesChanged
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNvidiaHighlightSubsystem::OnNVIDIAHighlightPreferencesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsurgencyClient.NvidiaHighlightSubsystem.OnNVIDIAHighlightPreferencesChanged");
		
		UNvidiaHighlightSubsystem_OnNVIDIAHighlightPreferencesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05766E20
	 * 		Name   -> Function InsurgencyClient.NvidiaHighlightSubsystem.DestroyHighlights
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNvidiaHighlightSubsystem::DestroyHighlights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsurgencyClient.NvidiaHighlightSubsystem.DestroyHighlights");
		
		UNvidiaHighlightSubsystem_DestroyHighlights_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05766E00
	 * 		Name   -> Function InsurgencyClient.NvidiaHighlightSubsystem.CloseGroup
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNvidiaHighlightSubsystem::CloseGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsurgencyClient.NvidiaHighlightSubsystem.CloseGroup");
		
		UNvidiaHighlightSubsystem_CloseGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNvidiaHighlightSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNvidiaHighlightSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InsurgencyClient.NvidiaHighlightSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05767220
	 * 		Name   -> Function InsurgencyClient.PlayerVoiceChatSubsystem.OnVoiceChatInputGainChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              NewGain                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerVoiceChatSubsystem::OnVoiceChatInputGainChanged(float NewGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsurgencyClient.PlayerVoiceChatSubsystem.OnVoiceChatInputGainChanged");
		
		UPlayerVoiceChatSubsystem_OnVoiceChatInputGainChanged_Params params {};
		params.NewGain = NewGain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05767180
	 * 		Name   -> Function InsurgencyClient.PlayerVoiceChatSubsystem.OnVoiceChatInputDeviceChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      NewDevice                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerVoiceChatSubsystem::OnVoiceChatInputDeviceChanged(const class FString& NewDevice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsurgencyClient.PlayerVoiceChatSubsystem.OnVoiceChatInputDeviceChanged");
		
		UPlayerVoiceChatSubsystem_OnVoiceChatInputDeviceChanged_Params params {};
		params.NewDevice = NewDevice;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05767070
	 * 		Name   -> Function InsurgencyClient.PlayerVoiceChatSubsystem.GetAvailableInputDevices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FVoiceChatAvailableDevice>           AvailableDevices                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerVoiceChatSubsystem::GetAvailableInputDevices(TArray<struct FVoiceChatAvailableDevice>* AvailableDevices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsurgencyClient.PlayerVoiceChatSubsystem.GetAvailableInputDevices");
		
		UPlayerVoiceChatSubsystem_GetAvailableInputDevices_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableDevices != nullptr)
			*AvailableDevices = params.AvailableDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerVoiceChatSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerVoiceChatSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InsurgencyClient.PlayerVoiceChatSubsystem");
		return ptr;
	}

}


