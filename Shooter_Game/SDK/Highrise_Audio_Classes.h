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
	 * BlueprintGeneratedClass Highrise_Audio.Highrise_Audio_C
	 * Size -> 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
	 */
	class AHighrise_Audio_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USoundCue*                                           OneShot_Sound;                                           // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Min_Distance;                                            // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Max_Distance;                                            // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Min_Time;                                                // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Max_Time;                                                // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        PlayOneShotHandle;                                       // 0x0248(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           WindGust_Oneshots;                                       // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       SCue_Amb_Bed_Highrise_Atrium_108_ExecuteUbergraph_Highrise_Audio_RefProperty; // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AAmbientSound*                                       SCue_Amb_Bed_Highrise_Room_111_ExecuteUbergraph_Highrise_Audio_RefProperty; // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AAmbientSound*                                       SCue_Amb_UE_Marquee_LP_134_ExecuteUbergraph_Highrise_Audio_RefProperty; // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void BndEvt__AudioTrigger_Room_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Room_K2Node_ActorBoundEvent_2_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void Play_One_Shots();
		void FireOneShotSound();
		void ReceiveBeginPlay();
		void BndEvt__AudioTrigger_Wind_Gusts_01_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Wind_Gusts_01_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Wind_Gusts_02_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Wind_Gusts_02_K2Node_ActorBoundEvent_9_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Wind_Gusts_03_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void BndEvt__AudioTrigger_Wind_Gusts_03_K2Node_ActorBoundEvent_11_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
		void PlayWindGusts();
		void ExecuteUbergraph_Highrise_Audio(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
