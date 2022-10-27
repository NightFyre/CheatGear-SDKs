#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_Character.BP_Character_C
	 * Size -> 0x0024 (FullSize[0x10B4] - InheritedSize[0x1090])
	 */
	class ABP_Character_C : public AGBCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1090(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		int32_t                                                    VoicePlayingID;                                          // 0x1098(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L0EL[0x4];                                   // 0x109C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       FastFatiguedBreaghingSound;                              // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FatiguedBreathingPlayingID;                              // 0x10A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsInDeepWater;                                          // 0x10AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsInShallowWater;                                       // 0x10AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MADN[0x2];                                   // 0x10AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DeathVoicePlayingID;                                     // 0x10B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GatherAssets(TArray<struct FSoftObjectPath>* OutAssets);
		float DamageOrgan(const struct FHitResult& HitResult, float Damage);
		void OnLandedEffects(const struct FHitResult& Hit, float FallingSpeed);
		void ReceiveBeginPlay();
		void OnPlayVoiceEvent(class UAkAudioEvent* VoiceAudioEvent, bool bIsLocalPlayer);
		void OnPlayVoiceCallback_Event(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		void OnStopVoiceEvent();
		void ReceiveTick(float DeltaSeconds);
		void BlueprintAddDefaultItems();
		void PlayDeathVoice(const class FName& DeathVoiceKey);
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void ExecuteUbergraph_BP_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
