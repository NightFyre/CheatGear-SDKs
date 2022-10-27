#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class InsurgencyClient.NvidiaHighlightSubsystem
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UNvidiaHighlightSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_2X74[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSPlayerController*                                OwningPC;                                                // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U99H[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void OpenSummary();
		void OpenGroup();
		void OnNVIDIAHighlightPreferencesChanged();
		void DestroyHighlights();
		void CloseGroup();
		static UClass* StaticClass();
	};

	/**
	 * Class InsurgencyClient.PlayerVoiceChatSubsystem
	 * Size -> 0x0338 (FullSize[0x0368] - InheritedSize[0x0030])
	 */
	class UPlayerVoiceChatSubsystem : public ULocalPlayerSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnLocalVoiceChatStateChanged;                            // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoteVoiceChatStateChanged;                           // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KVU[0x2C8];                                 // 0x0050(0x02C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FVivoxTalkerData>                     PlayerComponentMap;                                      // 0x0318(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void OnVoiceChatInputGainChanged(float NewGain);
		void OnVoiceChatInputDeviceChanged(const class FString& NewDevice);
		void GetAvailableInputDevices(TArray<struct FVoiceChatAvailableDevice>* AvailableDevices);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
