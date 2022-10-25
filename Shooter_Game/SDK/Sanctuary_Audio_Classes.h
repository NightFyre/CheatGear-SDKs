#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * BlueprintGeneratedClass Sanctuary_Audio.Sanctuary_Audio_C
	 * Size -> 0x0030 (FullSize[0x0258] - InheritedSize[0x0228])
	 */
	class ASanctuary_Audio_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USoundCue*                                           OneShot_Sound;                                           // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Min_Distance;                                            // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Max_Distance;                                            // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Spawn_OneShots_Handle;                                   // 0x0240(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       InteriorAmbience_ExecuteUbergraph_Sanctuary_Audio_RefProperty; // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AAmbientSound*                                       ExteriorAmbience_ExecuteUbergraph_Sanctuary_Audio_RefProperty; // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void BndEvt__AudioTrigger_Interior_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Balcony_01_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Balcony_02_2_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Balcony_01_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Balcony_02_2_K2Node_ActorBoundEvent_8_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void PlayOneShots();
		void SpawnOneShot();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Sanctuary_Audio(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
