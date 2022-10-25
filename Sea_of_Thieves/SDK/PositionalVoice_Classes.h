#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class PositionalVoice.VoiceChatEmitterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoiceChatEmitterInterface : public UInterface
	{
	public:
		struct FVector GetVoiceLocation();
		void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
		float GetVoiceAttenuationScaler();
		static UClass* StaticClass();
	};

	/**
	 * Class PositionalVoice.VoiceChatRendererInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoiceChatRendererInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PositionalVoice.VoiceChatRenderer
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class UVoiceChatRenderer : public UObject
	{
	public:
		unsigned char                                              UnknownData_Z6BK[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         AttenuatedVoiceEvent;                                    // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         AttenuatedAndSpatialisedVoiceEvent;                      // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         UnattenuatedVoiceEvent;                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreBufferInMilliseconds;                                 // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ChatRoutingListenerIndex;                                // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmitterHoldInSeconds;                                    // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_214F[0x124];                                 // 0x005C(0x0124) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PositionalVoice.VoiceChatRendererRetreivalInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoiceChatRendererRetreivalInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
