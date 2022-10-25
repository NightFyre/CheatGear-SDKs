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
	 * Class Music.MusicZoneInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMusicZoneInterface : public UInterface
	{
	public:
		bool CanPlayForPlayer(class AActor* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class Music.MusicZoneComponent
	 * Size -> 0x00C0 (FullSize[0x03A0] - InheritedSize[0x02E0])
	 */
	class UMusicZoneComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_V6Z2[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InnerRadius;                                             // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OuterRadius;                                             // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LocationRTPC;                                            // 0x02F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LocalRTPC;                                               // 0x02F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GA9J[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         PlayEvent;                                               // 0x0300(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopEvent;                                               // 0x0308(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWwiseEvent*>                                 OneShotEvents;                                           // 0x0310(0x0010) Edit, ZeroConstructor
		class UWwiseObjectPoolWrapper*                             EmitterPool;                                             // 0x0320(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableAfterPlayThrough;                                 // 0x0328(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ActivateOnBeginPlay;                                     // 0x0329(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ML31[0x6];                                   // 0x032A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMusicZoneStarted;                                      // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_Q6V0[0x60];                                  // 0x0340(0x0060) MISSED OFFSET (PADDING)

	public:
		struct FWwiseEmitter GetEmitter();
		void DisableZone();
		void Client_StopMusicAndDisableZone();
		void Client_PlayOneShot(int32_t Index);
		void ActivateZone();
		static UClass* StaticClass();
	};

	/**
	 * Class Music.AISpawnerMusicZoneComponent
	 * Size -> 0x0030 (FullSize[0x03D0] - InheritedSize[0x03A0])
	 */
	class UAISpawnerMusicZoneComponent : public UMusicZoneComponent
	{
	public:
		class UWwiseEvent*                                         BattleWonEvent;                                          // 0x03A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAISpawner*                                          AISpawner;                                               // 0x03A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class APawn*>                                       SpawnerPawns;                                            // 0x03B0(0x0010) Net, ZeroConstructor
		EAISpawnerMusicZoneState                                   SpawnerState;                                            // 0x03C0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G3SI[0xF];                                   // 0x03C1(0x000F) MISSED OFFSET (PADDING)

	public:
		void OnRep_SpawnerState();
		static UClass* StaticClass();
	};

	/**
	 * Class Music.SynchedMusicZoneComponent
	 * Size -> 0x0030 (FullSize[0x03D0] - InheritedSize[0x03A0])
	 */
	class USynchedMusicZoneComponent : public UMusicZoneComponent
	{
	public:
		float                                                      StartDelayTime;                                          // 0x03A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PlayFromStartTimeMS;                                     // 0x03A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y1BY[0x28];                                  // 0x03A8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Music.MusicZoneServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMusicZoneServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Music.MusicZoneService
	 * Size -> 0x00A8 (FullSize[0x0470] - InheritedSize[0x03C8])
	 */
	class AMusicZoneService : public AActor
	{
	public:
		unsigned char                                              UnknownData_OY3S[0xA8];                                  // 0x03C8(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
