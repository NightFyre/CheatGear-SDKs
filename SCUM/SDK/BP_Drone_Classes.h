#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_Drone.BP_Drone_C
	 * Size -> 0x0010 (FullSize[0x08B0] - InheritedSize[0x08A0])
	 */
	class ABP_Drone_C : public ADrone
	{
	public:
		class UVoiceChatComponent*                                 VoiceChat;                                               // 0x08A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVoiceAudioComponent*                                VoiceAudio;                                              // 0x08A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
