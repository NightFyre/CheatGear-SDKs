#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function InsurgencyClient.NvidiaHighlightSubsystem.OpenSummary
	 */
	struct UNvidiaHighlightSubsystem_OpenSummary_Params
	{	};

	/**
	 * Function InsurgencyClient.NvidiaHighlightSubsystem.OpenGroup
	 */
	struct UNvidiaHighlightSubsystem_OpenGroup_Params
	{	};

	/**
	 * Function InsurgencyClient.NvidiaHighlightSubsystem.OnNVIDIAHighlightPreferencesChanged
	 */
	struct UNvidiaHighlightSubsystem_OnNVIDIAHighlightPreferencesChanged_Params
	{	};

	/**
	 * Function InsurgencyClient.NvidiaHighlightSubsystem.DestroyHighlights
	 */
	struct UNvidiaHighlightSubsystem_DestroyHighlights_Params
	{	};

	/**
	 * Function InsurgencyClient.NvidiaHighlightSubsystem.CloseGroup
	 */
	struct UNvidiaHighlightSubsystem_CloseGroup_Params
	{	};

	/**
	 * Function InsurgencyClient.PlayerVoiceChatSubsystem.OnVoiceChatInputGainChanged
	 */
	struct UPlayerVoiceChatSubsystem_OnVoiceChatInputGainChanged_Params
	{
	public:
		float                                                      NewGain;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InsurgencyClient.PlayerVoiceChatSubsystem.OnVoiceChatInputDeviceChanged
	 */
	struct UPlayerVoiceChatSubsystem_OnVoiceChatInputDeviceChanged_Params
	{
	public:
		class FString                                              NewDevice;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InsurgencyClient.PlayerVoiceChatSubsystem.GetAvailableInputDevices
	 */
	struct UPlayerVoiceChatSubsystem_GetAvailableInputDevices_Params
	{
	public:
		TArray<struct FVoiceChatAvailableDevice>                   AvailableDevices;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
