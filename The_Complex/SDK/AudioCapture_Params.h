#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AudioCapture.AudioCapture.StopCapturingAudio
	 */
	struct UAudioCapture_StopCapturingAudio_Params
	{	};

	/**
	 * Function AudioCapture.AudioCapture.StartCapturingAudio
	 */
	struct UAudioCapture_StartCapturingAudio_Params
	{	};

	/**
	 * Function AudioCapture.AudioCapture.IsCapturingAudio
	 */
	struct UAudioCapture_IsCapturingAudio_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	 */
	struct UAudioCapture_GetAudioCaptureDeviceInfo_Params
	{
	public:
		struct FAudioCaptureDeviceInfo                             OutInfo;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	 */
	struct UAudioCaptureFunctionLibrary_CreateAudioCapture_Params
	{
	public:
		class UAudioCapture*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
	 */
	struct UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnObtainDevicesEvent;                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
	 */
	struct UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Params
	{
	public:
		struct FAudioInputDeviceInfo                               Info;                                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
