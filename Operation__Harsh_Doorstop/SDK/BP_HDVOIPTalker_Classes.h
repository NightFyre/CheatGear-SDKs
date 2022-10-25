#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BP_HDVOIPTalker.BP_HDVOIPTalker_C
	 * Size -> 0x0050 (FullSize[0x0138] - InheritedSize[0x00E8])
	 */
	class UBP_HDVOIPTalker_C : public UVOIPTalker
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APlayerState*                                        OwningPS;                                                // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVoiceSettings                                      NonSpatializedSettings;                                  // 0x00F8(0x0018) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FVoiceSettings                                      SpatializedSettings;                                     // 0x0110(0x0018) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		bool                                                       bRegistered;                                             // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTalking;                                                // 0x0129(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZNYZ[0x6];                                   // 0x012A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     CachedAudioComp;                                         // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ListenForTalkingStateChangedEvents();
		void UpdateSettingsUsageForNextBeginTalk(bool bUseSpatialized, bool* bSettingsUpdated);
		void RegisterTalker(class APlayerState* InRegisteredPS, struct FVoiceSettings* InSpatializedSettings, struct FVoiceSettings* InNonSpatializedSettings, bool bStartSpatialized);
		void BPOnTalkingBegin(class UAudioComponent* AudioComponent);
		void BPOnTalkingEnd();
		void TalkStateChangedOnChannel(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
		void ExecuteUbergraph_BP_HDVOIPTalker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
