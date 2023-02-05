/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x013CC250
	 * 		Name   -> Function AudioCapture.AudioCapture.StopCapturingAudio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAudioCapture::StopCapturingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StopCapturingAudio");
		
		UAudioCapture_StopCapturingAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CC230
	 * 		Name   -> Function AudioCapture.AudioCapture.StartCapturingAudio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAudioCapture::StartCapturingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StartCapturingAudio");
		
		UAudioCapture_StartCapturingAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CC200
	 * 		Name   -> Function AudioCapture.AudioCapture.IsCapturingAudio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UAudioCapture::IsCapturingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.IsCapturingAudio");
		
		UAudioCapture_IsCapturingAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CC070
	 * 		Name   -> Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAudioCaptureDeviceInfo                     OutInfo                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo");
		
		UAudioCapture_GetAudioCaptureDeviceInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInfo != nullptr)
			*OutInfo = params.OutInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CC040
	 * 		Name   -> Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UAudioCapture* UAudioCaptureFunctionLibrary::STATIC_CreateAudioCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture");
		
		UAudioCaptureFunctionLibrary_CreateAudioCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioCaptureFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCaptureFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CC120
	 * 		Name   -> Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnObtainDevicesEvent                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAudioCaptureBlueprintLibrary::STATIC_GetAvailableAudioInputDevices(class UObject* WorldContextObject, const class FScriptDelegate& OnObtainDevicesEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices");
		
		UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.OnObtainDevicesEvent = OnObtainDevicesEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CBF20
	 * 		Name   -> Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAudioInputDeviceInfo                       Info                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UAudioCaptureBlueprintLibrary::STATIC_Conv_AudioInputDeviceInfoToString(const struct FAudioInputDeviceInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString");
		
		UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioCaptureBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCaptureBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCaptureBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioCaptureComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCaptureComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}

}


