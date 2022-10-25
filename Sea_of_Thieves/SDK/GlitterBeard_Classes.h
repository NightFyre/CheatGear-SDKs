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
	 * Class GlitterBeard.GlitterBeardEntitlementDesc
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UGlitterBeardEntitlementDesc : public UEntitlementDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlitterBeard.GlitterBeardFinaleCoordinatorComponent
	 * Size -> 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
	 */
	class UGlitterBeardFinaleCoordinatorComponent : public UActorComponent
	{
	public:
		class UWwiseEvent*                                         AudioEventToSynchronise;                                 // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFinaleReplicationState                             ReplicationState;                                        // 0x00D0(0x0010) Net, RepNotify
		unsigned char                                              UnknownData_ZM2K[0x80];                                  // 0x00E0(0x0080) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReplicationState(const struct FFinaleReplicationState& OldState);
		static UClass* StaticClass();
	};

	/**
	 * Class GlitterBeard.GlitterBeardIsHideoutOpenConditional
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGlitterBeardIsHideoutOpenConditional : public UNPCDialogConditional
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlitterBeard.GlitterBeardLanternSoundEffect
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UGlitterBeardLanternSoundEffect : public UEffectBlendObjectBase
	{
	public:
		float                                                      TriggerThreshold;                                        // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X4RB[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseObjectPoolWrapper*                             WWisePool;                                               // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0050(0x0020) Transient
		unsigned char                                              UnknownData_IMA7[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlitterBeard.GlitterbeardSlidingDoor
	 * Size -> 0x0008 (FullSize[0x0548] - InheritedSize[0x0540])
	 */
	class AGlitterbeardSlidingDoor : public ASlidingDoor
	{
	public:
		class UEffectBlendControllerComponent*                     DecalBlendComponent;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlitterBeard.GlitterBeardTelemetryComponent
	 * Size -> 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
	 */
	class UGlitterBeardTelemetryComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_I6AO[0x48];                                  // 0x00C8(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlitterBeard.GlitterBeardTrustedTreeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlitterBeardTrustedTreeInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlitterBeard.GlitterBeardTree
	 * Size -> 0x0308 (FullSize[0x06D0] - InheritedSize[0x03C8])
	 */
	class AGlitterBeardTree : public AActor
	{
	public:
		unsigned char                                              UnknownData_ZYQR[0x28];                                  // 0x03C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActionRulesComponent*                               ActionRulesComponent;                                    // 0x03F0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UActionRulesInteractableComponent*                   InteractableComponent;                                   // 0x03F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      LanternLightDelay;                                       // 0x0400(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_JFY2[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGlitterBeardUnlockVFXCoordinatorComponent*          UnlockVFXCoordinatorComponent;                           // 0x0408(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UGlitterBeardTelemetryComponent*                     TelemetryComponent;                                      // 0x0410(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UClass*                                              VocalShanty;                                             // 0x0418(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash
		class UWwiseEvent*                                         VocalsFadeEvent;                                         // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      VocalsFadeDelay;                                         // 0x0428(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      UnlockDelay;                                             // 0x042C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UGlitterBeardFinaleCoordinatorComponent*             FinaleCoordinator;                                       // 0x0430(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class ULandmarkReactionTriggerComponent*                   LandmarkReactionTrigger;                                 // 0x0438(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      DistanceFromTreeToPauseAISpawn;                          // 0x0440(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_P4KX[0x234];                                 // 0x0444(0x0234) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASlidingDoor*                                        HideoutDoor;                                             // 0x0678(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FWwiseEmitter                                       SoundEmitter;                                            // 0x0680(0x0020) Protected
		unsigned char                                              UnknownData_N7EU[0x30];                                  // 0x06A0(0x0030) MISSED OFFSET (PADDING)

	public:
		void StopVocals();
		bool StopReaction();
		void StartVocals();
		bool StartReaction();
		void Reset_Impl();
		static UClass* StaticClass();
	};

	/**
	 * Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent
	 * Size -> 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
	 */
	class UGlitterBeardTreeVisualFeedbackComponent : public UActorComponent
	{
	public:
		TArray<struct FVisualFeedbackList>                         FeedbackActions;                                         // 0x00C8(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		unsigned char                                              UnknownData_H2AY[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EGlitterbeardVFXState>                              CurrentStates;                                           // 0x00E8(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_YG50[0x20];                                  // 0x00F8(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnRep_NextStateEvent(TArray<EGlitterbeardVFXState> OldStates);
		static UClass* StaticClass();
	};

	/**
	 * Class GlitterBeard.GlitterBeardUnlockVFXCoordinatorComponent
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	class UGlitterBeardUnlockVFXCoordinatorComponent : public UActorComponent
	{
	public:
		struct FActorComponentSelector                             TreeActor;                                               // 0x00C8(0x0010) Edit, ContainsInstancedReference, Protected
		class UMaterialInstanceDynamic*                            TreeMaterialInstanceDynamic;                             // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      TreeBlendTime;                                           // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_G565[0xC];                                   // 0x00E4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
